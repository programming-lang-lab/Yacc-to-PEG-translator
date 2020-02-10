# coding: utf-8
require './lib/generator.rb'

class PEGGenerator < Generator
  def generate filename
    super

    code = ""
    File.open(filename, "w"){|file|
      @peg.each{|rule|
        @indent.push rule.lh.size + 1
        code += rule.lh + " <- "
        
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
