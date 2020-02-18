# coding: utf-8
require './lib/generator.rb'

TREETOP_DEBUG = <<EOS
{
def to_code
  if defined?(elements)
    elements.each_with_index{|item, idx|
      p idx
      p item
    }
  end
end
}
EOS

class TreetopGenerator < Generator
  def generate filename
    super

    grammar_name = filename.split("/").last

    case filename[0]
    when /[a-z]/
      grammar_name = grammar_name[0].upcase + grammar_name[1...grammar_name.size]
    when /[A-Z]/
    else
      grammar_name = "GrammarName"
    end

    code = "grammar #{grammar_name.slice(/\w+/)}\n"
    
    File.open(filename, "w"){|file|
      @peg.each{|rule|
        @indents.push 4
        code += "  rule #{rule.lh}\n      "
        
        (rule.rh.size-1).times{|n|

#          code += generate_rh(rule.rh[n]) + TREETOP_DEBUG + " "*@indent.last + "/ "
          code += generate_rh(rule.rh[n]) + "\n" + " "*@indents.last + "/ "
        }
        
#        code += generate_rh(rule.rh.last) + "#{TREETOP_DEBUG}\n  end\n\n"
        code += generate_rh(rule.rh.last) + "\n  end\n\n"
        @indents.pop
      }
      code += "end\n"
      file.write code
    }

    exit 0
  end
end
