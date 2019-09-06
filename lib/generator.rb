# coding: utf-8
class Generator
  def initialize grammar
    @peg = grammar.grammar
    @start_symbol = grammar.start_symbol
    @indent = [0]
  end

  def generate filename
    if filename.nil?
      puts "filename is not defined."
      exit 1
    end

  end

  def generate_rh rh
    @indent.push @indent.last
    code = send("join_#{rh.class.name.downcase}", rh) 
    @indent.pop
    code
  end

  def join_string str, out_of_array = true
    @indent[-1] += str.size + 1 if out_of_array
    str + " "
  end

  def join_array ary, out_of_array = true
    # ただの記号列の場合
    if ary.find{|a| a.is_a?(String)}
      code = ""
      ary.each{|sym| code += send("join_#{sym.class.name.downcase}", sym, out_of_array)}

    # 選択肢の場合
    else
      return send("join_#{ary[0].class.name.downcase}", ary[0], false) if ary.size < 2
      @indent.push @indent.last + 2
      code = send("join_#{ary[0].class.name.downcase}", ary[0], false)
#      @indent[-1] -= 1
      ary.drop(1).each{|sym| code += "\n" + " "*@indent.last + "/ " + send("join_#{sym.class.name.downcase}", sym, false) }
      @indent.pop
      code = "(" + code.rstrip + ")"
#      @indent[-1] = code[/[^\n]*\Z/].size - 1
    end
    code
  end

  def join_repeat rpt, out_of_array
    code = send("join_#{rpt.rule.class.name.downcase}", rpt.rule)
    ary = rpt.rule
    if judge_param code, ary
      code = "(" + code.rstrip + ")* " 
    else
      code = code.rstrip + "* "
    end    
    code
  end

  def join_negativelookahead neg, out_of_array
    code = send("join_#{neg.rule.class.name.downcase}", neg.rule)
    ary = neg.rule
    if judge_param code, ary
      code = "!(" + code.rstrip + ") " 
    else
      code = "!" + code.rstrip + " "
    end    
    code
  end
  
  def join_nilclass sym, out_of_array
    ""
  end

  def judge_param code, ary
    code != '(' && (ary.size > 1 && ary.find{|a| a.is_a?(String)} \
      || (ary.size == 1 && ary.find{|a| a.is_a?(Array) && a.size > 1 && a.find{|b| b.is_a?(String)}}))
  end
end
