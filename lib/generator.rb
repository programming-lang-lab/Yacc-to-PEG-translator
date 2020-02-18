# coding: utf-8
class Generator
  def initialize grammar
    @peg = grammar.grammar
    @start_symbol = grammar.start_symbol
    @indents = [0]
    @choice_indent = 0
    @idt = 4
  end

  def generate filename
    if filename.nil?
      puts "filename is not defined."
      exit 1
    end
  end

  def generate_rh rh
    send("join_#{rh.class.name.downcase}", rh)
  end

  def join_string str, out_of_array = true
    str + " "
  end

  def join_array ary, out_of_array = true
    code = ""
    ary.each do |sym|
      code += send("join_#{sym.class.name.downcase}", sym, out_of_array)
    end
    code
  end

  def join_repeat rpt, out_of_array = true
    code = send("join_#{rpt.child.class.name.downcase}", rpt.child)
    ary = rpt.child
    if judge_param code, ary
      code = "(" + code.rstrip + ")* " 
    else
      code = code.rstrip + "* "
    end    
    code
  end

  def join_negativelookahead neg, out_of_array = true
    code = send("join_#{neg.child.class.name.downcase}", neg.child)
    ary = neg.child
    if judge_param code, ary
      code = "!(" + code.rstrip + ") " 
    else
      code = "!" + code.rstrip + " "
    end    
    code
  end

  def join_oneormore one, out_of_array = true
    code = send("join_#{one.child.class.name.downcase}", one.child)
    ary = one.child
    if judge_param code, ary
      code = "(" + code.rstrip + ")+ "
    else
      code = code.rstrip + "* "
    end
    code
  end

  def join_choice choices, out_of_array = true
    @indents.push @indents.last + @idt
    code = "\n" + " "*(@indents.last+1) + "(" + send("join_#{choices.child[0].class.name.downcase}", choices.child[0], false)
#      @indent[-1] -= 1
    choices.child.drop(1).each{|sym| code += "\n" + " "*@indents.last + "/ " + send("join_#{sym.class.name.downcase}", sym, false) }
    @indents.pop
    code.rstrip + ")"
  end

  def join_nilclass sym, out_of_array = true
    ""
  end

  def judge_param code, ary
    code != '(' && (ary.size > 1 && ary.find{|a| a.is_a?(String)} \
      || (ary.size == 1 && ary.find{|a| a.is_a?(Array) && a.size > 1 && a.find{|b| b.is_a?(String)}}))
  end
end
