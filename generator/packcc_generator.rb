# coding: utf-8
require './lib/generator.rb'

class PackCCGenerator < Generator
  def generate filename
    super

    name = filename.slice(/\w+/)
    code = "%prefix \"#{name}\"\n\n"
    
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
      code += "%%\n int main(){\n  #{name}_context_t *ctx = #{name}_create(NULL);\n  #{name}_parse(ctx, NULL);\n  #{name}_destroy(ctx);\n  return 0;\n}\n"
      file.write code
    }

    exit 0
  end
end
