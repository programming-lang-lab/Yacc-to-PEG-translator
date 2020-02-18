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
        @indents.push rule.lh.size + 1
        code += rule.lh + " <- "
        if rule.rh.is_a?(Choice)
          (rule.rh.child.size-1).times{|n| code += generate_rh(rule.rh.child[n]) + "\n" + " "*@indents.last + " / " }
          code += generate_rh(rule.rh.child.last) + "\n\n"
        else
          code += generate_rh(rule.rh) + "\n\n"
        end
        @indents.pop
      }
      file.write fix_indent(code).rstrip
    }

    exit 0
  end
end
