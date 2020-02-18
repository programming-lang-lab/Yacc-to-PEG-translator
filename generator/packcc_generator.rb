# coding: utf-8
require './lib/generator.rb'

class PackCCGenerator < Generator
  def generate filename
    super

    name = filename.split("/").last.slice(/\w+/)
    code = "%prefix \"#{name}\"\n\n"
    
    File.open(filename, "w"){|file|
      @peg.each{|rule|
        @indents.push rule.lh.size + 1
        code += "#{rule.lh} <- "
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
      code += "%%\n int main(){\n  #{name}_context_t *ctx = #{name}_create(NULL);\n  #{name}_parse(ctx, NULL);\n  #{name}_destroy(ctx);\n  return 0;\n}\n"
      file.write code
    }

    exit 0
  end
end
