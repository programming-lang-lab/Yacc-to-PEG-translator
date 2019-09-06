# coding: utf-8
require './sample/c99/c99_fixed.rb'

class Actions
  def initialize
    @type_name_list = []    
  end

  def set_failure failure
    @failure = failure
  end
  
  def register_type_name(input, start, _end, elements)
    if elements[0].text =~ /typedef/
      case elements[1].elements[0].elements[0].text
      when /\*\s*/
        case elements[1].elements[0].elements[1].elements[0].text
        when "("
          case elements[1].elements[0].elements[1].elements[2].elements[0].text
          when "*"
            # typedef type *(*new_type);
            @type_name_list.push elements[1].elements[0].elements[1].elements[2].elements[1].text
          else
          end
        else
          # typedef type *new_type;
          @type_name_list.push elements[1].elements[0].elements[1].elements[0].text.sub(/\s+\Z/, "")
        end
      else
        case elements[1].elements[0].elements[0].text
        when "("
          case elements[1].elements[0].elements[2].elements[0].text
          when "*"
            # typedef type (*new_type);
            @type_name_list.push elements[1].elements[0].elements[2].elements[1].text
          else
            # typedef type (new_type);
            @type_name_list.push elements[1].elements[0].elements[2].text
          end
        else
          # typedef type new_type;
          @type_name_list.push elements[1].elements[0].elements[0].text.sub(/\s+\Z/, "")
        end
      end
    end
  end

  def distinguish_type_name(input, start, _end, elements)
    if @type_name_list.find{|item| item == elements[0].text+elements[1].text}
      C99::TreeNode.new(input[start..._end], start, elements)
    else
      @failure
    end
  end
end

Dir.glob("./sample/c99/ruby_interpreter_c99/**/*.c").each_with_index{|file, idx|
  begin
    C99.parse open(file).read, actions: Actions.new
    puts "succeed: #{file}"
  rescue => err
    puts err.message
    exit 1
  end
}

