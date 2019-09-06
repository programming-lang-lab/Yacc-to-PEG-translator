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
  def devine_rh
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
    flag_of_recursion = false

    rh_first.rh.each{|rh|      
      if rh.size == 3 && rh[0] == lh && rh[2] == lh && rh_first.type == :left
        flag_of_recursion = true
        rh[2] = lh_with_idx_next
      elsif rh.size == 3 && rh[0] == lh && rh[2] == lh && rh_first.type == :right
        flag_of_recursion = true
        rh[0] = lh_with_idx_next
      #elsif rhs.type == :nonassoc
      #elsif rhs.type == :precedence
      # 一番優先度の高い演算子を含む右辺にある左辺と同じ記号はそのまま
      elsif rh_first.prio != max_of_prio
        rh.map!{|item|
          if item == lh
            flag_of_recursion = true
            lh_with_idx_next
          else
            item
          end
        }
      else
      end
      rh_stock.push rh    
    }

    if flag_of_recursion
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
        flag_of_recursion = false
      end
      
      rhs.rh.each{|rh|
        if rh.size == 3 && rh[0] == lh && rh[2] == lh && rhs.type == :left
          flag_of_recursion = true
          rh[0] = lh_with_idx if idx_of_devined_rh != 1
          rh[2] = lh_with_idx_next
        elsif rh.size == 3 && rh[0] == lh && rh[2] == lh && rhs.type == :right
          flag_of_recursion = true
          rh[0] = lh_with_idx_next
          rh[2] = lh_with_idx if idx_of_devined_rh != 1
        #elsif rhs.type == :nonassoc
        #elsif rhs.type == :precedence
        elsif rhs.prio != max_of_prio
          rh.map!{|item|
            if item == lh
              flag_of_recursion = true
              lh_with_idx_next
            else
              item
            end
          }
        else
        end
        rh_stock.push rh
      }
      
      if flag_of_recursion
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
#=begin
  def solve_rh_order
    @grammar.each{|rule|
      next if rule.lh =~ /[A-Z]\w*/ || (size = rule.rh.size) < 2
      (0...size - 1).each {|i|
        break_flag = false

        (i + 1...size).each {|j|
          rh = rule.rh[i]
          rh2 = rule.rh[j]

          # shift / reduce conflictが起きる場合
          if rh2.size >= rh.size && rh2.join.start_with?(rh.join)
            rule.rh[i], rule.rh[j] = rule.rh[j], rule.rh[i]

            # shift / reduce conflictが起きるが正しくソートされている場合
          elsif rh.size <= rh2.size && rh2.join.start_with?(rh.join)
          else

            # 直接再帰の検出
            #next if rh.find{|r| r == rule.lh } || rh2.find{|r| r == rule.lh }

            idx = 0
            while rh.size > idx && rh2.size > idx && rh[idx] == rh2[idx] do
              idx += 1
            end

            # 右辺から導出される記号列同士に包含関係がある場合に入れ替え
            if rh.size > idx && rh2.size > idx
              first_rh = rh[idx] =~ /\A[a-z]\w*\Z/ ? calc_first(rh[idx], [rule.lh]) : [[rh[idx]]]
              first_rh2 = rh2[idx] =~ /\A[a-z]\w*\Z/ ? calc_first(rh2[idx], [rule.lh]) : [[rh2[idx]]]

              unless (matched_syms = first_rh.find_all{|first| first_rh2.find {|first2| first[-1] == first2[-1] }}).empty?
                matched_syms2 = first_rh2.find_all{|first2| matched_syms.find{|syms| syms[-1] == first2[-1] }}

                # 同じ記号が導出される過程がある場合、過程の短い方に絞る
                (0...matched_syms.size-1).each {|k|
                  (k+1...matched_syms.size).each{|l|
                    if matched_syms[k][-1] == matched_syms[l][-1] && !(dupl = matched_syms[k] & matched_syms[l]).empty?
                      if matched_syms[k].size < matched_syms[l].size
                        matched_syms[k] = matched_syms[l] = matched_syms[k][0...dupl.size+1]
                      else
                        matched_syms[k] = matched_syms[l] = matched_syms[l][0...dupl.size+1]
                      end
                    end
                  }
                }

                (0...matched_syms2.size-1).each {|k|
                  (k+1...matched_syms2.size).each{|l|
                    if matched_syms2[k][-1] == matched_syms2[l][-1] && !(dupl = matched_syms2[k] & matched_syms2[l]).empty?
                      if matched_syms2[k].size < matched_syms2[l].size
                        matched_syms2[k] = matched_syms2[l] = matched_syms2[k][0...dupl.size+1]
                      else
                        matched_syms2[k] = matched_syms2[l] = matched_syms2[l][0...dupl.size+1]
                      end
                    end
                  }
                }

                matched_syms = matched_syms.uniq
                matched_syms2 = matched_syms2.uniq

                # 同じ記号が導出される過程を比較し、導出される過程の suffix の重複を除去する
                matched_syms.each_with_index{|syms, k|
                  next if (dupl_idx = matched_syms2.index{|sym| sym[-1] == syms[-1] }).nil?
                  unless (dupl = syms & matched_syms2[dupl_idx]).empty?
                    matched_syms[k] =  syms - dupl[1...dupl.size]
                    matched_syms2[dupl_idx] = matched_syms2[dupl_idx] - dupl[1...dupl.size]
                  end
                }

                matched_syms = matched_syms.uniq
                matched_syms2 = matched_syms2.uniq

                # 同じ記号が導出される過程を比較し、導出される過程の prefix の重複を除去する
                (0...matched_syms.size-1).each {|k|
                  (k+1...matched_syms.size).each{|l|
                    if matched_syms[k].join.start_with?(matched_syms[l].join)
                      matched_syms[l] = matched_syms[k]
                    elsif matched_syms[l].join.start_with?(matched_syms[k].join)
                      matched_syms[k] = matched_syms[l]
                    end
                  }
                }

                (0...matched_syms2.size-1).each {|k|
                  (k+1...matched_syms2.size).each{|l|
                    if matched_syms2[k].join.start_with?(matched_syms2[l].join)
                      matched_syms2[k] = matched_syms2[l]
                    elsif matched_syms2[l].join.start_with?(matched_syms2[k].join)
                      matched_syms2[l] = matched_syms2[k]
                    end
                  }
                }

                matched_syms = matched_syms.find_all{|syms| matched_syms2.find {|syms2| syms2[-1] == syms[-1] }}
                matched_syms2 = matched_syms2.find_all{|syms2| matched_syms.find {|syms| syms[-1] == syms2[-1] }}

                matched_syms = matched_syms.uniq
                matched_syms2 = matched_syms2.uniq

                shared_sym = []
                matched_syms.each{|sym| shared_sym.push sym[-1]}

                puts "Conflicts may occur in \"#{rule.lh}\"."
                print "Both \"#{rh.join(" ")}\" and \"#{rh2.join(" ")}\" lead "
                print "\"#{shared_sym[0]}\""
                shared_sym[1...shared_sym.size].each{|sym|
                  print ", \"#{sym}\""
                }
                print ".\n"

                matched_syms.each{|item|
                  print "#{item[0]}"
                #  if item[-1] == rh[idx]
             #       puts ""
             #       next
                 # end
                  item[1...item.size].each{|it|
                    print " -> #{it}"
                  }
                  puts ""
                }

                matched_syms2.each{|item|
                  print "#{item[0]}"
         #         if item[-1] == rh2[idx]
        #            puts ""
        #            next
         #         end
                  item[1...item.size].each{|it|
                    print " -> #{it}"
                  }
                  puts ""
                }
              end
=begin
              syms_rh = []
              rh[idx...rh.size].each{|r|
                if (tmp = calc_syms(r, [rule.lh, r])).nil? || tmp.empty?
                  syms_rh = nil
                  break
                end

                case syms_rh.size
                when 0
                  syms_rh = tmp
                else
                  tmp_syms = []

                  syms_rh.each{|sym|
                    tmp.each{|s|
                      tmp_syms.push sym + s
                    }
                  }
                  syms_rh = tmp_syms
                end
              }
              next if syms_rh.nil?

              syms_rh2 = []
              rh2[idx...rh2.size].each{|r|
                if (tmp = calc_syms(r, [rule.lh, r])).nil? || tmp.empty?
                  syms_rh2 = nil
                  break
                end

                case syms_rh2.size
                when 0
                  syms_rh2 = tmp
                else
                  tmp_syms = []

                  syms_rh2.each{|sym|
                    tmp.each{|s|
                      tmp_syms.push sym + s
                    }
                  }
                  syms_rh2 = tmp_syms
                end
              }
              next if syms_rh2.nil?

              syms_rh.each{|sym_rh|
                syms_rh2.each{|sym_rh2|
                  if sym_rh2.join.start_with?(sym_rh.join)
#=begin
                    p "swap"
                    p rh
                    #p syms_rh
                    p rh2
                    #p syms_rh2
#=end
                    rule.rh[i], rule.rh[j] = rule.rh[j], rule.rh[i]
                    break_flag = true
                    break
                  end
                  break if break_flag
                }
                break if break_flag
              }
              unless break_flag
#=begin
                p "no swap"
                p rh
#                  p syms_rh
                p rh2
#                  p syms_rh2
#=end

              end
=end
            end
          end
          break if break_flag
        }
        redo if break_flag
      }
    }
  end

  def calc_first lh, stack
    return @first_set[lh] = [[lh]] if lh =~ /[A-Z]\w*/ || (tmp = @grammar.find{|rule| rule.lh == lh}).nil?
    return [] if stack.find{|st| st == lh }
    return @first_set[lh] unless @first_set[lh].empty?

    tmp.rh.each{|r|
     next if r[0].is_a?(Repeat) || r[0].is_a?(NegativeLookAHead)

     case r[0]
     when /[a-z]\w*/
       calc_first(r[0], stack + [lh]).each{|el|
         @first_set[lh] += [[lh] + el]
       }
     when nil
     else
       @first_set[lh].push [lh] + [r[0]]
     end
    }

    @first_set[lh] = @first_set[lh].uniq
  end
