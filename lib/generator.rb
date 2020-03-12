# coding: utf-8
class Generator
  def initialize grammar
    @peg = grammar.grammar
    @start_symbol = grammar.start_symbol
    @indents = [0]
    @choice_indent = 0
    @idt = 4
    @neg_idt = 0
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

  def join_string str
    str + " "
  end

  def join_array ary
    code = ""
    ary.each do |sym|
      code += send("join_#{sym.class.name.downcase}", sym)
    end
    code
  end

  def join_repeat rpt
    code = send("join_#{rpt.child.class.name.downcase}", rpt.child)
    code.rstrip!
    if rpt.child.size == 1 && rpt.child[0].is_a?(Array) && rpt.child[0].size > 1
      code = "(" + code + ")* "
    else
      code += "* "
    end
    code
  end

  def join_negativelookahead neg
    @neg_idt = 1
    code = send("join_#{neg.child.class.name.downcase}", neg.child)
    @neg_idt = 0
    code[/\A\s*/] + "!" + code[/\S(.|\n)*\Z/].rstrip + " "
  end

  def join_oneormore one
    send("join_#{one.child.class.name.downcase}", one.child).rstrip + "* "
  end

  def join_choice choices
    @indents.push @indents.last + @idt - @neg_idt
    code = "\n" + " "*(@indents.last+1) + "(" + send("join_#{choices.child[0].class.name.downcase}", choices.child[0])
#      @indent[-1] -= 1
    choices.child.drop(1).each{|sym| code += "\n" + " "*@indents.last + "/ " + send("join_#{sym.class.name.downcase}", sym) }
    @indents.pop
    code.rstrip + ")"
  end

  def join_nilclass sym
    ""
  end
end
