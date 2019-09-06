# coding: utf-8
require './lib/generator.rb'

class CanopyGenerator < Generator
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

    code = "grammar #{grammar_name.slice(/\w+/)}\n\n"
    
    File.open(filename, "w"){|file|
      @peg.each{|rule|
        @indent.push rule.lh.size + 1
        code += "#{rule.lh} <- "
        
        (rule.rh.size-1).times{|n|
          code += generate_rh(rule.rh[n]) + "\n" + " "*@indent.last + " / "
        }
        
        code += generate_rh(rule.rh.last) + "\n\n"
        @indent.pop
      }
      file.write code
    }

    exit 0
  end
end
