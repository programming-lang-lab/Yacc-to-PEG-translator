# coding: utf-8
require './lib/generator.rb'

class PEGGenerator < Generator
  def generate filename
    super

    code = ""
    File.open(filename, "w"){|file|
      @peg.each{|rule|
        @indents.push rule.lh.size + 1
        code += rule.lh + " <- "
        if rule.rh.is_a?(Choice)
          tmp_code = ""
          (rule.rh.child.size-1).times{|n| tmp_code += generate_rh(rule.rh.child[n]) + "\n" + " "*@indents.last + " / " }
          tmp_code += generate_rh(rule.rh.child.last) + "\n\n"
          code += tmp_code.lstrip
        else
          code += generate_rh(rule.rh).lstrip + "\n\n"
        end
        @indents.pop
      }
      file.write code.rstrip
    }
    
    exit 0
  end
end
