# coding: utf-8
require './lib/generator.rb'

class RatsGenerator < Generator
  def generate filename
    super
    code = "module #{filename.slice(/\w+/)};\n\noption main(start);\n\npublic "

    File.open(filename, "w"){|file|
      @peg.each{|rule|
        @indent.push rule.lh.size+5
        code += "void #{rule.lh} = " 
        
        (rule.rh.size-1).times{|n|
          code += generate_rh(rule.rh[n]) + "\n" + " "*@indent.last + " / "
        }
        
        if rule.rh.size > 1
          code += generate_rh(rule.rh.last) + "\n" +" "*(@indent.last+1) + ";\n\n"
        else
          code += generate_rh(rule.rh.last).rstrip + ";\n\n"
        end
        @indent.pop
      }
      file.write code
    }

    exit 0
  end
end