=begin
  def calc_syms lh, stack
    return @syms_set[lh][stack.join] unless @syms_set[lh][stack.join].nil?
    rule = @grammar.find{|rule| rule.lh == lh}
    return [[lh]]  if lh !~ /\A[a-z]\w*\Z/ || rule.nil?
    syms = []

    rule.rh.each{|rh|
      # 間接再帰 || 直接再帰
      next if stack.find{|st| rh.find{|r| r == st }} || rh.find{|r| r == lh}
      rh_syms = []

      rh.each{|r|
        next if r.is_a?(Repeat) || r.is_a?(NegativeLookAHead)
        if (tmp = calc_syms(r, stack + [r])).nil? || tmp.empty?
          rh_syms = nil
          break
        end

        case rh_syms.size
        when 0
          rh_syms = tmp
        else
          tmp_syms = []
          rh_syms.each{|sym|
            tmp.each{|s|
              tmp_syms.push sym + s
            }
          }
          rh_syms = tmp_syms
        end
      }
      syms += rh_syms unless rh_syms.nil?
    }
    return nil if syms.empty?
    syms = @syms_set[lh][stack.join] = syms.uniq
    #syms = syms.uniq
  end
=end
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
=begin
        if rh[0] =~ /\A[a-z]\w*\Z/
          tmp = @grammar.find{|rl| rl.lh == rh[0]}
          tmp_checked_rules = tmp ? check_left_recursion(tmp, stack+[rh[0]], checked_rules).to_h : {}
          checked_rules.merge!(tmp_checked_rules)
          if checked_rules[tmp.lh]
            if rh.size > 1
              if (rec_sym = (tmp_first_set = calc_first(rh[1], [rule.lh])).find{|first| stack.find{|st| st == first }})
                puts "left recursion with empty"
                rec_idx = stack.index{|st| st == rec_sym}
                rec_idx2 = tmp_first_set.index{|el| el == rec_sym}
                remove_indirect_left_recursion_with_empty(@grammar.find{|rl| rl.lh == rec_sym}, stack[rec_idx...stack.size]+tmp_first_set[0...rec_idx2], rule.lh)
              end
            else
              empty = true
            end
          end
        end
