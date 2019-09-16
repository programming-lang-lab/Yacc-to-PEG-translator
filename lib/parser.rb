# coding: utf-8
module ParserHook
  def before_hook_parse hook_pairs
    hook_pairs.each{|pair|
      pair[1].each{|hooked_method|
        original_hooked_method = "#{hooked_method}_without_hook"
        alias_method original_hooked_method, hooked_method
        define_method(hooked_method){
          pair[0].each{|hook_method| send hook_method }
          send original_hooked_method
        }
      }
    }
  end

  def after_hook_parse hook_methods, hooked_methods
     hooked_methods.each{|hooked_method|
       original_hooked_method = "#{hooked_method}_without_hook"
       alias_method original_hooked_method, hooked_method
       define_method(hooked_method){
         ret = send original_hooked_method
         hook_methods.each{|hook_method| send hook_method}        
         ret
       }
    }
  end
end

class Rule
  attr_accessor :lh, :rh

  def initialize lh = nil, rh = []
    @lh = lh
    @rh = rh
  end
end

Precedence = Struct.new(:type, :value)
Repeat = Struct.new(:rule)
NegativeLookAHead = Struct.new(:rule)
OneOrMore = Struct.new(:rule)
#Choice = Struct.new(:rule)

class SkipRh
  attr_accessor :first, :last, :other

  def initialize
    @first = []
    @last = []
    @other = []
  end
end

class SkipRule
  attr_accessor :lh, :rh

  def initialize lh
    @lh = lh
    # rhは字句記述のタグをキーとしたハッシュ
    # 構造体SKIP_RHを値として持つ
    @rh = Hash.new
  end

  def add_first rh, label
    add_tag(label) unless @rh.has_key? label
    @rh[label].first.push [rh] unless @rh[label].first.find { |sym| sym == [rh] }
  end
  
  def add_last rh, label
    add_tag(label) unless @rh.has_key? label
    @rh[label].last.push rh unless @rh[label].last.find { |sym| sym == rh }
  end
  
  def add_other rh, label
    add_tag(label) unless @rh.has_key? label
    @rh[label].other.push [rh] unless @rh[label].other.find { |sym| sym == rh }
  end
  
  def add_tag tag
    @rh[tag] = SkipRh.new
  end
end

class Parser
  extend ParserHook

  # スキップする記号列を表す文法規則の左辺
  @@skip_rule = SkipRule.new "SKIP_SYMBOL"
  @@start_symbol = nil
  # 結合優先度の指定
  @@precedence = []
  # Lex 記述で同じ正規表現にマッチする終端記号の組
  @@token_pairs = []

  def initialize input, *other
    if input.empty?
      puts "#{self.class.name} has no input."
      @input = nil
      return
    end
    
    @input = input
    @rules = []    
  end
    
  def parse
    Translator.new @rules, @@skip_rule.lh, @@start_symbol, @@precedence, @@token_pairs
  end

  def string
    check_token "[a-zA-Z_]\\w*"
  end

  #Yacc は'、Lexは"しか使わないので、それぞれで定義
=begin
  def literal
    # 括弧を使うとエラーが出る
    if @input =~ /\A(\'(\\\'|[^\'])*\'|\"(\\\"|[^\"])*\")/
      @input = $'
      return $&
    else
      return false
    end
    return ret
  end
=end  
  def check_token expected
    if @input =~ /\A#{expected}/
      @input = $'
      $&
    else
      false
    end
  end

  def space
    @input = $' if @input =~ /\A[ \t\r\n\f\v]+/
    true
  end    
  
  def c_comment
    if @input =~ /\A(((?!'(\\'|[^'])*'|"(\\"|[^"])*")\/\/[^\n]*\n|\/\*(?~\*\/)\*\/)\s*)+/
      @input = $'
      $&
    else
      false
    end
  end
end
