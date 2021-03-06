# coding: utf-8
require 'timeout'
module SkipSymbolInserter
  def insert_skip_symbol
    skip_flag = true
    skip_flag = false unless @grammar.any? { |rule| rule.lh == @skip_lh }

    @grammar.each{|rule|
      case rule.lh
      when /\A(?![^\s]*#{@skip_lh})[A-Z]\w*/
        if rule.rh.is_a?(Choice)
          rule.rh.child.each{|rh|
            unless rh[0] !~ /\A(?!"WORD")"\w+"\Z/
              rh.push NegativeLookAHead.new(["WORD"])
              unless @words_flag
                @words_flag = true
                tmp_rule = Rule.new "WORD"
                tmp_rule.rh = [["[a-zA-Z_0-9]"]]
                @grammar.push tmp_rule
              end
            end
            rh.push @skip_lh if skip_flag
          }
        else
          rh = rule.rh
          if rh[0] =~ /\A(?!"WORD")"\w+"\Z/
            rh.push NegativeLookAHead.new(["WORD"])
            unless @words_flag
              @words_flag = true
              tmp_rule = Rule.new "WORD"
              tmp_rule.rh = [["[a-zA-Z_0-9]"]]
              @grammar.push tmp_rule
            end
          end
          rh.push @skip_lh if skip_flag
        end
      when /\A(?!#{@skip_lh})[a-z_]\w*/
        next unless skip_flag
        if rule.rh.is_a?(Choice)
          rule.rh.child.each{|rh|
            rh.each_with_index{|r, idx| rh.insert(idx+1, @skip_lh) if r =~ /'(\\'|[^'])*'|"(\\"|[^"])*"/ }
          }
        else
          rule.rh.each_with_index{|rh, idx| rh.insert(idx+1, @skip_lh) if rh =~ /'(\\'|[^'])*'|"(\\"|[^"])*"/ }
        end
      else
        # type code here
      end
    }
  end
end

module RhSeparater
  # 文法規則を演算子の優先度に応じて分割
  def divide_rh
    skip_rules = 0

    @grammar.each_with_index{|rule, idx|
      if skip_rules > 0
        skip_rules -= 1
        next
      end

      next if rule.lh =~ /[A-Z]\w*/ || !rule.rh.is_a?(Choice)
      not_shaped_rh = Struct.new(:prio, :rh, :type)
      not_shaped_rhs = []
      no_op_rhs = []

      rule.rh.child.each{|rh|
        prio = nil
        unop = 0

        if (prec_idx = rh.index{|sym| sym == "%prec" })
          puts "rh doesn't have operand." unless (prio = @precedence.index{|prec| prec.any?{|item| item.value == rh[prec_idx+1]}})
          rh.slice!(prec_idx, 2)
        else
          # 演算子を含む場合
          # Yacc では文法規則の末尾の字句の優先度がその文法規則の優先度になる
          rh.reverse.each{|sym|
            break if (prio = @precedence.index{|prec| prec.any?{|item| item.value == sym}})
          }
        end
        # 優先度を持つ字句を含まない場合
        # [0][0]をキーとして文法規則を格納する
        if prio.nil?
          no_op_rhs.push rh
          next
        end
        # 単項演算の場合に優先度を上げる
        unop = 0.5 if rh[0] != rule.lh && rh[-1] == rule.lh && @precedence[prio][0].type != :nonassoc

        if (tmp = not_shaped_rhs.find { |item| item.prio == prio + unop })
          tmp.rh = tmp.rh + [rh]
        else
          not_shaped_rhs.push not_shaped_rh.new(prio + unop, [rh], @precedence[prio][0].type)
        end
      }

      # 優先度の異なる演算子が混在している場合
      if not_shaped_rhs.size > 0
        skip_rules = @grammar.size
        @grammar.delete_at(idx)
        shape_rh(rule.lh, not_shaped_rhs, no_op_rhs, idx)
        skip_rules = @grammar.size - skip_rules
      end
    }
  end

  # no_op_rhsの要素が複数ある場合に未対応
  # 演算子はあるが再帰にならない文法規則の右辺の場合、次の優先度の演算子を持つ右辺と統合(未実装)
  def shape_rh lh, op_rhs, no_op_rhs, idx
    no_opr = Struct.new(:idx, :sym)

    # 演算子の位置に関係なく演算子の優先度の高い方の結合度を高くする．
    op_rhs.sort!{|a, b| a.prio <=> b.prio }
    idx_of_devined_rh = 1
    # 右辺に再帰が現れなかった場合に次の優先度の演算子を持つ右辺に対して使用
    rh_stock = []
    tmp_rule = Rule.new lh
    lh_with_idx = lh + idx_of_devined_rh.to_s
    lh_with_idx_next = lh + (idx_of_devined_rh+1).to_s
    no_left_oprs_stock = []
    no_right_oprs_stock = []

    op_rhs.each{|rhs|
      no_left_oprs = []
      no_right_oprs = []

      if rh_stock.empty?
        lh_with_idx = idx_of_devined_rh == 1 ? lh : lh + idx_of_devined_rh.to_s
        tmp_rule = Rule.new(lh_with_idx)
        lh_with_idx_next = lh + (idx_of_devined_rh+1).to_s
      end

      rhs.rh.each{|rh|
        # 右被演算子を持つ単項演算の場合
        if rhs.prio % 1 == 0.5
          rh[-1] = lh_with_idx
        else
          case rhs.type
          when :left, :precedence
            rh[0] = lh_with_idx if rh[0] == lh
            rh[-1] = lh_with_idx_next if rh[-1] == lh
          when :right
            rh[0] = lh_with_idx_next if rh[0] == lh
            rh[-1] = lh_with_idx if rh[-1] == lh
          when :nonassoc
            rh.map!{|r| r == lh ? lh_with_idx_next : r }
          else
            puts "It is wrong type."
          end
        end

        no_left_oprs.push Marshal.load(Marshal.dump(rh)) unless rh[0] == lh_with_idx  || rh[0] == lh_with_idx_next
        no_right_oprs.push Marshal.load(Marshal.dump(rh)) unless rh[-1] == lh_with_idx  || rh[-1] == lh_with_idx_next

        rh[0] = [[rh[0]]] + no_right_oprs_stock if !no_right_oprs_stock.empty? && (rh[0] == lh_with_idx  || rh[0] == lh_with_idx_next)
        rh[-1] = [[rh[-1]]] + no_left_oprs_stock if !no_left_oprs_stock.empty? && (rh[-1] == lh_with_idx  || rh[-1] == lh_with_idx_next)
        # rh[0] = no_right_oprs_stock + [[rh[0]]] if !no_right_oprs_stock.empty? && (rh[0] == lh_with_idx  || rh[0] == lh_with_idx_next)
        # rh[-1] = no_left_oprs_stock + [[rh[-1]]] if !no_left_oprs_stock.empty? && (rh[-1] == lh_with_idx  || rh[-1] == lh_with_idx_next)

        tmp_rh = []
        if rh[0].is_a?(Array)
          rh[0].each{|r|
            tmp_rh.push r + rh[1...rh.size]
          }
        else
          tmp_rh.push rh
        end

        tmp_rh.each{|rh2|
          if rh2[-1].is_a?(Array)
            rh2[-1].each{|r|
              rh_stock.push rh2[0...rh2.size-1] + r
            }
          else
            rh_stock.push rh2
          end
        }
=begin
        no_left_oprs.push Marshal.load(Marshal.dump(rh)) unless rh[0] == lh_with_idx  || rh[0] == lh_with_idx_next
        no_right_oprs.push no_opr.new(idx, Marshal.load(Marshal.dump(rh))) unless rh[-1] == lh_with_idx  || rh[-1] == lh_with_idx_next

        if !no_right_oprs_stock.empty? && (rh[0] == lh_with_idx  || rh[0] == lh_with_idx_next)
          no_right_oprs_stock.each{|opr| @grammar[opr.idx].rh.insert 1, opr.sym + rh[1...rh.size] }
        end
        rh[-1] = [[rh[-1]]] + no_left_oprs_stock if !no_left_oprs_stock.empty? && (rh[-1] == lh_with_idx  || rh[-1] == lh_with_idx_next)

        if rh[-1].is_a?(Array)
          rh[-1].each{|r|
            rh_stock.push rh[0...rh.size-1] + r
          }
        else
          rh_stock.push rh
        end
=end
      }

      if rh_stock.empty?
=begin
        if idx_of_devined_rh == 1
          no_left_oprs.each{|rh| rh.map!{|r| r == lh_with_idx_next ? lh : r }}
        else
          no_left_oprs.each{|rh| rh.map!{|r| r == lh_with_idx_next ? lh_with_idx : r }}
        end
=end
      else
        rh_stock.unshift [lh_with_idx_next]
        if rh_stock.size > 1
          tmp_rule.rh = Choice.new(rh_stock)
        else
          tmp_rule.rh = rh_stock
        end
        rh_stock = []
        idx_of_devined_rh += 1
        @grammar.insert idx, tmp_rule
        idx += 1
      end
      no_left_oprs_stock = no_left_oprs + no_left_oprs_stock
      no_right_oprs_stock = no_right_oprs + no_right_oprs_stock
    }

    if (rh_stock + no_op_rhs).empty?
      case idx_of_devined_rh
      when 1
        @grammar.insert idx, Rule.new(lh, [[""]])
      else
        @grammar.insert idx, Rule.new(lh_with_idx_next, [[""]])
      end
    elsif rh_stock.empty?
      if no_op_rhs.size > 1
        @grammar.insert idx, Rule.new(lh_with_idx_next, Choice.new(no_op_rhs))
      else
        @grammar.insert idx, Rule.new(lh_with_idx_next, no_op_rhs)
      end
    else
      case idx_of_devined_rh
      when 1
        @grammar.insert idx, Rule.new(lh, Choice.new(rh_stock + no_op_rhs))
      else
        @grammar.insert idx, Rule.new(lh_with_idx, Choice.new(rh_stock + no_op_rhs))
      end
    end
  end
end

module RhOrderSolver
  # shift / reduce conflictを解決
  def solve_rh_order
    @grammar.each{|rule|
      next if rule.lh =~ /\A[A-Z]\w*/ || !rule.rh.is_a?(Choice)
      size = rule.rh.child.size
      sorted_rh_order = Hash.new{|h,k| h[k] = Hash.new}
      loop do
        break_flag = false
        order = []
        rule.rh.child.each{|item| order.push item[0]}
        order.uniq!
        (0...size - 1).each {|i|
          (i + 1...size).each {|j|
            next if sorted_rh_order[(rh = rule.rh.child[i])][(rh2 = rule.rh.child[j])]
            # shift / reduce conflictが起きる場合

            if rh2.size >= rh.size && rh2.join.start_with?(rh.join)
              sorted_rh_order[rh2][rh] = true
              rule.rh.child[i], rule.rh.child[j] = rule.rh.child[j], rule.rh.child[i]

              # shift / reduce conflictが起きるが正しくソートされている場合
              #            elsif rh.size <= rh2.size && rh2.join.start_with?(rh.join)
            else
              rule.rh.child[i], rule.rh.child[j] = rule.rh.child[j], rule.rh.child[i] if order.index{|item| item == rule.rh.child[i][0]} > order.index{|item| item == rule.rh.child[j][0]}
=begin
              # 直接再帰の検出
              #next if rh.find{|r| r == rule.lh } || rh2.find{|r| r == rule.lh }

              idx = 0
              while rh.size > idx && rh2.size > idx && rh[idx] == rh2[idx] do
                idx += 1
              end

              # 右辺から導出される記号列同士に包含関係がある場合に入れ替え
              if rh.size > idx && rh2.size > idx
                first_rh = rh[idx] =~ /\A[a-z]\w*\Z/ ? calc_first(rh[idx], idx, []).map{|s| [[rule.lh, -1]]+s } : [[[rule.lh, -1], [rh[idx], idx]]]
                first_rh2 = rh2[idx] =~ /\A[a-z]\w*\Z/ ? calc_first(rh2[idx], idx, []).map{|s| [[rule.lh, -1]]+s } : [[[rule.lh, -1], [rh2[idx], idx]]]
                # rh[idx] と rh2[idx] に対して左再帰が起こっている場合に削除
                # 左再帰を介さないと到達できない FIRST 集合の要素を削除してしまうため保留
                # first_rh.delete_if{|first| first[1...first.size].any?{|f| f[0] == first[0][0] }}
                # first_rh2.delete_if{|first| first[1...first.size].any?{|f| f[0] == first[0][0] }}
                rh_pos = rh2_pos = idx

                unless (matched_syms = first_rh.find_all{|first| first_rh2.any? {|first2| first[-1][0] == first2[-1][0] }}).empty?
                  matched_syms2 = first_rh2.find_all{|first2| matched_syms.any?{|syms| syms[-1][0] == first2[-1][0] }}
                  sorted_rh_order[rh][rh2] = true

                  # 同じ記号が導出される過程を比較し、導出される過程の suffix の重複を除去する
                  matched_syms.each_with_index{|syms, k|
                    next if (matched_syms.find_all{|item| item[-1] == syms[-1]}.size > 1) || (matched_syms2.find_all{|item| item[-1] == syms[-1]}.size > 1) || (dupl_idx = matched_syms2.index{|sym| sym[-1] == syms[-1] }).nil?
                    unless (dupl = syms[1...syms.size] & matched_syms2[dupl_idx][1...matched_syms2[dupl_idx].size]).empty?
                      matched_syms[k] -= dupl[1...dupl.size]
                      matched_syms2[dupl_idx] -= dupl[1...dupl.size]
                    end
                  }

                  matched_syms = matched_syms.uniq
                  matched_syms2 = matched_syms2.uniq

                  matched_syms.map!{|syms| [[syms[-1][0]], syms]}
                  matched_syms2.map!{|syms| [[syms[-1][0]], syms]}
                  #=begin
                  puts "Order of right hand side may be wrong.\n#{rule.lh}: #{rh.join(" ")}\n#{' '*rule.lh.size}| #{rh2.join(" ")}"
                  print "Both rules lead \"#{matched_syms[0][0][0]}\""

                  matched_syms[1...matched_syms.size].each{|sym|
                    print ", \"#{sym[0][0]}\""
                  }
                  print ".\n"

                  matched_syms.each{|item|
                    print "#{item[1][1][0]}"
                    item[1][2...item[1].size].each{|it|
                      print " -> #{it[0]}"
                    }
                    puts ""
                  }
                  matched_syms2.each{|item|
                    print "#{item[1][1][0]}"
                    item[1][2...item[1].size].each{|it|
                      print " -> #{it[0]}"
                    }
                    puts ""
                  }
                  puts "\n"
# 全ての受理可能な入力の導出
=begin
                  loop do
                    p "afdgafh"
                    p matched_syms.size
                    p matched_syms2.size
                    tmp_matched_syms = []
                    tmp_matched_syms2 = []
                    matched_syms.each {|syms|
                      if syms[-1][0].empty?
                        tmp_matched_syms += [syms]
                        next
                      end
                      if (tmp = calc_follow(syms[1...syms.size])).empty?
                        rh_pos += 1
                        if rh_pos < rh.size
                          tmp = calc_first(rh_pos], rh_pos, [rule.lh])
                          tmp.each{|el| tmp_matched_syms += [syms + [el]] }
                        else
                          tmp_matched_syms += [syms + [[[]]]]
                        end
                      else
                        tmp.each{|el| tmp_matched_syms += [syms + [el]] }
                      end
                    }

                    matched_syms2.each {|syms|
                      next if syms[-1][0].empty?
                      if (tmp = calc_follow(syms[1...syms.size])).empty?
                        rh2_pos += 1
                        if rh2_pos < rh2.size
                          tmp = calc_first(rh2[rh2_pos], rh2_pos, [rule.lh])
                          tmp.each{|el| tmp_matched_syms2 += [syms + [el]] }
                        else
                          tmp_matched_syms2 += [syms + [[[]]]]
                        end
                      else
                        tmp.each{|el| tmp_matched_syms2 += [syms + [el]] }
                      end
                     }
                    # 同じ記号が導出される過程を比較し、導出される過程の suffix の重複を除去する
                    tmp_matched_syms.each_with_index{|syms, k|
                      next if (dupl_idx = tmp_matched_syms2.index{|sym| sym[0] == syms[0] && sym.last[-1][0] == syms.last[-1][0] }).nil?
                      #p tmp_matched_syms2[dupl_idx].last[1...tmp_matched_syms2[dupl_idx].size]
                      unless (dupl = syms.last[1...syms.last.size] & tmp_matched_syms2[dupl_idx].last[1...tmp_matched_syms2[dupl_idx].size]).empty?
                        tmp_matched_syms[k][-1] -= dupl[1...dupl.size]
                        tmp_matched_syms2[dupl_idx][-1] -= dupl[1...dupl.size]
                      end
                    }

                    tmp_matched_syms.map!{|syms|
                      syms.last[0][0].nil? ? syms : [syms[0] + [syms.last[-1][0]]] + syms[1...syms.size]
                    }
                    tmp_matched_syms2.map!{|syms|
                      syms.last[0][0].nil? ? syms : [syms[0] + [syms.last[-1][0]]] + syms[1...syms.size]
                    }

                    matched_syms = tmp_matched_syms.uniq
                    matched_syms2 = tmp_matched_syms2.uniq

                    #matched_syms.delete_if{|syms| matched_syms2.find{|syms2| syms2[0].join.start_with?(syms[0].join) }.nil?}
                    #matched_syms2.delete_if{|syms2| matched_syms.find{|syms| syms2[0].join.start_with?(syms[0].join) }.nil?}

                    break if matched_syms.empty? && matched_syms2.empty? || matched_syms.reject{|syms| syms.last[0].empty?}.empty? || matched_syms2.reject{|syms2| syms2.last[0].empty?}.empty?
                    #break if break_flag
                  end
                  #break if break_flag

                  p "smjjfsk"
                  p rule.rh[i]
                  p rule.rh[j]
                  p matched_syms.size
                  p matched_syms2.size
                  matched_syms.each{|sym_rh|
                    matched_syms.delete_if{|sym_rh2| sym_rh == sym_rh2 } if matched_syms2.size > matched_syms2.delete_if{|sym_rh2| sym_rh == sym_rh2 }.size
                  }
                  matched_syms.each{|sym_rh|
                    matched_syms2.each{|sym_rh2|
                      next if sym_rh[0] == sym_rh2[0]
                      tmp_idx = 0
                      while sym_rh[0].size > tmp_idx && sym_rh2[0].size > tmp_idx && sym_rh[0][tmp_idx] == sym_rh2[0][tmp_idx]
                        tmp_idx += 1
                      end
                      if sym_rh[0].size == tmp_idx
                        p "xxxxxxx"
                        p matched_syms
                        p matched_syms2
                        p rule.rh[i]
                        p rule.rh[j]
                        rule.rh[i], rule.rh[j] = rule.rh[j], rule.rh[i]
                        break_flag = true
                        break if break_flag
                      end
                    }
                    break if break_flag
                  }
#=end
                end
              end
=end
            end
            break if break_flag
          }
          break if break_flag
        }
        break unless break_flag
      end
    }
  end

  # 再帰にならない規則がない場合は[]を返す
  def calc_first lh, idx, stack

    #   if (pair = @token_pairs.find{|item| item.find{|it| it == lh}})
    #     return @first_set[lh] = [[[pair.join, idx]]]
    #elsif lh !~ /\A[a-z]\w*\Z/ || (tmp = @grammar.find{|rule| rule.lh == lh}).nil?
    if lh !~ /\A[a-z]\w*\Z/ || (tmp = @grammar.find{|rule| rule.lh == lh}).nil?
      return @first_set[lh] = [[[lh, idx]]]
    end

    # return @first_set[lh] = [[[lh, 0]]] if lh =~ /[A-Z]\w*/ || (tmp = @grammar.find{|rule| rule.lh == lh}).nil?
    return [] if stack.any?{|st| st == lh }
    return @first_set[lh] unless @first_set[lh].empty?

    case tmp.rh.class.name
    when "Choice"
      tmp.rh.child.each{|r|
        tmp_idx = (r[0].is_a?(Repeat) || r[0].is_a?(NegativeLookAHead)) && r.size > 1 && !(r[1].is_a?(Repeat) || r[1].is_a?(NegativeLookAHead)) ? 1 : 0
        case r[tmp_idx]
        when /[a-z]\w*/
          calc_first(r[tmp_idx], tmp_idx, stack + [lh]).each{|el|
            @first_set[lh] += [[[lh, idx]] + el]
          }
        when nil
        else
#       if (pair = @token_pairs.find{|item| item.find{|it| it == r[tmp_idx]}})
#         @first_set[lh] +=  [[[lh, idx], [pair.join, tmp_idx]]]
#       else
          @first_set[lh] +=  [[[lh, idx], [r[tmp_idx], tmp_idx]]]
#       end
        end
      }
    when "Array"
      rh = tmp.rh
      tmp_idx = (rh[0].is_a?(Repeat) || rh[0].is_a?(NegativeLookAHead)) && rh.size > 1 && !(rh[1].is_a?(Repeat) || rh[1].is_a?(NegativeLookAHead)) ? 1 : 0
        case rh[tmp_idx]
        when /[a-z]\w*/
          calc_first(rh[tmp_idx], tmp_idx, stack + [lh]).each{|el|
            @first_set[lh] += [[[lh, idx]] + el]
          }
        when nil
        else
#       if (pair = @token_pairs.find{|item| item.find{|it| it == r[tmp_idx]}})
#         @first_set[lh] +=  [[[lh, idx], [pair.join, tmp_idx]]]
#       else
          @first_set[lh] +=  [[[lh, idx], [rh[tmp_idx], tmp_idx]]]
#       end
        end
    else
      # do nothing
    end

    unless stack.empty? && idx == 0
      ret = @first_set[lh]
      @first_set.delete(lh)
      return ret
    end
    @first_set[lh] = @first_set[lh].uniq
  end

  def calc_follow syms
    first_el = Marshal.load(Marshal.dump(syms.last))
    ret = []
    return @follow_set[first_el.join] if @follow_set.has_key?(first_el.join)
    el = first_el.pop
    idx = @token_pairs.index{|item| item.join == el[0] }
    while first_el.size > 1
      break_flag = true
      rule = @grammar.find { |rl| rl.lh == first_el.last[0] }

      unless (rhs = rule.rh.find_all { |rh| (rh[el[1]] == el[0] || idx && @token_pairs[idx].any?{|token| token == rh[el[1]]})}).empty?
        rhs.each { |rh|
          if rh.size > el[1] + 1
            calc_first(rh[el[1] + 1], el[1] + 1, []).each { |first|
              # 既に受理可能な記号列に現れている記号が同じ過程で導出されるのを抑止
              ret += [first_el + first] unless syms.any?{|sym| [first_el + first].join.start_with?(sym.join)} || first_el.any?{|el2| first.any?{|item| el2[0] == item[0]}}
            }
          else
            break_flag = false
          end
        }
        break if break_flag && !ret.empty?
      end
      el = first_el.pop
    end
    @follow_set[first_el.join] = ret
  end

  def calc_syms lh, stack, first_proc = []
    return @syms_set[lh][stack.join] unless @syms_set[lh][stack.join].nil?
    rule = @grammar.find{|rule| rule.lh == lh}
    return [[lh]]  if lh !~ /\A[a-z]\w*\Z/ || rule.nil?
    tmp_proc = first_proc.shift
    rhs = tmp_proc.nil? ? rule.rh : rule.rh.find_all{|r| r[0] == tmp_proc }
    syms = []

    rhs.each{|rh|
      # 間接再帰 || 直接再帰
      next if stack.any?{|st| rh.any?{|r| r == st }} || rh.any?{|r| r == lh}
      rh_syms = []

      rh.each{|r|
        next if r.is_a?(Repeat) || r.is_a?(NegativeLookAHead)

        if (tmp = calc_syms(r, stack + [r], first_proc)).nil?
          rh_syms = nil
          break
        end

        case rh_syms.size
        when 0
          rh_syms = tmp
        else
          tmp_syms = []
          unless tmp.empty?
            rh_syms.each{|sym|
              tmp.each{|s|
                tmp_syms.push sym + s
              }
            }
            rh_syms = tmp_syms
          end
        end
      }

      syms += rh_syms unless rh_syms.nil?
    }
    @syms_set[lh][stack.join] = syms.uniq
    #syms.uniq
  end
end

module LeftRecursionsRemover
  def check_indirect_left_recursions
    cnt = Hash.new
    @grammar.each{|rule|
      #redo unless check_indirect_left_recursion rule, [rule.lh]
      case check_indirect_left_recursion rule, [rule.lh]
      when 0
        return false
      when false
        case cnt[rule.lh]
        when nil
          cnt[rule.lh] = 1
        when 5
          puts "The translator can't remove an indirect left recursion:\n  #{rule.lh}"
          return false
        else
          cnt[rule.lh] += 1
          redo
        end
      when true
        # do nothing
      else
        puts "The value is invalid."
        exit 1
      end
      #check_indirect_left_recursion rule, [rule.lh]
    }
    true
  end

  def remove_direct_left_recursions
    @grammar.each{|rule|
      if rule.rh.is_a?(Choice)
        if rule.rh.child.any?{|rh| rh[0] == rule.lh}
          # 直接左再帰
          remove_direct_left_recursion rule, rule.lh
        end
      else
        if rule.rh[0] == rule.lh
          # 直接左再帰
          rule.rh = OneOrMore.new(rule.rh[1...rule.rh.size])
        end
      end
    }
  end

  private
  # stackは辿った記号の配列
  def check_indirect_left_recursion rule, stack
    ret = @recursion_memo[rule.lh][stack.join]
    return ret unless ret.nil?

    if rule.rh.is_a?(Choice)
      rule.rh.child.each{|rh|
        next if rule.lh == rh[0]
        idx = stack.index{|st| st == rh[0]}
        case idx
        when nil
          if rh[0] =~ /\A[a-z]\w*\Z/
            next unless (tmp = @grammar.find{|rl| rl.lh == rh[0]})
            case check_indirect_left_recursion tmp, stack+[rh[0]]
            when 0
              return @recursion_memo[rule.lh][stack.join] = 0
            when false
              return @recursion_memo[rule.lh][stack.join] = false
            when true
              # do nothing
            else
              puts "The value is invalid."
              exit 1
            end
            return @recursion_memo[rule.lh][stack.join] = false unless check_indirect_left_recursion(tmp, stack+[rh[0]])
          end
        else
          stack[idx+1...stack.size].each do |st|
            next if (rl = @grammar.find{|tmp_rl| tmp_rl.lh == st}).nil?
            if rl.rh.is_a?(Choice) && rl.rh.child.find{|r| r[0] == st }
              remove_direct_left_recursion rl, st
              if rl.rh[0].is_a?(Choice)
                tmp_rh = []
                rl.rh[0].child.each{|r| tmp_rh.push r + rl.rh[1...rh.size] }
                rl.rh = Choice.new(tmp_rh)
              end
            end
          end
=begin
          dir_rec = nil
          if @grammar.any?{|rl| stack[idx+1...stack.size].any?{|st| st == rl.lh && (dir_rec = rl.rh.child.find{|r| r[0] == rl.lh }) }}
            puts "The translator can't remove an indirect left recursion:"
            print "  #{stack[idx]}"
            (idx+1...stack.size).each{|i|
              print " -> #{stack[i]}"
            }
            print " -> #{rh[0]}\n"
            puts "due to a left recursion:\n  #{dir_rec[0]}"
            return @recursion_memo[rule.lh][stack.join] = 0
          end
=end
          # 間接左再帰
          remove_indirect_left_recursion rule, stack[idx...stack.size]
          # ここでbreakすることで文法規則が変換された後に変換前のスタックに基づいて左再帰の検出が行われることを防ぐ
          return @recursion_memo[rule.lh][stack.join] = false
        end
      }
    else
      rh = rule.rh
      return @recursion_memo[rule.lh][stack.join] = true if rule.lh == rh[0]
      idx = stack.index{|st| st == rh[0]}
      case idx
      when nil
        if rh[0] =~ /\A[a-z]\w*\Z/
          return @recursion_memo[rule.lh][stack.join] = true unless (tmp = @grammar.find{|rl| rl.lh == rh[0]})
          case check_indirect_left_recursion tmp, stack+[rh[0]]
          when 0
            return @recursion_memo[rule.lh][stack.join] = 0
          when false
            return @recursion_memo[rule.lh][stack.join] = false
          when true
            # do nothing
          else
            puts "The value is invalid."
            exit 1
          end
          return @recursion_memo[rule.lh][stack.join] = false unless check_indirect_left_recursion(tmp, stack+[rh[0]])
        end
      else
        stack[idx+1...stack.size].each do |st|
          next if (rl = @grammar.find{|tmp_rl| tmp_rl.lh == st}).nil?
          if rl.rh.child.find{|r| r[0] == st }
            remove_direct_left_recursion rl, st
            if rl.rh[0].is_a?(Choice)
              tmp_rh = []
              rl.rh[0].child.each{|r| tmp_rh.push r + rl.rh[1...rh.size] }
              rl.rh = Choice.new(tmp_rh)
            end
          end
        end
=begin
          puts "The translator can't remove an indirect left recursion:"
          print "  #{stack[idx]}"
          (idx+1...stack.size).each{|i|
            print " -> #{stack[i]}"
          }
          print " -> #{rh[0]}\n"
          puts "due to a left recursion:\n  #{dir_rec[0]}"
          return @recursion_memo[rule.lh][stack.join] = 0
=end
        # 間接左再帰
        remove_indirect_left_recursion rule, stack[idx...stack.size]
        # ここでbreakすることで文法規則が変換された後に変換前のスタックに基づいて左再帰の検出が行われることを防ぐ
        return @recursion_memo[rule.lh][stack.join] = false
      end
    end

    @recursion_memo[rule.lh][stack.join] = true
  end

  # 文法規則の除去は全ての演算が終わった後に行う
  # ruleをsymに関して直接左再帰の除去を行う
  # 複数の右辺を持つ規則のみ扱う
  # 空規則に非対応
  def remove_direct_left_recursion rule, sym
    # 再帰を含む文法規則
    matched_rule = rule.rh.child.find_all{|rh| rh[0] == sym }
    # 再帰を含まない文法規則
    unmatched_rule = rule.rh.child.reject{|rh| rh[0] == sym }
    tmp_rule = []
    matched_rule.each{|rl| tmp_rule.push rl[1...rl.size]}

    # 左再帰になる文法規則の記号列が1つのみで元の文法規則がおかしい場合
    # a <- A B
    #    / C
    #    / a
    if tmp_rule[0].empty?
      rule.rh = [[unmatched_rule]]
    else
      tmp_rule = Choice.new(tmp_rule) if tmp_rule.size > 1
      # 新しい文法規則の生成
      case unmatched_rule.size
        # 再帰にならない右辺が空規則しかなく、空規則の除去器で空規則が除去されている場合
      when 0
        rule.rh = OneOrMore.new(tmp_rule)
      when 1
        rule.rh = unmatched_rule[0].push(Repeat.new(tmp_rule))
      else
        rule.rh = [Choice.new(unmatched_rule), Repeat.new(tmp_rule)]
      end
    end
    flatten_rh(rule.rh)
  end

  def remove_indirect_left_recursion rule, stack
    (stack.size-1).times{
      st = stack.pop

      # 間接左再帰
      # 代入される文法規則
      assigned_rule = @grammar.find{|rl| rl.lh == stack.last}

      # 代入される記号の検索
      matched_rule = assigned_rule.rh.child.find_all{|rh| rh[0] == st}
      unmatched_rule = assigned_rule.rh.child.reject{|rh| rh[0] == st}

      tmp_rule = []
      matched_rule.each{|rl| tmp_rule.push rl[1...rl.size] if rl.size > 1 }
      case tmp_rule.size
      when 1
        tmp_rule = tmp_rule[0]
      when 0
      else
        tmp_rule = [Choice.new(tmp_rule)]
      end

      case tmp_rule.empty?
      when true
        case rule.rh.size
        when 1
          case rule.rh[0].size
          when 1
            assigned_rule.rh = Choice.new([rule.rh[0][0]] + unmatched_rule)
          else
            assigned_rule.rh = Choice.new([rule.rh] + unmatched_rule)
          end
        else
          assigned_rule.rh = Choice.new([Choice.new([[rule.rh]])] + unmatched_rule)
        end
      else
        case rule.rh.size
        when 1
          case rule.rh[0].size
          when 1
            assigned_rule.rh = Choice.new([[Choice.new([rule.rh[0][0]])] + tmp_rule] + unmatched_rule)
          else
            assigned_rule.rh = Choice.new([[Choice.new(rule.rh[0])] + tmp_rule] + unmatched_rule)
          end
        else
          assigned_rule.rh = Choice.new([[Choice.new(rule.rh)] + tmp_rule] + unmatched_rule)
        end
      end
      # 代入される文法規則
      assigned_rule.rh = flatten_rh(assigned_rule.rh)
      rule = assigned_rule
    }
  end

  # 右辺を分解して可読性を上げるメソッド
  # input:
  # a <- (A B / C) D
  #    / E

  # output
  # a <- A B D
  #    / C D
  #    / E
  def flatten_rh rh
    tmp_rh = []
    case rh.class.name
    when "Choice"
      rh.child.each{|item|
        if (ret = flatten_rh(item)).is_a?(Choice)
          ret.child.each{|item2| tmp_rh.push item2 }
        else
          tmp_rh.push item
        end
      }
    when "Array"
      if rh[0].is_a?(Choice)
        rh[0].child.each{|item| tmp_rh.push item + rh[1...rh.size] }
      else
        tmp_rh.push rh
      end
    else
      return rh
    end
    Choice.new(tmp_rh)
  end
end

module EmptyRulesRemover
  # 空規則を除去
  # 空規則に%precが使われている場合があるため、separate_rhの後に使用
  def remove_empty_rules
    return true if @grammar.empty?
    cnt = 0
    begin
      Timeout.timeout(10){
        loop do
          break if cnt > 2
          cnt += 1
          loop_flag = false

          @grammar[1...@grammar.size].each{|rule|
            loop_flag = true
            # ruleに空規則しかない場合
            if rule.rh.is_a?(Choice)
              next unless (idx = rule.rh.child.index{|rh| rh[0] == "" })
              rh_size = rule.rh.child.size
              if rh_size > 2
                rule.rh.child.delete_at(idx)
              else
                rule.rh.child.delete_at(idx)
                rule.rh = rule.rh.child[0]
              end
            else
              next unless rule.rh[0] == ""
              idx = 0
              rh_size = 1
              @grammar.delete_if{|rl| rl.lh == rule.lh}
            end
            @grammar.each{|rule2|
              # 空規則を含む右辺にマッチしたとき、右辺を増やすため1つの右辺の処理を飛ばす必要がある
              skip_cnt = 0

              if rule2.rh.is_a?(Choice)
                rule2.rh.child.each_with_index {|rh, rh_idx|
                  unless skip_cnt == 0
                    skip_cnt -= 1
                    next
                  end
                  next unless rh.any?{|r| r == rule.lh}

                  matched_idx = 0
                  rh.each_with_index{|r, r_idx|
                    if r == rule.lh
                      tmp_rh = rh[0...r_idx] + rh[r_idx+1...rh.size]
                    else
                      next
                    end

                    # 空規則を除去して他の文法規則で空規則が発生する場合
                    if tmp_rh.empty?
                      tmp_rh = [""]
                      # 空規則の除去して右辺に左辺と一致しているものが発生する場合に削除
                      # stmts <- stmt
                      #        / stmts stmt
                      #        / stmts
                    elsif tmp_rh.size == 1
                      # 無限ループを検出した場合に文法規則の右辺に挿入しない
                      if tmp_rh[0] == rule2.lh
                        next
                      else
                        next if check_infinite_loop [rule2.lh]+tmp_rh
                      end

                      # 空規則の直前に否定先読みがある場合
                    else
                      tmp_rh.pop if tmp_rh.last.is_a?(NegativeLookAHead)
                    end
                    # ruleに空規則しかない場合に他の文法規則に現れるその規則を全て削除
                    if rh_size == 1
                      rule2.rh.child[rh_idx] = tmp_rh
                    else
                      if idx == 0
                        rule2.rh.child.insert(rh_idx+matched_idx, tmp_rh)
                      else
                        rule2.rh.child.insert(rh_idx+matched_idx+1, tmp_rh)
                      end
                      skip_cnt += 1
                    end
                    matched_idx += 1
                  }
                }
                rule2.rh.child = rule2.rh.child.uniq
              else
                rh = rule2.rh
                next unless rh.any?{|r| r == rule.lh}
                rh.each_with_index{|r, r_idx|
                  if r == rule.lh
                    tmp_rh = rh[0...r_idx] + rh[r_idx+1...rh.size]
                  else
                    next
                  end

                  # 空規則を除去して他の文法規則で空規則が発生する場合
                  if tmp_rh.empty?
                    tmp_rh = [""]
                    # 空規則の除去して右辺に左辺と一致しているものが発生する場合に削除
                    # stmts <- stmt
                    #        / stmts stmt
                    #        / stmts
                  elsif tmp_rh.size == 1
                    # 無限ループを検出した場合に文法規則の右辺に挿入しない
                    if tmp_rh[0] == rule2.lh
                      next
                    else
                      next if check_infinite_loop [rule2.lh]+tmp_rh
                    end

                    # 空規則の直前に否定先読みがある場合
                  else
                    tmp_rh.pop if tmp_rh.last.is_a?(NegativeLookAHead)
                  end
                  # ruleに空規則しかない場合に他の文法規則に現れるその規則を全て削除
                  if rh_size == 1
                    rh = tmp_rh
                  else
                    if idx == 0
                      rh = Choice.new([tmp_rh] + [rh])
                    else
                      rh = Choice.new([rh] + [tmp_rh])
                    end
                  end
                }
                rule2.rh.child = rule2.rh.child.uniq
              end
            }
          }
          break unless loop_flag
        end
      }
    rescue Timeout::Error
      puts "The translator can't remove all empty rules in Yacc description."
      return false
    end
    true
  end

  private
  def check_infinite_loop stack
    return false unless (rule = @grammar.find{|rule| rule.lh == stack.last})

    rule.rh.find_all{|rh| rh.size == 1 && rh[0] =~ /\A[a-z]\w*\Z/}.each{|rh|

      if stack.any?{|st| st == rh[0]}
        return true
      else
        return true if check_infinite_loop stack+rh
      end
    }
    false
  end
end

module UnusedRulesRemover
  def remove_unused_rules
    return true if @grammar.empty?
    used_lhs = []
    delete_lhs = []
    # IDENT が消える
    @grammar.each do |rule|
      if rule.rh.is_a?(Choice)
        rule.rh.child.each{|rh| rh.each{|r| used_lhs.push r unless used_lhs.include?(r) }}
      else
        rule.rh.each{|rh| used_lhs.push rh unless used_lhs.include?(rh) }
      end
    end
    @grammar[1...@grammar.size].each{|rule| delete_lhs.push rule.lh unless used_lhs.include?(rule.lh) }
    @grammar.delete_if{|rule| delete_lhs.include?(rule.lh)}
  end
end

class Translator
  attr_accessor :grammar, :start_symbol

  include SkipSymbolInserter
  include RhSeparater
  include RhOrderSolver
  include LeftRecursionsRemover
  include EmptyRulesRemover
  include UnusedRulesRemover

  def initialize rules, skip_lh, start_symbol, precedence, token_pairs
    @grammar = rules
    @skip_lh = skip_lh
    @start_symbol = start_symbol
    @precedence = precedence
    @token_pairs = token_pairs
    @words_flag = false
    @first_set = Hash.new{|h, k| h[k] = [] }
    @follow_set = {}
    @syms_set = Hash.new{|h, k| h[k] = {} }
    @recursion_memo = Hash.new{|h, k| h[k] = {} }
  end

  def +(other)
    unless other.is_a?(Translator)
      puts "other is not Translator class object."
    end
    @grammar += other.grammar
    self
  end

  # 非終端記号の配列のインデックスを持つハッシュの生成
  # 終端記号の配列のインデックスを持つハッシュの生成
  def translate
    divide_rh
    return self unless remove_empty_rules
    insert_skip_symbol
    #return self
    return self unless check_indirect_left_recursions
    return self
    remove_unused_rules
    solve_rh_order
    remove_direct_left_recursions
    self
  end
end