=end
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

  # 未検証
  # 空規則を含む文法規則の右辺を代入
  # 左再帰になる文法規則の右辺を代入
  # 直接左再帰の除去
  def remove_indirect_left_recursion_with_empty rule, stack, empty_lh
    stack.size.times{
      st = stack.pop

      if stack.empty?
        # 直接左再帰
        remove_direct_left_recursion rule, st
        check_left_recursion rule, [rule.lh], {}
        break
      elsif stack.size == 1
        # 間接左再帰
        # 代入される文法規則
        assigned_rule = @grammar.find{|rl| rl.lh == stack.last}

        # 代入される記号の検索
        matched_rule = assigned_rule.rh.find_all{|rh| rh[1] == st}
        unmatched_rule = assigned_rule.rh.reject{|rh| rh[1] == st}

        tmp_rule = []
        matched_rule.each{|rl|
          rl[1] = assigned_rule.rh
          tmp_rule.push rl
        }

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

        tmp_assigned_rule = assigned_rule

        assigned_rule = @grammar.find{|rl| rl.lh == empty_lh}

        # 代入される記号の検索
        matched_rule = tmp_assigned_rule.rh.find_all{|rh| rh[0] == empty_lh}
        unmatched_rule = tmp_assigned_rule.rh.reject{|rh| rh[0] == empty_lh}

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

class Translator
  attr_accessor :grammar, :start_symbol

  include SkipSymbolInserter
  include RhSeparater
  include RhOrderSolver
  include LeftRecursionsRemover
  
  def initialize rules, skip_lh, start_symbol, precedence
    @grammar = rules
    @skip_lh = skip_lh
    @start_symbol = start_symbol
    @precedence = precedence
    @words_flag = false
    @first_set = Hash.new{|h, k| h[k] = [] }
    # @syms_set = Hash.new{|h, k| h[k] = {} }
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
    devine_rh
    solve_rh_order
    insert_skip_symbol
    remove_left_recursions
    self
  end
end
