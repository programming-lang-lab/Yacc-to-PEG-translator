# coding: utf-8
#require 'pp'
require './parser/lex_parser.rb'
require './parser/yacc_parser.rb'
require './lib/translator.rb'
require './generator/peg_generator.rb'
require './generator/rats_generator.rb'
require './generator/treetop_generator.rb'
require './generator/packcc_generator.rb'
require './generator/canopy_generator.rb'

#peg_description = nil
yacc_description = nil
lex_description = nil
lex_filename = nil
filename = nil
lex_id = nil
format_name = nil

ARGV.each_with_index{|arg, idx|
  case arg
  when /\A-y\Z/, /\A--yacc\Z/
    yacc_description = YaccParser.new open(ARGV[idx+1], encoding: 'utf-8').read
  when /\A-l\Z/, /\A--lex\Z/
    lex_filename = ARGV[idx+1]
  # when /\A-p\Z/
    # peg_description = PEGParser.new open(ARGV[idx+1], encoding: 'utf-8').read
  when /\A-o\Z/, /\A--output\Z/
    filename = ARGV[idx+1]
  when /\A-i\Z/, /\A--identifier\Z/
    lex_id = ARGV[idx+1]
  when /\A--format\Z/
    format_name = ARGV[idx+1]
  else
    # type code here
  end
}

lex_description = LexParser.new open(lex_filename, encoding: 'utf-8').read, lex_id unless lex_filename.nil?

#peg_parser = PEGParser.new peg_description
#peg_parser.parse
if yacc_description && lex_description
  grammar = lex_description.parse
  grammar = (yacc_description.parse + grammar).translate
#  grammar = (yacc_description.parse + lex_description.parse).translate
elsif yacc_description
  grammar = yacc_description.parse
  grammar.translate
elsif lex_description
  grammar = lex_description.parse
end

case format_name
when /canopy/
  peg = CanopyGenerator.new grammar
when /packcc/
  peg = PackCCGenerator.new grammar
when /rats/
  peg = RatsGenerator.new grammar
when /treetop|tt/
  peg = TreetopGenerator.new grammar
else
  case filename
  when /\w\.rats/
    peg = RatsGenerator.new grammar
  when /\w\.(treetop|tt)/
    peg = TreetopGenerator.new grammar
  else
    peg = PEGGenerator.new grammar
  end
end

peg.generate filename
