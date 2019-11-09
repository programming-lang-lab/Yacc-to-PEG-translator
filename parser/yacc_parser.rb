# coding: utf-8
require './lib/parser.rb'

class YaccParser < Parser
  def initialize input
    super
    # c_comment: Cのコメントを除くメソッド
    # space: 空白文字を除くメソッド
    before_hook_methods = [[[:space, :c_comment],
                            [:token,
                             :token_type,
                             :type,
                             :start,
                             :debug,
                             :union,
                             :code,
                             :expect,
                             :precedence,
                             :nonassoc,
                             :pure_parser,
                             :lex_param,
                             :parse_param,
                             :left,
                             :right,
                             :empty,
                             :prec,
                             :action,
                             :string]],
                           
                           [[:space],
                            [:initial_action]],

                           [[:c_comment],
                            [:grammars]]]
    
    self.class.before_hook_parse before_hook_methods
  end

  def parse
    while token || type || start || debug || union || code || expect || pure_parser || lex_param || parse_param || initial_action || right || left || precedence || nonassoc do
    end
    space
    check_token "%%"

    grammars
    space
    check_token "%%"
    super
  end
  
  private
  def token
    return false unless check_token("%token")
    while token_type && space && check_token("[^%\\s][^\\s]*") do end
    true
  end
  
  def token_type
    check_token("<\\w+>")
    true
  end
  
  def type
    return false unless check_token("%type")
    @input.sub!(/[^\n]*\n/, '')
    true
  end
  
  def start
    return false unless check_token("%start")
    @@start_symbol = string
    true
  end
  
  def debug
    check_token("%debug")
  end
  
  def union
    return false unless check_token("%union")
    @input.sub!(/(?<paren>{('[^']*'|"[^"]*"|[^{}'"]+|\g<paren>)*})\s*/, '')
  end
  
  def code
    check_token("(%(code\s*(requires|provides|top|imports)?\s*)?{)(?~%})%}")
  end
  
  def expect
    return false unless check_token("%expect")
    @input.sub!(/[^\n]*\n/, '')
    true
  end
  
  def pure_parser
    return false unless check_token("%pure-parser")
    @input.sub!(/[^\n]*\n/, '')
    true
  end
  
  def lex_param
    return false unless check_token("%lex-param")
    @input.sub!(/[^\n]*\n/, '')
    true
  end
  
  def parse_param
    return false unless check_token("%parse-param")
    @input.sub!(/[^\n]*\n/, '')
    true
  end
  
  def initial_action
    return false unless check_token("%initial-action")
    @input.sub!(/(?<paren>{('[^']*'|"[^"]*"|[^{}'"]+|\g<paren>)*})\s*;\s*/, '')
    true
  end
  
  def left
    return false unless check_token("%left")
    prec = []
    token_type
    while (tmp = string || literal)
      prec.push Precedence.new(:left, tmp)
    end
    @@precedence.push prec
    true
  end
  
  def right
    return false unless check_token("%right")
    prec = []
    token_type
    while (tmp = string || literal)
      prec.push Precedence.new(:right, tmp)
    end
    @@precedence.push prec
    true
  end
  
  def nonassoc
    return false unless check_token("%nonassoc")
    prec = []
    token_type
    while (tmp = string || literal)
      prec.push Precedence.new(:nonassoc, tmp)
    end
    @@precedence.push prec
    true
  end
  
  def precedence
    return false unless check_token("%precedence")
    prec = []
    token_type
    while (tmp = string || literal)
      prec.push Precedence.new(:precedence, tmp)
    end
    @@precedence.push prec
    true
  end
  
  def empty
    return '' if check_token("%empty")
    false 
  end
  
  def prec
    if @input =~ /\A%prec/
      @input = $'
      $&
    else
      false
    end
  end
  
  def grammars
    @@start_symbol = @input[/\w+/] if @@start_symbol.nil?

    if @@start_symbol == "start"
      if @@skip_rule.rh.empty?
        @input = "start_symbol\n  : #{@@start_symbol}\n  ;\n\n" + @input
      else
        @input = "start_symbol\n  : #{@@skip_rule.lh} #{@@start_symbol}\n  | #{@@skip_rule.lh}\n  ;\n\n" + @input
      end
    else
      if @@skip_rule.rh.empty?
        @input = "start\n  : #{@@start_symbol}\n  ;\n\n" + @input
      else
        @input = "start\n  : #{@@skip_rule.lh} #{@@start_symbol}\n  | #{@@skip_rule.lh}\n  ;\n\n" + @input
      end
    end

    while grammar do end
  end
  
  def grammar
    return false unless lh
    space
    puts "#{@tmp_rule.lh}: : is expected" unless check_token ":"
    rhs
    check_token ";"
    true
  end
  
  def lh
    # lhの記号が重複しないか検査
    return false unless (str = string).is_a?(String)
    
    @tmp_rule = Rule.new
    @tmp_rule.lh = str
  end
  
  def rhs
    rh
    
    while true
      space
      if check_token("\\|")
        break unless rh
      else
        break
      end
    end

    @tmp_rule.rh.map!{|rh| rh.empty? ? [''] : rh }
    if (tmp = @rules.find { |rl| rl.lh == @tmp_rule.lh })
      tmp.rh = tmp.rh + @tmp_rule.rh
    else
      @rules.push @tmp_rule
    end
  end
  
  def rh
    # 要変更
    # 空の配列が入る
    @tmp_rule.rh.push Array.new(0) 
    while action do end
    
    while true      
      # ;なしで次の文法規則が定義された場合
      break if @input =~ /\A[a-z_]\w*\s*:/

      if (tmp = string || literal || empty || prec)
        @tmp_rule.rh.last.push tmp
      else
        break
      end

      while action do end
    end

    true
  end

  def literal
    # 括弧を使うとエラーが出る
    if @input =~ /\A'(\\'|[^'])*'/
      @input = $'
      $&
    else
      false
    end
  end
    
  def action
    @input = $' if @input =~ /\A(?<paren>{('[^']*'|"[^"]*"|[^{}'"]+|\g<paren>)*})/
    $&
  end
end
