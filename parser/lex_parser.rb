# coding: utf-8
require './lib/parser.rb'

class LexParser < Parser
  def initialize input, lex_id
    super
    @lex_id = lex_id
    @const = Hash.new
    @state = []
    # @reserved_words: 予約語
    @reserved_words = []
    # 予約語かを判定するフラグ
    # 識別子を解析したらtrueに変更
    @reserved_word_flag = false

    # c_comment: Cのコメントを除くメソッド
    # space: 空白文字を除くメソッド
    before_hook_methods = [[[:space, :c_comment],
                            [:option, :option_x, :option_s, :code, :constant, :token_type]],
                                                                                 
                           [[:space],
                            [:regexp, :string]],

                           [[:c_comment],
                            [:action]]]
    
    self.class.before_hook_parse before_hook_methods
  end

  def parse
    while option || option_s || option_x || top || code || constant do end
    space
    check_token "%%"
    space
    while !check_token("\\s*%%") && token do end

    unless (id_rule = @rules.find {|rh| rh.lh == @lex_id }).nil? || @reserved_words.empty?
      if id_rule.rh.size == 1
        id_rule.rh[0].unshift NegativeLookAHead.new @reserved_words
      else
        id_rule.rh.unshift [NegativeLookAHead.new(@reserved_words)]
      end
    end
    @@skip_rule.lh = "SPACE" unless @@skip_rule.rh.empty?
    @@skip_rule.rh.each{|key, rh|
      @tmp_rule = Rule.new
      if key == "INITIAL"
        @tmp_rule.lh = @@skip_rule.lh
      else
        @tmp_rule.lh = key + "_" + @@skip_rule.lh
      end
      syms = [rh.other]
      if rh.last.empty?
        if syms[0].size == 1 && syms[0].find{|item| item[0].split(/(?!\\\/)\//).size > 1}
          syms[0][0][0] = "(" + syms[0][0][0] + ")"
        end
        syms = [Repeat.new(syms)]
      else
        if rh.last.size == 1
          syms = [Repeat.new(["!"+rh.last[0]] + syms), rh.last[0]] 
        else
          lst = "(" + rh.last[0]
          rh.last.drop(1).each{|item|
            lst += " / " + item
          }
          lst += ")"
          syms = [Repeat.new(["!"+lst] + syms), lst] 
        end
      end
      syms = [[rh.first] + syms] unless rh.first.empty?

      @tmp_rule.rh.push syms
      @rules.push @tmp_rule
    }
    super
  end
    
  private
  def constant
    return false unless (tmp = string)
    tmp_regexp = regexp.gsub("\\", "\\\\\\\\")
    if tmp_regexp.index(/(?!\\\/)\//)
      @const[tmp] = "(" + tmp_regexp + ")"
    else
      @const[tmp] = tmp_regexp
    end
    @const.each{|k, v| @const[tmp].gsub!(/{#{k}}/, v)}
    true
  end
  
  def option
    return false unless check_token("%option")
    check_token "[^\n]*\n"
    true
  end
  
  def option_s
    return false unless check_token("%s")
    while (tmp = string) do
      @state.push tmp
      break if @input =~ /\A[ \t\r\f\v]*\n/
    end 
    true
  end
  
  def option_x
    return false unless check_token("%x")
    while (tmp = string) do
      @state.push tmp
      break if @input =~ /\A[ \t\r\f\v]*\n/
    end 
    true
  end

  def top
    return false unless check_token "%top{"
    until check_token("}") do
      check_token "[^\n]*\n"
    end
    true
  end

  def code
    return false unless check_token "%{"
    until check_token("%}") do
      check_token "[^\n]*\n"
    end
    true
  end
  
  def token
    if (tags = token_type)
      tags.each{|tag| tag.upcase! }
    else
      tags = ["INITIAL"] 
    end

    return false unless (rh = regexp)
    if rh == "[^\n]" && tags[0] == "INITIAL"
      action 
      return false
    end

    @tmp_rule = Rule.new 
    @tmp_rule.rh.push Array.new(0)

    ary, label = action
    label.upcase! if label

    if ary
      if !@reserved_word_flag && rh =~ /\A"[a-zA-Z]\w*"|[a-zA-Z]\w*\Z/
        ary.each{|item|
          @reserved_words.push [item]
        }
      end
      
      @tmp_rule.rh.last.push rh

      @@token_pairs.push ary if ary.size > 1
      ary.each{|str|
        @reserved_word_flag = true  if str =~ /\A#{@lex_id}\Z/

        case str
        when /\w+/
          if label
            @@skip_rule.add_first str, label
            tags.each{|tag| @@skip_rule.add_last str, tag }
          end

          tags.each{|tag|
            if tag == "INITIAL"
              @tmp_rule.lh = str
            else
              @tmp_rule.lh = tag + "_" + str
            end
          
            if (tmp = @rules.find { |rl| rl.lh == @tmp_rule.lh })
              tmp.rh = tmp.rh + @tmp_rule.rh
            else
              @rules.push @tmp_rule
            end
          }
        when /'(\\'|[^'])+'/
        else
          # type code here
        end
        
        @tmp_rule = Marshal.load(Marshal.dump(@tmp_rule))
      }
    else
      tags.each{|tag|
        if label
          @@skip_rule.add_first rh, label
          @@skip_rule.add_last rh, tag if tag != "INITIAL"

        # ここで改行文字以外にマッチする正規表現をアドホックに弾く
        elsif label.nil? && rh != "[^\\n]"
          @@skip_rule.add_other rh, tag
        else
        end
      }
    end
    true
  end
  
  def token_type
    if @input =~ /\A(?!<<EOF>>)<[^<>]+>/
      @input = $'
      return $&.scan(/[^<>]+/)
    end
    
    false
  end

  def regexp
    ret = ""
    while (tmp = eof || regexp_option || paren || class_char || constant_char || literal || slash || or_operator || any_char || nonwrapped_string)
      if (rep = repeat_operator)
        ret += tmp + rep + " "
      else
        ret += tmp + " "
      end
    end

    return false if ret.empty?
    ret.rstrip!
  end

  def eof
    if @input =~ /\A<<EOF>>/
      @input = $'
      return "<<EOF>>"
    end
    false
  end

  def regexp_option
    if @input =~ /\A\(\?-?[imxos]:((?<paren>\((\\\)|[^()]|\g<paren>)*\))|[^()])*\)/
      if @input[2] == "-"
        op = @input[2..3]
        @input.slice!(0..4)
      else
        op = @input[2]
        @input.slice!(0..3)
      end
      unless (ret = regexp)
        puts "regexp_option: parse error."
        exit 1
      end
      @input.slice!(0)
      return "(?" + op + ret + ")"
    end

    false
  end

  def paren
    if @input =~ /\A(?<paren>\((\\\)|[^()]|\g<paren>)*\))/
      @input.slice!(0)
      unless (ret = regexp)
        puts "paren: parse error."
        exit 1
      end
      @input.slice!(0)
      return "(" + ret + ")"
    end

    false
  end

  def class_char
    if @input =~ /\A(?<paren>\[(\\\]|[^\[\]]|\g<paren>)*\])/
      @input = $'
      return $&.gsub(/([^\w])-/){"#{$1}\\-"}.gsub(/(?!\\'|\\")('|")/){"\\#{$1}"}
    end

    false
  end

  def constant_char
    if @input =~ /\A{(\\}|[^}])*}/
      @input = $'
      ret = $&
      if ret =~ /\w+/
        # 定数の除去
        @const.each{|k, v| break if ret.gsub!("{#{k}}", v) }
      end
      return ret
    end

    false
  end

  def slash
    if @input =~ /\A(?!\\\/)\//
      @input = $'
      return "\"\\/\""
    end
    false
  end

  def or_operator
    return "/" if check_token "\\|"
    false
  end
  
  def repeat_operator
    case @input
    when /\A{[1-9,\s]*}/
      @input = $'
      #return $&
      return "*"
    when /\A[*+?]/
      @input = $'
      return $&
    else
      # type code here
    end
  end
  
  def any_char
    if @input =~ /\A\./
      @input = $'
      return "[^\\n]"
    end

    false
  end

  def nonwrapped_string
    if @input =~ /\A(\\"|'|\\\\|\\\(|\\\)|\\{|\\}|\\\[|\\\]|\\\$|\\\?|=|\\>|\\<|\\!|\\\.|\\\||\\\+|\\\*|\\\^|\\~|\\|\/|;|:|,|@|#|>|<|-|&|\^|%|\w)+/
    # if @input =~ /\A(\\\"|\\\'|\\\\|\\\.|\\\(|\\\)|\\\{|\\\}|\\\[|\\\]|\\\$|\\\?|=|\\>|\\<|\\!|\\\||\\\+|\\\*|\\^|\\~|\\|\/|;|:|,|@|#|>|<|\-|&|\^|%|\w)+/
      @input = $'
      return "\"" + $&.gsub(/\\([!<>|+*^.])/, '\1') + "\""
    end

    false
  end

  def literal
    # 括弧を使うとエラーが出る
    if @input =~ /\A"(\\"|[^"])*"/
      @input = $'
      $&
    else
      false
    end
  end
    
  def action
    if @input =~ /\A[ \t\r\f\v]*(?<paren>{(\/\*(?~\*\/)\*\/|\/\/[^\n]*|"(\\"|[^"])*"|'(\\'|[^'])*'|((?!\/\*)(\\'|\\"|[^{}'"]))+|\g<paren>)*})|\A(\\{|\\}|[^{}\n])+/
      @input = $'
      pat = $&
      label = pat =~ /BEGIN\s*\(?\s*(\w+)\s*\)?/ ? $1 : nil

      case pat
      when /return\s*\(?(\w+)\([^)]*\)/
        if @input =~ /int #{$1}\s*(?<paren>\((\'[^\']*\'|\"[^\"]*\"|[^\(\)\'\"]+|\g<paren>)*\))\s*(?<paren2>\{(\'[^\']*\'|\"[^\"]*\"|[^{}\'\"]+|\g<paren2>)*\})/
          ret = $&.scan(/(?<=return)\s*\(?\s*\w+/)
          ret.each_with_index{|r, idx| ret[idx] = r.slice(/\w+/).strip }

          return [ret.uniq, label]
        end
        return false, label

      # 不要?
      # when /return\s*\(?([^\)]*)\)?/
      # return [[$1], label]
      # 演算子などの文字を返す場合
      when /return\s*\(?('[^']')/
        return false, false
      else
        ret = pat.scan(/(?<=return)\s*\(?\s*\w+/)
        return false, label if ret.empty?
        ret.each_with_index{|r, idx| ret[idx] = r.slice(/\w+/).strip } 

        return [ret.uniq, label]
      end
    end
    false
  end
end
