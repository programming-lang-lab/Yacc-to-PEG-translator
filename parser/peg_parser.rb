# coding: utf-8
require 'parser.rb'
class PEGParser < Parser
  def self.parse input
    return if input

    @@input = input

    #    while (token || start) && sp1 do
    # バックトラックがないのでtoken or start内でsp1が読まれる
    while token || start do end
    sp0
    #puts "%%\n error" if !check_token "%%\n"
    sp0
    grammars
    #puts "%% error" if !check_token "%%"
    puts "succeed!"
  end
  
  private
  def token
    if check_token("%token")
      while sp1 && string do end
      return true
    else
      return false
    end
  end
  
  def start
    if check_token("%start")
      sp1
      @@start_symbol = string
      return true
    else
      return false
    end
  end
  
  def grammars
    # 開始記号が定義されていない場合は定義する
    # 配列にして最初に定義された文法の左辺を開始記号にすることを考慮
    @@start_symbol = $& if @@start_symbol.nil? && @@input =~ /\A[a-z]\w*/

    # 開始記号のノードの挿入
    @@input = "$start\n  : #{@@start_symbol}\n  ;\n\n" + @@input
    while grammar && sp1 do end
  end
  
  def grammar
    if lh
      sp0
      check_token "<-"
      sp1
      rhs
    end
  end
  
  def lh
    # lhの記号が重複しないか検査
    if (str = string).is_a?(String)
      if @rules.any?{|item| item.lh == str}
        puts "#{str} is already decleared."
        exit 1
      end

      @@tmp_rule = Rule.new
      @@tmp_rule.lh = str
    else
      return false
    end
  end
  
  def rhs
    rh

    while check_token("\\/") 
      break if !rh
    end
    
    @rules.push @@tmp_rule
  end
  
  def rh
    sp1

    @@tmp_rule.rh.push Array.new(0)

    while true
      tmp = string || literal
      
      if tmp && sp1
        @@tmp_rule.rh.last.push tmp

      else
        break
      end
    end

    return true
  end
end
