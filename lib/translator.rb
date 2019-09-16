# coding: utf-8
module SkipSymbolInserter
  def insert_skip_symbol
    return unless @grammar.find { |rule| rule.lh == @skip_lh }

    @grammar.each{|rule|
      case rule.lh
      when /\A(?![^\s]*#{@skip_lh})[A-Z]\w*/
      rule.rh.each{|rh|
        unless rh[0] !~ /\A(?!"WORD")"\w+"\Z/
          rh.push "!WORD"
          unless @words_flag
            @words_flag = true
            tmp_rule = Rule.new "WORD"
            tmp_rule.rh = [["[a-zA-Z_0-9]"]]
            @grammar.push tmp_rule
          end
        end
          rh.push @skip_lh
        }
      when /\A(?!#{@skip_lh})[a-z_]\w*/
        rule.rh.each{|rh|
          rh.each_with_index{|r, idx|
            rh.insert(idx+1, @skip_lh) if r =~ /'(\\'|[^'])*'|"(\\"|[^"])*"/
          }
        }
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

      next if rule.lh =~ /[A-Z]\w*/ || rule.rh.size < 2
      not_shaped_rh = Struct.new(:prio, :rh, :type)
      not_shaped_rhs = []
      no_op_rhs = []

      rule.rh.each{|rh|
        prio = 0

        if (prec_idx = rh.find_index{|sym| sym == "%prec" })
          puts "rh doesn't have operand." unless (prio = @precedence.find_index{|prec| prec.find{|item| item.value == rh[prec_idx+1]}})
          rh.slice!(prec_idx, 2)

          if (tmp = not_shaped_rhs.find { |item| item.prio == prio })
            tmp.rh = tmp.rh + [rh]
          else
            not_shaped_rhs.push not_shaped_rh.new(prio, [rh], @precedence[prio][0].type)
          end

        # 演算子を含む場合
        elsif rh.find{|sym| prio = @precedence.find_index{|prec| prec.find{|item| item.value == sym}}}
          if (tmp = not_shaped_rhs.find { |item| item.prio == prio })
            tmp.rh = tmp.rh + [rh] 
          else
            not_shaped_rhs.push not_shaped_rh.new(prio, [rh], @precedence[prio][0].type) 
          end
          
        # 演算子を含まない場合
        # [0][0]をキーとして文法規則を格納する
        else
          no_op_rhs.push rh
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
    # 演算子の位置に関係なく演算子の優先度の高い方の結合度を高くする．
    op_rhs.sort!{|a, b| a.prio <=> b.prio }
    max_of_prio = op_rhs.max{|a, b| a.prio <=> b.prio}.prio
    rh_first = op_rhs.shift
    idx_of_devined_rh = 1
    # 右辺に再帰が現れなかった場合に次の優先度の演算子を持つ右辺に対して使用
    rh_stock = []
    tmp_rule = Rule.new lh
    lh_with_idx = lh + idx_of_devined_rh.to_s
    lh_with_idx_next = lh + (idx_of_devined_rh+1).to_s
    dividing_flag = false

    rh_first.rh.each{|rh|      
      if rh.size == 3 && rh[0] == lh && rh[2] == lh && rh_first.type == :left
        dividing_flag = true
        rh[2] = lh_with_idx_next
      elsif rh.size == 3 && rh[0] == lh && rh[2] == lh && rh_first.type == :right
        dividing_flag = true
        rh[0] = lh_with_idx_next
      #elsif rhs.type == :nonassoc
      #elsif rhs.type == :precedence
      else
      end
      rh_stock.unshift rh
    }

    if dividing_flag
      rh_stock.push [lh_with_idx_next]
      tmp_rule.rh = rh_stock
      rh_stock = []
      idx_of_devined_rh += 1
      @grammar.insert idx, tmp_rule
      idx += 1
    end

    op_rhs.each{|rhs|
      if rh_stock.empty?
        tmp_rule = Rule.new(lh_with_idx = lh + idx_of_devined_rh.to_s)
        lh_with_idx_next = lh + (idx_of_devined_rh+1).to_s
        dividing_flag = false
      end

      rhs.rh.each{|rh|
        if rh.size == 3 && rh[0] == lh && rh[2] == lh && rhs.type == :left
          dividing_flag = true
          rh[0] = lh_with_idx if idx_of_devined_rh != 1
          rh[2] = lh_with_idx_next
        elsif rh.size == 3 && rh[0] == lh && rh[2] == lh && rhs.type == :right
          dividing_flag = true
          rh[0] = lh_with_idx_next
          rh[2] = lh_with_idx if idx_of_devined_rh != 1
        elsif rhs.type == :nonassoc
          rh.map!{|r|
            if r == lh
              dividing_flag = true
              lh_with_idx_next
            else
              r
            end
          }
        #elsif rhs.type == :precedence
        else
        end
        rh_stock.unshift rh
      }
      
      if dividing_flag
        rh_stock.push [lh_with_idx_next]
        tmp_rule.rh = rh_stock
        rh_stock = []
        idx_of_devined_rh += 1
        @grammar.insert idx, tmp_rule
        idx += 1
      end
    }

    if rh_stock.empty?
      @grammar.insert idx, Rule.new(lh_with_idx_next, no_op_rhs)
    else
      case idx_of_devined_rh
      when 1
        @grammar.insert idx, Rule.new(lh, rh_stock + no_op_rhs)
      else
        @grammar.insert idx, Rule.new(lh_with_idx, rh_stock + no_op_rhs)
      end
    end
  end
end

module RhOrderSolver
  # shift / reduce conflictを解決
  def solve_rh_order
    @grammar.each{|rule|
      next if rule.lh =~ /[A-Z]\w*/ || (size = rule.rh.size) < 2

      sorted_rh_order = Hash.new{|h,k| h[k] = Hash.new}
      loop do
        break_flag = false
        (0...size - 1).each {|i|
          (i + 1...size).each {|j|
            next if sorted_rh_order[(rh = rule.rh[i])][(rh2 = rule.rh[j])]

            # shift / reduce conflictが起きる場合
            if rh2.size >= rh.size && rh2.join.start_with?(rh.join)
              sorted_rh_order[rh2][rh] = true
              rule.rh[i], rule.rh[j] = rule.rh[j], rule.rh[i]

              # shift / reduce conflictが起きるが正しくソートされている場合
#            elsif rh.size <= rh2.size && rh2.join.start_with?(rh.join)
            else

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
                first_rh.delete_if{|first| first[1...first.size].find{|f| f[0] == first[0][0] }}
                first_rh2.delete_if{|first| first[1...first.size].find{|f| f[0] == first[0][0] }}

                unless (matched_syms = first_rh.find_all{|first| first_rh2.find {|first2| first[-1][0] == first2[-1][0] }}).empty?
                  matched_syms2 = first_rh2.find_all{|first2| matched_syms.find{|syms| syms[-1][0] == first2[-1][0] }}
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
                  puts "Conflicts may occur in\n#{rule.lh}: #{rh.join(" ")}\n#{' '*rule.lh.size}| #{rh2.join(" ")}"
                  #print "\"#{rule.lh} <- #{rh.join(" ")}\"\nand\n\"#{rule.lh} <- #{rh2.join(" ")}\"\n lead "
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
#=end
                  # 全ての受理可能な入力の導出
=begin
                  loop do
                    tmp_matched_syms = []
                    tmp_matched_syms2 = []
                    matched_syms.each {|syms|
                      next if syms[-1][0].empty?
                      tmp = calc_follow(syms[1...syms.size])

                      if tmp.empty?
                        tmp_matched_syms += [syms + [[[]]]]
                      else
                        tmp.each{|el| tmp_matched_syms += [syms + [el]] }
                      end
                    }

                    matched_syms2.each {|syms|
                      next if syms[-1][0].empty?
                      tmp = calc_follow(syms[1...syms.size])
                      if tmp.empty?
                        tmp_matched_syms2 += [syms[0...syms.size-1] + [[[]]]]
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

                    matched_syms.delete_if{|syms| matched_syms2.find{|syms2| syms2[0].join.start_with?(syms[0].join) }.nil?}
                    matched_syms2.delete_if{|syms2| matched_syms.find{|syms| syms2[0].join.start_with?(syms[0].join) }.nil?}

                    matched_syms = matched_syms.uniq
                    matched_syms2 = matched_syms2.uniq

                    break if matched_syms.empty? && matched_syms2.empty? || matched_syms.reject{|syms| syms.last[0].empty?}.empty? && matched_syms2.reject{|syms2| syms2.last[0].empty?}.empty?
#=begin
                    p "bar"
                    p rule.lh
                    p rh
                    p rh2
                     matched_syms.each{|syms| p syms[0]} if matched_syms.size < 1000#.each{|syms| p syms[0]}
                    p "bar2"
                     matched_syms2.each{|syms| p syms[0]} if matched_syms2.size < 1000#.each{|syms| p syms[0]}
#=end
                  end
p "end"
                  #p matched_syms.each{|syms| p syms[0]} unless matched_syms.empty? && matched_syms2.empty?
                  #p matched_syms2.each{|syms| p syms[0]} unless matched_syms.empty? && matched_syms2.empty?
                  matched_syms.each{|sym_rh|
                    matched_syms2.each{|sym_rh2|
                      p "hoge"

                      p sym_rh[0]
                      p sym_rh2[0]
                      if sym_rh[0] != sym_rh2[0] && (sym_rh2[0] & sym_rh[0]) == sym_rh[0]
                        p rule.rh[i]
                        p rule.rh[j]
                        p sym_rh
                        p sym_rh2
                        rule.rh[i], rule.rh[j] = rule.rh[j], rule.rh[i]
                        break_flag = true
                      end
                      break if break_flag
                    }
                    break if break_flag
                  }
=end
                  break if break_flag
                end
              end
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
    return [] if stack.find{|st| st == lh }
    return @first_set[lh] unless @first_set[lh].empty?

    tmp.rh.each{|r|
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
    until first_el.empty?
      break_flag = true
      rule = @grammar.find { |rl| rl.lh == first_el.last[0] }

      unless (rhs = rule.rh.find_all { |rh| (rh[el[1]] == el[0] || idx && @token_pairs[idx].find{|token| token == rh[el[1]]})}).empty?
        rhs.each { |rh|
          if rh.size > el[1] + 1
            calc_first(rh[el[1] + 1], el[1] + 1, []).each { |first|
              # 既に受理可能な記号列に現れている記号が同じ過程で導出されるのを抑止
              ret += [first_el + first] unless syms.find{|sym| [first_el + first].join.start_with?(sym.join)} || first_el.find{|el| first.find{|item| el[0] == item[0]}}
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
      next if stack.find{|st| rh.find{|r| r == st }} || rh.find{|r| r == lh}
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
  def remove_left_recursions
    @grammar.each{|rule|
      check_left_recursion rule, [rule.lh], {}
    }
  end
  
  private
  # stackは辿った記号の配列
  def check_left_recursion rule, stack, checked_rules
    return {} if checked_rules.has_key?(rule.lh)
    empty = rule.rh.find{|rh| rh[0] == ""} ? true : false
    # ある文法規則の右辺の一番目の記号から空規則を導出できる場合に表示
    puts "\"#{stack[0]}\" lead the empty rule of \"#{rule.lh}\".\nAnd, left recursion through empty rule may remain." if empty && stack[0] != rule.lh

    if rule.rh.find{|rh| rh[0] == rule.lh}
      # 直接左再帰
      remove_direct_left_recursion rule, rule.lh
    end

    rule.rh.each{|rh|
      idx = stack.index{|st| st == rh[0]}
      case idx
      when nil
        if rh[0] =~ /\A[a-z]\w*\Z/
          tmp = @grammar.find{|rl| rl.lh == rh[0]}
          checked_rules.merge! check_left_recursion(tmp, stack+[rh[0]], checked_rules).to_h if tmp
        end
      else
        # 間接左再帰
        remove_indirect_left_recursion rule, stack[idx...stack.size]
        # ここでbreakすることで文法規則が変換された後に変換前のスタックに基づいて左再帰の検出が行われることを防ぐ
        break
      end
    }
    checked_rules[rule.lh] = empty
    checked_rules.uniq
  end
  
  # 文法規則の除去は全ての演算が終わった後に行う
  # ruleをsymに関して直接左再帰の除去を行う
  # 空規則に非対応
  def remove_direct_left_recursion rule, sym
    # 再帰を含む文法規則
    matched_rule = rule.rh.find_all{|rh| rh[0] == sym }
    # 再帰を含まない文法規則
    unmatched_rule = rule.rh.reject{|rh| rh[0] == sym }
    
    tmp_rule = []
    matched_rule.each{|rl| tmp_rule.push rl[1...rl.size]}
      
    # 左再帰になる文法規則の記号列が1つのみで元の文法規則がおかしい場合
    # a <- A B
    #    / C
    #    / a
    if tmp_rule[0].empty?
      rule.rh = [[unmatched_rule]]
    else
      # 新しい文法規則の生成
      case unmatched_rule.size
      # 再帰にならない右辺が空規則しかなく、空規則の除去器で空規則が除去されている場合
      when 0
        rule.rh = [[Repeat.new(tmp_rule)]]
      when 1
        rule.rh = [unmatched_rule[0].push(Repeat.new(tmp_rule))]
      else
        rule.rh = [[unmatched_rule, Repeat.new(tmp_rule)]]
      end
    end
    flatten_rule(rule)
  end

  def remove_indirect_left_recursion rule, stack
    stack.size.times{
      st = stack.pop
      
      if stack.empty?
        # 直接左再帰 
        remove_direct_left_recursion rule, st
        check_left_recursion rule, [rule.lh], {}
        break
      else
        # 間接左再帰
        # 代入される文法規則
        assigned_rule = @grammar.find{|rl| rl.lh == stack.last}
        
        # 代入される記号の検索
        matched_rule = assigned_rule.rh.find_all{|rh| rh[0] == st}
        unmatched_rule = assigned_rule.rh.reject{|rh| rh[0] == st}

        tmp_rule = []
        matched_rule.each{|rl| tmp_rule.push rl[1...rl.size]}
        
        tmp_rule = tmp_rule[0] if tmp_rule.size == 1
        
        case rule.rh.size
        when 1
          case rule.rh[0].size
          when 1
            assigned_rule.rh = [rule.rh[0][0] + tmp_rule] + unmatched_rule
          else
            assigned_rule.rh = [rule.rh[0], tmp_rule] + unmatched_rule
          end
        else
          assigned_rule.rh = [[rule.rh] + tmp_rule] + unmatched_rule
        end
        
        # 代入される文法規則
        rule = flatten_rule(assigned_rule)
      end
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
  def flatten_rule rule
    return rule unless rule.rh[0][0].is_a?(Array)
    
    tmp_rh = []
    
    rule.rh[0][0].each{|item|
      tmp_rh.push item + rule.rh[0][1...rule.rh[0].size]
    }
    
    if rule.rh.size == 1
      rule.rh = tmp_rh
    else
      rule.rh = tmp_rh + rule.rh[1...rule.rh.size]
    end

    rule
  end
end

module EmptyRulesRemover
  # 空規則を除去
  # 空規則に%precが使われている場合があるため、separate_rhの後に使用
  def remove_empty_rules
    loop do
      loop_flag = false

      @grammar.each{|rule|
        next unless (idx = rule.rh.index{|rh| rh[0] == "" })
        loop_flag = true
        # ruleに空規則しかない場合

        if (rh_size = rule.rh.size) == 1
          @grammar.delete_if{|rl| rl.lh == rule.lh}
        else
          rule.rh.delete_at(idx){|rh| rh[0] == "" }
        end
        @grammar.each{|rule2|
          next if rule.lh == rule2.lh

          # 空規則を含む右辺にマッチしたとき、右辺を増やすため1つの右辺の処理を飛ばす必要がある
          skip_flag = false

          rule2.rh.each_with_index {|rh, rh_idx|
            if skip_flag
              skip_flag = false
              next
            end
            next unless rh.find{|r| r == rule.lh}

            # 空規則を除去して他の文法規則で空規則が発生する場合
            tmp_rh = [""] if (tmp_rh = rh.reject{|r| r == rule.lh}).empty?
            # ruleに空規則しかない場合に他の文法規則に現れるその規則を全て削除
            if rh_size == 1
              rule2.rh[rh_idx] = tmp_rh
            else
              if idx == 0
                rule2.rh.insert(rh_idx, tmp_rh)
              else
                rule2.rh.insert(rh_idx+1, tmp_rh)
              end
              skip_flag = true
            end
          }
          rule2.rh = rule2.rh.uniq
        }
      }
      break unless loop_flag
    end
  end
end

class Translator
  attr_accessor :grammar, :start_symbol

  include SkipSymbolInserter
  include RhSeparater
  include RhOrderSolver
  include LeftRecursionsRemover
  include EmptyRulesRemover

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
    remove_empty_rules
    solve_rh_order
    insert_skip_symbol
    remove_left_recursions
    #remove_unused_rules
    self
  end
end
