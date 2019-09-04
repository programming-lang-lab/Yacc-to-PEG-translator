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

    case filename[0]
    when /[a-z]/
      grammar_name = filename[0].upcase + filename[1...filename.size]
    when /[A-Z]/
      grammar_name = filename
    else
      grammar_name = "GrammarName"
    end

    code = "grammar #{grammar_name.slice(/\w+/)}\n"
    
    File.open(filename, "w"){|file|
      @peg.each{|rule|
        @indent.push 4
        code += "  rule #{rule.lh}\n      "
        
        (rule.rh.size-1).times{|n|

#          code += generate_rh(rule.rh[n]) + TREETOP_DEBUG + " "*@indent.last + "/ "
          code += generate_rh(rule.rh[n]) + "\n" + " "*@indent.last + "/ "
        }
        
#        code += generate_rh(rule.rh.last) + "#{TREETOP_DEBUG}\n  end\n\n"
        code += generate_rh(rule.rh.last) + "\n  end\n\n"
        @indent.pop
      }
      code += "end\n"
      file.write code
    }

    exit 0
  end
end
