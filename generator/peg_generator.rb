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
        if rule.rh.is_a?(Choice)
          (rule.rh.child.size-1).times{|n| code += generate_rh(rule.rh.child[n]) + "\n" + " "*@indent.last + " / " }
          code += generate_rh(rule.rh.child.last) + "\n\n"
        else
          code += generate_rh(rule.rh) + "\n\n"
        end
        @indent.pop
      }
      file.write fix_indent(code).rstrip
    }
    
    exit 0
  end
end
