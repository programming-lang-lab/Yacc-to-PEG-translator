module C99
  class TreeNode
    include Enumerable
    attr_reader :text, :offset, :elements

    def initialize(text, offset, elements = [])
      @text = text
      @offset = offset
      @elements = elements
    end

    def each(&block)
      @elements.each(&block)
    end
  end

  class TreeNode1 < TreeNode
    attr_reader :SPACE, :translation_unit

    def initialize(text, offset, elements)
      super
      @SPACE = elements[0]
      @translation_unit = elements[1]
    end
  end

  class TreeNode2 < TreeNode
    attr_reader :SPACE, :compound_statement

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @compound_statement = elements[2]
    end
  end

  class TreeNode3 < TreeNode
    attr_reader :SPACE, :expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @expression = elements[2]
    end
  end

  class TreeNode4 < TreeNode
    attr_reader :primary_expression

    def initialize(text, offset, elements)
      super
      @primary_expression = elements[0]
    end
  end

  class TreeNode5 < TreeNode
    attr_reader :SPACE, :expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @expression = elements[2]
    end
  end

  class TreeNode6 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode7 < TreeNode
    attr_reader :SPACE, :argument_expression_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @argument_expression_list = elements[2]
    end
  end

  class TreeNode8 < TreeNode
    attr_reader :SPACE, :IDENTIFIER

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @IDENTIFIER = elements[2]
    end
  end

  class TreeNode9 < TreeNode
    attr_reader :PTR_OP, :IDENTIFIER

    def initialize(text, offset, elements)
      super
      @PTR_OP = elements[0]
      @IDENTIFIER = elements[1]
    end
  end

  class TreeNode10 < TreeNode
    attr_reader :SPACE, :type_name, :initializer_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[9]
      @type_name = elements[2]
      @initializer_list = elements[7]
    end
  end

  class TreeNode11 < TreeNode
    attr_reader :SPACE, :expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @expression = elements[2]
    end
  end

  class TreeNode12 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode13 < TreeNode
    attr_reader :SPACE, :argument_expression_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @argument_expression_list = elements[2]
    end
  end

  class TreeNode14 < TreeNode
    attr_reader :SPACE, :IDENTIFIER

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @IDENTIFIER = elements[2]
    end
  end

  class TreeNode15 < TreeNode
    attr_reader :PTR_OP, :IDENTIFIER

    def initialize(text, offset, elements)
      super
      @PTR_OP = elements[0]
      @IDENTIFIER = elements[1]
    end
  end

  class TreeNode16 < TreeNode
    attr_reader :SPACE, :type_name, :initializer_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[11]
      @type_name = elements[2]
      @initializer_list = elements[7]
    end
  end

  class TreeNode17 < TreeNode
    attr_reader :SPACE, :expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @expression = elements[2]
    end
  end

  class TreeNode18 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode19 < TreeNode
    attr_reader :SPACE, :argument_expression_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @argument_expression_list = elements[2]
    end
  end

  class TreeNode20 < TreeNode
    attr_reader :SPACE, :IDENTIFIER

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @IDENTIFIER = elements[2]
    end
  end

  class TreeNode21 < TreeNode
    attr_reader :PTR_OP, :IDENTIFIER

    def initialize(text, offset, elements)
      super
      @PTR_OP = elements[0]
      @IDENTIFIER = elements[1]
    end
  end

  class TreeNode22 < TreeNode
    attr_reader :assignment_expression

    def initialize(text, offset, elements)
      super
      @assignment_expression = elements[0]
    end
  end

  class TreeNode23 < TreeNode
    attr_reader :SPACE, :assignment_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @assignment_expression = elements[2]
    end
  end

  class TreeNode24 < TreeNode
    attr_reader :INC_OP, :unary_expression

    def initialize(text, offset, elements)
      super
      @INC_OP = elements[0]
      @unary_expression = elements[1]
    end
  end

  class TreeNode25 < TreeNode
    attr_reader :DEC_OP, :unary_expression

    def initialize(text, offset, elements)
      super
      @DEC_OP = elements[0]
      @unary_expression = elements[1]
    end
  end

  class TreeNode26 < TreeNode
    attr_reader :unary_operator, :cast_expression

    def initialize(text, offset, elements)
      super
      @unary_operator = elements[0]
      @cast_expression = elements[1]
    end
  end

  class TreeNode27 < TreeNode
    attr_reader :SIZEOF, :unary_expression

    def initialize(text, offset, elements)
      super
      @SIZEOF = elements[0]
      @unary_expression = elements[1]
    end
  end

  class TreeNode28 < TreeNode
    attr_reader :SIZEOF, :SPACE, :type_name

    def initialize(text, offset, elements)
      super
      @SIZEOF = elements[0]
      @SPACE = elements[5]
      @type_name = elements[3]
    end
  end

  class TreeNode29 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode30 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode31 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode32 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode33 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode34 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode35 < TreeNode
    attr_reader :SPACE, :type_name, :cast_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @type_name = elements[2]
      @cast_expression = elements[5]
    end
  end

  class TreeNode36 < TreeNode
    attr_reader :cast_expression

    def initialize(text, offset, elements)
      super
      @cast_expression = elements[0]
    end
  end

  class TreeNode37 < TreeNode
    attr_reader :SPACE, :cast_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @cast_expression = elements[2]
    end
  end

  class TreeNode38 < TreeNode
    attr_reader :SPACE, :cast_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @cast_expression = elements[2]
    end
  end

  class TreeNode39 < TreeNode
    attr_reader :SPACE, :cast_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @cast_expression = elements[2]
    end
  end

  class TreeNode40 < TreeNode
    attr_reader :multiplicative_expression

    def initialize(text, offset, elements)
      super
      @multiplicative_expression = elements[0]
    end
  end

  class TreeNode41 < TreeNode
    attr_reader :SPACE, :multiplicative_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @multiplicative_expression = elements[2]
    end
  end

  class TreeNode42 < TreeNode
    attr_reader :SPACE, :multiplicative_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @multiplicative_expression = elements[2]
    end
  end

  class TreeNode43 < TreeNode
    attr_reader :additive_expression

    def initialize(text, offset, elements)
      super
      @additive_expression = elements[0]
    end
  end

  class TreeNode44 < TreeNode
    attr_reader :LEFT_OP, :additive_expression

    def initialize(text, offset, elements)
      super
      @LEFT_OP = elements[0]
      @additive_expression = elements[1]
    end
  end

  class TreeNode45 < TreeNode
    attr_reader :RIGHT_OP, :additive_expression

    def initialize(text, offset, elements)
      super
      @RIGHT_OP = elements[0]
      @additive_expression = elements[1]
    end
  end

  class TreeNode46 < TreeNode
    attr_reader :shift_expression

    def initialize(text, offset, elements)
      super
      @shift_expression = elements[0]
    end
  end

  class TreeNode47 < TreeNode
    attr_reader :SPACE, :shift_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @shift_expression = elements[2]
    end
  end

  class TreeNode48 < TreeNode
    attr_reader :SPACE, :shift_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @shift_expression = elements[2]
    end
  end

  class TreeNode49 < TreeNode
    attr_reader :LE_OP, :shift_expression

    def initialize(text, offset, elements)
      super
      @LE_OP = elements[0]
      @shift_expression = elements[1]
    end
  end

  class TreeNode50 < TreeNode
    attr_reader :GE_OP, :shift_expression

    def initialize(text, offset, elements)
      super
      @GE_OP = elements[0]
      @shift_expression = elements[1]
    end
  end

  class TreeNode51 < TreeNode
    attr_reader :relational_expression

    def initialize(text, offset, elements)
      super
      @relational_expression = elements[0]
    end
  end

  class TreeNode52 < TreeNode
    attr_reader :EQ_OP, :relational_expression

    def initialize(text, offset, elements)
      super
      @EQ_OP = elements[0]
      @relational_expression = elements[1]
    end
  end

  class TreeNode53 < TreeNode
    attr_reader :NE_OP, :relational_expression

    def initialize(text, offset, elements)
      super
      @NE_OP = elements[0]
      @relational_expression = elements[1]
    end
  end

  class TreeNode54 < TreeNode
    attr_reader :equality_expression

    def initialize(text, offset, elements)
      super
      @equality_expression = elements[0]
    end
  end

  class TreeNode55 < TreeNode
    attr_reader :SPACE, :equality_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @equality_expression = elements[2]
    end
  end

  class TreeNode56 < TreeNode
    attr_reader :and_expression

    def initialize(text, offset, elements)
      super
      @and_expression = elements[0]
    end
  end

  class TreeNode57 < TreeNode
    attr_reader :SPACE, :and_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @and_expression = elements[2]
    end
  end

  class TreeNode58 < TreeNode
    attr_reader :exclusive_or_expression

    def initialize(text, offset, elements)
      super
      @exclusive_or_expression = elements[0]
    end
  end

  class TreeNode59 < TreeNode
    attr_reader :SPACE, :exclusive_or_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @exclusive_or_expression = elements[2]
    end
  end

  class TreeNode60 < TreeNode
    attr_reader :inclusive_or_expression

    def initialize(text, offset, elements)
      super
      @inclusive_or_expression = elements[0]
    end
  end

  class TreeNode61 < TreeNode
    attr_reader :AND_OP, :inclusive_or_expression

    def initialize(text, offset, elements)
      super
      @AND_OP = elements[0]
      @inclusive_or_expression = elements[1]
    end
  end

  class TreeNode62 < TreeNode
    attr_reader :logical_and_expression

    def initialize(text, offset, elements)
      super
      @logical_and_expression = elements[0]
    end
  end

  class TreeNode63 < TreeNode
    attr_reader :OR_OP, :logical_and_expression

    def initialize(text, offset, elements)
      super
      @OR_OP = elements[0]
      @logical_and_expression = elements[1]
    end
  end

  class TreeNode64 < TreeNode
    attr_reader :logical_or_expression, :SPACE, :expression, :conditional_expression

    def initialize(text, offset, elements)
      super
      @logical_or_expression = elements[0]
      @SPACE = elements[5]
      @expression = elements[3]
      @conditional_expression = elements[6]
    end
  end

  class TreeNode65 < TreeNode
    attr_reader :unary_expression, :assignment_operator, :assignment_expression

    def initialize(text, offset, elements)
      super
      @unary_expression = elements[0]
      @assignment_operator = elements[1]
      @assignment_expression = elements[2]
    end
  end

  class TreeNode66 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode67 < TreeNode
    attr_reader :assignment_expression

    def initialize(text, offset, elements)
      super
      @assignment_expression = elements[0]
    end
  end

  class TreeNode68 < TreeNode
    attr_reader :SPACE, :assignment_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @assignment_expression = elements[2]
    end
  end

  class TreeNode69 < TreeNode
    attr_reader :declaration_specifiers, :SPACE

    def initialize(text, offset, elements)
      super
      @declaration_specifiers = elements[0]
      @SPACE = elements[2]
    end
  end

  class TreeNode70 < TreeNode
    attr_reader :declaration_specifiers, :init_declarator_list, :SPACE

    def initialize(text, offset, elements)
      super
      @declaration_specifiers = elements[0]
      @init_declarator_list = elements[1]
      @SPACE = elements[3]
    end
  end

  class TreeNode71 < TreeNode
    attr_reader :storage_class_specifier, :declaration_specifiers

    def initialize(text, offset, elements)
      super
      @storage_class_specifier = elements[0]
      @declaration_specifiers = elements[1]
    end
  end

  class TreeNode72 < TreeNode
    attr_reader :type_specifier, :declaration_specifiers

    def initialize(text, offset, elements)
      super
      @type_specifier = elements[0]
      @declaration_specifiers = elements[1]
    end
  end

  class TreeNode73 < TreeNode
    attr_reader :type_qualifier, :declaration_specifiers

    def initialize(text, offset, elements)
      super
      @type_qualifier = elements[0]
      @declaration_specifiers = elements[1]
    end
  end

  class TreeNode74 < TreeNode
    attr_reader :function_specifier, :declaration_specifiers

    def initialize(text, offset, elements)
      super
      @function_specifier = elements[0]
      @declaration_specifiers = elements[1]
    end
  end

  class TreeNode75 < TreeNode
    attr_reader :init_declarator

    def initialize(text, offset, elements)
      super
      @init_declarator = elements[0]
    end
  end

  class TreeNode76 < TreeNode
    attr_reader :SPACE, :init_declarator

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @init_declarator = elements[2]
    end
  end

  class TreeNode77 < TreeNode
    attr_reader :declarator, :SPACE, :initializer

    def initialize(text, offset, elements)
      super
      @declarator = elements[0]
      @SPACE = elements[2]
      @initializer = elements[3]
    end
  end

  class TreeNode78 < TreeNode
    attr_reader :struct_or_union, :IDENTIFIER, :SPACE, :struct_declaration_list

    def initialize(text, offset, elements)
      super
      @struct_or_union = elements[0]
      @IDENTIFIER = elements[1]
      @SPACE = elements[6]
      @struct_declaration_list = elements[4]
    end
  end

  class TreeNode79 < TreeNode
    attr_reader :struct_or_union, :SPACE, :struct_declaration_list

    def initialize(text, offset, elements)
      super
      @struct_or_union = elements[0]
      @SPACE = elements[5]
      @struct_declaration_list = elements[3]
    end
  end

  class TreeNode80 < TreeNode
    attr_reader :struct_or_union, :IDENTIFIER

    def initialize(text, offset, elements)
      super
      @struct_or_union = elements[0]
      @IDENTIFIER = elements[1]
    end
  end

  class TreeNode81 < TreeNode
    attr_reader :struct_declaration

    def initialize(text, offset, elements)
      super
      @struct_declaration = elements[0]
    end
  end

  class TreeNode82 < TreeNode
    attr_reader :specifier_qualifier_list, :struct_declarator_list, :SPACE

    def initialize(text, offset, elements)
      super
      @specifier_qualifier_list = elements[0]
      @struct_declarator_list = elements[1]
      @SPACE = elements[3]
    end
  end

  class TreeNode83 < TreeNode
    attr_reader :specifier_qualifier_list, :SPACE

    def initialize(text, offset, elements)
      super
      @specifier_qualifier_list = elements[0]
      @SPACE = elements[2]
    end
  end

  class TreeNode84 < TreeNode
    attr_reader :type_specifier, :specifier_qualifier_list

    def initialize(text, offset, elements)
      super
      @type_specifier = elements[0]
      @specifier_qualifier_list = elements[1]
    end
  end

  class TreeNode85 < TreeNode
    attr_reader :type_qualifier, :specifier_qualifier_list

    def initialize(text, offset, elements)
      super
      @type_qualifier = elements[0]
      @specifier_qualifier_list = elements[1]
    end
  end

  class TreeNode86 < TreeNode
    attr_reader :struct_declarator

    def initialize(text, offset, elements)
      super
      @struct_declarator = elements[0]
    end
  end

  class TreeNode87 < TreeNode
    attr_reader :SPACE, :struct_declarator

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @struct_declarator = elements[2]
    end
  end

  class TreeNode88 < TreeNode
    attr_reader :declarator, :SPACE, :constant_expression

    def initialize(text, offset, elements)
      super
      @declarator = elements[0]
      @SPACE = elements[2]
      @constant_expression = elements[3]
    end
  end

  class TreeNode89 < TreeNode
    attr_reader :SPACE, :constant_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @constant_expression = elements[2]
    end
  end

  class TreeNode90 < TreeNode
    attr_reader :ENUM, :SPACE, :enumerator_list

    def initialize(text, offset, elements)
      super
      @ENUM = elements[0]
      @SPACE = elements[5]
      @enumerator_list = elements[3]
    end
  end

  class TreeNode91 < TreeNode
    attr_reader :ENUM, :IDENTIFIER, :SPACE, :enumerator_list

    def initialize(text, offset, elements)
      super
      @ENUM = elements[0]
      @IDENTIFIER = elements[1]
      @SPACE = elements[6]
      @enumerator_list = elements[4]
    end
  end

  class TreeNode92 < TreeNode
    attr_reader :ENUM, :SPACE, :enumerator_list

    def initialize(text, offset, elements)
      super
      @ENUM = elements[0]
      @SPACE = elements[7]
      @enumerator_list = elements[3]
    end
  end

  class TreeNode93 < TreeNode
    attr_reader :ENUM, :IDENTIFIER, :SPACE, :enumerator_list

    def initialize(text, offset, elements)
      super
      @ENUM = elements[0]
      @IDENTIFIER = elements[1]
      @SPACE = elements[8]
      @enumerator_list = elements[4]
    end
  end

  class TreeNode94 < TreeNode
    attr_reader :ENUM, :IDENTIFIER

    def initialize(text, offset, elements)
      super
      @ENUM = elements[0]
      @IDENTIFIER = elements[1]
    end
  end

  class TreeNode95 < TreeNode
    attr_reader :enumerator

    def initialize(text, offset, elements)
      super
      @enumerator = elements[0]
    end
  end

  class TreeNode96 < TreeNode
    attr_reader :SPACE, :enumerator

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @enumerator = elements[2]
    end
  end

  class TreeNode97 < TreeNode
    attr_reader :IDENTIFIER, :SPACE, :constant_expression

    def initialize(text, offset, elements)
      super
      @IDENTIFIER = elements[0]
      @SPACE = elements[2]
      @constant_expression = elements[3]
    end
  end

  class TreeNode98 < TreeNode
    attr_reader :pointer, :direct_declarator

    def initialize(text, offset, elements)
      super
      @pointer = elements[0]
      @direct_declarator = elements[1]
    end
  end

  class TreeNode99 < TreeNode
    attr_reader :IDENTIFIER

    def initialize(text, offset, elements)
      super
      @IDENTIFIER = elements[0]
    end
  end

  class TreeNode100 < TreeNode
    attr_reader :SPACE, :type_qualifier_list, :assignment_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[5]
      @type_qualifier_list = elements[2]
      @assignment_expression = elements[3]
    end
  end

  class TreeNode101 < TreeNode
    attr_reader :SPACE, :type_qualifier_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @type_qualifier_list = elements[2]
    end
  end

  class TreeNode102 < TreeNode
    attr_reader :SPACE, :assignment_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @assignment_expression = elements[2]
    end
  end

  class TreeNode103 < TreeNode
    attr_reader :SPACE, :STATIC, :type_qualifier_list, :assignment_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[6]
      @STATIC = elements[2]
      @type_qualifier_list = elements[3]
      @assignment_expression = elements[4]
    end
  end

  class TreeNode104 < TreeNode
    attr_reader :SPACE, :type_qualifier_list, :STATIC, :assignment_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[6]
      @type_qualifier_list = elements[2]
      @STATIC = elements[3]
      @assignment_expression = elements[4]
    end
  end

  class TreeNode105 < TreeNode
    attr_reader :SPACE, :type_qualifier_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[6]
      @type_qualifier_list = elements[2]
    end
  end

  class TreeNode106 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[5]
    end
  end

  class TreeNode107 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode108 < TreeNode
    attr_reader :SPACE, :parameter_type_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @parameter_type_list = elements[2]
    end
  end

  class TreeNode109 < TreeNode
    attr_reader :SPACE, :identifier_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @identifier_list = elements[2]
    end
  end

  class TreeNode110 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode111 < TreeNode
    attr_reader :SPACE, :declarator

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @declarator = elements[2]
    end
  end

  class TreeNode112 < TreeNode
    attr_reader :SPACE, :type_qualifier_list, :assignment_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[5]
      @type_qualifier_list = elements[2]
      @assignment_expression = elements[3]
    end
  end

  class TreeNode113 < TreeNode
    attr_reader :SPACE, :type_qualifier_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @type_qualifier_list = elements[2]
    end
  end

  class TreeNode114 < TreeNode
    attr_reader :SPACE, :assignment_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @assignment_expression = elements[2]
    end
  end

  class TreeNode115 < TreeNode
    attr_reader :SPACE, :STATIC, :type_qualifier_list, :assignment_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[6]
      @STATIC = elements[2]
      @type_qualifier_list = elements[3]
      @assignment_expression = elements[4]
    end
  end

  class TreeNode116 < TreeNode
    attr_reader :SPACE, :type_qualifier_list, :STATIC, :assignment_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[6]
      @type_qualifier_list = elements[2]
      @STATIC = elements[3]
      @assignment_expression = elements[4]
    end
  end

  class TreeNode117 < TreeNode
    attr_reader :SPACE, :type_qualifier_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[6]
      @type_qualifier_list = elements[2]
    end
  end

  class TreeNode118 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[5]
    end
  end

  class TreeNode119 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode120 < TreeNode
    attr_reader :SPACE, :parameter_type_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @parameter_type_list = elements[2]
    end
  end

  class TreeNode121 < TreeNode
    attr_reader :SPACE, :identifier_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @identifier_list = elements[2]
    end
  end

  class TreeNode122 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode123 < TreeNode
    attr_reader :SPACE, :type_qualifier_list, :pointer

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @type_qualifier_list = elements[2]
      @pointer = elements[3]
    end
  end

  class TreeNode124 < TreeNode
    attr_reader :SPACE, :pointer

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @pointer = elements[2]
    end
  end

  class TreeNode125 < TreeNode
    attr_reader :SPACE, :type_qualifier_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @type_qualifier_list = elements[2]
    end
  end

  class TreeNode126 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode127 < TreeNode
    attr_reader :type_qualifier

    def initialize(text, offset, elements)
      super
      @type_qualifier = elements[0]
    end
  end

  class TreeNode128 < TreeNode
    attr_reader :parameter_list, :SPACE, :ELLIPSIS

    def initialize(text, offset, elements)
      super
      @parameter_list = elements[0]
      @SPACE = elements[2]
      @ELLIPSIS = elements[3]
    end
  end

  class TreeNode129 < TreeNode
    attr_reader :parameter_declaration

    def initialize(text, offset, elements)
      super
      @parameter_declaration = elements[0]
    end
  end

  class TreeNode130 < TreeNode
    attr_reader :SPACE, :parameter_declaration

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @parameter_declaration = elements[2]
    end
  end

  class TreeNode131 < TreeNode
    attr_reader :declaration_specifiers, :declarator

    def initialize(text, offset, elements)
      super
      @declaration_specifiers = elements[0]
      @declarator = elements[1]
    end
  end

  class TreeNode132 < TreeNode
    attr_reader :declaration_specifiers, :abstract_declarator

    def initialize(text, offset, elements)
      super
      @declaration_specifiers = elements[0]
      @abstract_declarator = elements[1]
    end
  end

  class TreeNode133 < TreeNode
    attr_reader :IDENTIFIER

    def initialize(text, offset, elements)
      super
      @IDENTIFIER = elements[0]
    end
  end

  class TreeNode134 < TreeNode
    attr_reader :SPACE, :IDENTIFIER

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @IDENTIFIER = elements[2]
    end
  end

  class TreeNode135 < TreeNode
    attr_reader :specifier_qualifier_list, :abstract_declarator

    def initialize(text, offset, elements)
      super
      @specifier_qualifier_list = elements[0]
      @abstract_declarator = elements[1]
    end
  end

  class TreeNode136 < TreeNode
    attr_reader :pointer, :direct_abstract_declarator

    def initialize(text, offset, elements)
      super
      @pointer = elements[0]
      @direct_abstract_declarator = elements[1]
    end
  end

  class TreeNode137 < TreeNode
    attr_reader :SPACE, :abstract_declarator

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @abstract_declarator = elements[2]
    end
  end

  class TreeNode138 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode139 < TreeNode
    attr_reader :SPACE, :assignment_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @assignment_expression = elements[2]
    end
  end

  class TreeNode140 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[5]
    end
  end

  class TreeNode141 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode142 < TreeNode
    attr_reader :SPACE, :parameter_type_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @parameter_type_list = elements[2]
    end
  end

  class TreeNode143 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode144 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode145 < TreeNode
    attr_reader :SPACE, :assignment_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @assignment_expression = elements[2]
    end
  end

  class TreeNode146 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[5]
    end
  end

  class TreeNode147 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode148 < TreeNode
    attr_reader :SPACE, :parameter_type_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @parameter_type_list = elements[2]
    end
  end

  class TreeNode149 < TreeNode
    attr_reader :SPACE, :assignment_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @assignment_expression = elements[2]
    end
  end

  class TreeNode150 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode151 < TreeNode
    attr_reader :SPACE, :assignment_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @assignment_expression = elements[2]
    end
  end

  class TreeNode152 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[5]
    end
  end

  class TreeNode153 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode154 < TreeNode
    attr_reader :SPACE, :parameter_type_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @parameter_type_list = elements[2]
    end
  end

  class TreeNode155 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[5]
    end
  end

  class TreeNode156 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode157 < TreeNode
    attr_reader :SPACE, :assignment_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @assignment_expression = elements[2]
    end
  end

  class TreeNode158 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[5]
    end
  end

  class TreeNode159 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode160 < TreeNode
    attr_reader :SPACE, :parameter_type_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @parameter_type_list = elements[2]
    end
  end

  class TreeNode161 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode162 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode163 < TreeNode
    attr_reader :SPACE, :assignment_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @assignment_expression = elements[2]
    end
  end

  class TreeNode164 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[5]
    end
  end

  class TreeNode165 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode166 < TreeNode
    attr_reader :SPACE, :parameter_type_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @parameter_type_list = elements[2]
    end
  end

  class TreeNode167 < TreeNode
    attr_reader :SPACE, :parameter_type_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @parameter_type_list = elements[2]
    end
  end

  class TreeNode168 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode169 < TreeNode
    attr_reader :SPACE, :assignment_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @assignment_expression = elements[2]
    end
  end

  class TreeNode170 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[5]
    end
  end

  class TreeNode171 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode172 < TreeNode
    attr_reader :SPACE, :parameter_type_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @parameter_type_list = elements[2]
    end
  end

  class TreeNode173 < TreeNode
    attr_reader :SPACE, :initializer_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @initializer_list = elements[2]
    end
  end

  class TreeNode174 < TreeNode
    attr_reader :SPACE, :initializer_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[6]
      @initializer_list = elements[2]
    end
  end

  class TreeNode175 < TreeNode
    attr_reader :designation, :initializer

    def initialize(text, offset, elements)
      super
      @designation = elements[0]
      @initializer = elements[1]
    end
  end

  class TreeNode176 < TreeNode
    attr_reader :SPACE, :initializer

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @initializer = elements[2]
    end
  end

  class TreeNode177 < TreeNode
    attr_reader :SPACE, :designation, :initializer

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @designation = elements[2]
      @initializer = elements[3]
    end
  end

  class TreeNode178 < TreeNode
    attr_reader :initializer

    def initialize(text, offset, elements)
      super
      @initializer = elements[0]
    end
  end

  class TreeNode179 < TreeNode
    attr_reader :SPACE, :initializer

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @initializer = elements[2]
    end
  end

  class TreeNode180 < TreeNode
    attr_reader :SPACE, :designation, :initializer

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @designation = elements[2]
      @initializer = elements[3]
    end
  end

  class TreeNode181 < TreeNode
    attr_reader :designator_list, :SPACE

    def initialize(text, offset, elements)
      super
      @designator_list = elements[0]
      @SPACE = elements[2]
    end
  end

  class TreeNode182 < TreeNode
    attr_reader :designator

    def initialize(text, offset, elements)
      super
      @designator = elements[0]
    end
  end

  class TreeNode183 < TreeNode
    attr_reader :SPACE, :constant_expression

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @constant_expression = elements[2]
    end
  end

  class TreeNode184 < TreeNode
    attr_reader :SPACE, :IDENTIFIER

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
      @IDENTIFIER = elements[2]
    end
  end

  class TreeNode185 < TreeNode
    attr_reader :IDENTIFIER, :SPACE, :statement

    def initialize(text, offset, elements)
      super
      @IDENTIFIER = elements[0]
      @SPACE = elements[2]
      @statement = elements[3]
    end
  end

  class TreeNode186 < TreeNode
    attr_reader :CASE, :constant_expression, :SPACE, :statement

    def initialize(text, offset, elements)
      super
      @CASE = elements[0]
      @constant_expression = elements[1]
      @SPACE = elements[3]
      @statement = elements[4]
    end
  end

  class TreeNode187 < TreeNode
    attr_reader :DEFAULT, :SPACE, :statement

    def initialize(text, offset, elements)
      super
      @DEFAULT = elements[0]
      @SPACE = elements[2]
      @statement = elements[3]
    end
  end

  class TreeNode188 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode189 < TreeNode
    attr_reader :SPACE, :block_item_list

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
      @block_item_list = elements[2]
    end
  end

  class TreeNode190 < TreeNode
    attr_reader :block_item

    def initialize(text, offset, elements)
      super
      @block_item = elements[0]
    end
  end

  class TreeNode191 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode192 < TreeNode
    attr_reader :expression, :SPACE

    def initialize(text, offset, elements)
      super
      @expression = elements[0]
      @SPACE = elements[2]
    end
  end

  class TreeNode193 < TreeNode
    attr_reader :IF, :SPACE, :expression, :statement, :ELSE

    def initialize(text, offset, elements)
      super
      @IF = elements[0]
      @SPACE = elements[5]
      @expression = elements[3]
      @statement = elements[8]
      @ELSE = elements[7]
    end
  end

  class TreeNode194 < TreeNode
    attr_reader :IF, :SPACE, :expression, :statement

    def initialize(text, offset, elements)
      super
      @IF = elements[0]
      @SPACE = elements[5]
      @expression = elements[3]
      @statement = elements[6]
    end
  end

  class TreeNode195 < TreeNode
    attr_reader :SWITCH, :SPACE, :expression, :statement

    def initialize(text, offset, elements)
      super
      @SWITCH = elements[0]
      @SPACE = elements[5]
      @expression = elements[3]
      @statement = elements[6]
    end
  end

  class TreeNode196 < TreeNode
    attr_reader :WHILE, :SPACE, :expression, :statement

    def initialize(text, offset, elements)
      super
      @WHILE = elements[0]
      @SPACE = elements[5]
      @expression = elements[3]
      @statement = elements[6]
    end
  end

  class TreeNode197 < TreeNode
    attr_reader :DO, :statement, :WHILE, :SPACE, :expression

    def initialize(text, offset, elements)
      super
      @DO = elements[0]
      @statement = elements[1]
      @WHILE = elements[2]
      @SPACE = elements[9]
      @expression = elements[5]
    end
  end

  class TreeNode198 < TreeNode
    attr_reader :FOR, :SPACE, :expression_statement, :statement

    def initialize(text, offset, elements)
      super
      @FOR = elements[0]
      @SPACE = elements[6]
      @expression_statement = elements[4]
      @statement = elements[7]
    end
  end

  class TreeNode199 < TreeNode
    attr_reader :FOR, :SPACE, :expression_statement, :expression, :statement

    def initialize(text, offset, elements)
      super
      @FOR = elements[0]
      @SPACE = elements[7]
      @expression_statement = elements[4]
      @expression = elements[5]
      @statement = elements[8]
    end
  end

  class TreeNode200 < TreeNode
    attr_reader :FOR, :SPACE, :declaration, :expression_statement, :statement

    def initialize(text, offset, elements)
      super
      @FOR = elements[0]
      @SPACE = elements[6]
      @declaration = elements[3]
      @expression_statement = elements[4]
      @statement = elements[7]
    end
  end

  class TreeNode201 < TreeNode
    attr_reader :FOR, :SPACE, :declaration, :expression_statement, :expression, :statement

    def initialize(text, offset, elements)
      super
      @FOR = elements[0]
      @SPACE = elements[7]
      @declaration = elements[3]
      @expression_statement = elements[4]
      @expression = elements[5]
      @statement = elements[8]
    end
  end

  class TreeNode202 < TreeNode
    attr_reader :GOTO, :IDENTIFIER, :SPACE

    def initialize(text, offset, elements)
      super
      @GOTO = elements[0]
      @IDENTIFIER = elements[1]
      @SPACE = elements[3]
    end
  end

  class TreeNode203 < TreeNode
    attr_reader :CONTINUE, :SPACE

    def initialize(text, offset, elements)
      super
      @CONTINUE = elements[0]
      @SPACE = elements[2]
    end
  end

  class TreeNode204 < TreeNode
    attr_reader :BREAK, :SPACE

    def initialize(text, offset, elements)
      super
      @BREAK = elements[0]
      @SPACE = elements[2]
    end
  end

  class TreeNode205 < TreeNode
    attr_reader :RETURN, :SPACE

    def initialize(text, offset, elements)
      super
      @RETURN = elements[0]
      @SPACE = elements[2]
    end
  end

  class TreeNode206 < TreeNode
    attr_reader :RETURN, :expression, :SPACE

    def initialize(text, offset, elements)
      super
      @RETURN = elements[0]
      @expression = elements[1]
      @SPACE = elements[3]
    end
  end

  class TreeNode207 < TreeNode
    attr_reader :external_declaration

    def initialize(text, offset, elements)
      super
      @external_declaration = elements[0]
    end
  end

  class TreeNode208 < TreeNode
    attr_reader :declaration_specifiers, :declarator, :declaration_list, :compound_statement

    def initialize(text, offset, elements)
      super
      @declaration_specifiers = elements[0]
      @declarator = elements[1]
      @declaration_list = elements[2]
      @compound_statement = elements[3]
    end
  end

  class TreeNode209 < TreeNode
    attr_reader :declaration_specifiers, :declarator, :compound_statement

    def initialize(text, offset, elements)
      super
      @declaration_specifiers = elements[0]
      @declarator = elements[1]
      @compound_statement = elements[2]
    end
  end

  class TreeNode210 < TreeNode
    attr_reader :declaration

    def initialize(text, offset, elements)
      super
      @declaration = elements[0]
    end
  end

  class TreeNode211 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode212 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode213 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode214 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode215 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode216 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode217 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode218 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode219 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode220 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode221 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode222 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode223 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode224 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode225 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode226 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode227 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode228 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode229 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode230 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode231 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode232 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode233 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode234 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode235 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode236 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode237 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode238 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode239 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode240 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode241 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode242 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode243 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode244 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode245 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode246 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode247 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode248 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode249 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[2]
    end
  end

  class TreeNode250 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
    end
  end

  class TreeNode251 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
    end
  end

  class TreeNode252 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode253 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[5]
    end
  end

  class TreeNode254 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[5]
    end
  end

  class TreeNode255 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[5]
    end
  end

  class TreeNode256 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[7]
    end
  end

  class TreeNode257 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[7]
    end
  end

  class TreeNode258 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode259 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[3]
    end
  end

  class TreeNode260 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[4]
    end
  end

  class TreeNode261 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode262 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode263 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode264 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode265 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode266 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode267 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode268 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode269 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode270 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode271 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode272 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode273 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode274 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode275 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode276 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode277 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode278 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode279 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode280 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode281 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode282 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  class TreeNode283 < TreeNode
    attr_reader :SPACE

    def initialize(text, offset, elements)
      super
      @SPACE = elements[1]
    end
  end

  ParseError = Class.new(StandardError)

  FAILURE = Object.new

  module Grammar
    def _read_start
      address0, index0 = FAILURE, @offset
      cached = @cache[:start][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_SPACE
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_translation_unit
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode1.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        address0 = _read_SPACE
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:start][index0] = [address0, @offset]
      return address0
    end

    def _read_primary_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:primary_expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      address0 = _read_IDENTIFIER
      if address0 == FAILURE
        @offset = index1
        address0 = _read_CONSTANT
        if address0 == FAILURE
          @offset = index1
          address0 = _read_STRING_LITERAL
          if address0 == FAILURE
            @offset = index1
            index2, elements0 = @offset, []
            address1 = FAILURE
            chunk0 = nil
            if @offset < @input_size
              chunk0 = @input[@offset...@offset + 1]
            end
            if chunk0 == "("
              address1 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address1 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "'('"
              end
            end
            unless address1 == FAILURE
              elements0 << address1
              address2 = FAILURE
              address2 = _read_SPACE
              unless address2 == FAILURE
                elements0 << address2
                address3 = FAILURE
                address3 = _read_compound_statement
                unless address3 == FAILURE
                  elements0 << address3
                  address4 = FAILURE
                  chunk1 = nil
                  if @offset < @input_size
                    chunk1 = @input[@offset...@offset + 1]
                  end
                  if chunk1 == ")"
                    address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address4 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "')'"
                    end
                  end
                  unless address4 == FAILURE
                    elements0 << address4
                    address5 = FAILURE
                    address5 = _read_SPACE
                    unless address5 == FAILURE
                      elements0 << address5
                    else
                      elements0 = nil
                      @offset = index2
                    end
                  else
                    elements0 = nil
                    @offset = index2
                  end
                else
                  elements0 = nil
                  @offset = index2
                end
              else
                elements0 = nil
                @offset = index2
              end
            else
              elements0 = nil
              @offset = index2
            end
            if elements0.nil?
              address0 = FAILURE
            else
              address0 = TreeNode2.new(@input[index2...@offset], index2, elements0)
              @offset = @offset
            end
            if address0 == FAILURE
              @offset = index1
              index3, elements1 = @offset, []
              address6 = FAILURE
              chunk2 = nil
              if @offset < @input_size
                chunk2 = @input[@offset...@offset + 1]
              end
              if chunk2 == "("
                address6 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address6 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "'('"
                end
              end
              unless address6 == FAILURE
                elements1 << address6
                address7 = FAILURE
                address7 = _read_SPACE
                unless address7 == FAILURE
                  elements1 << address7
                  address8 = FAILURE
                  address8 = _read_expression
                  unless address8 == FAILURE
                    elements1 << address8
                    address9 = FAILURE
                    chunk3 = nil
                    if @offset < @input_size
                      chunk3 = @input[@offset...@offset + 1]
                    end
                    if chunk3 == ")"
                      address9 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address9 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "')'"
                      end
                    end
                    unless address9 == FAILURE
                      elements1 << address9
                      address10 = FAILURE
                      address10 = _read_SPACE
                      unless address10 == FAILURE
                        elements1 << address10
                      else
                        elements1 = nil
                        @offset = index3
                      end
                    else
                      elements1 = nil
                      @offset = index3
                    end
                  else
                    elements1 = nil
                    @offset = index3
                  end
                else
                  elements1 = nil
                  @offset = index3
                end
              else
                elements1 = nil
                @offset = index3
              end
              if elements1.nil?
                address0 = FAILURE
              else
                address0 = TreeNode3.new(@input[index3...@offset], index3, elements1)
                @offset = @offset
              end
              if address0 == FAILURE
                @offset = index1
              end
            end
          end
        end
      end
      @cache[:primary_expression][index0] = [address0, @offset]
      return address0
    end

    def _read_postfix_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:postfix_expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_primary_expression
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index3, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index4 = @offset
          index5, elements2 = @offset, []
          address4 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == "["
            address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address4 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "'['"
            end
          end
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_SPACE
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              address6 = _read_expression
              unless address6 == FAILURE
                elements2 << address6
                address7 = FAILURE
                chunk1 = nil
                if @offset < @input_size
                  chunk1 = @input[@offset...@offset + 1]
                end
                if chunk1 == "]"
                  address7 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address7 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "']'"
                  end
                end
                unless address7 == FAILURE
                  elements2 << address7
                  address8 = FAILURE
                  address8 = _read_SPACE
                  unless address8 == FAILURE
                    elements2 << address8
                  else
                    elements2 = nil
                    @offset = index5
                  end
                else
                  elements2 = nil
                  @offset = index5
                end
              else
                elements2 = nil
                @offset = index5
              end
            else
              elements2 = nil
              @offset = index5
            end
          else
            elements2 = nil
            @offset = index5
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode5.new(@input[index5...@offset], index5, elements2)
            @offset = @offset
          end
          if address3 == FAILURE
            @offset = index4
            index6, elements3 = @offset, []
            address9 = FAILURE
            chunk2 = nil
            if @offset < @input_size
              chunk2 = @input[@offset...@offset + 1]
            end
            if chunk2 == "("
              address9 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address9 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "'('"
              end
            end
            unless address9 == FAILURE
              elements3 << address9
              address10 = FAILURE
              address10 = _read_SPACE
              unless address10 == FAILURE
                elements3 << address10
                address11 = FAILURE
                chunk3 = nil
                if @offset < @input_size
                  chunk3 = @input[@offset...@offset + 1]
                end
                if chunk3 == ")"
                  address11 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address11 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "')'"
                  end
                end
                unless address11 == FAILURE
                  elements3 << address11
                  address12 = FAILURE
                  address12 = _read_SPACE
                  unless address12 == FAILURE
                    elements3 << address12
                  else
                    elements3 = nil
                    @offset = index6
                  end
                else
                  elements3 = nil
                  @offset = index6
                end
              else
                elements3 = nil
                @offset = index6
              end
            else
              elements3 = nil
              @offset = index6
            end
            if elements3.nil?
              address3 = FAILURE
            else
              address3 = TreeNode6.new(@input[index6...@offset], index6, elements3)
              @offset = @offset
            end
            if address3 == FAILURE
              @offset = index4
              index7, elements4 = @offset, []
              address13 = FAILURE
              chunk4 = nil
              if @offset < @input_size
                chunk4 = @input[@offset...@offset + 1]
              end
              if chunk4 == "("
                address13 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address13 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "'('"
                end
              end
              unless address13 == FAILURE
                elements4 << address13
                address14 = FAILURE
                address14 = _read_SPACE
                unless address14 == FAILURE
                  elements4 << address14
                  address15 = FAILURE
                  address15 = _read_argument_expression_list
                  unless address15 == FAILURE
                    elements4 << address15
                    address16 = FAILURE
                    chunk5 = nil
                    if @offset < @input_size
                      chunk5 = @input[@offset...@offset + 1]
                    end
                    if chunk5 == ")"
                      address16 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address16 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "')'"
                      end
                    end
                    unless address16 == FAILURE
                      elements4 << address16
                      address17 = FAILURE
                      address17 = _read_SPACE
                      unless address17 == FAILURE
                        elements4 << address17
                      else
                        elements4 = nil
                        @offset = index7
                      end
                    else
                      elements4 = nil
                      @offset = index7
                    end
                  else
                    elements4 = nil
                    @offset = index7
                  end
                else
                  elements4 = nil
                  @offset = index7
                end
              else
                elements4 = nil
                @offset = index7
              end
              if elements4.nil?
                address3 = FAILURE
              else
                address3 = TreeNode7.new(@input[index7...@offset], index7, elements4)
                @offset = @offset
              end
              if address3 == FAILURE
                @offset = index4
                index8, elements5 = @offset, []
                address18 = FAILURE
                chunk6 = nil
                if @offset < @input_size
                  chunk6 = @input[@offset...@offset + 1]
                end
                if chunk6 == "."
                  address18 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address18 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "'.'"
                  end
                end
                unless address18 == FAILURE
                  elements5 << address18
                  address19 = FAILURE
                  address19 = _read_SPACE
                  unless address19 == FAILURE
                    elements5 << address19
                    address20 = FAILURE
                    address20 = _read_IDENTIFIER
                    unless address20 == FAILURE
                      elements5 << address20
                    else
                      elements5 = nil
                      @offset = index8
                    end
                  else
                    elements5 = nil
                    @offset = index8
                  end
                else
                  elements5 = nil
                  @offset = index8
                end
                if elements5.nil?
                  address3 = FAILURE
                else
                  address3 = TreeNode8.new(@input[index8...@offset], index8, elements5)
                  @offset = @offset
                end
                if address3 == FAILURE
                  @offset = index4
                  index9, elements6 = @offset, []
                  address21 = FAILURE
                  address21 = _read_PTR_OP
                  unless address21 == FAILURE
                    elements6 << address21
                    address22 = FAILURE
                    address22 = _read_IDENTIFIER
                    unless address22 == FAILURE
                      elements6 << address22
                    else
                      elements6 = nil
                      @offset = index9
                    end
                  else
                    elements6 = nil
                    @offset = index9
                  end
                  if elements6.nil?
                    address3 = FAILURE
                  else
                    address3 = TreeNode9.new(@input[index9...@offset], index9, elements6)
                    @offset = @offset
                  end
                  if address3 == FAILURE
                    @offset = index4
                    address3 = _read_INC_OP
                    if address3 == FAILURE
                      @offset = index4
                      address3 = _read_DEC_OP
                      if address3 == FAILURE
                        @offset = index4
                      end
                    end
                  end
                end
              end
            end
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode4.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index10, elements7 = @offset, []
        address23 = FAILURE
        chunk7 = nil
        if @offset < @input_size
          chunk7 = @input[@offset...@offset + 1]
        end
        if chunk7 == "("
          address23 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address23 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "'('"
          end
        end
        unless address23 == FAILURE
          elements7 << address23
          address24 = FAILURE
          address24 = _read_SPACE
          unless address24 == FAILURE
            elements7 << address24
            address25 = FAILURE
            address25 = _read_type_name
            unless address25 == FAILURE
              elements7 << address25
              address26 = FAILURE
              chunk8 = nil
              if @offset < @input_size
                chunk8 = @input[@offset...@offset + 1]
              end
              if chunk8 == ")"
                address26 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address26 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "')'"
                end
              end
              unless address26 == FAILURE
                elements7 << address26
                address27 = FAILURE
                address27 = _read_SPACE
                unless address27 == FAILURE
                  elements7 << address27
                  address28 = FAILURE
                  chunk9 = nil
                  if @offset < @input_size
                    chunk9 = @input[@offset...@offset + 1]
                  end
                  if chunk9 == "{"
                    address28 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address28 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "'{'"
                    end
                  end
                  unless address28 == FAILURE
                    elements7 << address28
                    address29 = FAILURE
                    address29 = _read_SPACE
                    unless address29 == FAILURE
                      elements7 << address29
                      address30 = FAILURE
                      address30 = _read_initializer_list
                      unless address30 == FAILURE
                        elements7 << address30
                        address31 = FAILURE
                        chunk10 = nil
                        if @offset < @input_size
                          chunk10 = @input[@offset...@offset + 1]
                        end
                        if chunk10 == "}"
                          address31 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address31 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "'}'"
                          end
                        end
                        unless address31 == FAILURE
                          elements7 << address31
                          address32 = FAILURE
                          address32 = _read_SPACE
                          unless address32 == FAILURE
                            elements7 << address32
                            address33 = FAILURE
                            remaining1, index11, elements8, address34 = 0, @offset, [], true
                            until address34 == FAILURE
                              index12 = @offset
                              index13, elements9 = @offset, []
                              address35 = FAILURE
                              chunk11 = nil
                              if @offset < @input_size
                                chunk11 = @input[@offset...@offset + 1]
                              end
                              if chunk11 == "["
                                address35 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address35 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "'['"
                                end
                              end
                              unless address35 == FAILURE
                                elements9 << address35
                                address36 = FAILURE
                                address36 = _read_SPACE
                                unless address36 == FAILURE
                                  elements9 << address36
                                  address37 = FAILURE
                                  address37 = _read_expression
                                  unless address37 == FAILURE
                                    elements9 << address37
                                    address38 = FAILURE
                                    chunk12 = nil
                                    if @offset < @input_size
                                      chunk12 = @input[@offset...@offset + 1]
                                    end
                                    if chunk12 == "]"
                                      address38 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address38 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "']'"
                                      end
                                    end
                                    unless address38 == FAILURE
                                      elements9 << address38
                                      address39 = FAILURE
                                      address39 = _read_SPACE
                                      unless address39 == FAILURE
                                        elements9 << address39
                                      else
                                        elements9 = nil
                                        @offset = index13
                                      end
                                    else
                                      elements9 = nil
                                      @offset = index13
                                    end
                                  else
                                    elements9 = nil
                                    @offset = index13
                                  end
                                else
                                  elements9 = nil
                                  @offset = index13
                                end
                              else
                                elements9 = nil
                                @offset = index13
                              end
                              if elements9.nil?
                                address34 = FAILURE
                              else
                                address34 = TreeNode11.new(@input[index13...@offset], index13, elements9)
                                @offset = @offset
                              end
                              if address34 == FAILURE
                                @offset = index12
                                index14, elements10 = @offset, []
                                address40 = FAILURE
                                chunk13 = nil
                                if @offset < @input_size
                                  chunk13 = @input[@offset...@offset + 1]
                                end
                                if chunk13 == "("
                                  address40 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address40 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "'('"
                                  end
                                end
                                unless address40 == FAILURE
                                  elements10 << address40
                                  address41 = FAILURE
                                  address41 = _read_SPACE
                                  unless address41 == FAILURE
                                    elements10 << address41
                                    address42 = FAILURE
                                    chunk14 = nil
                                    if @offset < @input_size
                                      chunk14 = @input[@offset...@offset + 1]
                                    end
                                    if chunk14 == ")"
                                      address42 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address42 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "')'"
                                      end
                                    end
                                    unless address42 == FAILURE
                                      elements10 << address42
                                      address43 = FAILURE
                                      address43 = _read_SPACE
                                      unless address43 == FAILURE
                                        elements10 << address43
                                      else
                                        elements10 = nil
                                        @offset = index14
                                      end
                                    else
                                      elements10 = nil
                                      @offset = index14
                                    end
                                  else
                                    elements10 = nil
                                    @offset = index14
                                  end
                                else
                                  elements10 = nil
                                  @offset = index14
                                end
                                if elements10.nil?
                                  address34 = FAILURE
                                else
                                  address34 = TreeNode12.new(@input[index14...@offset], index14, elements10)
                                  @offset = @offset
                                end
                                if address34 == FAILURE
                                  @offset = index12
                                  index15, elements11 = @offset, []
                                  address44 = FAILURE
                                  chunk15 = nil
                                  if @offset < @input_size
                                    chunk15 = @input[@offset...@offset + 1]
                                  end
                                  if chunk15 == "("
                                    address44 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                    @offset = @offset + 1
                                  else
                                    address44 = FAILURE
                                    if @offset > @failure
                                      @failure = @offset
                                      @expected = []
                                    end
                                    if @offset == @failure
                                      @expected << "'('"
                                    end
                                  end
                                  unless address44 == FAILURE
                                    elements11 << address44
                                    address45 = FAILURE
                                    address45 = _read_SPACE
                                    unless address45 == FAILURE
                                      elements11 << address45
                                      address46 = FAILURE
                                      address46 = _read_argument_expression_list
                                      unless address46 == FAILURE
                                        elements11 << address46
                                        address47 = FAILURE
                                        chunk16 = nil
                                        if @offset < @input_size
                                          chunk16 = @input[@offset...@offset + 1]
                                        end
                                        if chunk16 == ")"
                                          address47 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                          @offset = @offset + 1
                                        else
                                          address47 = FAILURE
                                          if @offset > @failure
                                            @failure = @offset
                                            @expected = []
                                          end
                                          if @offset == @failure
                                            @expected << "')'"
                                          end
                                        end
                                        unless address47 == FAILURE
                                          elements11 << address47
                                          address48 = FAILURE
                                          address48 = _read_SPACE
                                          unless address48 == FAILURE
                                            elements11 << address48
                                          else
                                            elements11 = nil
                                            @offset = index15
                                          end
                                        else
                                          elements11 = nil
                                          @offset = index15
                                        end
                                      else
                                        elements11 = nil
                                        @offset = index15
                                      end
                                    else
                                      elements11 = nil
                                      @offset = index15
                                    end
                                  else
                                    elements11 = nil
                                    @offset = index15
                                  end
                                  if elements11.nil?
                                    address34 = FAILURE
                                  else
                                    address34 = TreeNode13.new(@input[index15...@offset], index15, elements11)
                                    @offset = @offset
                                  end
                                  if address34 == FAILURE
                                    @offset = index12
                                    index16, elements12 = @offset, []
                                    address49 = FAILURE
                                    chunk17 = nil
                                    if @offset < @input_size
                                      chunk17 = @input[@offset...@offset + 1]
                                    end
                                    if chunk17 == "."
                                      address49 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address49 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "'.'"
                                      end
                                    end
                                    unless address49 == FAILURE
                                      elements12 << address49
                                      address50 = FAILURE
                                      address50 = _read_SPACE
                                      unless address50 == FAILURE
                                        elements12 << address50
                                        address51 = FAILURE
                                        address51 = _read_IDENTIFIER
                                        unless address51 == FAILURE
                                          elements12 << address51
                                        else
                                          elements12 = nil
                                          @offset = index16
                                        end
                                      else
                                        elements12 = nil
                                        @offset = index16
                                      end
                                    else
                                      elements12 = nil
                                      @offset = index16
                                    end
                                    if elements12.nil?
                                      address34 = FAILURE
                                    else
                                      address34 = TreeNode14.new(@input[index16...@offset], index16, elements12)
                                      @offset = @offset
                                    end
                                    if address34 == FAILURE
                                      @offset = index12
                                      index17, elements13 = @offset, []
                                      address52 = FAILURE
                                      address52 = _read_PTR_OP
                                      unless address52 == FAILURE
                                        elements13 << address52
                                        address53 = FAILURE
                                        address53 = _read_IDENTIFIER
                                        unless address53 == FAILURE
                                          elements13 << address53
                                        else
                                          elements13 = nil
                                          @offset = index17
                                        end
                                      else
                                        elements13 = nil
                                        @offset = index17
                                      end
                                      if elements13.nil?
                                        address34 = FAILURE
                                      else
                                        address34 = TreeNode15.new(@input[index17...@offset], index17, elements13)
                                        @offset = @offset
                                      end
                                      if address34 == FAILURE
                                        @offset = index12
                                        address34 = _read_INC_OP
                                        if address34 == FAILURE
                                          @offset = index12
                                          address34 = _read_DEC_OP
                                          if address34 == FAILURE
                                            @offset = index12
                                          end
                                        end
                                      end
                                    end
                                  end
                                end
                              end
                              unless address34 == FAILURE
                                elements8 << address34
                                remaining1 -= 1
                              end
                            end
                            if remaining1 <= 0
                              address33 = TreeNode.new(@input[index11...@offset], index11, elements8)
                              @offset = @offset
                            else
                              address33 = FAILURE
                            end
                            unless address33 == FAILURE
                              elements7 << address33
                            else
                              elements7 = nil
                              @offset = index10
                            end
                          else
                            elements7 = nil
                            @offset = index10
                          end
                        else
                          elements7 = nil
                          @offset = index10
                        end
                      else
                        elements7 = nil
                        @offset = index10
                      end
                    else
                      elements7 = nil
                      @offset = index10
                    end
                  else
                    elements7 = nil
                    @offset = index10
                  end
                else
                  elements7 = nil
                  @offset = index10
                end
              else
                elements7 = nil
                @offset = index10
              end
            else
              elements7 = nil
              @offset = index10
            end
          else
            elements7 = nil
            @offset = index10
          end
        else
          elements7 = nil
          @offset = index10
        end
        if elements7.nil?
          address0 = FAILURE
        else
          address0 = TreeNode10.new(@input[index10...@offset], index10, elements7)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
          index18, elements14 = @offset, []
          address54 = FAILURE
          chunk18 = nil
          if @offset < @input_size
            chunk18 = @input[@offset...@offset + 1]
          end
          if chunk18 == "("
            address54 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address54 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "'('"
            end
          end
          unless address54 == FAILURE
            elements14 << address54
            address55 = FAILURE
            address55 = _read_SPACE
            unless address55 == FAILURE
              elements14 << address55
              address56 = FAILURE
              address56 = _read_type_name
              unless address56 == FAILURE
                elements14 << address56
                address57 = FAILURE
                chunk19 = nil
                if @offset < @input_size
                  chunk19 = @input[@offset...@offset + 1]
                end
                if chunk19 == ")"
                  address57 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address57 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "')'"
                  end
                end
                unless address57 == FAILURE
                  elements14 << address57
                  address58 = FAILURE
                  address58 = _read_SPACE
                  unless address58 == FAILURE
                    elements14 << address58
                    address59 = FAILURE
                    chunk20 = nil
                    if @offset < @input_size
                      chunk20 = @input[@offset...@offset + 1]
                    end
                    if chunk20 == "{"
                      address59 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address59 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "'{'"
                      end
                    end
                    unless address59 == FAILURE
                      elements14 << address59
                      address60 = FAILURE
                      address60 = _read_SPACE
                      unless address60 == FAILURE
                        elements14 << address60
                        address61 = FAILURE
                        address61 = _read_initializer_list
                        unless address61 == FAILURE
                          elements14 << address61
                          address62 = FAILURE
                          chunk21 = nil
                          if @offset < @input_size
                            chunk21 = @input[@offset...@offset + 1]
                          end
                          if chunk21 == ","
                            address62 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address62 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "','"
                            end
                          end
                          unless address62 == FAILURE
                            elements14 << address62
                            address63 = FAILURE
                            address63 = _read_SPACE
                            unless address63 == FAILURE
                              elements14 << address63
                              address64 = FAILURE
                              chunk22 = nil
                              if @offset < @input_size
                                chunk22 = @input[@offset...@offset + 1]
                              end
                              if chunk22 == "}"
                                address64 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address64 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "'}'"
                                end
                              end
                              unless address64 == FAILURE
                                elements14 << address64
                                address65 = FAILURE
                                address65 = _read_SPACE
                                unless address65 == FAILURE
                                  elements14 << address65
                                  address66 = FAILURE
                                  remaining2, index19, elements15, address67 = 0, @offset, [], true
                                  until address67 == FAILURE
                                    index20 = @offset
                                    index21, elements16 = @offset, []
                                    address68 = FAILURE
                                    chunk23 = nil
                                    if @offset < @input_size
                                      chunk23 = @input[@offset...@offset + 1]
                                    end
                                    if chunk23 == "["
                                      address68 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address68 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "'['"
                                      end
                                    end
                                    unless address68 == FAILURE
                                      elements16 << address68
                                      address69 = FAILURE
                                      address69 = _read_SPACE
                                      unless address69 == FAILURE
                                        elements16 << address69
                                        address70 = FAILURE
                                        address70 = _read_expression
                                        unless address70 == FAILURE
                                          elements16 << address70
                                          address71 = FAILURE
                                          chunk24 = nil
                                          if @offset < @input_size
                                            chunk24 = @input[@offset...@offset + 1]
                                          end
                                          if chunk24 == "]"
                                            address71 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                            @offset = @offset + 1
                                          else
                                            address71 = FAILURE
                                            if @offset > @failure
                                              @failure = @offset
                                              @expected = []
                                            end
                                            if @offset == @failure
                                              @expected << "']'"
                                            end
                                          end
                                          unless address71 == FAILURE
                                            elements16 << address71
                                            address72 = FAILURE
                                            address72 = _read_SPACE
                                            unless address72 == FAILURE
                                              elements16 << address72
                                            else
                                              elements16 = nil
                                              @offset = index21
                                            end
                                          else
                                            elements16 = nil
                                            @offset = index21
                                          end
                                        else
                                          elements16 = nil
                                          @offset = index21
                                        end
                                      else
                                        elements16 = nil
                                        @offset = index21
                                      end
                                    else
                                      elements16 = nil
                                      @offset = index21
                                    end
                                    if elements16.nil?
                                      address67 = FAILURE
                                    else
                                      address67 = TreeNode17.new(@input[index21...@offset], index21, elements16)
                                      @offset = @offset
                                    end
                                    if address67 == FAILURE
                                      @offset = index20
                                      index22, elements17 = @offset, []
                                      address73 = FAILURE
                                      chunk25 = nil
                                      if @offset < @input_size
                                        chunk25 = @input[@offset...@offset + 1]
                                      end
                                      if chunk25 == "("
                                        address73 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                        @offset = @offset + 1
                                      else
                                        address73 = FAILURE
                                        if @offset > @failure
                                          @failure = @offset
                                          @expected = []
                                        end
                                        if @offset == @failure
                                          @expected << "'('"
                                        end
                                      end
                                      unless address73 == FAILURE
                                        elements17 << address73
                                        address74 = FAILURE
                                        address74 = _read_SPACE
                                        unless address74 == FAILURE
                                          elements17 << address74
                                          address75 = FAILURE
                                          chunk26 = nil
                                          if @offset < @input_size
                                            chunk26 = @input[@offset...@offset + 1]
                                          end
                                          if chunk26 == ")"
                                            address75 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                            @offset = @offset + 1
                                          else
                                            address75 = FAILURE
                                            if @offset > @failure
                                              @failure = @offset
                                              @expected = []
                                            end
                                            if @offset == @failure
                                              @expected << "')'"
                                            end
                                          end
                                          unless address75 == FAILURE
                                            elements17 << address75
                                            address76 = FAILURE
                                            address76 = _read_SPACE
                                            unless address76 == FAILURE
                                              elements17 << address76
                                            else
                                              elements17 = nil
                                              @offset = index22
                                            end
                                          else
                                            elements17 = nil
                                            @offset = index22
                                          end
                                        else
                                          elements17 = nil
                                          @offset = index22
                                        end
                                      else
                                        elements17 = nil
                                        @offset = index22
                                      end
                                      if elements17.nil?
                                        address67 = FAILURE
                                      else
                                        address67 = TreeNode18.new(@input[index22...@offset], index22, elements17)
                                        @offset = @offset
                                      end
                                      if address67 == FAILURE
                                        @offset = index20
                                        index23, elements18 = @offset, []
                                        address77 = FAILURE
                                        chunk27 = nil
                                        if @offset < @input_size
                                          chunk27 = @input[@offset...@offset + 1]
                                        end
                                        if chunk27 == "("
                                          address77 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                          @offset = @offset + 1
                                        else
                                          address77 = FAILURE
                                          if @offset > @failure
                                            @failure = @offset
                                            @expected = []
                                          end
                                          if @offset == @failure
                                            @expected << "'('"
                                          end
                                        end
                                        unless address77 == FAILURE
                                          elements18 << address77
                                          address78 = FAILURE
                                          address78 = _read_SPACE
                                          unless address78 == FAILURE
                                            elements18 << address78
                                            address79 = FAILURE
                                            address79 = _read_argument_expression_list
                                            unless address79 == FAILURE
                                              elements18 << address79
                                              address80 = FAILURE
                                              chunk28 = nil
                                              if @offset < @input_size
                                                chunk28 = @input[@offset...@offset + 1]
                                              end
                                              if chunk28 == ")"
                                                address80 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                                @offset = @offset + 1
                                              else
                                                address80 = FAILURE
                                                if @offset > @failure
                                                  @failure = @offset
                                                  @expected = []
                                                end
                                                if @offset == @failure
                                                  @expected << "')'"
                                                end
                                              end
                                              unless address80 == FAILURE
                                                elements18 << address80
                                                address81 = FAILURE
                                                address81 = _read_SPACE
                                                unless address81 == FAILURE
                                                  elements18 << address81
                                                else
                                                  elements18 = nil
                                                  @offset = index23
                                                end
                                              else
                                                elements18 = nil
                                                @offset = index23
                                              end
                                            else
                                              elements18 = nil
                                              @offset = index23
                                            end
                                          else
                                            elements18 = nil
                                            @offset = index23
                                          end
                                        else
                                          elements18 = nil
                                          @offset = index23
                                        end
                                        if elements18.nil?
                                          address67 = FAILURE
                                        else
                                          address67 = TreeNode19.new(@input[index23...@offset], index23, elements18)
                                          @offset = @offset
                                        end
                                        if address67 == FAILURE
                                          @offset = index20
                                          index24, elements19 = @offset, []
                                          address82 = FAILURE
                                          chunk29 = nil
                                          if @offset < @input_size
                                            chunk29 = @input[@offset...@offset + 1]
                                          end
                                          if chunk29 == "."
                                            address82 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                            @offset = @offset + 1
                                          else
                                            address82 = FAILURE
                                            if @offset > @failure
                                              @failure = @offset
                                              @expected = []
                                            end
                                            if @offset == @failure
                                              @expected << "'.'"
                                            end
                                          end
                                          unless address82 == FAILURE
                                            elements19 << address82
                                            address83 = FAILURE
                                            address83 = _read_SPACE
                                            unless address83 == FAILURE
                                              elements19 << address83
                                              address84 = FAILURE
                                              address84 = _read_IDENTIFIER
                                              unless address84 == FAILURE
                                                elements19 << address84
                                              else
                                                elements19 = nil
                                                @offset = index24
                                              end
                                            else
                                              elements19 = nil
                                              @offset = index24
                                            end
                                          else
                                            elements19 = nil
                                            @offset = index24
                                          end
                                          if elements19.nil?
                                            address67 = FAILURE
                                          else
                                            address67 = TreeNode20.new(@input[index24...@offset], index24, elements19)
                                            @offset = @offset
                                          end
                                          if address67 == FAILURE
                                            @offset = index20
                                            index25, elements20 = @offset, []
                                            address85 = FAILURE
                                            address85 = _read_PTR_OP
                                            unless address85 == FAILURE
                                              elements20 << address85
                                              address86 = FAILURE
                                              address86 = _read_IDENTIFIER
                                              unless address86 == FAILURE
                                                elements20 << address86
                                              else
                                                elements20 = nil
                                                @offset = index25
                                              end
                                            else
                                              elements20 = nil
                                              @offset = index25
                                            end
                                            if elements20.nil?
                                              address67 = FAILURE
                                            else
                                              address67 = TreeNode21.new(@input[index25...@offset], index25, elements20)
                                              @offset = @offset
                                            end
                                            if address67 == FAILURE
                                              @offset = index20
                                              address67 = _read_INC_OP
                                              if address67 == FAILURE
                                                @offset = index20
                                                address67 = _read_DEC_OP
                                                if address67 == FAILURE
                                                  @offset = index20
                                                end
                                              end
                                            end
                                          end
                                        end
                                      end
                                    end
                                    unless address67 == FAILURE
                                      elements15 << address67
                                      remaining2 -= 1
                                    end
                                  end
                                  if remaining2 <= 0
                                    address66 = TreeNode.new(@input[index19...@offset], index19, elements15)
                                    @offset = @offset
                                  else
                                    address66 = FAILURE
                                  end
                                  unless address66 == FAILURE
                                    elements14 << address66
                                  else
                                    elements14 = nil
                                    @offset = index18
                                  end
                                else
                                  elements14 = nil
                                  @offset = index18
                                end
                              else
                                elements14 = nil
                                @offset = index18
                              end
                            else
                              elements14 = nil
                              @offset = index18
                            end
                          else
                            elements14 = nil
                            @offset = index18
                          end
                        else
                          elements14 = nil
                          @offset = index18
                        end
                      else
                        elements14 = nil
                        @offset = index18
                      end
                    else
                      elements14 = nil
                      @offset = index18
                    end
                  else
                    elements14 = nil
                    @offset = index18
                  end
                else
                  elements14 = nil
                  @offset = index18
                end
              else
                elements14 = nil
                @offset = index18
              end
            else
              elements14 = nil
              @offset = index18
            end
          else
            elements14 = nil
            @offset = index18
          end
          if elements14.nil?
            address0 = FAILURE
          else
            address0 = TreeNode16.new(@input[index18...@offset], index18, elements14)
            @offset = @offset
          end
          if address0 == FAILURE
            @offset = index1
          end
        end
      end
      @cache[:postfix_expression][index0] = [address0, @offset]
      return address0
    end

    def _read_argument_expression_list
      address0, index0 = FAILURE, @offset
      cached = @cache[:argument_expression_list][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_assignment_expression
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3, elements2 = @offset, []
          address4 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == ","
            address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address4 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "','"
            end
          end
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_SPACE
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              address6 = _read_assignment_expression
              unless address6 == FAILURE
                elements2 << address6
              else
                elements2 = nil
                @offset = index3
              end
            else
              elements2 = nil
              @offset = index3
            end
          else
            elements2 = nil
            @offset = index3
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode23.new(@input[index3...@offset], index3, elements2)
            @offset = @offset
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode22.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:argument_expression_list][index0] = [address0, @offset]
      return address0
    end

    def _read_unary_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:unary_expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      address0 = _read_postfix_expression
      if address0 == FAILURE
        @offset = index1
        index2, elements0 = @offset, []
        address1 = FAILURE
        address1 = _read_INC_OP
        unless address1 == FAILURE
          elements0 << address1
          address2 = FAILURE
          address2 = _read_unary_expression
          unless address2 == FAILURE
            elements0 << address2
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
        if elements0.nil?
          address0 = FAILURE
        else
          address0 = TreeNode24.new(@input[index2...@offset], index2, elements0)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
          index3, elements1 = @offset, []
          address3 = FAILURE
          address3 = _read_DEC_OP
          unless address3 == FAILURE
            elements1 << address3
            address4 = FAILURE
            address4 = _read_unary_expression
            unless address4 == FAILURE
              elements1 << address4
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
          if elements1.nil?
            address0 = FAILURE
          else
            address0 = TreeNode25.new(@input[index3...@offset], index3, elements1)
            @offset = @offset
          end
          if address0 == FAILURE
            @offset = index1
            index4, elements2 = @offset, []
            address5 = FAILURE
            address5 = _read_unary_operator
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              address6 = _read_cast_expression
              unless address6 == FAILURE
                elements2 << address6
              else
                elements2 = nil
                @offset = index4
              end
            else
              elements2 = nil
              @offset = index4
            end
            if elements2.nil?
              address0 = FAILURE
            else
              address0 = TreeNode26.new(@input[index4...@offset], index4, elements2)
              @offset = @offset
            end
            if address0 == FAILURE
              @offset = index1
              index5, elements3 = @offset, []
              address7 = FAILURE
              address7 = _read_SIZEOF
              unless address7 == FAILURE
                elements3 << address7
                address8 = FAILURE
                address8 = _read_unary_expression
                unless address8 == FAILURE
                  elements3 << address8
                else
                  elements3 = nil
                  @offset = index5
                end
              else
                elements3 = nil
                @offset = index5
              end
              if elements3.nil?
                address0 = FAILURE
              else
                address0 = TreeNode27.new(@input[index5...@offset], index5, elements3)
                @offset = @offset
              end
              if address0 == FAILURE
                @offset = index1
                index6, elements4 = @offset, []
                address9 = FAILURE
                address9 = _read_SIZEOF
                unless address9 == FAILURE
                  elements4 << address9
                  address10 = FAILURE
                  chunk0 = nil
                  if @offset < @input_size
                    chunk0 = @input[@offset...@offset + 1]
                  end
                  if chunk0 == "("
                    address10 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address10 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "'('"
                    end
                  end
                  unless address10 == FAILURE
                    elements4 << address10
                    address11 = FAILURE
                    address11 = _read_SPACE
                    unless address11 == FAILURE
                      elements4 << address11
                      address12 = FAILURE
                      address12 = _read_type_name
                      unless address12 == FAILURE
                        elements4 << address12
                        address13 = FAILURE
                        chunk1 = nil
                        if @offset < @input_size
                          chunk1 = @input[@offset...@offset + 1]
                        end
                        if chunk1 == ")"
                          address13 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address13 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "')'"
                          end
                        end
                        unless address13 == FAILURE
                          elements4 << address13
                          address14 = FAILURE
                          address14 = _read_SPACE
                          unless address14 == FAILURE
                            elements4 << address14
                          else
                            elements4 = nil
                            @offset = index6
                          end
                        else
                          elements4 = nil
                          @offset = index6
                        end
                      else
                        elements4 = nil
                        @offset = index6
                      end
                    else
                      elements4 = nil
                      @offset = index6
                    end
                  else
                    elements4 = nil
                    @offset = index6
                  end
                else
                  elements4 = nil
                  @offset = index6
                end
                if elements4.nil?
                  address0 = FAILURE
                else
                  address0 = TreeNode28.new(@input[index6...@offset], index6, elements4)
                  @offset = @offset
                end
                if address0 == FAILURE
                  @offset = index1
                end
              end
            end
          end
        end
      end
      @cache[:unary_expression][index0] = [address0, @offset]
      return address0
    end

    def _read_unary_operator
      address0, index0 = FAILURE, @offset
      cached = @cache[:unary_operator][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 1]
      end
      if chunk0 == "&"
        address1 = TreeNode.new(@input[@offset...@offset + 1], @offset)
        @offset = @offset + 1
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "'&'"
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode29.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index3, elements1 = @offset, []
        address3 = FAILURE
        chunk1 = nil
        if @offset < @input_size
          chunk1 = @input[@offset...@offset + 1]
        end
        if chunk1 == "*"
          address3 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address3 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "'*'"
          end
        end
        unless address3 == FAILURE
          elements1 << address3
          address4 = FAILURE
          address4 = _read_SPACE
          unless address4 == FAILURE
            elements1 << address4
          else
            elements1 = nil
            @offset = index3
          end
        else
          elements1 = nil
          @offset = index3
        end
        if elements1.nil?
          address0 = FAILURE
        else
          address0 = TreeNode30.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
          index4, elements2 = @offset, []
          address5 = FAILURE
          chunk2 = nil
          if @offset < @input_size
            chunk2 = @input[@offset...@offset + 1]
          end
          if chunk2 == "+"
            address5 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address5 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "'+'"
            end
          end
          unless address5 == FAILURE
            elements2 << address5
            address6 = FAILURE
            address6 = _read_SPACE
            unless address6 == FAILURE
              elements2 << address6
            else
              elements2 = nil
              @offset = index4
            end
          else
            elements2 = nil
            @offset = index4
          end
          if elements2.nil?
            address0 = FAILURE
          else
            address0 = TreeNode31.new(@input[index4...@offset], index4, elements2)
            @offset = @offset
          end
          if address0 == FAILURE
            @offset = index1
            index5, elements3 = @offset, []
            address7 = FAILURE
            chunk3 = nil
            if @offset < @input_size
              chunk3 = @input[@offset...@offset + 1]
            end
            if chunk3 == "-"
              address7 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address7 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "'-'"
              end
            end
            unless address7 == FAILURE
              elements3 << address7
              address8 = FAILURE
              address8 = _read_SPACE
              unless address8 == FAILURE
                elements3 << address8
              else
                elements3 = nil
                @offset = index5
              end
            else
              elements3 = nil
              @offset = index5
            end
            if elements3.nil?
              address0 = FAILURE
            else
              address0 = TreeNode32.new(@input[index5...@offset], index5, elements3)
              @offset = @offset
            end
            if address0 == FAILURE
              @offset = index1
              index6, elements4 = @offset, []
              address9 = FAILURE
              chunk4 = nil
              if @offset < @input_size
                chunk4 = @input[@offset...@offset + 1]
              end
              if chunk4 == "~"
                address9 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address9 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "'~'"
                end
              end
              unless address9 == FAILURE
                elements4 << address9
                address10 = FAILURE
                address10 = _read_SPACE
                unless address10 == FAILURE
                  elements4 << address10
                else
                  elements4 = nil
                  @offset = index6
                end
              else
                elements4 = nil
                @offset = index6
              end
              if elements4.nil?
                address0 = FAILURE
              else
                address0 = TreeNode33.new(@input[index6...@offset], index6, elements4)
                @offset = @offset
              end
              if address0 == FAILURE
                @offset = index1
                index7, elements5 = @offset, []
                address11 = FAILURE
                chunk5 = nil
                if @offset < @input_size
                  chunk5 = @input[@offset...@offset + 1]
                end
                if chunk5 == "!"
                  address11 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address11 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "'!'"
                  end
                end
                unless address11 == FAILURE
                  elements5 << address11
                  address12 = FAILURE
                  address12 = _read_SPACE
                  unless address12 == FAILURE
                    elements5 << address12
                  else
                    elements5 = nil
                    @offset = index7
                  end
                else
                  elements5 = nil
                  @offset = index7
                end
                if elements5.nil?
                  address0 = FAILURE
                else
                  address0 = TreeNode34.new(@input[index7...@offset], index7, elements5)
                  @offset = @offset
                end
                if address0 == FAILURE
                  @offset = index1
                end
              end
            end
          end
        end
      end
      @cache[:unary_operator][index0] = [address0, @offset]
      return address0
    end

    def _read_cast_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:cast_expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 1]
      end
      if chunk0 == "("
        address1 = TreeNode.new(@input[@offset...@offset + 1], @offset)
        @offset = @offset + 1
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "'('"
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_type_name
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            chunk1 = nil
            if @offset < @input_size
              chunk1 = @input[@offset...@offset + 1]
            end
            if chunk1 == ")"
              address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address4 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "')'"
              end
            end
            unless address4 == FAILURE
              elements0 << address4
              address5 = FAILURE
              address5 = _read_SPACE
              unless address5 == FAILURE
                elements0 << address5
                address6 = FAILURE
                address6 = _read_cast_expression
                unless address6 == FAILURE
                  elements0 << address6
                else
                  elements0 = nil
                  @offset = index2
                end
              else
                elements0 = nil
                @offset = index2
              end
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode35.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        address0 = _read_unary_expression
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:cast_expression][index0] = [address0, @offset]
      return address0
    end

    def _read_multiplicative_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:multiplicative_expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_cast_expression
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3 = @offset
          index4, elements2 = @offset, []
          address4 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == "*"
            address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address4 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "'*'"
            end
          end
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_SPACE
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              address6 = _read_cast_expression
              unless address6 == FAILURE
                elements2 << address6
              else
                elements2 = nil
                @offset = index4
              end
            else
              elements2 = nil
              @offset = index4
            end
          else
            elements2 = nil
            @offset = index4
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode37.new(@input[index4...@offset], index4, elements2)
            @offset = @offset
          end
          if address3 == FAILURE
            @offset = index3
            index5, elements3 = @offset, []
            address7 = FAILURE
            chunk1 = nil
            if @offset < @input_size
              chunk1 = @input[@offset...@offset + 1]
            end
            if chunk1 == "/"
              address7 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address7 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "'/'"
              end
            end
            unless address7 == FAILURE
              elements3 << address7
              address8 = FAILURE
              address8 = _read_SPACE
              unless address8 == FAILURE
                elements3 << address8
                address9 = FAILURE
                address9 = _read_cast_expression
                unless address9 == FAILURE
                  elements3 << address9
                else
                  elements3 = nil
                  @offset = index5
                end
              else
                elements3 = nil
                @offset = index5
              end
            else
              elements3 = nil
              @offset = index5
            end
            if elements3.nil?
              address3 = FAILURE
            else
              address3 = TreeNode38.new(@input[index5...@offset], index5, elements3)
              @offset = @offset
            end
            if address3 == FAILURE
              @offset = index3
              index6, elements4 = @offset, []
              address10 = FAILURE
              chunk2 = nil
              if @offset < @input_size
                chunk2 = @input[@offset...@offset + 1]
              end
              if chunk2 == "%"
                address10 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address10 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "'%'"
                end
              end
              unless address10 == FAILURE
                elements4 << address10
                address11 = FAILURE
                address11 = _read_SPACE
                unless address11 == FAILURE
                  elements4 << address11
                  address12 = FAILURE
                  address12 = _read_cast_expression
                  unless address12 == FAILURE
                    elements4 << address12
                  else
                    elements4 = nil
                    @offset = index6
                  end
                else
                  elements4 = nil
                  @offset = index6
                end
              else
                elements4 = nil
                @offset = index6
              end
              if elements4.nil?
                address3 = FAILURE
              else
                address3 = TreeNode39.new(@input[index6...@offset], index6, elements4)
                @offset = @offset
              end
              if address3 == FAILURE
                @offset = index3
              end
            end
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode36.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:multiplicative_expression][index0] = [address0, @offset]
      return address0
    end

    def _read_additive_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:additive_expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_multiplicative_expression
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3 = @offset
          index4, elements2 = @offset, []
          address4 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == "+"
            address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address4 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "'+'"
            end
          end
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_SPACE
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              address6 = _read_multiplicative_expression
              unless address6 == FAILURE
                elements2 << address6
              else
                elements2 = nil
                @offset = index4
              end
            else
              elements2 = nil
              @offset = index4
            end
          else
            elements2 = nil
            @offset = index4
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode41.new(@input[index4...@offset], index4, elements2)
            @offset = @offset
          end
          if address3 == FAILURE
            @offset = index3
            index5, elements3 = @offset, []
            address7 = FAILURE
            chunk1 = nil
            if @offset < @input_size
              chunk1 = @input[@offset...@offset + 1]
            end
            if chunk1 == "-"
              address7 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address7 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "'-'"
              end
            end
            unless address7 == FAILURE
              elements3 << address7
              address8 = FAILURE
              address8 = _read_SPACE
              unless address8 == FAILURE
                elements3 << address8
                address9 = FAILURE
                address9 = _read_multiplicative_expression
                unless address9 == FAILURE
                  elements3 << address9
                else
                  elements3 = nil
                  @offset = index5
                end
              else
                elements3 = nil
                @offset = index5
              end
            else
              elements3 = nil
              @offset = index5
            end
            if elements3.nil?
              address3 = FAILURE
            else
              address3 = TreeNode42.new(@input[index5...@offset], index5, elements3)
              @offset = @offset
            end
            if address3 == FAILURE
              @offset = index3
            end
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode40.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:additive_expression][index0] = [address0, @offset]
      return address0
    end

    def _read_shift_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:shift_expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_additive_expression
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3 = @offset
          index4, elements2 = @offset, []
          address4 = FAILURE
          address4 = _read_LEFT_OP
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_additive_expression
            unless address5 == FAILURE
              elements2 << address5
            else
              elements2 = nil
              @offset = index4
            end
          else
            elements2 = nil
            @offset = index4
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode44.new(@input[index4...@offset], index4, elements2)
            @offset = @offset
          end
          if address3 == FAILURE
            @offset = index3
            index5, elements3 = @offset, []
            address6 = FAILURE
            address6 = _read_RIGHT_OP
            unless address6 == FAILURE
              elements3 << address6
              address7 = FAILURE
              address7 = _read_additive_expression
              unless address7 == FAILURE
                elements3 << address7
              else
                elements3 = nil
                @offset = index5
              end
            else
              elements3 = nil
              @offset = index5
            end
            if elements3.nil?
              address3 = FAILURE
            else
              address3 = TreeNode45.new(@input[index5...@offset], index5, elements3)
              @offset = @offset
            end
            if address3 == FAILURE
              @offset = index3
            end
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode43.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:shift_expression][index0] = [address0, @offset]
      return address0
    end

    def _read_relational_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:relational_expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_shift_expression
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3 = @offset
          index4, elements2 = @offset, []
          address4 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == "<"
            address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address4 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "'<'"
            end
          end
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_SPACE
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              address6 = _read_shift_expression
              unless address6 == FAILURE
                elements2 << address6
              else
                elements2 = nil
                @offset = index4
              end
            else
              elements2 = nil
              @offset = index4
            end
          else
            elements2 = nil
            @offset = index4
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode47.new(@input[index4...@offset], index4, elements2)
            @offset = @offset
          end
          if address3 == FAILURE
            @offset = index3
            index5, elements3 = @offset, []
            address7 = FAILURE
            chunk1 = nil
            if @offset < @input_size
              chunk1 = @input[@offset...@offset + 1]
            end
            if chunk1 == ">"
              address7 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address7 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "'>'"
              end
            end
            unless address7 == FAILURE
              elements3 << address7
              address8 = FAILURE
              address8 = _read_SPACE
              unless address8 == FAILURE
                elements3 << address8
                address9 = FAILURE
                address9 = _read_shift_expression
                unless address9 == FAILURE
                  elements3 << address9
                else
                  elements3 = nil
                  @offset = index5
                end
              else
                elements3 = nil
                @offset = index5
              end
            else
              elements3 = nil
              @offset = index5
            end
            if elements3.nil?
              address3 = FAILURE
            else
              address3 = TreeNode48.new(@input[index5...@offset], index5, elements3)
              @offset = @offset
            end
            if address3 == FAILURE
              @offset = index3
              index6, elements4 = @offset, []
              address10 = FAILURE
              address10 = _read_LE_OP
              unless address10 == FAILURE
                elements4 << address10
                address11 = FAILURE
                address11 = _read_shift_expression
                unless address11 == FAILURE
                  elements4 << address11
                else
                  elements4 = nil
                  @offset = index6
                end
              else
                elements4 = nil
                @offset = index6
              end
              if elements4.nil?
                address3 = FAILURE
              else
                address3 = TreeNode49.new(@input[index6...@offset], index6, elements4)
                @offset = @offset
              end
              if address3 == FAILURE
                @offset = index3
                index7, elements5 = @offset, []
                address12 = FAILURE
                address12 = _read_GE_OP
                unless address12 == FAILURE
                  elements5 << address12
                  address13 = FAILURE
                  address13 = _read_shift_expression
                  unless address13 == FAILURE
                    elements5 << address13
                  else
                    elements5 = nil
                    @offset = index7
                  end
                else
                  elements5 = nil
                  @offset = index7
                end
                if elements5.nil?
                  address3 = FAILURE
                else
                  address3 = TreeNode50.new(@input[index7...@offset], index7, elements5)
                  @offset = @offset
                end
                if address3 == FAILURE
                  @offset = index3
                end
              end
            end
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode46.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:relational_expression][index0] = [address0, @offset]
      return address0
    end

    def _read_equality_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:equality_expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_relational_expression
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3 = @offset
          index4, elements2 = @offset, []
          address4 = FAILURE
          address4 = _read_EQ_OP
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_relational_expression
            unless address5 == FAILURE
              elements2 << address5
            else
              elements2 = nil
              @offset = index4
            end
          else
            elements2 = nil
            @offset = index4
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode52.new(@input[index4...@offset], index4, elements2)
            @offset = @offset
          end
          if address3 == FAILURE
            @offset = index3
            index5, elements3 = @offset, []
            address6 = FAILURE
            address6 = _read_NE_OP
            unless address6 == FAILURE
              elements3 << address6
              address7 = FAILURE
              address7 = _read_relational_expression
              unless address7 == FAILURE
                elements3 << address7
              else
                elements3 = nil
                @offset = index5
              end
            else
              elements3 = nil
              @offset = index5
            end
            if elements3.nil?
              address3 = FAILURE
            else
              address3 = TreeNode53.new(@input[index5...@offset], index5, elements3)
              @offset = @offset
            end
            if address3 == FAILURE
              @offset = index3
            end
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode51.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:equality_expression][index0] = [address0, @offset]
      return address0
    end

    def _read_and_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:and_expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_equality_expression
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3, elements2 = @offset, []
          address4 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == "&"
            address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address4 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "'&'"
            end
          end
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_SPACE
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              address6 = _read_equality_expression
              unless address6 == FAILURE
                elements2 << address6
              else
                elements2 = nil
                @offset = index3
              end
            else
              elements2 = nil
              @offset = index3
            end
          else
            elements2 = nil
            @offset = index3
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode55.new(@input[index3...@offset], index3, elements2)
            @offset = @offset
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode54.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:and_expression][index0] = [address0, @offset]
      return address0
    end

    def _read_exclusive_or_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:exclusive_or_expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_and_expression
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3, elements2 = @offset, []
          address4 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == "^"
            address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address4 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "'^'"
            end
          end
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_SPACE
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              address6 = _read_and_expression
              unless address6 == FAILURE
                elements2 << address6
              else
                elements2 = nil
                @offset = index3
              end
            else
              elements2 = nil
              @offset = index3
            end
          else
            elements2 = nil
            @offset = index3
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode57.new(@input[index3...@offset], index3, elements2)
            @offset = @offset
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode56.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:exclusive_or_expression][index0] = [address0, @offset]
      return address0
    end

    def _read_inclusive_or_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:inclusive_or_expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_exclusive_or_expression
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3, elements2 = @offset, []
          address4 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == "|"
            address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address4 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "'|'"
            end
          end
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_SPACE
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              address6 = _read_exclusive_or_expression
              unless address6 == FAILURE
                elements2 << address6
              else
                elements2 = nil
                @offset = index3
              end
            else
              elements2 = nil
              @offset = index3
            end
          else
            elements2 = nil
            @offset = index3
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode59.new(@input[index3...@offset], index3, elements2)
            @offset = @offset
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode58.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:inclusive_or_expression][index0] = [address0, @offset]
      return address0
    end

    def _read_logical_and_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:logical_and_expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_inclusive_or_expression
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3, elements2 = @offset, []
          address4 = FAILURE
          address4 = _read_AND_OP
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_inclusive_or_expression
            unless address5 == FAILURE
              elements2 << address5
            else
              elements2 = nil
              @offset = index3
            end
          else
            elements2 = nil
            @offset = index3
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode61.new(@input[index3...@offset], index3, elements2)
            @offset = @offset
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode60.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:logical_and_expression][index0] = [address0, @offset]
      return address0
    end

    def _read_logical_or_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:logical_or_expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_logical_and_expression
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3, elements2 = @offset, []
          address4 = FAILURE
          address4 = _read_OR_OP
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_logical_and_expression
            unless address5 == FAILURE
              elements2 << address5
            else
              elements2 = nil
              @offset = index3
            end
          else
            elements2 = nil
            @offset = index3
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode63.new(@input[index3...@offset], index3, elements2)
            @offset = @offset
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode62.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:logical_or_expression][index0] = [address0, @offset]
      return address0
    end

    def _read_conditional_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:conditional_expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_logical_or_expression
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        chunk0 = nil
        if @offset < @input_size
          chunk0 = @input[@offset...@offset + 1]
        end
        if chunk0 == "?"
          address2 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address2 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "'?'"
          end
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            address4 = _read_expression
            unless address4 == FAILURE
              elements0 << address4
              address5 = FAILURE
              chunk1 = nil
              if @offset < @input_size
                chunk1 = @input[@offset...@offset + 1]
              end
              if chunk1 == ":"
                address5 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address5 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "':'"
                end
              end
              unless address5 == FAILURE
                elements0 << address5
                address6 = FAILURE
                address6 = _read_SPACE
                unless address6 == FAILURE
                  elements0 << address6
                  address7 = FAILURE
                  address7 = _read_conditional_expression
                  unless address7 == FAILURE
                    elements0 << address7
                  else
                    elements0 = nil
                    @offset = index2
                  end
                else
                  elements0 = nil
                  @offset = index2
                end
              else
                elements0 = nil
                @offset = index2
              end
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode64.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        address0 = _read_logical_or_expression
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:conditional_expression][index0] = [address0, @offset]
      return address0
    end

    def _read_assignment_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:assignment_expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_unary_expression
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_assignment_operator
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_assignment_expression
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode65.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        address0 = _read_conditional_expression
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:assignment_expression][index0] = [address0, @offset]
      return address0
    end

    def _read_assignment_operator
      address0, index0 = FAILURE, @offset
      cached = @cache[:assignment_operator][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 1]
      end
      if chunk0 == "="
        address1 = TreeNode.new(@input[@offset...@offset + 1], @offset)
        @offset = @offset + 1
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "'='"
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode66.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        address0 = _read_MUL_ASSIGN
        if address0 == FAILURE
          @offset = index1
          address0 = _read_DIV_ASSIGN
          if address0 == FAILURE
            @offset = index1
            address0 = _read_MOD_ASSIGN
            if address0 == FAILURE
              @offset = index1
              address0 = _read_ADD_ASSIGN
              if address0 == FAILURE
                @offset = index1
                address0 = _read_SUB_ASSIGN
                if address0 == FAILURE
                  @offset = index1
                  address0 = _read_LEFT_ASSIGN
                  if address0 == FAILURE
                    @offset = index1
                    address0 = _read_RIGHT_ASSIGN
                    if address0 == FAILURE
                      @offset = index1
                      address0 = _read_AND_ASSIGN
                      if address0 == FAILURE
                        @offset = index1
                        address0 = _read_XOR_ASSIGN
                        if address0 == FAILURE
                          @offset = index1
                          address0 = _read_OR_ASSIGN
                          if address0 == FAILURE
                            @offset = index1
                          end
                        end
                      end
                    end
                  end
                end
              end
            end
          end
        end
      end
      @cache[:assignment_operator][index0] = [address0, @offset]
      return address0
    end

    def _read_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_assignment_expression
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3, elements2 = @offset, []
          address4 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == ","
            address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address4 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "','"
            end
          end
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_SPACE
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              address6 = _read_assignment_expression
              unless address6 == FAILURE
                elements2 << address6
              else
                elements2 = nil
                @offset = index3
              end
            else
              elements2 = nil
              @offset = index3
            end
          else
            elements2 = nil
            @offset = index3
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode68.new(@input[index3...@offset], index3, elements2)
            @offset = @offset
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode67.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:expression][index0] = [address0, @offset]
      return address0
    end

    def _read_constant_expression
      address0, index0 = FAILURE, @offset
      cached = @cache[:constant_expression][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      address0 = _read_conditional_expression
      @cache[:constant_expression][index0] = [address0, @offset]
      return address0
    end

    def _read_declaration
      address0, index0 = FAILURE, @offset
      cached = @cache[:declaration][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_declaration_specifiers
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        chunk0 = nil
        if @offset < @input_size
          chunk0 = @input[@offset...@offset + 1]
        end
        if chunk0 == ";"
          address2 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address2 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "';'"
          end
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode69.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index3, elements1 = @offset, []
        address4 = FAILURE
        address4 = _read_declaration_specifiers
        unless address4 == FAILURE
          elements1 << address4
          address5 = FAILURE
          address5 = _read_init_declarator_list
          unless address5 == FAILURE
            elements1 << address5
            address6 = FAILURE
            chunk1 = nil
            if @offset < @input_size
              chunk1 = @input[@offset...@offset + 1]
            end
            if chunk1 == ";"
              address6 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address6 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "';'"
              end
            end
            unless address6 == FAILURE
              elements1 << address6
              address7 = FAILURE
              address7 = _read_SPACE
              unless address7 == FAILURE
                elements1 << address7
              else
                elements1 = nil
                @offset = index3
              end
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
        else
          elements1 = nil
          @offset = index3
        end
        if elements1.nil?
          address0 = FAILURE
        else
          address0 = @actions.register_type_name(@input, index3, @offset, elements1)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:declaration][index0] = [address0, @offset]
      return address0
    end

    def _read_declaration_specifiers
      address0, index0 = FAILURE, @offset
      cached = @cache[:declaration_specifiers][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_storage_class_specifier
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_declaration_specifiers
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode71.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        address0 = _read_storage_class_specifier
        if address0 == FAILURE
          @offset = index1
          index3, elements1 = @offset, []
          address3 = FAILURE
          address3 = _read_type_specifier
          unless address3 == FAILURE
            elements1 << address3
            address4 = FAILURE
            address4 = _read_declaration_specifiers
            unless address4 == FAILURE
              elements1 << address4
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
          if elements1.nil?
            address0 = FAILURE
          else
            address0 = TreeNode72.new(@input[index3...@offset], index3, elements1)
            @offset = @offset
          end
          if address0 == FAILURE
            @offset = index1
            address0 = _read_type_specifier
            if address0 == FAILURE
              @offset = index1
              index4, elements2 = @offset, []
              address5 = FAILURE
              address5 = _read_type_qualifier
              unless address5 == FAILURE
                elements2 << address5
                address6 = FAILURE
                address6 = _read_declaration_specifiers
                unless address6 == FAILURE
                  elements2 << address6
                else
                  elements2 = nil
                  @offset = index4
                end
              else
                elements2 = nil
                @offset = index4
              end
              if elements2.nil?
                address0 = FAILURE
              else
                address0 = TreeNode73.new(@input[index4...@offset], index4, elements2)
                @offset = @offset
              end
              if address0 == FAILURE
                @offset = index1
                address0 = _read_type_qualifier
                if address0 == FAILURE
                  @offset = index1
                  index5, elements3 = @offset, []
                  address7 = FAILURE
                  address7 = _read_function_specifier
                  unless address7 == FAILURE
                    elements3 << address7
                    address8 = FAILURE
                    address8 = _read_declaration_specifiers
                    unless address8 == FAILURE
                      elements3 << address8
                    else
                      elements3 = nil
                      @offset = index5
                    end
                  else
                    elements3 = nil
                    @offset = index5
                  end
                  if elements3.nil?
                    address0 = FAILURE
                  else
                    address0 = TreeNode74.new(@input[index5...@offset], index5, elements3)
                    @offset = @offset
                  end
                  if address0 == FAILURE
                    @offset = index1
                    address0 = _read_function_specifier
                    if address0 == FAILURE
                      @offset = index1
                    end
                  end
                end
              end
            end
          end
        end
      end
      @cache[:declaration_specifiers][index0] = [address0, @offset]
      return address0
    end

    def _read_init_declarator_list
      address0, index0 = FAILURE, @offset
      cached = @cache[:init_declarator_list][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_init_declarator
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3, elements2 = @offset, []
          address4 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == ","
            address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address4 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "','"
            end
          end
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_SPACE
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              address6 = _read_init_declarator
              unless address6 == FAILURE
                elements2 << address6
              else
                elements2 = nil
                @offset = index3
              end
            else
              elements2 = nil
              @offset = index3
            end
          else
            elements2 = nil
            @offset = index3
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode76.new(@input[index3...@offset], index3, elements2)
            @offset = @offset
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode75.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:init_declarator_list][index0] = [address0, @offset]
      return address0
    end

    def _read_init_declarator
      address0, index0 = FAILURE, @offset
      cached = @cache[:init_declarator][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_declarator
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        chunk0 = nil
        if @offset < @input_size
          chunk0 = @input[@offset...@offset + 1]
        end
        if chunk0 == "="
          address2 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address2 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "'='"
          end
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            address4 = _read_initializer
            unless address4 == FAILURE
              elements0 << address4
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode77.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        address0 = _read_declarator
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:init_declarator][index0] = [address0, @offset]
      return address0
    end

    def _read_storage_class_specifier
      address0, index0 = FAILURE, @offset
      cached = @cache[:storage_class_specifier][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      address0 = _read_TYPEDEF
      if address0 == FAILURE
        @offset = index1
        address0 = _read_EXTERN
        if address0 == FAILURE
          @offset = index1
          address0 = _read_STATIC
          if address0 == FAILURE
            @offset = index1
            address0 = _read_AUTO
            if address0 == FAILURE
              @offset = index1
              address0 = _read_REGISTER
              if address0 == FAILURE
                @offset = index1
              end
            end
          end
        end
      end
      @cache[:storage_class_specifier][index0] = [address0, @offset]
      return address0
    end

    def _read_type_specifier
      address0, index0 = FAILURE, @offset
      cached = @cache[:type_specifier][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      address0 = _read_VOID
      if address0 == FAILURE
        @offset = index1
        address0 = _read_CHAR
        if address0 == FAILURE
          @offset = index1
          address0 = _read_SHORT
          if address0 == FAILURE
            @offset = index1
            address0 = _read_INT
            if address0 == FAILURE
              @offset = index1
              address0 = _read_LONG
              if address0 == FAILURE
                @offset = index1
                address0 = _read_FLOAT
                if address0 == FAILURE
                  @offset = index1
                  address0 = _read_DOUBLE
                  if address0 == FAILURE
                    @offset = index1
                    address0 = _read_SIGNED
                    if address0 == FAILURE
                      @offset = index1
                      address0 = _read_UNSIGNED
                      if address0 == FAILURE
                        @offset = index1
                        address0 = _read_BOOL
                        if address0 == FAILURE
                          @offset = index1
                          address0 = _read_COMPLEX
                          if address0 == FAILURE
                            @offset = index1
                            address0 = _read_IMAGINARY
                            if address0 == FAILURE
                              @offset = index1
                              address0 = _read_struct_or_union_specifier
                              if address0 == FAILURE
                                @offset = index1
                                address0 = _read_enum_specifier
                                if address0 == FAILURE
                                  @offset = index1
                                  address0 = _read_TYPE_NAME
                                  if address0 == FAILURE
                                    @offset = index1
                                  end
                                end
                              end
                            end
                          end
                        end
                      end
                    end
                  end
                end
              end
            end
          end
        end
      end
      @cache[:type_specifier][index0] = [address0, @offset]
      return address0
    end

    def _read_struct_or_union_specifier
      address0, index0 = FAILURE, @offset
      cached = @cache[:struct_or_union_specifier][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_struct_or_union
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_IDENTIFIER
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == "{"
            address3 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address3 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "'{'"
            end
          end
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            address4 = _read_SPACE
            unless address4 == FAILURE
              elements0 << address4
              address5 = FAILURE
              address5 = _read_struct_declaration_list
              unless address5 == FAILURE
                elements0 << address5
                address6 = FAILURE
                chunk1 = nil
                if @offset < @input_size
                  chunk1 = @input[@offset...@offset + 1]
                end
                if chunk1 == "}"
                  address6 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address6 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "'}'"
                  end
                end
                unless address6 == FAILURE
                  elements0 << address6
                  address7 = FAILURE
                  address7 = _read_SPACE
                  unless address7 == FAILURE
                    elements0 << address7
                  else
                    elements0 = nil
                    @offset = index2
                  end
                else
                  elements0 = nil
                  @offset = index2
                end
              else
                elements0 = nil
                @offset = index2
              end
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode78.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index3, elements1 = @offset, []
        address8 = FAILURE
        address8 = _read_struct_or_union
        unless address8 == FAILURE
          elements1 << address8
          address9 = FAILURE
          chunk2 = nil
          if @offset < @input_size
            chunk2 = @input[@offset...@offset + 1]
          end
          if chunk2 == "{"
            address9 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address9 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "'{'"
            end
          end
          unless address9 == FAILURE
            elements1 << address9
            address10 = FAILURE
            address10 = _read_SPACE
            unless address10 == FAILURE
              elements1 << address10
              address11 = FAILURE
              address11 = _read_struct_declaration_list
              unless address11 == FAILURE
                elements1 << address11
                address12 = FAILURE
                chunk3 = nil
                if @offset < @input_size
                  chunk3 = @input[@offset...@offset + 1]
                end
                if chunk3 == "}"
                  address12 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address12 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "'}'"
                  end
                end
                unless address12 == FAILURE
                  elements1 << address12
                  address13 = FAILURE
                  address13 = _read_SPACE
                  unless address13 == FAILURE
                    elements1 << address13
                  else
                    elements1 = nil
                    @offset = index3
                  end
                else
                  elements1 = nil
                  @offset = index3
                end
              else
                elements1 = nil
                @offset = index3
              end
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
        else
          elements1 = nil
          @offset = index3
        end
        if elements1.nil?
          address0 = FAILURE
        else
          address0 = TreeNode79.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
          index4, elements2 = @offset, []
          address14 = FAILURE
          address14 = _read_struct_or_union
          unless address14 == FAILURE
            elements2 << address14
            address15 = FAILURE
            address15 = _read_IDENTIFIER
            unless address15 == FAILURE
              elements2 << address15
            else
              elements2 = nil
              @offset = index4
            end
          else
            elements2 = nil
            @offset = index4
          end
          if elements2.nil?
            address0 = FAILURE
          else
            address0 = TreeNode80.new(@input[index4...@offset], index4, elements2)
            @offset = @offset
          end
          if address0 == FAILURE
            @offset = index1
          end
        end
      end
      @cache[:struct_or_union_specifier][index0] = [address0, @offset]
      return address0
    end

    def _read_struct_or_union
      address0, index0 = FAILURE, @offset
      cached = @cache[:struct_or_union][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      address0 = _read_STRUCT
      if address0 == FAILURE
        @offset = index1
        address0 = _read_UNION
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:struct_or_union][index0] = [address0, @offset]
      return address0
    end

    def _read_struct_declaration_list
      address0, index0 = FAILURE, @offset
      cached = @cache[:struct_declaration_list][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_struct_declaration
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          address3 = _read_struct_declaration
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode81.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:struct_declaration_list][index0] = [address0, @offset]
      return address0
    end

    def _read_struct_declaration
      address0, index0 = FAILURE, @offset
      cached = @cache[:struct_declaration][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_specifier_qualifier_list
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_struct_declarator_list
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == ";"
            address3 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address3 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "';'"
            end
          end
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            address4 = _read_SPACE
            unless address4 == FAILURE
              elements0 << address4
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode82.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index3, elements1 = @offset, []
        address5 = FAILURE
        address5 = _read_specifier_qualifier_list
        unless address5 == FAILURE
          elements1 << address5
          address6 = FAILURE
          chunk1 = nil
          if @offset < @input_size
            chunk1 = @input[@offset...@offset + 1]
          end
          if chunk1 == ";"
            address6 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address6 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "';'"
            end
          end
          unless address6 == FAILURE
            elements1 << address6
            address7 = FAILURE
            address7 = _read_SPACE
            unless address7 == FAILURE
              elements1 << address7
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
        else
          elements1 = nil
          @offset = index3
        end
        if elements1.nil?
          address0 = FAILURE
        else
          address0 = TreeNode83.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:struct_declaration][index0] = [address0, @offset]
      return address0
    end

    def _read_specifier_qualifier_list
      address0, index0 = FAILURE, @offset
      cached = @cache[:specifier_qualifier_list][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_type_specifier
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_specifier_qualifier_list
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode84.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        address0 = _read_type_specifier
        if address0 == FAILURE
          @offset = index1
          index3, elements1 = @offset, []
          address3 = FAILURE
          address3 = _read_type_qualifier
          unless address3 == FAILURE
            elements1 << address3
            address4 = FAILURE
            address4 = _read_specifier_qualifier_list
            unless address4 == FAILURE
              elements1 << address4
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
          if elements1.nil?
            address0 = FAILURE
          else
            address0 = TreeNode85.new(@input[index3...@offset], index3, elements1)
            @offset = @offset
          end
          if address0 == FAILURE
            @offset = index1
            address0 = _read_type_qualifier
            if address0 == FAILURE
              @offset = index1
            end
          end
        end
      end
      @cache[:specifier_qualifier_list][index0] = [address0, @offset]
      return address0
    end

    def _read_struct_declarator_list
      address0, index0 = FAILURE, @offset
      cached = @cache[:struct_declarator_list][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_struct_declarator
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3, elements2 = @offset, []
          address4 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == ","
            address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address4 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "','"
            end
          end
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_SPACE
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              address6 = _read_struct_declarator
              unless address6 == FAILURE
                elements2 << address6
              else
                elements2 = nil
                @offset = index3
              end
            else
              elements2 = nil
              @offset = index3
            end
          else
            elements2 = nil
            @offset = index3
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode87.new(@input[index3...@offset], index3, elements2)
            @offset = @offset
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode86.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:struct_declarator_list][index0] = [address0, @offset]
      return address0
    end

    def _read_struct_declarator
      address0, index0 = FAILURE, @offset
      cached = @cache[:struct_declarator][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_declarator
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        chunk0 = nil
        if @offset < @input_size
          chunk0 = @input[@offset...@offset + 1]
        end
        if chunk0 == ":"
          address2 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address2 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "':'"
          end
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            address4 = _read_constant_expression
            unless address4 == FAILURE
              elements0 << address4
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode88.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index3, elements1 = @offset, []
        address5 = FAILURE
        chunk1 = nil
        if @offset < @input_size
          chunk1 = @input[@offset...@offset + 1]
        end
        if chunk1 == ":"
          address5 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address5 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "':'"
          end
        end
        unless address5 == FAILURE
          elements1 << address5
          address6 = FAILURE
          address6 = _read_SPACE
          unless address6 == FAILURE
            elements1 << address6
            address7 = FAILURE
            address7 = _read_constant_expression
            unless address7 == FAILURE
              elements1 << address7
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
        else
          elements1 = nil
          @offset = index3
        end
        if elements1.nil?
          address0 = FAILURE
        else
          address0 = TreeNode89.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
          address0 = _read_declarator
          if address0 == FAILURE
            @offset = index1
          end
        end
      end
      @cache[:struct_declarator][index0] = [address0, @offset]
      return address0
    end

    def _read_enum_specifier
      address0, index0 = FAILURE, @offset
      cached = @cache[:enum_specifier][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_ENUM
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        chunk0 = nil
        if @offset < @input_size
          chunk0 = @input[@offset...@offset + 1]
        end
        if chunk0 == "{"
          address2 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address2 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "'{'"
          end
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            address4 = _read_enumerator_list
            unless address4 == FAILURE
              elements0 << address4
              address5 = FAILURE
              chunk1 = nil
              if @offset < @input_size
                chunk1 = @input[@offset...@offset + 1]
              end
              if chunk1 == "}"
                address5 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address5 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "'}'"
                end
              end
              unless address5 == FAILURE
                elements0 << address5
                address6 = FAILURE
                address6 = _read_SPACE
                unless address6 == FAILURE
                  elements0 << address6
                else
                  elements0 = nil
                  @offset = index2
                end
              else
                elements0 = nil
                @offset = index2
              end
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode90.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index3, elements1 = @offset, []
        address7 = FAILURE
        address7 = _read_ENUM
        unless address7 == FAILURE
          elements1 << address7
          address8 = FAILURE
          address8 = _read_IDENTIFIER
          unless address8 == FAILURE
            elements1 << address8
            address9 = FAILURE
            chunk2 = nil
            if @offset < @input_size
              chunk2 = @input[@offset...@offset + 1]
            end
            if chunk2 == "{"
              address9 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address9 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "'{'"
              end
            end
            unless address9 == FAILURE
              elements1 << address9
              address10 = FAILURE
              address10 = _read_SPACE
              unless address10 == FAILURE
                elements1 << address10
                address11 = FAILURE
                address11 = _read_enumerator_list
                unless address11 == FAILURE
                  elements1 << address11
                  address12 = FAILURE
                  chunk3 = nil
                  if @offset < @input_size
                    chunk3 = @input[@offset...@offset + 1]
                  end
                  if chunk3 == "}"
                    address12 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address12 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "'}'"
                    end
                  end
                  unless address12 == FAILURE
                    elements1 << address12
                    address13 = FAILURE
                    address13 = _read_SPACE
                    unless address13 == FAILURE
                      elements1 << address13
                    else
                      elements1 = nil
                      @offset = index3
                    end
                  else
                    elements1 = nil
                    @offset = index3
                  end
                else
                  elements1 = nil
                  @offset = index3
                end
              else
                elements1 = nil
                @offset = index3
              end
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
        else
          elements1 = nil
          @offset = index3
        end
        if elements1.nil?
          address0 = FAILURE
        else
          address0 = TreeNode91.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
          index4, elements2 = @offset, []
          address14 = FAILURE
          address14 = _read_ENUM
          unless address14 == FAILURE
            elements2 << address14
            address15 = FAILURE
            chunk4 = nil
            if @offset < @input_size
              chunk4 = @input[@offset...@offset + 1]
            end
            if chunk4 == "{"
              address15 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address15 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "'{'"
              end
            end
            unless address15 == FAILURE
              elements2 << address15
              address16 = FAILURE
              address16 = _read_SPACE
              unless address16 == FAILURE
                elements2 << address16
                address17 = FAILURE
                address17 = _read_enumerator_list
                unless address17 == FAILURE
                  elements2 << address17
                  address18 = FAILURE
                  chunk5 = nil
                  if @offset < @input_size
                    chunk5 = @input[@offset...@offset + 1]
                  end
                  if chunk5 == ","
                    address18 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address18 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "','"
                    end
                  end
                  unless address18 == FAILURE
                    elements2 << address18
                    address19 = FAILURE
                    address19 = _read_SPACE
                    unless address19 == FAILURE
                      elements2 << address19
                      address20 = FAILURE
                      chunk6 = nil
                      if @offset < @input_size
                        chunk6 = @input[@offset...@offset + 1]
                      end
                      if chunk6 == "}"
                        address20 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address20 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "'}'"
                        end
                      end
                      unless address20 == FAILURE
                        elements2 << address20
                        address21 = FAILURE
                        address21 = _read_SPACE
                        unless address21 == FAILURE
                          elements2 << address21
                        else
                          elements2 = nil
                          @offset = index4
                        end
                      else
                        elements2 = nil
                        @offset = index4
                      end
                    else
                      elements2 = nil
                      @offset = index4
                    end
                  else
                    elements2 = nil
                    @offset = index4
                  end
                else
                  elements2 = nil
                  @offset = index4
                end
              else
                elements2 = nil
                @offset = index4
              end
            else
              elements2 = nil
              @offset = index4
            end
          else
            elements2 = nil
            @offset = index4
          end
          if elements2.nil?
            address0 = FAILURE
          else
            address0 = TreeNode92.new(@input[index4...@offset], index4, elements2)
            @offset = @offset
          end
          if address0 == FAILURE
            @offset = index1
            index5, elements3 = @offset, []
            address22 = FAILURE
            address22 = _read_ENUM
            unless address22 == FAILURE
              elements3 << address22
              address23 = FAILURE
              address23 = _read_IDENTIFIER
              unless address23 == FAILURE
                elements3 << address23
                address24 = FAILURE
                chunk7 = nil
                if @offset < @input_size
                  chunk7 = @input[@offset...@offset + 1]
                end
                if chunk7 == "{"
                  address24 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address24 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "'{'"
                  end
                end
                unless address24 == FAILURE
                  elements3 << address24
                  address25 = FAILURE
                  address25 = _read_SPACE
                  unless address25 == FAILURE
                    elements3 << address25
                    address26 = FAILURE
                    address26 = _read_enumerator_list
                    unless address26 == FAILURE
                      elements3 << address26
                      address27 = FAILURE
                      chunk8 = nil
                      if @offset < @input_size
                        chunk8 = @input[@offset...@offset + 1]
                      end
                      if chunk8 == ","
                        address27 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address27 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "','"
                        end
                      end
                      unless address27 == FAILURE
                        elements3 << address27
                        address28 = FAILURE
                        address28 = _read_SPACE
                        unless address28 == FAILURE
                          elements3 << address28
                          address29 = FAILURE
                          chunk9 = nil
                          if @offset < @input_size
                            chunk9 = @input[@offset...@offset + 1]
                          end
                          if chunk9 == "}"
                            address29 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address29 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "'}'"
                            end
                          end
                          unless address29 == FAILURE
                            elements3 << address29
                            address30 = FAILURE
                            address30 = _read_SPACE
                            unless address30 == FAILURE
                              elements3 << address30
                            else
                              elements3 = nil
                              @offset = index5
                            end
                          else
                            elements3 = nil
                            @offset = index5
                          end
                        else
                          elements3 = nil
                          @offset = index5
                        end
                      else
                        elements3 = nil
                        @offset = index5
                      end
                    else
                      elements3 = nil
                      @offset = index5
                    end
                  else
                    elements3 = nil
                    @offset = index5
                  end
                else
                  elements3 = nil
                  @offset = index5
                end
              else
                elements3 = nil
                @offset = index5
              end
            else
              elements3 = nil
              @offset = index5
            end
            if elements3.nil?
              address0 = FAILURE
            else
              address0 = TreeNode93.new(@input[index5...@offset], index5, elements3)
              @offset = @offset
            end
            if address0 == FAILURE
              @offset = index1
              index6, elements4 = @offset, []
              address31 = FAILURE
              address31 = _read_ENUM
              unless address31 == FAILURE
                elements4 << address31
                address32 = FAILURE
                address32 = _read_IDENTIFIER
                unless address32 == FAILURE
                  elements4 << address32
                else
                  elements4 = nil
                  @offset = index6
                end
              else
                elements4 = nil
                @offset = index6
              end
              if elements4.nil?
                address0 = FAILURE
              else
                address0 = TreeNode94.new(@input[index6...@offset], index6, elements4)
                @offset = @offset
              end
              if address0 == FAILURE
                @offset = index1
              end
            end
          end
        end
      end
      @cache[:enum_specifier][index0] = [address0, @offset]
      return address0
    end

    def _read_enumerator_list
      address0, index0 = FAILURE, @offset
      cached = @cache[:enumerator_list][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_enumerator
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3, elements2 = @offset, []
          address4 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == ","
            address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address4 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "','"
            end
          end
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_SPACE
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              address6 = _read_enumerator
              unless address6 == FAILURE
                elements2 << address6
              else
                elements2 = nil
                @offset = index3
              end
            else
              elements2 = nil
              @offset = index3
            end
          else
            elements2 = nil
            @offset = index3
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode96.new(@input[index3...@offset], index3, elements2)
            @offset = @offset
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode95.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:enumerator_list][index0] = [address0, @offset]
      return address0
    end

    def _read_enumerator
      address0, index0 = FAILURE, @offset
      cached = @cache[:enumerator][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_IDENTIFIER
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        chunk0 = nil
        if @offset < @input_size
          chunk0 = @input[@offset...@offset + 1]
        end
        if chunk0 == "="
          address2 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address2 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "'='"
          end
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            address4 = _read_constant_expression
            unless address4 == FAILURE
              elements0 << address4
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode97.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        address0 = _read_IDENTIFIER
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:enumerator][index0] = [address0, @offset]
      return address0
    end

    def _read_type_qualifier
      address0, index0 = FAILURE, @offset
      cached = @cache[:type_qualifier][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      address0 = _read_CONST
      if address0 == FAILURE
        @offset = index1
        address0 = _read_RESTRICT
        if address0 == FAILURE
          @offset = index1
          address0 = _read_VOLATILE
          if address0 == FAILURE
            @offset = index1
          end
        end
      end
      @cache[:type_qualifier][index0] = [address0, @offset]
      return address0
    end

    def _read_function_specifier
      address0, index0 = FAILURE, @offset
      cached = @cache[:function_specifier][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      address0 = _read_INLINE
      @cache[:function_specifier][index0] = [address0, @offset]
      return address0
    end

    def _read_declarator
      address0, index0 = FAILURE, @offset
      cached = @cache[:declarator][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_pointer
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_direct_declarator
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode98.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        address0 = _read_direct_declarator
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:declarator][index0] = [address0, @offset]
      return address0
    end

    def _read_direct_declarator
      address0, index0 = FAILURE, @offset
      cached = @cache[:direct_declarator][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_IDENTIFIER
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index3, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index4 = @offset
          index5, elements2 = @offset, []
          address4 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == "["
            address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address4 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "'['"
            end
          end
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_SPACE
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              address6 = _read_type_qualifier_list
              unless address6 == FAILURE
                elements2 << address6
                address7 = FAILURE
                address7 = _read_assignment_expression
                unless address7 == FAILURE
                  elements2 << address7
                  address8 = FAILURE
                  chunk1 = nil
                  if @offset < @input_size
                    chunk1 = @input[@offset...@offset + 1]
                  end
                  if chunk1 == "]"
                    address8 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address8 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "']'"
                    end
                  end
                  unless address8 == FAILURE
                    elements2 << address8
                    address9 = FAILURE
                    address9 = _read_SPACE
                    unless address9 == FAILURE
                      elements2 << address9
                    else
                      elements2 = nil
                      @offset = index5
                    end
                  else
                    elements2 = nil
                    @offset = index5
                  end
                else
                  elements2 = nil
                  @offset = index5
                end
              else
                elements2 = nil
                @offset = index5
              end
            else
              elements2 = nil
              @offset = index5
            end
          else
            elements2 = nil
            @offset = index5
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode100.new(@input[index5...@offset], index5, elements2)
            @offset = @offset
          end
          if address3 == FAILURE
            @offset = index4
            index6, elements3 = @offset, []
            address10 = FAILURE
            chunk2 = nil
            if @offset < @input_size
              chunk2 = @input[@offset...@offset + 1]
            end
            if chunk2 == "["
              address10 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address10 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "'['"
              end
            end
            unless address10 == FAILURE
              elements3 << address10
              address11 = FAILURE
              address11 = _read_SPACE
              unless address11 == FAILURE
                elements3 << address11
                address12 = FAILURE
                address12 = _read_type_qualifier_list
                unless address12 == FAILURE
                  elements3 << address12
                  address13 = FAILURE
                  chunk3 = nil
                  if @offset < @input_size
                    chunk3 = @input[@offset...@offset + 1]
                  end
                  if chunk3 == "]"
                    address13 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address13 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "']'"
                    end
                  end
                  unless address13 == FAILURE
                    elements3 << address13
                    address14 = FAILURE
                    address14 = _read_SPACE
                    unless address14 == FAILURE
                      elements3 << address14
                    else
                      elements3 = nil
                      @offset = index6
                    end
                  else
                    elements3 = nil
                    @offset = index6
                  end
                else
                  elements3 = nil
                  @offset = index6
                end
              else
                elements3 = nil
                @offset = index6
              end
            else
              elements3 = nil
              @offset = index6
            end
            if elements3.nil?
              address3 = FAILURE
            else
              address3 = TreeNode101.new(@input[index6...@offset], index6, elements3)
              @offset = @offset
            end
            if address3 == FAILURE
              @offset = index4
              index7, elements4 = @offset, []
              address15 = FAILURE
              chunk4 = nil
              if @offset < @input_size
                chunk4 = @input[@offset...@offset + 1]
              end
              if chunk4 == "["
                address15 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address15 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "'['"
                end
              end
              unless address15 == FAILURE
                elements4 << address15
                address16 = FAILURE
                address16 = _read_SPACE
                unless address16 == FAILURE
                  elements4 << address16
                  address17 = FAILURE
                  address17 = _read_assignment_expression
                  unless address17 == FAILURE
                    elements4 << address17
                    address18 = FAILURE
                    chunk5 = nil
                    if @offset < @input_size
                      chunk5 = @input[@offset...@offset + 1]
                    end
                    if chunk5 == "]"
                      address18 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address18 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "']'"
                      end
                    end
                    unless address18 == FAILURE
                      elements4 << address18
                      address19 = FAILURE
                      address19 = _read_SPACE
                      unless address19 == FAILURE
                        elements4 << address19
                      else
                        elements4 = nil
                        @offset = index7
                      end
                    else
                      elements4 = nil
                      @offset = index7
                    end
                  else
                    elements4 = nil
                    @offset = index7
                  end
                else
                  elements4 = nil
                  @offset = index7
                end
              else
                elements4 = nil
                @offset = index7
              end
              if elements4.nil?
                address3 = FAILURE
              else
                address3 = TreeNode102.new(@input[index7...@offset], index7, elements4)
                @offset = @offset
              end
              if address3 == FAILURE
                @offset = index4
                index8, elements5 = @offset, []
                address20 = FAILURE
                chunk6 = nil
                if @offset < @input_size
                  chunk6 = @input[@offset...@offset + 1]
                end
                if chunk6 == "["
                  address20 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address20 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "'['"
                  end
                end
                unless address20 == FAILURE
                  elements5 << address20
                  address21 = FAILURE
                  address21 = _read_SPACE
                  unless address21 == FAILURE
                    elements5 << address21
                    address22 = FAILURE
                    address22 = _read_STATIC
                    unless address22 == FAILURE
                      elements5 << address22
                      address23 = FAILURE
                      address23 = _read_type_qualifier_list
                      unless address23 == FAILURE
                        elements5 << address23
                        address24 = FAILURE
                        address24 = _read_assignment_expression
                        unless address24 == FAILURE
                          elements5 << address24
                          address25 = FAILURE
                          chunk7 = nil
                          if @offset < @input_size
                            chunk7 = @input[@offset...@offset + 1]
                          end
                          if chunk7 == "]"
                            address25 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address25 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "']'"
                            end
                          end
                          unless address25 == FAILURE
                            elements5 << address25
                            address26 = FAILURE
                            address26 = _read_SPACE
                            unless address26 == FAILURE
                              elements5 << address26
                            else
                              elements5 = nil
                              @offset = index8
                            end
                          else
                            elements5 = nil
                            @offset = index8
                          end
                        else
                          elements5 = nil
                          @offset = index8
                        end
                      else
                        elements5 = nil
                        @offset = index8
                      end
                    else
                      elements5 = nil
                      @offset = index8
                    end
                  else
                    elements5 = nil
                    @offset = index8
                  end
                else
                  elements5 = nil
                  @offset = index8
                end
                if elements5.nil?
                  address3 = FAILURE
                else
                  address3 = TreeNode103.new(@input[index8...@offset], index8, elements5)
                  @offset = @offset
                end
                if address3 == FAILURE
                  @offset = index4
                  index9, elements6 = @offset, []
                  address27 = FAILURE
                  chunk8 = nil
                  if @offset < @input_size
                    chunk8 = @input[@offset...@offset + 1]
                  end
                  if chunk8 == "["
                    address27 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address27 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "'['"
                    end
                  end
                  unless address27 == FAILURE
                    elements6 << address27
                    address28 = FAILURE
                    address28 = _read_SPACE
                    unless address28 == FAILURE
                      elements6 << address28
                      address29 = FAILURE
                      address29 = _read_type_qualifier_list
                      unless address29 == FAILURE
                        elements6 << address29
                        address30 = FAILURE
                        address30 = _read_STATIC
                        unless address30 == FAILURE
                          elements6 << address30
                          address31 = FAILURE
                          address31 = _read_assignment_expression
                          unless address31 == FAILURE
                            elements6 << address31
                            address32 = FAILURE
                            chunk9 = nil
                            if @offset < @input_size
                              chunk9 = @input[@offset...@offset + 1]
                            end
                            if chunk9 == "]"
                              address32 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address32 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "']'"
                              end
                            end
                            unless address32 == FAILURE
                              elements6 << address32
                              address33 = FAILURE
                              address33 = _read_SPACE
                              unless address33 == FAILURE
                                elements6 << address33
                              else
                                elements6 = nil
                                @offset = index9
                              end
                            else
                              elements6 = nil
                              @offset = index9
                            end
                          else
                            elements6 = nil
                            @offset = index9
                          end
                        else
                          elements6 = nil
                          @offset = index9
                        end
                      else
                        elements6 = nil
                        @offset = index9
                      end
                    else
                      elements6 = nil
                      @offset = index9
                    end
                  else
                    elements6 = nil
                    @offset = index9
                  end
                  if elements6.nil?
                    address3 = FAILURE
                  else
                    address3 = TreeNode104.new(@input[index9...@offset], index9, elements6)
                    @offset = @offset
                  end
                  if address3 == FAILURE
                    @offset = index4
                    index10, elements7 = @offset, []
                    address34 = FAILURE
                    chunk10 = nil
                    if @offset < @input_size
                      chunk10 = @input[@offset...@offset + 1]
                    end
                    if chunk10 == "["
                      address34 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address34 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "'['"
                      end
                    end
                    unless address34 == FAILURE
                      elements7 << address34
                      address35 = FAILURE
                      address35 = _read_SPACE
                      unless address35 == FAILURE
                        elements7 << address35
                        address36 = FAILURE
                        address36 = _read_type_qualifier_list
                        unless address36 == FAILURE
                          elements7 << address36
                          address37 = FAILURE
                          chunk11 = nil
                          if @offset < @input_size
                            chunk11 = @input[@offset...@offset + 1]
                          end
                          if chunk11 == "*"
                            address37 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address37 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "'*'"
                            end
                          end
                          unless address37 == FAILURE
                            elements7 << address37
                            address38 = FAILURE
                            address38 = _read_SPACE
                            unless address38 == FAILURE
                              elements7 << address38
                              address39 = FAILURE
                              chunk12 = nil
                              if @offset < @input_size
                                chunk12 = @input[@offset...@offset + 1]
                              end
                              if chunk12 == "]"
                                address39 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address39 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "']'"
                                end
                              end
                              unless address39 == FAILURE
                                elements7 << address39
                                address40 = FAILURE
                                address40 = _read_SPACE
                                unless address40 == FAILURE
                                  elements7 << address40
                                else
                                  elements7 = nil
                                  @offset = index10
                                end
                              else
                                elements7 = nil
                                @offset = index10
                              end
                            else
                              elements7 = nil
                              @offset = index10
                            end
                          else
                            elements7 = nil
                            @offset = index10
                          end
                        else
                          elements7 = nil
                          @offset = index10
                        end
                      else
                        elements7 = nil
                        @offset = index10
                      end
                    else
                      elements7 = nil
                      @offset = index10
                    end
                    if elements7.nil?
                      address3 = FAILURE
                    else
                      address3 = TreeNode105.new(@input[index10...@offset], index10, elements7)
                      @offset = @offset
                    end
                    if address3 == FAILURE
                      @offset = index4
                      index11, elements8 = @offset, []
                      address41 = FAILURE
                      chunk13 = nil
                      if @offset < @input_size
                        chunk13 = @input[@offset...@offset + 1]
                      end
                      if chunk13 == "["
                        address41 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address41 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "'['"
                        end
                      end
                      unless address41 == FAILURE
                        elements8 << address41
                        address42 = FAILURE
                        address42 = _read_SPACE
                        unless address42 == FAILURE
                          elements8 << address42
                          address43 = FAILURE
                          chunk14 = nil
                          if @offset < @input_size
                            chunk14 = @input[@offset...@offset + 1]
                          end
                          if chunk14 == "*"
                            address43 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address43 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "'*'"
                            end
                          end
                          unless address43 == FAILURE
                            elements8 << address43
                            address44 = FAILURE
                            address44 = _read_SPACE
                            unless address44 == FAILURE
                              elements8 << address44
                              address45 = FAILURE
                              chunk15 = nil
                              if @offset < @input_size
                                chunk15 = @input[@offset...@offset + 1]
                              end
                              if chunk15 == "]"
                                address45 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address45 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "']'"
                                end
                              end
                              unless address45 == FAILURE
                                elements8 << address45
                                address46 = FAILURE
                                address46 = _read_SPACE
                                unless address46 == FAILURE
                                  elements8 << address46
                                else
                                  elements8 = nil
                                  @offset = index11
                                end
                              else
                                elements8 = nil
                                @offset = index11
                              end
                            else
                              elements8 = nil
                              @offset = index11
                            end
                          else
                            elements8 = nil
                            @offset = index11
                          end
                        else
                          elements8 = nil
                          @offset = index11
                        end
                      else
                        elements8 = nil
                        @offset = index11
                      end
                      if elements8.nil?
                        address3 = FAILURE
                      else
                        address3 = TreeNode106.new(@input[index11...@offset], index11, elements8)
                        @offset = @offset
                      end
                      if address3 == FAILURE
                        @offset = index4
                        index12, elements9 = @offset, []
                        address47 = FAILURE
                        chunk16 = nil
                        if @offset < @input_size
                          chunk16 = @input[@offset...@offset + 1]
                        end
                        if chunk16 == "["
                          address47 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address47 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "'['"
                          end
                        end
                        unless address47 == FAILURE
                          elements9 << address47
                          address48 = FAILURE
                          address48 = _read_SPACE
                          unless address48 == FAILURE
                            elements9 << address48
                            address49 = FAILURE
                            chunk17 = nil
                            if @offset < @input_size
                              chunk17 = @input[@offset...@offset + 1]
                            end
                            if chunk17 == "]"
                              address49 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address49 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "']'"
                              end
                            end
                            unless address49 == FAILURE
                              elements9 << address49
                              address50 = FAILURE
                              address50 = _read_SPACE
                              unless address50 == FAILURE
                                elements9 << address50
                              else
                                elements9 = nil
                                @offset = index12
                              end
                            else
                              elements9 = nil
                              @offset = index12
                            end
                          else
                            elements9 = nil
                            @offset = index12
                          end
                        else
                          elements9 = nil
                          @offset = index12
                        end
                        if elements9.nil?
                          address3 = FAILURE
                        else
                          address3 = TreeNode107.new(@input[index12...@offset], index12, elements9)
                          @offset = @offset
                        end
                        if address3 == FAILURE
                          @offset = index4
                          index13, elements10 = @offset, []
                          address51 = FAILURE
                          chunk18 = nil
                          if @offset < @input_size
                            chunk18 = @input[@offset...@offset + 1]
                          end
                          if chunk18 == "("
                            address51 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address51 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "'('"
                            end
                          end
                          unless address51 == FAILURE
                            elements10 << address51
                            address52 = FAILURE
                            address52 = _read_SPACE
                            unless address52 == FAILURE
                              elements10 << address52
                              address53 = FAILURE
                              address53 = _read_parameter_type_list
                              unless address53 == FAILURE
                                elements10 << address53
                                address54 = FAILURE
                                chunk19 = nil
                                if @offset < @input_size
                                  chunk19 = @input[@offset...@offset + 1]
                                end
                                if chunk19 == ")"
                                  address54 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address54 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "')'"
                                  end
                                end
                                unless address54 == FAILURE
                                  elements10 << address54
                                  address55 = FAILURE
                                  address55 = _read_SPACE
                                  unless address55 == FAILURE
                                    elements10 << address55
                                  else
                                    elements10 = nil
                                    @offset = index13
                                  end
                                else
                                  elements10 = nil
                                  @offset = index13
                                end
                              else
                                elements10 = nil
                                @offset = index13
                              end
                            else
                              elements10 = nil
                              @offset = index13
                            end
                          else
                            elements10 = nil
                            @offset = index13
                          end
                          if elements10.nil?
                            address3 = FAILURE
                          else
                            address3 = TreeNode108.new(@input[index13...@offset], index13, elements10)
                            @offset = @offset
                          end
                          if address3 == FAILURE
                            @offset = index4
                            index14, elements11 = @offset, []
                            address56 = FAILURE
                            chunk20 = nil
                            if @offset < @input_size
                              chunk20 = @input[@offset...@offset + 1]
                            end
                            if chunk20 == "("
                              address56 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address56 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "'('"
                              end
                            end
                            unless address56 == FAILURE
                              elements11 << address56
                              address57 = FAILURE
                              address57 = _read_SPACE
                              unless address57 == FAILURE
                                elements11 << address57
                                address58 = FAILURE
                                address58 = _read_identifier_list
                                unless address58 == FAILURE
                                  elements11 << address58
                                  address59 = FAILURE
                                  chunk21 = nil
                                  if @offset < @input_size
                                    chunk21 = @input[@offset...@offset + 1]
                                  end
                                  if chunk21 == ")"
                                    address59 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                    @offset = @offset + 1
                                  else
                                    address59 = FAILURE
                                    if @offset > @failure
                                      @failure = @offset
                                      @expected = []
                                    end
                                    if @offset == @failure
                                      @expected << "')'"
                                    end
                                  end
                                  unless address59 == FAILURE
                                    elements11 << address59
                                    address60 = FAILURE
                                    address60 = _read_SPACE
                                    unless address60 == FAILURE
                                      elements11 << address60
                                    else
                                      elements11 = nil
                                      @offset = index14
                                    end
                                  else
                                    elements11 = nil
                                    @offset = index14
                                  end
                                else
                                  elements11 = nil
                                  @offset = index14
                                end
                              else
                                elements11 = nil
                                @offset = index14
                              end
                            else
                              elements11 = nil
                              @offset = index14
                            end
                            if elements11.nil?
                              address3 = FAILURE
                            else
                              address3 = TreeNode109.new(@input[index14...@offset], index14, elements11)
                              @offset = @offset
                            end
                            if address3 == FAILURE
                              @offset = index4
                              index15, elements12 = @offset, []
                              address61 = FAILURE
                              chunk22 = nil
                              if @offset < @input_size
                                chunk22 = @input[@offset...@offset + 1]
                              end
                              if chunk22 == "("
                                address61 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address61 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "'('"
                                end
                              end
                              unless address61 == FAILURE
                                elements12 << address61
                                address62 = FAILURE
                                address62 = _read_SPACE
                                unless address62 == FAILURE
                                  elements12 << address62
                                  address63 = FAILURE
                                  chunk23 = nil
                                  if @offset < @input_size
                                    chunk23 = @input[@offset...@offset + 1]
                                  end
                                  if chunk23 == ")"
                                    address63 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                    @offset = @offset + 1
                                  else
                                    address63 = FAILURE
                                    if @offset > @failure
                                      @failure = @offset
                                      @expected = []
                                    end
                                    if @offset == @failure
                                      @expected << "')'"
                                    end
                                  end
                                  unless address63 == FAILURE
                                    elements12 << address63
                                    address64 = FAILURE
                                    address64 = _read_SPACE
                                    unless address64 == FAILURE
                                      elements12 << address64
                                    else
                                      elements12 = nil
                                      @offset = index15
                                    end
                                  else
                                    elements12 = nil
                                    @offset = index15
                                  end
                                else
                                  elements12 = nil
                                  @offset = index15
                                end
                              else
                                elements12 = nil
                                @offset = index15
                              end
                              if elements12.nil?
                                address3 = FAILURE
                              else
                                address3 = TreeNode110.new(@input[index15...@offset], index15, elements12)
                                @offset = @offset
                              end
                              if address3 == FAILURE
                                @offset = index4
                              end
                            end
                          end
                        end
                      end
                    end
                  end
                end
              end
            end
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode99.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index16, elements13 = @offset, []
        address65 = FAILURE
        chunk24 = nil
        if @offset < @input_size
          chunk24 = @input[@offset...@offset + 1]
        end
        if chunk24 == "("
          address65 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address65 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "'('"
          end
        end
        unless address65 == FAILURE
          elements13 << address65
          address66 = FAILURE
          address66 = _read_SPACE
          unless address66 == FAILURE
            elements13 << address66
            address67 = FAILURE
            address67 = _read_declarator
            unless address67 == FAILURE
              elements13 << address67
              address68 = FAILURE
              chunk25 = nil
              if @offset < @input_size
                chunk25 = @input[@offset...@offset + 1]
              end
              if chunk25 == ")"
                address68 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address68 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "')'"
                end
              end
              unless address68 == FAILURE
                elements13 << address68
                address69 = FAILURE
                address69 = _read_SPACE
                unless address69 == FAILURE
                  elements13 << address69
                  address70 = FAILURE
                  remaining1, index17, elements14, address71 = 0, @offset, [], true
                  until address71 == FAILURE
                    index18 = @offset
                    index19, elements15 = @offset, []
                    address72 = FAILURE
                    chunk26 = nil
                    if @offset < @input_size
                      chunk26 = @input[@offset...@offset + 1]
                    end
                    if chunk26 == "["
                      address72 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address72 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "'['"
                      end
                    end
                    unless address72 == FAILURE
                      elements15 << address72
                      address73 = FAILURE
                      address73 = _read_SPACE
                      unless address73 == FAILURE
                        elements15 << address73
                        address74 = FAILURE
                        address74 = _read_type_qualifier_list
                        unless address74 == FAILURE
                          elements15 << address74
                          address75 = FAILURE
                          address75 = _read_assignment_expression
                          unless address75 == FAILURE
                            elements15 << address75
                            address76 = FAILURE
                            chunk27 = nil
                            if @offset < @input_size
                              chunk27 = @input[@offset...@offset + 1]
                            end
                            if chunk27 == "]"
                              address76 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address76 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "']'"
                              end
                            end
                            unless address76 == FAILURE
                              elements15 << address76
                              address77 = FAILURE
                              address77 = _read_SPACE
                              unless address77 == FAILURE
                                elements15 << address77
                              else
                                elements15 = nil
                                @offset = index19
                              end
                            else
                              elements15 = nil
                              @offset = index19
                            end
                          else
                            elements15 = nil
                            @offset = index19
                          end
                        else
                          elements15 = nil
                          @offset = index19
                        end
                      else
                        elements15 = nil
                        @offset = index19
                      end
                    else
                      elements15 = nil
                      @offset = index19
                    end
                    if elements15.nil?
                      address71 = FAILURE
                    else
                      address71 = TreeNode112.new(@input[index19...@offset], index19, elements15)
                      @offset = @offset
                    end
                    if address71 == FAILURE
                      @offset = index18
                      index20, elements16 = @offset, []
                      address78 = FAILURE
                      chunk28 = nil
                      if @offset < @input_size
                        chunk28 = @input[@offset...@offset + 1]
                      end
                      if chunk28 == "["
                        address78 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address78 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "'['"
                        end
                      end
                      unless address78 == FAILURE
                        elements16 << address78
                        address79 = FAILURE
                        address79 = _read_SPACE
                        unless address79 == FAILURE
                          elements16 << address79
                          address80 = FAILURE
                          address80 = _read_type_qualifier_list
                          unless address80 == FAILURE
                            elements16 << address80
                            address81 = FAILURE
                            chunk29 = nil
                            if @offset < @input_size
                              chunk29 = @input[@offset...@offset + 1]
                            end
                            if chunk29 == "]"
                              address81 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address81 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "']'"
                              end
                            end
                            unless address81 == FAILURE
                              elements16 << address81
                              address82 = FAILURE
                              address82 = _read_SPACE
                              unless address82 == FAILURE
                                elements16 << address82
                              else
                                elements16 = nil
                                @offset = index20
                              end
                            else
                              elements16 = nil
                              @offset = index20
                            end
                          else
                            elements16 = nil
                            @offset = index20
                          end
                        else
                          elements16 = nil
                          @offset = index20
                        end
                      else
                        elements16 = nil
                        @offset = index20
                      end
                      if elements16.nil?
                        address71 = FAILURE
                      else
                        address71 = TreeNode113.new(@input[index20...@offset], index20, elements16)
                        @offset = @offset
                      end
                      if address71 == FAILURE
                        @offset = index18
                        index21, elements17 = @offset, []
                        address83 = FAILURE
                        chunk30 = nil
                        if @offset < @input_size
                          chunk30 = @input[@offset...@offset + 1]
                        end
                        if chunk30 == "["
                          address83 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address83 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "'['"
                          end
                        end
                        unless address83 == FAILURE
                          elements17 << address83
                          address84 = FAILURE
                          address84 = _read_SPACE
                          unless address84 == FAILURE
                            elements17 << address84
                            address85 = FAILURE
                            address85 = _read_assignment_expression
                            unless address85 == FAILURE
                              elements17 << address85
                              address86 = FAILURE
                              chunk31 = nil
                              if @offset < @input_size
                                chunk31 = @input[@offset...@offset + 1]
                              end
                              if chunk31 == "]"
                                address86 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address86 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "']'"
                                end
                              end
                              unless address86 == FAILURE
                                elements17 << address86
                                address87 = FAILURE
                                address87 = _read_SPACE
                                unless address87 == FAILURE
                                  elements17 << address87
                                else
                                  elements17 = nil
                                  @offset = index21
                                end
                              else
                                elements17 = nil
                                @offset = index21
                              end
                            else
                              elements17 = nil
                              @offset = index21
                            end
                          else
                            elements17 = nil
                            @offset = index21
                          end
                        else
                          elements17 = nil
                          @offset = index21
                        end
                        if elements17.nil?
                          address71 = FAILURE
                        else
                          address71 = TreeNode114.new(@input[index21...@offset], index21, elements17)
                          @offset = @offset
                        end
                        if address71 == FAILURE
                          @offset = index18
                          index22, elements18 = @offset, []
                          address88 = FAILURE
                          chunk32 = nil
                          if @offset < @input_size
                            chunk32 = @input[@offset...@offset + 1]
                          end
                          if chunk32 == "["
                            address88 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address88 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "'['"
                            end
                          end
                          unless address88 == FAILURE
                            elements18 << address88
                            address89 = FAILURE
                            address89 = _read_SPACE
                            unless address89 == FAILURE
                              elements18 << address89
                              address90 = FAILURE
                              address90 = _read_STATIC
                              unless address90 == FAILURE
                                elements18 << address90
                                address91 = FAILURE
                                address91 = _read_type_qualifier_list
                                unless address91 == FAILURE
                                  elements18 << address91
                                  address92 = FAILURE
                                  address92 = _read_assignment_expression
                                  unless address92 == FAILURE
                                    elements18 << address92
                                    address93 = FAILURE
                                    chunk33 = nil
                                    if @offset < @input_size
                                      chunk33 = @input[@offset...@offset + 1]
                                    end
                                    if chunk33 == "]"
                                      address93 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address93 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "']'"
                                      end
                                    end
                                    unless address93 == FAILURE
                                      elements18 << address93
                                      address94 = FAILURE
                                      address94 = _read_SPACE
                                      unless address94 == FAILURE
                                        elements18 << address94
                                      else
                                        elements18 = nil
                                        @offset = index22
                                      end
                                    else
                                      elements18 = nil
                                      @offset = index22
                                    end
                                  else
                                    elements18 = nil
                                    @offset = index22
                                  end
                                else
                                  elements18 = nil
                                  @offset = index22
                                end
                              else
                                elements18 = nil
                                @offset = index22
                              end
                            else
                              elements18 = nil
                              @offset = index22
                            end
                          else
                            elements18 = nil
                            @offset = index22
                          end
                          if elements18.nil?
                            address71 = FAILURE
                          else
                            address71 = TreeNode115.new(@input[index22...@offset], index22, elements18)
                            @offset = @offset
                          end
                          if address71 == FAILURE
                            @offset = index18
                            index23, elements19 = @offset, []
                            address95 = FAILURE
                            chunk34 = nil
                            if @offset < @input_size
                              chunk34 = @input[@offset...@offset + 1]
                            end
                            if chunk34 == "["
                              address95 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address95 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "'['"
                              end
                            end
                            unless address95 == FAILURE
                              elements19 << address95
                              address96 = FAILURE
                              address96 = _read_SPACE
                              unless address96 == FAILURE
                                elements19 << address96
                                address97 = FAILURE
                                address97 = _read_type_qualifier_list
                                unless address97 == FAILURE
                                  elements19 << address97
                                  address98 = FAILURE
                                  address98 = _read_STATIC
                                  unless address98 == FAILURE
                                    elements19 << address98
                                    address99 = FAILURE
                                    address99 = _read_assignment_expression
                                    unless address99 == FAILURE
                                      elements19 << address99
                                      address100 = FAILURE
                                      chunk35 = nil
                                      if @offset < @input_size
                                        chunk35 = @input[@offset...@offset + 1]
                                      end
                                      if chunk35 == "]"
                                        address100 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                        @offset = @offset + 1
                                      else
                                        address100 = FAILURE
                                        if @offset > @failure
                                          @failure = @offset
                                          @expected = []
                                        end
                                        if @offset == @failure
                                          @expected << "']'"
                                        end
                                      end
                                      unless address100 == FAILURE
                                        elements19 << address100
                                        address101 = FAILURE
                                        address101 = _read_SPACE
                                        unless address101 == FAILURE
                                          elements19 << address101
                                        else
                                          elements19 = nil
                                          @offset = index23
                                        end
                                      else
                                        elements19 = nil
                                        @offset = index23
                                      end
                                    else
                                      elements19 = nil
                                      @offset = index23
                                    end
                                  else
                                    elements19 = nil
                                    @offset = index23
                                  end
                                else
                                  elements19 = nil
                                  @offset = index23
                                end
                              else
                                elements19 = nil
                                @offset = index23
                              end
                            else
                              elements19 = nil
                              @offset = index23
                            end
                            if elements19.nil?
                              address71 = FAILURE
                            else
                              address71 = TreeNode116.new(@input[index23...@offset], index23, elements19)
                              @offset = @offset
                            end
                            if address71 == FAILURE
                              @offset = index18
                              index24, elements20 = @offset, []
                              address102 = FAILURE
                              chunk36 = nil
                              if @offset < @input_size
                                chunk36 = @input[@offset...@offset + 1]
                              end
                              if chunk36 == "["
                                address102 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address102 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "'['"
                                end
                              end
                              unless address102 == FAILURE
                                elements20 << address102
                                address103 = FAILURE
                                address103 = _read_SPACE
                                unless address103 == FAILURE
                                  elements20 << address103
                                  address104 = FAILURE
                                  address104 = _read_type_qualifier_list
                                  unless address104 == FAILURE
                                    elements20 << address104
                                    address105 = FAILURE
                                    chunk37 = nil
                                    if @offset < @input_size
                                      chunk37 = @input[@offset...@offset + 1]
                                    end
                                    if chunk37 == "*"
                                      address105 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address105 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "'*'"
                                      end
                                    end
                                    unless address105 == FAILURE
                                      elements20 << address105
                                      address106 = FAILURE
                                      address106 = _read_SPACE
                                      unless address106 == FAILURE
                                        elements20 << address106
                                        address107 = FAILURE
                                        chunk38 = nil
                                        if @offset < @input_size
                                          chunk38 = @input[@offset...@offset + 1]
                                        end
                                        if chunk38 == "]"
                                          address107 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                          @offset = @offset + 1
                                        else
                                          address107 = FAILURE
                                          if @offset > @failure
                                            @failure = @offset
                                            @expected = []
                                          end
                                          if @offset == @failure
                                            @expected << "']'"
                                          end
                                        end
                                        unless address107 == FAILURE
                                          elements20 << address107
                                          address108 = FAILURE
                                          address108 = _read_SPACE
                                          unless address108 == FAILURE
                                            elements20 << address108
                                          else
                                            elements20 = nil
                                            @offset = index24
                                          end
                                        else
                                          elements20 = nil
                                          @offset = index24
                                        end
                                      else
                                        elements20 = nil
                                        @offset = index24
                                      end
                                    else
                                      elements20 = nil
                                      @offset = index24
                                    end
                                  else
                                    elements20 = nil
                                    @offset = index24
                                  end
                                else
                                  elements20 = nil
                                  @offset = index24
                                end
                              else
                                elements20 = nil
                                @offset = index24
                              end
                              if elements20.nil?
                                address71 = FAILURE
                              else
                                address71 = TreeNode117.new(@input[index24...@offset], index24, elements20)
                                @offset = @offset
                              end
                              if address71 == FAILURE
                                @offset = index18
                                index25, elements21 = @offset, []
                                address109 = FAILURE
                                chunk39 = nil
                                if @offset < @input_size
                                  chunk39 = @input[@offset...@offset + 1]
                                end
                                if chunk39 == "["
                                  address109 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address109 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "'['"
                                  end
                                end
                                unless address109 == FAILURE
                                  elements21 << address109
                                  address110 = FAILURE
                                  address110 = _read_SPACE
                                  unless address110 == FAILURE
                                    elements21 << address110
                                    address111 = FAILURE
                                    chunk40 = nil
                                    if @offset < @input_size
                                      chunk40 = @input[@offset...@offset + 1]
                                    end
                                    if chunk40 == "*"
                                      address111 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address111 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "'*'"
                                      end
                                    end
                                    unless address111 == FAILURE
                                      elements21 << address111
                                      address112 = FAILURE
                                      address112 = _read_SPACE
                                      unless address112 == FAILURE
                                        elements21 << address112
                                        address113 = FAILURE
                                        chunk41 = nil
                                        if @offset < @input_size
                                          chunk41 = @input[@offset...@offset + 1]
                                        end
                                        if chunk41 == "]"
                                          address113 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                          @offset = @offset + 1
                                        else
                                          address113 = FAILURE
                                          if @offset > @failure
                                            @failure = @offset
                                            @expected = []
                                          end
                                          if @offset == @failure
                                            @expected << "']'"
                                          end
                                        end
                                        unless address113 == FAILURE
                                          elements21 << address113
                                          address114 = FAILURE
                                          address114 = _read_SPACE
                                          unless address114 == FAILURE
                                            elements21 << address114
                                          else
                                            elements21 = nil
                                            @offset = index25
                                          end
                                        else
                                          elements21 = nil
                                          @offset = index25
                                        end
                                      else
                                        elements21 = nil
                                        @offset = index25
                                      end
                                    else
                                      elements21 = nil
                                      @offset = index25
                                    end
                                  else
                                    elements21 = nil
                                    @offset = index25
                                  end
                                else
                                  elements21 = nil
                                  @offset = index25
                                end
                                if elements21.nil?
                                  address71 = FAILURE
                                else
                                  address71 = TreeNode118.new(@input[index25...@offset], index25, elements21)
                                  @offset = @offset
                                end
                                if address71 == FAILURE
                                  @offset = index18
                                  index26, elements22 = @offset, []
                                  address115 = FAILURE
                                  chunk42 = nil
                                  if @offset < @input_size
                                    chunk42 = @input[@offset...@offset + 1]
                                  end
                                  if chunk42 == "["
                                    address115 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                    @offset = @offset + 1
                                  else
                                    address115 = FAILURE
                                    if @offset > @failure
                                      @failure = @offset
                                      @expected = []
                                    end
                                    if @offset == @failure
                                      @expected << "'['"
                                    end
                                  end
                                  unless address115 == FAILURE
                                    elements22 << address115
                                    address116 = FAILURE
                                    address116 = _read_SPACE
                                    unless address116 == FAILURE
                                      elements22 << address116
                                      address117 = FAILURE
                                      chunk43 = nil
                                      if @offset < @input_size
                                        chunk43 = @input[@offset...@offset + 1]
                                      end
                                      if chunk43 == "]"
                                        address117 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                        @offset = @offset + 1
                                      else
                                        address117 = FAILURE
                                        if @offset > @failure
                                          @failure = @offset
                                          @expected = []
                                        end
                                        if @offset == @failure
                                          @expected << "']'"
                                        end
                                      end
                                      unless address117 == FAILURE
                                        elements22 << address117
                                        address118 = FAILURE
                                        address118 = _read_SPACE
                                        unless address118 == FAILURE
                                          elements22 << address118
                                        else
                                          elements22 = nil
                                          @offset = index26
                                        end
                                      else
                                        elements22 = nil
                                        @offset = index26
                                      end
                                    else
                                      elements22 = nil
                                      @offset = index26
                                    end
                                  else
                                    elements22 = nil
                                    @offset = index26
                                  end
                                  if elements22.nil?
                                    address71 = FAILURE
                                  else
                                    address71 = TreeNode119.new(@input[index26...@offset], index26, elements22)
                                    @offset = @offset
                                  end
                                  if address71 == FAILURE
                                    @offset = index18
                                    index27, elements23 = @offset, []
                                    address119 = FAILURE
                                    chunk44 = nil
                                    if @offset < @input_size
                                      chunk44 = @input[@offset...@offset + 1]
                                    end
                                    if chunk44 == "("
                                      address119 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address119 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "'('"
                                      end
                                    end
                                    unless address119 == FAILURE
                                      elements23 << address119
                                      address120 = FAILURE
                                      address120 = _read_SPACE
                                      unless address120 == FAILURE
                                        elements23 << address120
                                        address121 = FAILURE
                                        address121 = _read_parameter_type_list
                                        unless address121 == FAILURE
                                          elements23 << address121
                                          address122 = FAILURE
                                          chunk45 = nil
                                          if @offset < @input_size
                                            chunk45 = @input[@offset...@offset + 1]
                                          end
                                          if chunk45 == ")"
                                            address122 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                            @offset = @offset + 1
                                          else
                                            address122 = FAILURE
                                            if @offset > @failure
                                              @failure = @offset
                                              @expected = []
                                            end
                                            if @offset == @failure
                                              @expected << "')'"
                                            end
                                          end
                                          unless address122 == FAILURE
                                            elements23 << address122
                                            address123 = FAILURE
                                            address123 = _read_SPACE
                                            unless address123 == FAILURE
                                              elements23 << address123
                                            else
                                              elements23 = nil
                                              @offset = index27
                                            end
                                          else
                                            elements23 = nil
                                            @offset = index27
                                          end
                                        else
                                          elements23 = nil
                                          @offset = index27
                                        end
                                      else
                                        elements23 = nil
                                        @offset = index27
                                      end
                                    else
                                      elements23 = nil
                                      @offset = index27
                                    end
                                    if elements23.nil?
                                      address71 = FAILURE
                                    else
                                      address71 = TreeNode120.new(@input[index27...@offset], index27, elements23)
                                      @offset = @offset
                                    end
                                    if address71 == FAILURE
                                      @offset = index18
                                      index28, elements24 = @offset, []
                                      address124 = FAILURE
                                      chunk46 = nil
                                      if @offset < @input_size
                                        chunk46 = @input[@offset...@offset + 1]
                                      end
                                      if chunk46 == "("
                                        address124 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                        @offset = @offset + 1
                                      else
                                        address124 = FAILURE
                                        if @offset > @failure
                                          @failure = @offset
                                          @expected = []
                                        end
                                        if @offset == @failure
                                          @expected << "'('"
                                        end
                                      end
                                      unless address124 == FAILURE
                                        elements24 << address124
                                        address125 = FAILURE
                                        address125 = _read_SPACE
                                        unless address125 == FAILURE
                                          elements24 << address125
                                          address126 = FAILURE
                                          address126 = _read_identifier_list
                                          unless address126 == FAILURE
                                            elements24 << address126
                                            address127 = FAILURE
                                            chunk47 = nil
                                            if @offset < @input_size
                                              chunk47 = @input[@offset...@offset + 1]
                                            end
                                            if chunk47 == ")"
                                              address127 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                              @offset = @offset + 1
                                            else
                                              address127 = FAILURE
                                              if @offset > @failure
                                                @failure = @offset
                                                @expected = []
                                              end
                                              if @offset == @failure
                                                @expected << "')'"
                                              end
                                            end
                                            unless address127 == FAILURE
                                              elements24 << address127
                                              address128 = FAILURE
                                              address128 = _read_SPACE
                                              unless address128 == FAILURE
                                                elements24 << address128
                                              else
                                                elements24 = nil
                                                @offset = index28
                                              end
                                            else
                                              elements24 = nil
                                              @offset = index28
                                            end
                                          else
                                            elements24 = nil
                                            @offset = index28
                                          end
                                        else
                                          elements24 = nil
                                          @offset = index28
                                        end
                                      else
                                        elements24 = nil
                                        @offset = index28
                                      end
                                      if elements24.nil?
                                        address71 = FAILURE
                                      else
                                        address71 = TreeNode121.new(@input[index28...@offset], index28, elements24)
                                        @offset = @offset
                                      end
                                      if address71 == FAILURE
                                        @offset = index18
                                        index29, elements25 = @offset, []
                                        address129 = FAILURE
                                        chunk48 = nil
                                        if @offset < @input_size
                                          chunk48 = @input[@offset...@offset + 1]
                                        end
                                        if chunk48 == "("
                                          address129 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                          @offset = @offset + 1
                                        else
                                          address129 = FAILURE
                                          if @offset > @failure
                                            @failure = @offset
                                            @expected = []
                                          end
                                          if @offset == @failure
                                            @expected << "'('"
                                          end
                                        end
                                        unless address129 == FAILURE
                                          elements25 << address129
                                          address130 = FAILURE
                                          address130 = _read_SPACE
                                          unless address130 == FAILURE
                                            elements25 << address130
                                            address131 = FAILURE
                                            chunk49 = nil
                                            if @offset < @input_size
                                              chunk49 = @input[@offset...@offset + 1]
                                            end
                                            if chunk49 == ")"
                                              address131 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                              @offset = @offset + 1
                                            else
                                              address131 = FAILURE
                                              if @offset > @failure
                                                @failure = @offset
                                                @expected = []
                                              end
                                              if @offset == @failure
                                                @expected << "')'"
                                              end
                                            end
                                            unless address131 == FAILURE
                                              elements25 << address131
                                              address132 = FAILURE
                                              address132 = _read_SPACE
                                              unless address132 == FAILURE
                                                elements25 << address132
                                              else
                                                elements25 = nil
                                                @offset = index29
                                              end
                                            else
                                              elements25 = nil
                                              @offset = index29
                                            end
                                          else
                                            elements25 = nil
                                            @offset = index29
                                          end
                                        else
                                          elements25 = nil
                                          @offset = index29
                                        end
                                        if elements25.nil?
                                          address71 = FAILURE
                                        else
                                          address71 = TreeNode122.new(@input[index29...@offset], index29, elements25)
                                          @offset = @offset
                                        end
                                        if address71 == FAILURE
                                          @offset = index18
                                        end
                                      end
                                    end
                                  end
                                end
                              end
                            end
                          end
                        end
                      end
                    end
                    unless address71 == FAILURE
                      elements14 << address71
                      remaining1 -= 1
                    end
                  end
                  if remaining1 <= 0
                    address70 = TreeNode.new(@input[index17...@offset], index17, elements14)
                    @offset = @offset
                  else
                    address70 = FAILURE
                  end
                  unless address70 == FAILURE
                    elements13 << address70
                  else
                    elements13 = nil
                    @offset = index16
                  end
                else
                  elements13 = nil
                  @offset = index16
                end
              else
                elements13 = nil
                @offset = index16
              end
            else
              elements13 = nil
              @offset = index16
            end
          else
            elements13 = nil
            @offset = index16
          end
        else
          elements13 = nil
          @offset = index16
        end
        if elements13.nil?
          address0 = FAILURE
        else
          address0 = TreeNode111.new(@input[index16...@offset], index16, elements13)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:direct_declarator][index0] = [address0, @offset]
      return address0
    end

    def _read_pointer
      address0, index0 = FAILURE, @offset
      cached = @cache[:pointer][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 1]
      end
      if chunk0 == "*"
        address1 = TreeNode.new(@input[@offset...@offset + 1], @offset)
        @offset = @offset + 1
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "'*'"
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_type_qualifier_list
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            address4 = _read_pointer
            unless address4 == FAILURE
              elements0 << address4
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode123.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index3, elements1 = @offset, []
        address5 = FAILURE
        chunk1 = nil
        if @offset < @input_size
          chunk1 = @input[@offset...@offset + 1]
        end
        if chunk1 == "*"
          address5 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address5 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "'*'"
          end
        end
        unless address5 == FAILURE
          elements1 << address5
          address6 = FAILURE
          address6 = _read_SPACE
          unless address6 == FAILURE
            elements1 << address6
            address7 = FAILURE
            address7 = _read_pointer
            unless address7 == FAILURE
              elements1 << address7
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
        else
          elements1 = nil
          @offset = index3
        end
        if elements1.nil?
          address0 = FAILURE
        else
          address0 = TreeNode124.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
          index4, elements2 = @offset, []
          address8 = FAILURE
          chunk2 = nil
          if @offset < @input_size
            chunk2 = @input[@offset...@offset + 1]
          end
          if chunk2 == "*"
            address8 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address8 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "'*'"
            end
          end
          unless address8 == FAILURE
            elements2 << address8
            address9 = FAILURE
            address9 = _read_SPACE
            unless address9 == FAILURE
              elements2 << address9
              address10 = FAILURE
              address10 = _read_type_qualifier_list
              unless address10 == FAILURE
                elements2 << address10
              else
                elements2 = nil
                @offset = index4
              end
            else
              elements2 = nil
              @offset = index4
            end
          else
            elements2 = nil
            @offset = index4
          end
          if elements2.nil?
            address0 = FAILURE
          else
            address0 = TreeNode125.new(@input[index4...@offset], index4, elements2)
            @offset = @offset
          end
          if address0 == FAILURE
            @offset = index1
            index5, elements3 = @offset, []
            address11 = FAILURE
            chunk3 = nil
            if @offset < @input_size
              chunk3 = @input[@offset...@offset + 1]
            end
            if chunk3 == "*"
              address11 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address11 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "'*'"
              end
            end
            unless address11 == FAILURE
              elements3 << address11
              address12 = FAILURE
              address12 = _read_SPACE
              unless address12 == FAILURE
                elements3 << address12
              else
                elements3 = nil
                @offset = index5
              end
            else
              elements3 = nil
              @offset = index5
            end
            if elements3.nil?
              address0 = FAILURE
            else
              address0 = TreeNode126.new(@input[index5...@offset], index5, elements3)
              @offset = @offset
            end
            if address0 == FAILURE
              @offset = index1
            end
          end
        end
      end
      @cache[:pointer][index0] = [address0, @offset]
      return address0
    end

    def _read_type_qualifier_list
      address0, index0 = FAILURE, @offset
      cached = @cache[:type_qualifier_list][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_type_qualifier
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          address3 = _read_type_qualifier
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode127.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:type_qualifier_list][index0] = [address0, @offset]
      return address0
    end

    def _read_parameter_type_list
      address0, index0 = FAILURE, @offset
      cached = @cache[:parameter_type_list][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_parameter_list
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        chunk0 = nil
        if @offset < @input_size
          chunk0 = @input[@offset...@offset + 1]
        end
        if chunk0 == ","
          address2 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address2 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "','"
          end
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            address4 = _read_ELLIPSIS
            unless address4 == FAILURE
              elements0 << address4
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode128.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        address0 = _read_parameter_list
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:parameter_type_list][index0] = [address0, @offset]
      return address0
    end

    def _read_parameter_list
      address0, index0 = FAILURE, @offset
      cached = @cache[:parameter_list][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_parameter_declaration
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3, elements2 = @offset, []
          address4 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == ","
            address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address4 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "','"
            end
          end
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_SPACE
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              address6 = _read_parameter_declaration
              unless address6 == FAILURE
                elements2 << address6
              else
                elements2 = nil
                @offset = index3
              end
            else
              elements2 = nil
              @offset = index3
            end
          else
            elements2 = nil
            @offset = index3
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode130.new(@input[index3...@offset], index3, elements2)
            @offset = @offset
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode129.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:parameter_list][index0] = [address0, @offset]
      return address0
    end

    def _read_parameter_declaration
      address0, index0 = FAILURE, @offset
      cached = @cache[:parameter_declaration][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_declaration_specifiers
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_declarator
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode131.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index3, elements1 = @offset, []
        address3 = FAILURE
        address3 = _read_declaration_specifiers
        unless address3 == FAILURE
          elements1 << address3
          address4 = FAILURE
          address4 = _read_abstract_declarator
          unless address4 == FAILURE
            elements1 << address4
          else
            elements1 = nil
            @offset = index3
          end
        else
          elements1 = nil
          @offset = index3
        end
        if elements1.nil?
          address0 = FAILURE
        else
          address0 = TreeNode132.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
          address0 = _read_declaration_specifiers
          if address0 == FAILURE
            @offset = index1
          end
        end
      end
      @cache[:parameter_declaration][index0] = [address0, @offset]
      return address0
    end

    def _read_identifier_list
      address0, index0 = FAILURE, @offset
      cached = @cache[:identifier_list][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_IDENTIFIER
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3, elements2 = @offset, []
          address4 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == ","
            address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address4 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "','"
            end
          end
          unless address4 == FAILURE
            elements2 << address4
            address5 = FAILURE
            address5 = _read_SPACE
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              address6 = _read_IDENTIFIER
              unless address6 == FAILURE
                elements2 << address6
              else
                elements2 = nil
                @offset = index3
              end
            else
              elements2 = nil
              @offset = index3
            end
          else
            elements2 = nil
            @offset = index3
          end
          if elements2.nil?
            address3 = FAILURE
          else
            address3 = TreeNode134.new(@input[index3...@offset], index3, elements2)
            @offset = @offset
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode133.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:identifier_list][index0] = [address0, @offset]
      return address0
    end

    def _read_type_name
      address0, index0 = FAILURE, @offset
      cached = @cache[:type_name][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_specifier_qualifier_list
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_abstract_declarator
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode135.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        address0 = _read_specifier_qualifier_list
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:type_name][index0] = [address0, @offset]
      return address0
    end

    def _read_abstract_declarator
      address0, index0 = FAILURE, @offset
      cached = @cache[:abstract_declarator][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_pointer
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_direct_abstract_declarator
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode136.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        address0 = _read_direct_abstract_declarator
        if address0 == FAILURE
          @offset = index1
          address0 = _read_pointer
          if address0 == FAILURE
            @offset = index1
          end
        end
      end
      @cache[:abstract_declarator][index0] = [address0, @offset]
      return address0
    end

    def _read_direct_abstract_declarator
      address0, index0 = FAILURE, @offset
      cached = @cache[:direct_abstract_declarator][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 1]
      end
      if chunk0 == "("
        address1 = TreeNode.new(@input[@offset...@offset + 1], @offset)
        @offset = @offset + 1
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "'('"
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_abstract_declarator
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            chunk1 = nil
            if @offset < @input_size
              chunk1 = @input[@offset...@offset + 1]
            end
            if chunk1 == ")"
              address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address4 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "')'"
              end
            end
            unless address4 == FAILURE
              elements0 << address4
              address5 = FAILURE
              address5 = _read_SPACE
              unless address5 == FAILURE
                elements0 << address5
                address6 = FAILURE
                remaining0, index3, elements1, address7 = 0, @offset, [], true
                until address7 == FAILURE
                  index4 = @offset
                  index5, elements2 = @offset, []
                  address8 = FAILURE
                  chunk2 = nil
                  if @offset < @input_size
                    chunk2 = @input[@offset...@offset + 1]
                  end
                  if chunk2 == "["
                    address8 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address8 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "'['"
                    end
                  end
                  unless address8 == FAILURE
                    elements2 << address8
                    address9 = FAILURE
                    address9 = _read_SPACE
                    unless address9 == FAILURE
                      elements2 << address9
                      address10 = FAILURE
                      chunk3 = nil
                      if @offset < @input_size
                        chunk3 = @input[@offset...@offset + 1]
                      end
                      if chunk3 == "]"
                        address10 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address10 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "']'"
                        end
                      end
                      unless address10 == FAILURE
                        elements2 << address10
                        address11 = FAILURE
                        address11 = _read_SPACE
                        unless address11 == FAILURE
                          elements2 << address11
                        else
                          elements2 = nil
                          @offset = index5
                        end
                      else
                        elements2 = nil
                        @offset = index5
                      end
                    else
                      elements2 = nil
                      @offset = index5
                    end
                  else
                    elements2 = nil
                    @offset = index5
                  end
                  if elements2.nil?
                    address7 = FAILURE
                  else
                    address7 = TreeNode138.new(@input[index5...@offset], index5, elements2)
                    @offset = @offset
                  end
                  if address7 == FAILURE
                    @offset = index4
                    index6, elements3 = @offset, []
                    address12 = FAILURE
                    chunk4 = nil
                    if @offset < @input_size
                      chunk4 = @input[@offset...@offset + 1]
                    end
                    if chunk4 == "["
                      address12 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address12 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "'['"
                      end
                    end
                    unless address12 == FAILURE
                      elements3 << address12
                      address13 = FAILURE
                      address13 = _read_SPACE
                      unless address13 == FAILURE
                        elements3 << address13
                        address14 = FAILURE
                        address14 = _read_assignment_expression
                        unless address14 == FAILURE
                          elements3 << address14
                          address15 = FAILURE
                          chunk5 = nil
                          if @offset < @input_size
                            chunk5 = @input[@offset...@offset + 1]
                          end
                          if chunk5 == "]"
                            address15 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address15 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "']'"
                            end
                          end
                          unless address15 == FAILURE
                            elements3 << address15
                            address16 = FAILURE
                            address16 = _read_SPACE
                            unless address16 == FAILURE
                              elements3 << address16
                            else
                              elements3 = nil
                              @offset = index6
                            end
                          else
                            elements3 = nil
                            @offset = index6
                          end
                        else
                          elements3 = nil
                          @offset = index6
                        end
                      else
                        elements3 = nil
                        @offset = index6
                      end
                    else
                      elements3 = nil
                      @offset = index6
                    end
                    if elements3.nil?
                      address7 = FAILURE
                    else
                      address7 = TreeNode139.new(@input[index6...@offset], index6, elements3)
                      @offset = @offset
                    end
                    if address7 == FAILURE
                      @offset = index4
                      index7, elements4 = @offset, []
                      address17 = FAILURE
                      chunk6 = nil
                      if @offset < @input_size
                        chunk6 = @input[@offset...@offset + 1]
                      end
                      if chunk6 == "["
                        address17 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address17 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "'['"
                        end
                      end
                      unless address17 == FAILURE
                        elements4 << address17
                        address18 = FAILURE
                        address18 = _read_SPACE
                        unless address18 == FAILURE
                          elements4 << address18
                          address19 = FAILURE
                          chunk7 = nil
                          if @offset < @input_size
                            chunk7 = @input[@offset...@offset + 1]
                          end
                          if chunk7 == "*"
                            address19 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address19 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "'*'"
                            end
                          end
                          unless address19 == FAILURE
                            elements4 << address19
                            address20 = FAILURE
                            address20 = _read_SPACE
                            unless address20 == FAILURE
                              elements4 << address20
                              address21 = FAILURE
                              chunk8 = nil
                              if @offset < @input_size
                                chunk8 = @input[@offset...@offset + 1]
                              end
                              if chunk8 == "]"
                                address21 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address21 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "']'"
                                end
                              end
                              unless address21 == FAILURE
                                elements4 << address21
                                address22 = FAILURE
                                address22 = _read_SPACE
                                unless address22 == FAILURE
                                  elements4 << address22
                                else
                                  elements4 = nil
                                  @offset = index7
                                end
                              else
                                elements4 = nil
                                @offset = index7
                              end
                            else
                              elements4 = nil
                              @offset = index7
                            end
                          else
                            elements4 = nil
                            @offset = index7
                          end
                        else
                          elements4 = nil
                          @offset = index7
                        end
                      else
                        elements4 = nil
                        @offset = index7
                      end
                      if elements4.nil?
                        address7 = FAILURE
                      else
                        address7 = TreeNode140.new(@input[index7...@offset], index7, elements4)
                        @offset = @offset
                      end
                      if address7 == FAILURE
                        @offset = index4
                        index8, elements5 = @offset, []
                        address23 = FAILURE
                        chunk9 = nil
                        if @offset < @input_size
                          chunk9 = @input[@offset...@offset + 1]
                        end
                        if chunk9 == "("
                          address23 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address23 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "'('"
                          end
                        end
                        unless address23 == FAILURE
                          elements5 << address23
                          address24 = FAILURE
                          address24 = _read_SPACE
                          unless address24 == FAILURE
                            elements5 << address24
                            address25 = FAILURE
                            chunk10 = nil
                            if @offset < @input_size
                              chunk10 = @input[@offset...@offset + 1]
                            end
                            if chunk10 == ")"
                              address25 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address25 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "')'"
                              end
                            end
                            unless address25 == FAILURE
                              elements5 << address25
                              address26 = FAILURE
                              address26 = _read_SPACE
                              unless address26 == FAILURE
                                elements5 << address26
                              else
                                elements5 = nil
                                @offset = index8
                              end
                            else
                              elements5 = nil
                              @offset = index8
                            end
                          else
                            elements5 = nil
                            @offset = index8
                          end
                        else
                          elements5 = nil
                          @offset = index8
                        end
                        if elements5.nil?
                          address7 = FAILURE
                        else
                          address7 = TreeNode141.new(@input[index8...@offset], index8, elements5)
                          @offset = @offset
                        end
                        if address7 == FAILURE
                          @offset = index4
                          index9, elements6 = @offset, []
                          address27 = FAILURE
                          chunk11 = nil
                          if @offset < @input_size
                            chunk11 = @input[@offset...@offset + 1]
                          end
                          if chunk11 == "("
                            address27 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address27 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "'('"
                            end
                          end
                          unless address27 == FAILURE
                            elements6 << address27
                            address28 = FAILURE
                            address28 = _read_SPACE
                            unless address28 == FAILURE
                              elements6 << address28
                              address29 = FAILURE
                              address29 = _read_parameter_type_list
                              unless address29 == FAILURE
                                elements6 << address29
                                address30 = FAILURE
                                chunk12 = nil
                                if @offset < @input_size
                                  chunk12 = @input[@offset...@offset + 1]
                                end
                                if chunk12 == ")"
                                  address30 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address30 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "')'"
                                  end
                                end
                                unless address30 == FAILURE
                                  elements6 << address30
                                  address31 = FAILURE
                                  address31 = _read_SPACE
                                  unless address31 == FAILURE
                                    elements6 << address31
                                  else
                                    elements6 = nil
                                    @offset = index9
                                  end
                                else
                                  elements6 = nil
                                  @offset = index9
                                end
                              else
                                elements6 = nil
                                @offset = index9
                              end
                            else
                              elements6 = nil
                              @offset = index9
                            end
                          else
                            elements6 = nil
                            @offset = index9
                          end
                          if elements6.nil?
                            address7 = FAILURE
                          else
                            address7 = TreeNode142.new(@input[index9...@offset], index9, elements6)
                            @offset = @offset
                          end
                          if address7 == FAILURE
                            @offset = index4
                          end
                        end
                      end
                    end
                  end
                  unless address7 == FAILURE
                    elements1 << address7
                    remaining0 -= 1
                  end
                end
                if remaining0 <= 0
                  address6 = TreeNode.new(@input[index3...@offset], index3, elements1)
                  @offset = @offset
                else
                  address6 = FAILURE
                end
                unless address6 == FAILURE
                  elements0 << address6
                else
                  elements0 = nil
                  @offset = index2
                end
              else
                elements0 = nil
                @offset = index2
              end
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode137.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index10, elements7 = @offset, []
        address32 = FAILURE
        chunk13 = nil
        if @offset < @input_size
          chunk13 = @input[@offset...@offset + 1]
        end
        if chunk13 == "["
          address32 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address32 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "'['"
          end
        end
        unless address32 == FAILURE
          elements7 << address32
          address33 = FAILURE
          address33 = _read_SPACE
          unless address33 == FAILURE
            elements7 << address33
            address34 = FAILURE
            chunk14 = nil
            if @offset < @input_size
              chunk14 = @input[@offset...@offset + 1]
            end
            if chunk14 == "]"
              address34 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address34 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "']'"
              end
            end
            unless address34 == FAILURE
              elements7 << address34
              address35 = FAILURE
              address35 = _read_SPACE
              unless address35 == FAILURE
                elements7 << address35
                address36 = FAILURE
                remaining1, index11, elements8, address37 = 0, @offset, [], true
                until address37 == FAILURE
                  index12 = @offset
                  index13, elements9 = @offset, []
                  address38 = FAILURE
                  chunk15 = nil
                  if @offset < @input_size
                    chunk15 = @input[@offset...@offset + 1]
                  end
                  if chunk15 == "["
                    address38 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address38 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "'['"
                    end
                  end
                  unless address38 == FAILURE
                    elements9 << address38
                    address39 = FAILURE
                    address39 = _read_SPACE
                    unless address39 == FAILURE
                      elements9 << address39
                      address40 = FAILURE
                      chunk16 = nil
                      if @offset < @input_size
                        chunk16 = @input[@offset...@offset + 1]
                      end
                      if chunk16 == "]"
                        address40 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address40 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "']'"
                        end
                      end
                      unless address40 == FAILURE
                        elements9 << address40
                        address41 = FAILURE
                        address41 = _read_SPACE
                        unless address41 == FAILURE
                          elements9 << address41
                        else
                          elements9 = nil
                          @offset = index13
                        end
                      else
                        elements9 = nil
                        @offset = index13
                      end
                    else
                      elements9 = nil
                      @offset = index13
                    end
                  else
                    elements9 = nil
                    @offset = index13
                  end
                  if elements9.nil?
                    address37 = FAILURE
                  else
                    address37 = TreeNode144.new(@input[index13...@offset], index13, elements9)
                    @offset = @offset
                  end
                  if address37 == FAILURE
                    @offset = index12
                    index14, elements10 = @offset, []
                    address42 = FAILURE
                    chunk17 = nil
                    if @offset < @input_size
                      chunk17 = @input[@offset...@offset + 1]
                    end
                    if chunk17 == "["
                      address42 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address42 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "'['"
                      end
                    end
                    unless address42 == FAILURE
                      elements10 << address42
                      address43 = FAILURE
                      address43 = _read_SPACE
                      unless address43 == FAILURE
                        elements10 << address43
                        address44 = FAILURE
                        address44 = _read_assignment_expression
                        unless address44 == FAILURE
                          elements10 << address44
                          address45 = FAILURE
                          chunk18 = nil
                          if @offset < @input_size
                            chunk18 = @input[@offset...@offset + 1]
                          end
                          if chunk18 == "]"
                            address45 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address45 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "']'"
                            end
                          end
                          unless address45 == FAILURE
                            elements10 << address45
                            address46 = FAILURE
                            address46 = _read_SPACE
                            unless address46 == FAILURE
                              elements10 << address46
                            else
                              elements10 = nil
                              @offset = index14
                            end
                          else
                            elements10 = nil
                            @offset = index14
                          end
                        else
                          elements10 = nil
                          @offset = index14
                        end
                      else
                        elements10 = nil
                        @offset = index14
                      end
                    else
                      elements10 = nil
                      @offset = index14
                    end
                    if elements10.nil?
                      address37 = FAILURE
                    else
                      address37 = TreeNode145.new(@input[index14...@offset], index14, elements10)
                      @offset = @offset
                    end
                    if address37 == FAILURE
                      @offset = index12
                      index15, elements11 = @offset, []
                      address47 = FAILURE
                      chunk19 = nil
                      if @offset < @input_size
                        chunk19 = @input[@offset...@offset + 1]
                      end
                      if chunk19 == "["
                        address47 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address47 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "'['"
                        end
                      end
                      unless address47 == FAILURE
                        elements11 << address47
                        address48 = FAILURE
                        address48 = _read_SPACE
                        unless address48 == FAILURE
                          elements11 << address48
                          address49 = FAILURE
                          chunk20 = nil
                          if @offset < @input_size
                            chunk20 = @input[@offset...@offset + 1]
                          end
                          if chunk20 == "*"
                            address49 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address49 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "'*'"
                            end
                          end
                          unless address49 == FAILURE
                            elements11 << address49
                            address50 = FAILURE
                            address50 = _read_SPACE
                            unless address50 == FAILURE
                              elements11 << address50
                              address51 = FAILURE
                              chunk21 = nil
                              if @offset < @input_size
                                chunk21 = @input[@offset...@offset + 1]
                              end
                              if chunk21 == "]"
                                address51 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address51 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "']'"
                                end
                              end
                              unless address51 == FAILURE
                                elements11 << address51
                                address52 = FAILURE
                                address52 = _read_SPACE
                                unless address52 == FAILURE
                                  elements11 << address52
                                else
                                  elements11 = nil
                                  @offset = index15
                                end
                              else
                                elements11 = nil
                                @offset = index15
                              end
                            else
                              elements11 = nil
                              @offset = index15
                            end
                          else
                            elements11 = nil
                            @offset = index15
                          end
                        else
                          elements11 = nil
                          @offset = index15
                        end
                      else
                        elements11 = nil
                        @offset = index15
                      end
                      if elements11.nil?
                        address37 = FAILURE
                      else
                        address37 = TreeNode146.new(@input[index15...@offset], index15, elements11)
                        @offset = @offset
                      end
                      if address37 == FAILURE
                        @offset = index12
                        index16, elements12 = @offset, []
                        address53 = FAILURE
                        chunk22 = nil
                        if @offset < @input_size
                          chunk22 = @input[@offset...@offset + 1]
                        end
                        if chunk22 == "("
                          address53 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address53 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "'('"
                          end
                        end
                        unless address53 == FAILURE
                          elements12 << address53
                          address54 = FAILURE
                          address54 = _read_SPACE
                          unless address54 == FAILURE
                            elements12 << address54
                            address55 = FAILURE
                            chunk23 = nil
                            if @offset < @input_size
                              chunk23 = @input[@offset...@offset + 1]
                            end
                            if chunk23 == ")"
                              address55 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address55 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "')'"
                              end
                            end
                            unless address55 == FAILURE
                              elements12 << address55
                              address56 = FAILURE
                              address56 = _read_SPACE
                              unless address56 == FAILURE
                                elements12 << address56
                              else
                                elements12 = nil
                                @offset = index16
                              end
                            else
                              elements12 = nil
                              @offset = index16
                            end
                          else
                            elements12 = nil
                            @offset = index16
                          end
                        else
                          elements12 = nil
                          @offset = index16
                        end
                        if elements12.nil?
                          address37 = FAILURE
                        else
                          address37 = TreeNode147.new(@input[index16...@offset], index16, elements12)
                          @offset = @offset
                        end
                        if address37 == FAILURE
                          @offset = index12
                          index17, elements13 = @offset, []
                          address57 = FAILURE
                          chunk24 = nil
                          if @offset < @input_size
                            chunk24 = @input[@offset...@offset + 1]
                          end
                          if chunk24 == "("
                            address57 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address57 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "'('"
                            end
                          end
                          unless address57 == FAILURE
                            elements13 << address57
                            address58 = FAILURE
                            address58 = _read_SPACE
                            unless address58 == FAILURE
                              elements13 << address58
                              address59 = FAILURE
                              address59 = _read_parameter_type_list
                              unless address59 == FAILURE
                                elements13 << address59
                                address60 = FAILURE
                                chunk25 = nil
                                if @offset < @input_size
                                  chunk25 = @input[@offset...@offset + 1]
                                end
                                if chunk25 == ")"
                                  address60 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address60 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "')'"
                                  end
                                end
                                unless address60 == FAILURE
                                  elements13 << address60
                                  address61 = FAILURE
                                  address61 = _read_SPACE
                                  unless address61 == FAILURE
                                    elements13 << address61
                                  else
                                    elements13 = nil
                                    @offset = index17
                                  end
                                else
                                  elements13 = nil
                                  @offset = index17
                                end
                              else
                                elements13 = nil
                                @offset = index17
                              end
                            else
                              elements13 = nil
                              @offset = index17
                            end
                          else
                            elements13 = nil
                            @offset = index17
                          end
                          if elements13.nil?
                            address37 = FAILURE
                          else
                            address37 = TreeNode148.new(@input[index17...@offset], index17, elements13)
                            @offset = @offset
                          end
                          if address37 == FAILURE
                            @offset = index12
                          end
                        end
                      end
                    end
                  end
                  unless address37 == FAILURE
                    elements8 << address37
                    remaining1 -= 1
                  end
                end
                if remaining1 <= 0
                  address36 = TreeNode.new(@input[index11...@offset], index11, elements8)
                  @offset = @offset
                else
                  address36 = FAILURE
                end
                unless address36 == FAILURE
                  elements7 << address36
                else
                  elements7 = nil
                  @offset = index10
                end
              else
                elements7 = nil
                @offset = index10
              end
            else
              elements7 = nil
              @offset = index10
            end
          else
            elements7 = nil
            @offset = index10
          end
        else
          elements7 = nil
          @offset = index10
        end
        if elements7.nil?
          address0 = FAILURE
        else
          address0 = TreeNode143.new(@input[index10...@offset], index10, elements7)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
          index18, elements14 = @offset, []
          address62 = FAILURE
          chunk26 = nil
          if @offset < @input_size
            chunk26 = @input[@offset...@offset + 1]
          end
          if chunk26 == "["
            address62 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address62 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "'['"
            end
          end
          unless address62 == FAILURE
            elements14 << address62
            address63 = FAILURE
            address63 = _read_SPACE
            unless address63 == FAILURE
              elements14 << address63
              address64 = FAILURE
              address64 = _read_assignment_expression
              unless address64 == FAILURE
                elements14 << address64
                address65 = FAILURE
                chunk27 = nil
                if @offset < @input_size
                  chunk27 = @input[@offset...@offset + 1]
                end
                if chunk27 == "]"
                  address65 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address65 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "']'"
                  end
                end
                unless address65 == FAILURE
                  elements14 << address65
                  address66 = FAILURE
                  address66 = _read_SPACE
                  unless address66 == FAILURE
                    elements14 << address66
                    address67 = FAILURE
                    remaining2, index19, elements15, address68 = 0, @offset, [], true
                    until address68 == FAILURE
                      index20 = @offset
                      index21, elements16 = @offset, []
                      address69 = FAILURE
                      chunk28 = nil
                      if @offset < @input_size
                        chunk28 = @input[@offset...@offset + 1]
                      end
                      if chunk28 == "["
                        address69 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address69 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "'['"
                        end
                      end
                      unless address69 == FAILURE
                        elements16 << address69
                        address70 = FAILURE
                        address70 = _read_SPACE
                        unless address70 == FAILURE
                          elements16 << address70
                          address71 = FAILURE
                          chunk29 = nil
                          if @offset < @input_size
                            chunk29 = @input[@offset...@offset + 1]
                          end
                          if chunk29 == "]"
                            address71 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address71 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "']'"
                            end
                          end
                          unless address71 == FAILURE
                            elements16 << address71
                            address72 = FAILURE
                            address72 = _read_SPACE
                            unless address72 == FAILURE
                              elements16 << address72
                            else
                              elements16 = nil
                              @offset = index21
                            end
                          else
                            elements16 = nil
                            @offset = index21
                          end
                        else
                          elements16 = nil
                          @offset = index21
                        end
                      else
                        elements16 = nil
                        @offset = index21
                      end
                      if elements16.nil?
                        address68 = FAILURE
                      else
                        address68 = TreeNode150.new(@input[index21...@offset], index21, elements16)
                        @offset = @offset
                      end
                      if address68 == FAILURE
                        @offset = index20
                        index22, elements17 = @offset, []
                        address73 = FAILURE
                        chunk30 = nil
                        if @offset < @input_size
                          chunk30 = @input[@offset...@offset + 1]
                        end
                        if chunk30 == "["
                          address73 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address73 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "'['"
                          end
                        end
                        unless address73 == FAILURE
                          elements17 << address73
                          address74 = FAILURE
                          address74 = _read_SPACE
                          unless address74 == FAILURE
                            elements17 << address74
                            address75 = FAILURE
                            address75 = _read_assignment_expression
                            unless address75 == FAILURE
                              elements17 << address75
                              address76 = FAILURE
                              chunk31 = nil
                              if @offset < @input_size
                                chunk31 = @input[@offset...@offset + 1]
                              end
                              if chunk31 == "]"
                                address76 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address76 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "']'"
                                end
                              end
                              unless address76 == FAILURE
                                elements17 << address76
                                address77 = FAILURE
                                address77 = _read_SPACE
                                unless address77 == FAILURE
                                  elements17 << address77
                                else
                                  elements17 = nil
                                  @offset = index22
                                end
                              else
                                elements17 = nil
                                @offset = index22
                              end
                            else
                              elements17 = nil
                              @offset = index22
                            end
                          else
                            elements17 = nil
                            @offset = index22
                          end
                        else
                          elements17 = nil
                          @offset = index22
                        end
                        if elements17.nil?
                          address68 = FAILURE
                        else
                          address68 = TreeNode151.new(@input[index22...@offset], index22, elements17)
                          @offset = @offset
                        end
                        if address68 == FAILURE
                          @offset = index20
                          index23, elements18 = @offset, []
                          address78 = FAILURE
                          chunk32 = nil
                          if @offset < @input_size
                            chunk32 = @input[@offset...@offset + 1]
                          end
                          if chunk32 == "["
                            address78 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address78 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "'['"
                            end
                          end
                          unless address78 == FAILURE
                            elements18 << address78
                            address79 = FAILURE
                            address79 = _read_SPACE
                            unless address79 == FAILURE
                              elements18 << address79
                              address80 = FAILURE
                              chunk33 = nil
                              if @offset < @input_size
                                chunk33 = @input[@offset...@offset + 1]
                              end
                              if chunk33 == "*"
                                address80 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address80 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "'*'"
                                end
                              end
                              unless address80 == FAILURE
                                elements18 << address80
                                address81 = FAILURE
                                address81 = _read_SPACE
                                unless address81 == FAILURE
                                  elements18 << address81
                                  address82 = FAILURE
                                  chunk34 = nil
                                  if @offset < @input_size
                                    chunk34 = @input[@offset...@offset + 1]
                                  end
                                  if chunk34 == "]"
                                    address82 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                    @offset = @offset + 1
                                  else
                                    address82 = FAILURE
                                    if @offset > @failure
                                      @failure = @offset
                                      @expected = []
                                    end
                                    if @offset == @failure
                                      @expected << "']'"
                                    end
                                  end
                                  unless address82 == FAILURE
                                    elements18 << address82
                                    address83 = FAILURE
                                    address83 = _read_SPACE
                                    unless address83 == FAILURE
                                      elements18 << address83
                                    else
                                      elements18 = nil
                                      @offset = index23
                                    end
                                  else
                                    elements18 = nil
                                    @offset = index23
                                  end
                                else
                                  elements18 = nil
                                  @offset = index23
                                end
                              else
                                elements18 = nil
                                @offset = index23
                              end
                            else
                              elements18 = nil
                              @offset = index23
                            end
                          else
                            elements18 = nil
                            @offset = index23
                          end
                          if elements18.nil?
                            address68 = FAILURE
                          else
                            address68 = TreeNode152.new(@input[index23...@offset], index23, elements18)
                            @offset = @offset
                          end
                          if address68 == FAILURE
                            @offset = index20
                            index24, elements19 = @offset, []
                            address84 = FAILURE
                            chunk35 = nil
                            if @offset < @input_size
                              chunk35 = @input[@offset...@offset + 1]
                            end
                            if chunk35 == "("
                              address84 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address84 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "'('"
                              end
                            end
                            unless address84 == FAILURE
                              elements19 << address84
                              address85 = FAILURE
                              address85 = _read_SPACE
                              unless address85 == FAILURE
                                elements19 << address85
                                address86 = FAILURE
                                chunk36 = nil
                                if @offset < @input_size
                                  chunk36 = @input[@offset...@offset + 1]
                                end
                                if chunk36 == ")"
                                  address86 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address86 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "')'"
                                  end
                                end
                                unless address86 == FAILURE
                                  elements19 << address86
                                  address87 = FAILURE
                                  address87 = _read_SPACE
                                  unless address87 == FAILURE
                                    elements19 << address87
                                  else
                                    elements19 = nil
                                    @offset = index24
                                  end
                                else
                                  elements19 = nil
                                  @offset = index24
                                end
                              else
                                elements19 = nil
                                @offset = index24
                              end
                            else
                              elements19 = nil
                              @offset = index24
                            end
                            if elements19.nil?
                              address68 = FAILURE
                            else
                              address68 = TreeNode153.new(@input[index24...@offset], index24, elements19)
                              @offset = @offset
                            end
                            if address68 == FAILURE
                              @offset = index20
                              index25, elements20 = @offset, []
                              address88 = FAILURE
                              chunk37 = nil
                              if @offset < @input_size
                                chunk37 = @input[@offset...@offset + 1]
                              end
                              if chunk37 == "("
                                address88 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address88 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "'('"
                                end
                              end
                              unless address88 == FAILURE
                                elements20 << address88
                                address89 = FAILURE
                                address89 = _read_SPACE
                                unless address89 == FAILURE
                                  elements20 << address89
                                  address90 = FAILURE
                                  address90 = _read_parameter_type_list
                                  unless address90 == FAILURE
                                    elements20 << address90
                                    address91 = FAILURE
                                    chunk38 = nil
                                    if @offset < @input_size
                                      chunk38 = @input[@offset...@offset + 1]
                                    end
                                    if chunk38 == ")"
                                      address91 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address91 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "')'"
                                      end
                                    end
                                    unless address91 == FAILURE
                                      elements20 << address91
                                      address92 = FAILURE
                                      address92 = _read_SPACE
                                      unless address92 == FAILURE
                                        elements20 << address92
                                      else
                                        elements20 = nil
                                        @offset = index25
                                      end
                                    else
                                      elements20 = nil
                                      @offset = index25
                                    end
                                  else
                                    elements20 = nil
                                    @offset = index25
                                  end
                                else
                                  elements20 = nil
                                  @offset = index25
                                end
                              else
                                elements20 = nil
                                @offset = index25
                              end
                              if elements20.nil?
                                address68 = FAILURE
                              else
                                address68 = TreeNode154.new(@input[index25...@offset], index25, elements20)
                                @offset = @offset
                              end
                              if address68 == FAILURE
                                @offset = index20
                              end
                            end
                          end
                        end
                      end
                      unless address68 == FAILURE
                        elements15 << address68
                        remaining2 -= 1
                      end
                    end
                    if remaining2 <= 0
                      address67 = TreeNode.new(@input[index19...@offset], index19, elements15)
                      @offset = @offset
                    else
                      address67 = FAILURE
                    end
                    unless address67 == FAILURE
                      elements14 << address67
                    else
                      elements14 = nil
                      @offset = index18
                    end
                  else
                    elements14 = nil
                    @offset = index18
                  end
                else
                  elements14 = nil
                  @offset = index18
                end
              else
                elements14 = nil
                @offset = index18
              end
            else
              elements14 = nil
              @offset = index18
            end
          else
            elements14 = nil
            @offset = index18
          end
          if elements14.nil?
            address0 = FAILURE
          else
            address0 = TreeNode149.new(@input[index18...@offset], index18, elements14)
            @offset = @offset
          end
          if address0 == FAILURE
            @offset = index1
            index26, elements21 = @offset, []
            address93 = FAILURE
            chunk39 = nil
            if @offset < @input_size
              chunk39 = @input[@offset...@offset + 1]
            end
            if chunk39 == "["
              address93 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address93 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "'['"
              end
            end
            unless address93 == FAILURE
              elements21 << address93
              address94 = FAILURE
              address94 = _read_SPACE
              unless address94 == FAILURE
                elements21 << address94
                address95 = FAILURE
                chunk40 = nil
                if @offset < @input_size
                  chunk40 = @input[@offset...@offset + 1]
                end
                if chunk40 == "*"
                  address95 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address95 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "'*'"
                  end
                end
                unless address95 == FAILURE
                  elements21 << address95
                  address96 = FAILURE
                  address96 = _read_SPACE
                  unless address96 == FAILURE
                    elements21 << address96
                    address97 = FAILURE
                    chunk41 = nil
                    if @offset < @input_size
                      chunk41 = @input[@offset...@offset + 1]
                    end
                    if chunk41 == "]"
                      address97 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address97 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "']'"
                      end
                    end
                    unless address97 == FAILURE
                      elements21 << address97
                      address98 = FAILURE
                      address98 = _read_SPACE
                      unless address98 == FAILURE
                        elements21 << address98
                        address99 = FAILURE
                        remaining3, index27, elements22, address100 = 0, @offset, [], true
                        until address100 == FAILURE
                          index28 = @offset
                          index29, elements23 = @offset, []
                          address101 = FAILURE
                          chunk42 = nil
                          if @offset < @input_size
                            chunk42 = @input[@offset...@offset + 1]
                          end
                          if chunk42 == "["
                            address101 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address101 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "'['"
                            end
                          end
                          unless address101 == FAILURE
                            elements23 << address101
                            address102 = FAILURE
                            address102 = _read_SPACE
                            unless address102 == FAILURE
                              elements23 << address102
                              address103 = FAILURE
                              chunk43 = nil
                              if @offset < @input_size
                                chunk43 = @input[@offset...@offset + 1]
                              end
                              if chunk43 == "]"
                                address103 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address103 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "']'"
                                end
                              end
                              unless address103 == FAILURE
                                elements23 << address103
                                address104 = FAILURE
                                address104 = _read_SPACE
                                unless address104 == FAILURE
                                  elements23 << address104
                                else
                                  elements23 = nil
                                  @offset = index29
                                end
                              else
                                elements23 = nil
                                @offset = index29
                              end
                            else
                              elements23 = nil
                              @offset = index29
                            end
                          else
                            elements23 = nil
                            @offset = index29
                          end
                          if elements23.nil?
                            address100 = FAILURE
                          else
                            address100 = TreeNode156.new(@input[index29...@offset], index29, elements23)
                            @offset = @offset
                          end
                          if address100 == FAILURE
                            @offset = index28
                            index30, elements24 = @offset, []
                            address105 = FAILURE
                            chunk44 = nil
                            if @offset < @input_size
                              chunk44 = @input[@offset...@offset + 1]
                            end
                            if chunk44 == "["
                              address105 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address105 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "'['"
                              end
                            end
                            unless address105 == FAILURE
                              elements24 << address105
                              address106 = FAILURE
                              address106 = _read_SPACE
                              unless address106 == FAILURE
                                elements24 << address106
                                address107 = FAILURE
                                address107 = _read_assignment_expression
                                unless address107 == FAILURE
                                  elements24 << address107
                                  address108 = FAILURE
                                  chunk45 = nil
                                  if @offset < @input_size
                                    chunk45 = @input[@offset...@offset + 1]
                                  end
                                  if chunk45 == "]"
                                    address108 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                    @offset = @offset + 1
                                  else
                                    address108 = FAILURE
                                    if @offset > @failure
                                      @failure = @offset
                                      @expected = []
                                    end
                                    if @offset == @failure
                                      @expected << "']'"
                                    end
                                  end
                                  unless address108 == FAILURE
                                    elements24 << address108
                                    address109 = FAILURE
                                    address109 = _read_SPACE
                                    unless address109 == FAILURE
                                      elements24 << address109
                                    else
                                      elements24 = nil
                                      @offset = index30
                                    end
                                  else
                                    elements24 = nil
                                    @offset = index30
                                  end
                                else
                                  elements24 = nil
                                  @offset = index30
                                end
                              else
                                elements24 = nil
                                @offset = index30
                              end
                            else
                              elements24 = nil
                              @offset = index30
                            end
                            if elements24.nil?
                              address100 = FAILURE
                            else
                              address100 = TreeNode157.new(@input[index30...@offset], index30, elements24)
                              @offset = @offset
                            end
                            if address100 == FAILURE
                              @offset = index28
                              index31, elements25 = @offset, []
                              address110 = FAILURE
                              chunk46 = nil
                              if @offset < @input_size
                                chunk46 = @input[@offset...@offset + 1]
                              end
                              if chunk46 == "["
                                address110 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address110 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "'['"
                                end
                              end
                              unless address110 == FAILURE
                                elements25 << address110
                                address111 = FAILURE
                                address111 = _read_SPACE
                                unless address111 == FAILURE
                                  elements25 << address111
                                  address112 = FAILURE
                                  chunk47 = nil
                                  if @offset < @input_size
                                    chunk47 = @input[@offset...@offset + 1]
                                  end
                                  if chunk47 == "*"
                                    address112 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                    @offset = @offset + 1
                                  else
                                    address112 = FAILURE
                                    if @offset > @failure
                                      @failure = @offset
                                      @expected = []
                                    end
                                    if @offset == @failure
                                      @expected << "'*'"
                                    end
                                  end
                                  unless address112 == FAILURE
                                    elements25 << address112
                                    address113 = FAILURE
                                    address113 = _read_SPACE
                                    unless address113 == FAILURE
                                      elements25 << address113
                                      address114 = FAILURE
                                      chunk48 = nil
                                      if @offset < @input_size
                                        chunk48 = @input[@offset...@offset + 1]
                                      end
                                      if chunk48 == "]"
                                        address114 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                        @offset = @offset + 1
                                      else
                                        address114 = FAILURE
                                        if @offset > @failure
                                          @failure = @offset
                                          @expected = []
                                        end
                                        if @offset == @failure
                                          @expected << "']'"
                                        end
                                      end
                                      unless address114 == FAILURE
                                        elements25 << address114
                                        address115 = FAILURE
                                        address115 = _read_SPACE
                                        unless address115 == FAILURE
                                          elements25 << address115
                                        else
                                          elements25 = nil
                                          @offset = index31
                                        end
                                      else
                                        elements25 = nil
                                        @offset = index31
                                      end
                                    else
                                      elements25 = nil
                                      @offset = index31
                                    end
                                  else
                                    elements25 = nil
                                    @offset = index31
                                  end
                                else
                                  elements25 = nil
                                  @offset = index31
                                end
                              else
                                elements25 = nil
                                @offset = index31
                              end
                              if elements25.nil?
                                address100 = FAILURE
                              else
                                address100 = TreeNode158.new(@input[index31...@offset], index31, elements25)
                                @offset = @offset
                              end
                              if address100 == FAILURE
                                @offset = index28
                                index32, elements26 = @offset, []
                                address116 = FAILURE
                                chunk49 = nil
                                if @offset < @input_size
                                  chunk49 = @input[@offset...@offset + 1]
                                end
                                if chunk49 == "("
                                  address116 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address116 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "'('"
                                  end
                                end
                                unless address116 == FAILURE
                                  elements26 << address116
                                  address117 = FAILURE
                                  address117 = _read_SPACE
                                  unless address117 == FAILURE
                                    elements26 << address117
                                    address118 = FAILURE
                                    chunk50 = nil
                                    if @offset < @input_size
                                      chunk50 = @input[@offset...@offset + 1]
                                    end
                                    if chunk50 == ")"
                                      address118 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address118 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "')'"
                                      end
                                    end
                                    unless address118 == FAILURE
                                      elements26 << address118
                                      address119 = FAILURE
                                      address119 = _read_SPACE
                                      unless address119 == FAILURE
                                        elements26 << address119
                                      else
                                        elements26 = nil
                                        @offset = index32
                                      end
                                    else
                                      elements26 = nil
                                      @offset = index32
                                    end
                                  else
                                    elements26 = nil
                                    @offset = index32
                                  end
                                else
                                  elements26 = nil
                                  @offset = index32
                                end
                                if elements26.nil?
                                  address100 = FAILURE
                                else
                                  address100 = TreeNode159.new(@input[index32...@offset], index32, elements26)
                                  @offset = @offset
                                end
                                if address100 == FAILURE
                                  @offset = index28
                                  index33, elements27 = @offset, []
                                  address120 = FAILURE
                                  chunk51 = nil
                                  if @offset < @input_size
                                    chunk51 = @input[@offset...@offset + 1]
                                  end
                                  if chunk51 == "("
                                    address120 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                    @offset = @offset + 1
                                  else
                                    address120 = FAILURE
                                    if @offset > @failure
                                      @failure = @offset
                                      @expected = []
                                    end
                                    if @offset == @failure
                                      @expected << "'('"
                                    end
                                  end
                                  unless address120 == FAILURE
                                    elements27 << address120
                                    address121 = FAILURE
                                    address121 = _read_SPACE
                                    unless address121 == FAILURE
                                      elements27 << address121
                                      address122 = FAILURE
                                      address122 = _read_parameter_type_list
                                      unless address122 == FAILURE
                                        elements27 << address122
                                        address123 = FAILURE
                                        chunk52 = nil
                                        if @offset < @input_size
                                          chunk52 = @input[@offset...@offset + 1]
                                        end
                                        if chunk52 == ")"
                                          address123 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                          @offset = @offset + 1
                                        else
                                          address123 = FAILURE
                                          if @offset > @failure
                                            @failure = @offset
                                            @expected = []
                                          end
                                          if @offset == @failure
                                            @expected << "')'"
                                          end
                                        end
                                        unless address123 == FAILURE
                                          elements27 << address123
                                          address124 = FAILURE
                                          address124 = _read_SPACE
                                          unless address124 == FAILURE
                                            elements27 << address124
                                          else
                                            elements27 = nil
                                            @offset = index33
                                          end
                                        else
                                          elements27 = nil
                                          @offset = index33
                                        end
                                      else
                                        elements27 = nil
                                        @offset = index33
                                      end
                                    else
                                      elements27 = nil
                                      @offset = index33
                                    end
                                  else
                                    elements27 = nil
                                    @offset = index33
                                  end
                                  if elements27.nil?
                                    address100 = FAILURE
                                  else
                                    address100 = TreeNode160.new(@input[index33...@offset], index33, elements27)
                                    @offset = @offset
                                  end
                                  if address100 == FAILURE
                                    @offset = index28
                                  end
                                end
                              end
                            end
                          end
                          unless address100 == FAILURE
                            elements22 << address100
                            remaining3 -= 1
                          end
                        end
                        if remaining3 <= 0
                          address99 = TreeNode.new(@input[index27...@offset], index27, elements22)
                          @offset = @offset
                        else
                          address99 = FAILURE
                        end
                        unless address99 == FAILURE
                          elements21 << address99
                        else
                          elements21 = nil
                          @offset = index26
                        end
                      else
                        elements21 = nil
                        @offset = index26
                      end
                    else
                      elements21 = nil
                      @offset = index26
                    end
                  else
                    elements21 = nil
                    @offset = index26
                  end
                else
                  elements21 = nil
                  @offset = index26
                end
              else
                elements21 = nil
                @offset = index26
              end
            else
              elements21 = nil
              @offset = index26
            end
            if elements21.nil?
              address0 = FAILURE
            else
              address0 = TreeNode155.new(@input[index26...@offset], index26, elements21)
              @offset = @offset
            end
            if address0 == FAILURE
              @offset = index1
              index34, elements28 = @offset, []
              address125 = FAILURE
              chunk53 = nil
              if @offset < @input_size
                chunk53 = @input[@offset...@offset + 1]
              end
              if chunk53 == "("
                address125 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address125 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "'('"
                end
              end
              unless address125 == FAILURE
                elements28 << address125
                address126 = FAILURE
                address126 = _read_SPACE
                unless address126 == FAILURE
                  elements28 << address126
                  address127 = FAILURE
                  chunk54 = nil
                  if @offset < @input_size
                    chunk54 = @input[@offset...@offset + 1]
                  end
                  if chunk54 == ")"
                    address127 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address127 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "')'"
                    end
                  end
                  unless address127 == FAILURE
                    elements28 << address127
                    address128 = FAILURE
                    address128 = _read_SPACE
                    unless address128 == FAILURE
                      elements28 << address128
                      address129 = FAILURE
                      remaining4, index35, elements29, address130 = 0, @offset, [], true
                      until address130 == FAILURE
                        index36 = @offset
                        index37, elements30 = @offset, []
                        address131 = FAILURE
                        chunk55 = nil
                        if @offset < @input_size
                          chunk55 = @input[@offset...@offset + 1]
                        end
                        if chunk55 == "["
                          address131 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address131 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "'['"
                          end
                        end
                        unless address131 == FAILURE
                          elements30 << address131
                          address132 = FAILURE
                          address132 = _read_SPACE
                          unless address132 == FAILURE
                            elements30 << address132
                            address133 = FAILURE
                            chunk56 = nil
                            if @offset < @input_size
                              chunk56 = @input[@offset...@offset + 1]
                            end
                            if chunk56 == "]"
                              address133 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address133 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "']'"
                              end
                            end
                            unless address133 == FAILURE
                              elements30 << address133
                              address134 = FAILURE
                              address134 = _read_SPACE
                              unless address134 == FAILURE
                                elements30 << address134
                              else
                                elements30 = nil
                                @offset = index37
                              end
                            else
                              elements30 = nil
                              @offset = index37
                            end
                          else
                            elements30 = nil
                            @offset = index37
                          end
                        else
                          elements30 = nil
                          @offset = index37
                        end
                        if elements30.nil?
                          address130 = FAILURE
                        else
                          address130 = TreeNode162.new(@input[index37...@offset], index37, elements30)
                          @offset = @offset
                        end
                        if address130 == FAILURE
                          @offset = index36
                          index38, elements31 = @offset, []
                          address135 = FAILURE
                          chunk57 = nil
                          if @offset < @input_size
                            chunk57 = @input[@offset...@offset + 1]
                          end
                          if chunk57 == "["
                            address135 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address135 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "'['"
                            end
                          end
                          unless address135 == FAILURE
                            elements31 << address135
                            address136 = FAILURE
                            address136 = _read_SPACE
                            unless address136 == FAILURE
                              elements31 << address136
                              address137 = FAILURE
                              address137 = _read_assignment_expression
                              unless address137 == FAILURE
                                elements31 << address137
                                address138 = FAILURE
                                chunk58 = nil
                                if @offset < @input_size
                                  chunk58 = @input[@offset...@offset + 1]
                                end
                                if chunk58 == "]"
                                  address138 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address138 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "']'"
                                  end
                                end
                                unless address138 == FAILURE
                                  elements31 << address138
                                  address139 = FAILURE
                                  address139 = _read_SPACE
                                  unless address139 == FAILURE
                                    elements31 << address139
                                  else
                                    elements31 = nil
                                    @offset = index38
                                  end
                                else
                                  elements31 = nil
                                  @offset = index38
                                end
                              else
                                elements31 = nil
                                @offset = index38
                              end
                            else
                              elements31 = nil
                              @offset = index38
                            end
                          else
                            elements31 = nil
                            @offset = index38
                          end
                          if elements31.nil?
                            address130 = FAILURE
                          else
                            address130 = TreeNode163.new(@input[index38...@offset], index38, elements31)
                            @offset = @offset
                          end
                          if address130 == FAILURE
                            @offset = index36
                            index39, elements32 = @offset, []
                            address140 = FAILURE
                            chunk59 = nil
                            if @offset < @input_size
                              chunk59 = @input[@offset...@offset + 1]
                            end
                            if chunk59 == "["
                              address140 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address140 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "'['"
                              end
                            end
                            unless address140 == FAILURE
                              elements32 << address140
                              address141 = FAILURE
                              address141 = _read_SPACE
                              unless address141 == FAILURE
                                elements32 << address141
                                address142 = FAILURE
                                chunk60 = nil
                                if @offset < @input_size
                                  chunk60 = @input[@offset...@offset + 1]
                                end
                                if chunk60 == "*"
                                  address142 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address142 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "'*'"
                                  end
                                end
                                unless address142 == FAILURE
                                  elements32 << address142
                                  address143 = FAILURE
                                  address143 = _read_SPACE
                                  unless address143 == FAILURE
                                    elements32 << address143
                                    address144 = FAILURE
                                    chunk61 = nil
                                    if @offset < @input_size
                                      chunk61 = @input[@offset...@offset + 1]
                                    end
                                    if chunk61 == "]"
                                      address144 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address144 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "']'"
                                      end
                                    end
                                    unless address144 == FAILURE
                                      elements32 << address144
                                      address145 = FAILURE
                                      address145 = _read_SPACE
                                      unless address145 == FAILURE
                                        elements32 << address145
                                      else
                                        elements32 = nil
                                        @offset = index39
                                      end
                                    else
                                      elements32 = nil
                                      @offset = index39
                                    end
                                  else
                                    elements32 = nil
                                    @offset = index39
                                  end
                                else
                                  elements32 = nil
                                  @offset = index39
                                end
                              else
                                elements32 = nil
                                @offset = index39
                              end
                            else
                              elements32 = nil
                              @offset = index39
                            end
                            if elements32.nil?
                              address130 = FAILURE
                            else
                              address130 = TreeNode164.new(@input[index39...@offset], index39, elements32)
                              @offset = @offset
                            end
                            if address130 == FAILURE
                              @offset = index36
                              index40, elements33 = @offset, []
                              address146 = FAILURE
                              chunk62 = nil
                              if @offset < @input_size
                                chunk62 = @input[@offset...@offset + 1]
                              end
                              if chunk62 == "("
                                address146 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address146 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "'('"
                                end
                              end
                              unless address146 == FAILURE
                                elements33 << address146
                                address147 = FAILURE
                                address147 = _read_SPACE
                                unless address147 == FAILURE
                                  elements33 << address147
                                  address148 = FAILURE
                                  chunk63 = nil
                                  if @offset < @input_size
                                    chunk63 = @input[@offset...@offset + 1]
                                  end
                                  if chunk63 == ")"
                                    address148 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                    @offset = @offset + 1
                                  else
                                    address148 = FAILURE
                                    if @offset > @failure
                                      @failure = @offset
                                      @expected = []
                                    end
                                    if @offset == @failure
                                      @expected << "')'"
                                    end
                                  end
                                  unless address148 == FAILURE
                                    elements33 << address148
                                    address149 = FAILURE
                                    address149 = _read_SPACE
                                    unless address149 == FAILURE
                                      elements33 << address149
                                    else
                                      elements33 = nil
                                      @offset = index40
                                    end
                                  else
                                    elements33 = nil
                                    @offset = index40
                                  end
                                else
                                  elements33 = nil
                                  @offset = index40
                                end
                              else
                                elements33 = nil
                                @offset = index40
                              end
                              if elements33.nil?
                                address130 = FAILURE
                              else
                                address130 = TreeNode165.new(@input[index40...@offset], index40, elements33)
                                @offset = @offset
                              end
                              if address130 == FAILURE
                                @offset = index36
                                index41, elements34 = @offset, []
                                address150 = FAILURE
                                chunk64 = nil
                                if @offset < @input_size
                                  chunk64 = @input[@offset...@offset + 1]
                                end
                                if chunk64 == "("
                                  address150 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address150 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "'('"
                                  end
                                end
                                unless address150 == FAILURE
                                  elements34 << address150
                                  address151 = FAILURE
                                  address151 = _read_SPACE
                                  unless address151 == FAILURE
                                    elements34 << address151
                                    address152 = FAILURE
                                    address152 = _read_parameter_type_list
                                    unless address152 == FAILURE
                                      elements34 << address152
                                      address153 = FAILURE
                                      chunk65 = nil
                                      if @offset < @input_size
                                        chunk65 = @input[@offset...@offset + 1]
                                      end
                                      if chunk65 == ")"
                                        address153 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                        @offset = @offset + 1
                                      else
                                        address153 = FAILURE
                                        if @offset > @failure
                                          @failure = @offset
                                          @expected = []
                                        end
                                        if @offset == @failure
                                          @expected << "')'"
                                        end
                                      end
                                      unless address153 == FAILURE
                                        elements34 << address153
                                        address154 = FAILURE
                                        address154 = _read_SPACE
                                        unless address154 == FAILURE
                                          elements34 << address154
                                        else
                                          elements34 = nil
                                          @offset = index41
                                        end
                                      else
                                        elements34 = nil
                                        @offset = index41
                                      end
                                    else
                                      elements34 = nil
                                      @offset = index41
                                    end
                                  else
                                    elements34 = nil
                                    @offset = index41
                                  end
                                else
                                  elements34 = nil
                                  @offset = index41
                                end
                                if elements34.nil?
                                  address130 = FAILURE
                                else
                                  address130 = TreeNode166.new(@input[index41...@offset], index41, elements34)
                                  @offset = @offset
                                end
                                if address130 == FAILURE
                                  @offset = index36
                                end
                              end
                            end
                          end
                        end
                        unless address130 == FAILURE
                          elements29 << address130
                          remaining4 -= 1
                        end
                      end
                      if remaining4 <= 0
                        address129 = TreeNode.new(@input[index35...@offset], index35, elements29)
                        @offset = @offset
                      else
                        address129 = FAILURE
                      end
                      unless address129 == FAILURE
                        elements28 << address129
                      else
                        elements28 = nil
                        @offset = index34
                      end
                    else
                      elements28 = nil
                      @offset = index34
                    end
                  else
                    elements28 = nil
                    @offset = index34
                  end
                else
                  elements28 = nil
                  @offset = index34
                end
              else
                elements28 = nil
                @offset = index34
              end
              if elements28.nil?
                address0 = FAILURE
              else
                address0 = TreeNode161.new(@input[index34...@offset], index34, elements28)
                @offset = @offset
              end
              if address0 == FAILURE
                @offset = index1
                index42, elements35 = @offset, []
                address155 = FAILURE
                chunk66 = nil
                if @offset < @input_size
                  chunk66 = @input[@offset...@offset + 1]
                end
                if chunk66 == "("
                  address155 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address155 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "'('"
                  end
                end
                unless address155 == FAILURE
                  elements35 << address155
                  address156 = FAILURE
                  address156 = _read_SPACE
                  unless address156 == FAILURE
                    elements35 << address156
                    address157 = FAILURE
                    address157 = _read_parameter_type_list
                    unless address157 == FAILURE
                      elements35 << address157
                      address158 = FAILURE
                      chunk67 = nil
                      if @offset < @input_size
                        chunk67 = @input[@offset...@offset + 1]
                      end
                      if chunk67 == ")"
                        address158 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address158 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "')'"
                        end
                      end
                      unless address158 == FAILURE
                        elements35 << address158
                        address159 = FAILURE
                        address159 = _read_SPACE
                        unless address159 == FAILURE
                          elements35 << address159
                          address160 = FAILURE
                          remaining5, index43, elements36, address161 = 0, @offset, [], true
                          until address161 == FAILURE
                            index44 = @offset
                            index45, elements37 = @offset, []
                            address162 = FAILURE
                            chunk68 = nil
                            if @offset < @input_size
                              chunk68 = @input[@offset...@offset + 1]
                            end
                            if chunk68 == "["
                              address162 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address162 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "'['"
                              end
                            end
                            unless address162 == FAILURE
                              elements37 << address162
                              address163 = FAILURE
                              address163 = _read_SPACE
                              unless address163 == FAILURE
                                elements37 << address163
                                address164 = FAILURE
                                chunk69 = nil
                                if @offset < @input_size
                                  chunk69 = @input[@offset...@offset + 1]
                                end
                                if chunk69 == "]"
                                  address164 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address164 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "']'"
                                  end
                                end
                                unless address164 == FAILURE
                                  elements37 << address164
                                  address165 = FAILURE
                                  address165 = _read_SPACE
                                  unless address165 == FAILURE
                                    elements37 << address165
                                  else
                                    elements37 = nil
                                    @offset = index45
                                  end
                                else
                                  elements37 = nil
                                  @offset = index45
                                end
                              else
                                elements37 = nil
                                @offset = index45
                              end
                            else
                              elements37 = nil
                              @offset = index45
                            end
                            if elements37.nil?
                              address161 = FAILURE
                            else
                              address161 = TreeNode168.new(@input[index45...@offset], index45, elements37)
                              @offset = @offset
                            end
                            if address161 == FAILURE
                              @offset = index44
                              index46, elements38 = @offset, []
                              address166 = FAILURE
                              chunk70 = nil
                              if @offset < @input_size
                                chunk70 = @input[@offset...@offset + 1]
                              end
                              if chunk70 == "["
                                address166 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address166 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "'['"
                                end
                              end
                              unless address166 == FAILURE
                                elements38 << address166
                                address167 = FAILURE
                                address167 = _read_SPACE
                                unless address167 == FAILURE
                                  elements38 << address167
                                  address168 = FAILURE
                                  address168 = _read_assignment_expression
                                  unless address168 == FAILURE
                                    elements38 << address168
                                    address169 = FAILURE
                                    chunk71 = nil
                                    if @offset < @input_size
                                      chunk71 = @input[@offset...@offset + 1]
                                    end
                                    if chunk71 == "]"
                                      address169 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address169 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "']'"
                                      end
                                    end
                                    unless address169 == FAILURE
                                      elements38 << address169
                                      address170 = FAILURE
                                      address170 = _read_SPACE
                                      unless address170 == FAILURE
                                        elements38 << address170
                                      else
                                        elements38 = nil
                                        @offset = index46
                                      end
                                    else
                                      elements38 = nil
                                      @offset = index46
                                    end
                                  else
                                    elements38 = nil
                                    @offset = index46
                                  end
                                else
                                  elements38 = nil
                                  @offset = index46
                                end
                              else
                                elements38 = nil
                                @offset = index46
                              end
                              if elements38.nil?
                                address161 = FAILURE
                              else
                                address161 = TreeNode169.new(@input[index46...@offset], index46, elements38)
                                @offset = @offset
                              end
                              if address161 == FAILURE
                                @offset = index44
                                index47, elements39 = @offset, []
                                address171 = FAILURE
                                chunk72 = nil
                                if @offset < @input_size
                                  chunk72 = @input[@offset...@offset + 1]
                                end
                                if chunk72 == "["
                                  address171 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address171 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "'['"
                                  end
                                end
                                unless address171 == FAILURE
                                  elements39 << address171
                                  address172 = FAILURE
                                  address172 = _read_SPACE
                                  unless address172 == FAILURE
                                    elements39 << address172
                                    address173 = FAILURE
                                    chunk73 = nil
                                    if @offset < @input_size
                                      chunk73 = @input[@offset...@offset + 1]
                                    end
                                    if chunk73 == "*"
                                      address173 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address173 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "'*'"
                                      end
                                    end
                                    unless address173 == FAILURE
                                      elements39 << address173
                                      address174 = FAILURE
                                      address174 = _read_SPACE
                                      unless address174 == FAILURE
                                        elements39 << address174
                                        address175 = FAILURE
                                        chunk74 = nil
                                        if @offset < @input_size
                                          chunk74 = @input[@offset...@offset + 1]
                                        end
                                        if chunk74 == "]"
                                          address175 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                          @offset = @offset + 1
                                        else
                                          address175 = FAILURE
                                          if @offset > @failure
                                            @failure = @offset
                                            @expected = []
                                          end
                                          if @offset == @failure
                                            @expected << "']'"
                                          end
                                        end
                                        unless address175 == FAILURE
                                          elements39 << address175
                                          address176 = FAILURE
                                          address176 = _read_SPACE
                                          unless address176 == FAILURE
                                            elements39 << address176
                                          else
                                            elements39 = nil
                                            @offset = index47
                                          end
                                        else
                                          elements39 = nil
                                          @offset = index47
                                        end
                                      else
                                        elements39 = nil
                                        @offset = index47
                                      end
                                    else
                                      elements39 = nil
                                      @offset = index47
                                    end
                                  else
                                    elements39 = nil
                                    @offset = index47
                                  end
                                else
                                  elements39 = nil
                                  @offset = index47
                                end
                                if elements39.nil?
                                  address161 = FAILURE
                                else
                                  address161 = TreeNode170.new(@input[index47...@offset], index47, elements39)
                                  @offset = @offset
                                end
                                if address161 == FAILURE
                                  @offset = index44
                                  index48, elements40 = @offset, []
                                  address177 = FAILURE
                                  chunk75 = nil
                                  if @offset < @input_size
                                    chunk75 = @input[@offset...@offset + 1]
                                  end
                                  if chunk75 == "("
                                    address177 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                    @offset = @offset + 1
                                  else
                                    address177 = FAILURE
                                    if @offset > @failure
                                      @failure = @offset
                                      @expected = []
                                    end
                                    if @offset == @failure
                                      @expected << "'('"
                                    end
                                  end
                                  unless address177 == FAILURE
                                    elements40 << address177
                                    address178 = FAILURE
                                    address178 = _read_SPACE
                                    unless address178 == FAILURE
                                      elements40 << address178
                                      address179 = FAILURE
                                      chunk76 = nil
                                      if @offset < @input_size
                                        chunk76 = @input[@offset...@offset + 1]
                                      end
                                      if chunk76 == ")"
                                        address179 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                        @offset = @offset + 1
                                      else
                                        address179 = FAILURE
                                        if @offset > @failure
                                          @failure = @offset
                                          @expected = []
                                        end
                                        if @offset == @failure
                                          @expected << "')'"
                                        end
                                      end
                                      unless address179 == FAILURE
                                        elements40 << address179
                                        address180 = FAILURE
                                        address180 = _read_SPACE
                                        unless address180 == FAILURE
                                          elements40 << address180
                                        else
                                          elements40 = nil
                                          @offset = index48
                                        end
                                      else
                                        elements40 = nil
                                        @offset = index48
                                      end
                                    else
                                      elements40 = nil
                                      @offset = index48
                                    end
                                  else
                                    elements40 = nil
                                    @offset = index48
                                  end
                                  if elements40.nil?
                                    address161 = FAILURE
                                  else
                                    address161 = TreeNode171.new(@input[index48...@offset], index48, elements40)
                                    @offset = @offset
                                  end
                                  if address161 == FAILURE
                                    @offset = index44
                                    index49, elements41 = @offset, []
                                    address181 = FAILURE
                                    chunk77 = nil
                                    if @offset < @input_size
                                      chunk77 = @input[@offset...@offset + 1]
                                    end
                                    if chunk77 == "("
                                      address181 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address181 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "'('"
                                      end
                                    end
                                    unless address181 == FAILURE
                                      elements41 << address181
                                      address182 = FAILURE
                                      address182 = _read_SPACE
                                      unless address182 == FAILURE
                                        elements41 << address182
                                        address183 = FAILURE
                                        address183 = _read_parameter_type_list
                                        unless address183 == FAILURE
                                          elements41 << address183
                                          address184 = FAILURE
                                          chunk78 = nil
                                          if @offset < @input_size
                                            chunk78 = @input[@offset...@offset + 1]
                                          end
                                          if chunk78 == ")"
                                            address184 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                            @offset = @offset + 1
                                          else
                                            address184 = FAILURE
                                            if @offset > @failure
                                              @failure = @offset
                                              @expected = []
                                            end
                                            if @offset == @failure
                                              @expected << "')'"
                                            end
                                          end
                                          unless address184 == FAILURE
                                            elements41 << address184
                                            address185 = FAILURE
                                            address185 = _read_SPACE
                                            unless address185 == FAILURE
                                              elements41 << address185
                                            else
                                              elements41 = nil
                                              @offset = index49
                                            end
                                          else
                                            elements41 = nil
                                            @offset = index49
                                          end
                                        else
                                          elements41 = nil
                                          @offset = index49
                                        end
                                      else
                                        elements41 = nil
                                        @offset = index49
                                      end
                                    else
                                      elements41 = nil
                                      @offset = index49
                                    end
                                    if elements41.nil?
                                      address161 = FAILURE
                                    else
                                      address161 = TreeNode172.new(@input[index49...@offset], index49, elements41)
                                      @offset = @offset
                                    end
                                    if address161 == FAILURE
                                      @offset = index44
                                    end
                                  end
                                end
                              end
                            end
                            unless address161 == FAILURE
                              elements36 << address161
                              remaining5 -= 1
                            end
                          end
                          if remaining5 <= 0
                            address160 = TreeNode.new(@input[index43...@offset], index43, elements36)
                            @offset = @offset
                          else
                            address160 = FAILURE
                          end
                          unless address160 == FAILURE
                            elements35 << address160
                          else
                            elements35 = nil
                            @offset = index42
                          end
                        else
                          elements35 = nil
                          @offset = index42
                        end
                      else
                        elements35 = nil
                        @offset = index42
                      end
                    else
                      elements35 = nil
                      @offset = index42
                    end
                  else
                    elements35 = nil
                    @offset = index42
                  end
                else
                  elements35 = nil
                  @offset = index42
                end
                if elements35.nil?
                  address0 = FAILURE
                else
                  address0 = TreeNode167.new(@input[index42...@offset], index42, elements35)
                  @offset = @offset
                end
                if address0 == FAILURE
                  @offset = index1
                end
              end
            end
          end
        end
      end
      @cache[:direct_abstract_declarator][index0] = [address0, @offset]
      return address0
    end

    def _read_initializer
      address0, index0 = FAILURE, @offset
      cached = @cache[:initializer][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      address0 = _read_assignment_expression
      if address0 == FAILURE
        @offset = index1
        index2, elements0 = @offset, []
        address1 = FAILURE
        chunk0 = nil
        if @offset < @input_size
          chunk0 = @input[@offset...@offset + 1]
        end
        if chunk0 == "{"
          address1 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address1 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "'{'"
          end
        end
        unless address1 == FAILURE
          elements0 << address1
          address2 = FAILURE
          address2 = _read_SPACE
          unless address2 == FAILURE
            elements0 << address2
            address3 = FAILURE
            address3 = _read_initializer_list
            unless address3 == FAILURE
              elements0 << address3
              address4 = FAILURE
              chunk1 = nil
              if @offset < @input_size
                chunk1 = @input[@offset...@offset + 1]
              end
              if chunk1 == "}"
                address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address4 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "'}'"
                end
              end
              unless address4 == FAILURE
                elements0 << address4
                address5 = FAILURE
                address5 = _read_SPACE
                unless address5 == FAILURE
                  elements0 << address5
                else
                  elements0 = nil
                  @offset = index2
                end
              else
                elements0 = nil
                @offset = index2
              end
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
        if elements0.nil?
          address0 = FAILURE
        else
          address0 = TreeNode173.new(@input[index2...@offset], index2, elements0)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
          index3, elements1 = @offset, []
          address6 = FAILURE
          chunk2 = nil
          if @offset < @input_size
            chunk2 = @input[@offset...@offset + 1]
          end
          if chunk2 == "{"
            address6 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address6 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "'{'"
            end
          end
          unless address6 == FAILURE
            elements1 << address6
            address7 = FAILURE
            address7 = _read_SPACE
            unless address7 == FAILURE
              elements1 << address7
              address8 = FAILURE
              address8 = _read_initializer_list
              unless address8 == FAILURE
                elements1 << address8
                address9 = FAILURE
                chunk3 = nil
                if @offset < @input_size
                  chunk3 = @input[@offset...@offset + 1]
                end
                if chunk3 == ","
                  address9 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address9 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "','"
                  end
                end
                unless address9 == FAILURE
                  elements1 << address9
                  address10 = FAILURE
                  address10 = _read_SPACE
                  unless address10 == FAILURE
                    elements1 << address10
                    address11 = FAILURE
                    chunk4 = nil
                    if @offset < @input_size
                      chunk4 = @input[@offset...@offset + 1]
                    end
                    if chunk4 == "}"
                      address11 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address11 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "'}'"
                      end
                    end
                    unless address11 == FAILURE
                      elements1 << address11
                      address12 = FAILURE
                      address12 = _read_SPACE
                      unless address12 == FAILURE
                        elements1 << address12
                      else
                        elements1 = nil
                        @offset = index3
                      end
                    else
                      elements1 = nil
                      @offset = index3
                    end
                  else
                    elements1 = nil
                    @offset = index3
                  end
                else
                  elements1 = nil
                  @offset = index3
                end
              else
                elements1 = nil
                @offset = index3
              end
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
          if elements1.nil?
            address0 = FAILURE
          else
            address0 = TreeNode174.new(@input[index3...@offset], index3, elements1)
            @offset = @offset
          end
          if address0 == FAILURE
            @offset = index1
          end
        end
      end
      @cache[:initializer][index0] = [address0, @offset]
      return address0
    end

    def _read_initializer_list
      address0, index0 = FAILURE, @offset
      cached = @cache[:initializer_list][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_designation
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_initializer
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          remaining0, index3, elements1, address4 = 0, @offset, [], true
          until address4 == FAILURE
            index4 = @offset
            index5, elements2 = @offset, []
            address5 = FAILURE
            chunk0 = nil
            if @offset < @input_size
              chunk0 = @input[@offset...@offset + 1]
            end
            if chunk0 == ","
              address5 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address5 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "','"
              end
            end
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              address6 = _read_SPACE
              unless address6 == FAILURE
                elements2 << address6
                address7 = FAILURE
                address7 = _read_initializer
                unless address7 == FAILURE
                  elements2 << address7
                else
                  elements2 = nil
                  @offset = index5
                end
              else
                elements2 = nil
                @offset = index5
              end
            else
              elements2 = nil
              @offset = index5
            end
            if elements2.nil?
              address4 = FAILURE
            else
              address4 = TreeNode176.new(@input[index5...@offset], index5, elements2)
              @offset = @offset
            end
            if address4 == FAILURE
              @offset = index4
              index6, elements3 = @offset, []
              address8 = FAILURE
              chunk1 = nil
              if @offset < @input_size
                chunk1 = @input[@offset...@offset + 1]
              end
              if chunk1 == ","
                address8 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address8 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "','"
                end
              end
              unless address8 == FAILURE
                elements3 << address8
                address9 = FAILURE
                address9 = _read_SPACE
                unless address9 == FAILURE
                  elements3 << address9
                  address10 = FAILURE
                  address10 = _read_designation
                  unless address10 == FAILURE
                    elements3 << address10
                    address11 = FAILURE
                    address11 = _read_initializer
                    unless address11 == FAILURE
                      elements3 << address11
                    else
                      elements3 = nil
                      @offset = index6
                    end
                  else
                    elements3 = nil
                    @offset = index6
                  end
                else
                  elements3 = nil
                  @offset = index6
                end
              else
                elements3 = nil
                @offset = index6
              end
              if elements3.nil?
                address4 = FAILURE
              else
                address4 = TreeNode177.new(@input[index6...@offset], index6, elements3)
                @offset = @offset
              end
              if address4 == FAILURE
                @offset = index4
              end
            end
            unless address4 == FAILURE
              elements1 << address4
              remaining0 -= 1
            end
          end
          if remaining0 <= 0
            address3 = TreeNode.new(@input[index3...@offset], index3, elements1)
            @offset = @offset
          else
            address3 = FAILURE
          end
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode175.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index7, elements4 = @offset, []
        address12 = FAILURE
        address12 = _read_initializer
        unless address12 == FAILURE
          elements4 << address12
          address13 = FAILURE
          remaining1, index8, elements5, address14 = 0, @offset, [], true
          until address14 == FAILURE
            index9 = @offset
            index10, elements6 = @offset, []
            address15 = FAILURE
            chunk2 = nil
            if @offset < @input_size
              chunk2 = @input[@offset...@offset + 1]
            end
            if chunk2 == ","
              address15 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address15 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "','"
              end
            end
            unless address15 == FAILURE
              elements6 << address15
              address16 = FAILURE
              address16 = _read_SPACE
              unless address16 == FAILURE
                elements6 << address16
                address17 = FAILURE
                address17 = _read_initializer
                unless address17 == FAILURE
                  elements6 << address17
                else
                  elements6 = nil
                  @offset = index10
                end
              else
                elements6 = nil
                @offset = index10
              end
            else
              elements6 = nil
              @offset = index10
            end
            if elements6.nil?
              address14 = FAILURE
            else
              address14 = TreeNode179.new(@input[index10...@offset], index10, elements6)
              @offset = @offset
            end
            if address14 == FAILURE
              @offset = index9
              index11, elements7 = @offset, []
              address18 = FAILURE
              chunk3 = nil
              if @offset < @input_size
                chunk3 = @input[@offset...@offset + 1]
              end
              if chunk3 == ","
                address18 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address18 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "','"
                end
              end
              unless address18 == FAILURE
                elements7 << address18
                address19 = FAILURE
                address19 = _read_SPACE
                unless address19 == FAILURE
                  elements7 << address19
                  address20 = FAILURE
                  address20 = _read_designation
                  unless address20 == FAILURE
                    elements7 << address20
                    address21 = FAILURE
                    address21 = _read_initializer
                    unless address21 == FAILURE
                      elements7 << address21
                    else
                      elements7 = nil
                      @offset = index11
                    end
                  else
                    elements7 = nil
                    @offset = index11
                  end
                else
                  elements7 = nil
                  @offset = index11
                end
              else
                elements7 = nil
                @offset = index11
              end
              if elements7.nil?
                address14 = FAILURE
              else
                address14 = TreeNode180.new(@input[index11...@offset], index11, elements7)
                @offset = @offset
              end
              if address14 == FAILURE
                @offset = index9
              end
            end
            unless address14 == FAILURE
              elements5 << address14
              remaining1 -= 1
            end
          end
          if remaining1 <= 0
            address13 = TreeNode.new(@input[index8...@offset], index8, elements5)
            @offset = @offset
          else
            address13 = FAILURE
          end
          unless address13 == FAILURE
            elements4 << address13
          else
            elements4 = nil
            @offset = index7
          end
        else
          elements4 = nil
          @offset = index7
        end
        if elements4.nil?
          address0 = FAILURE
        else
          address0 = TreeNode178.new(@input[index7...@offset], index7, elements4)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:initializer_list][index0] = [address0, @offset]
      return address0
    end

    def _read_designation
      address0, index0 = FAILURE, @offset
      cached = @cache[:designation][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_designator_list
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        chunk0 = nil
        if @offset < @input_size
          chunk0 = @input[@offset...@offset + 1]
        end
        if chunk0 == "="
          address2 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address2 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "'='"
          end
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode181.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:designation][index0] = [address0, @offset]
      return address0
    end

    def _read_designator_list
      address0, index0 = FAILURE, @offset
      cached = @cache[:designator_list][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_designator
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          address3 = _read_designator
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode182.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:designator_list][index0] = [address0, @offset]
      return address0
    end

    def _read_designator
      address0, index0 = FAILURE, @offset
      cached = @cache[:designator][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 1]
      end
      if chunk0 == "["
        address1 = TreeNode.new(@input[@offset...@offset + 1], @offset)
        @offset = @offset + 1
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "'['"
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_constant_expression
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            chunk1 = nil
            if @offset < @input_size
              chunk1 = @input[@offset...@offset + 1]
            end
            if chunk1 == "]"
              address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address4 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "']'"
              end
            end
            unless address4 == FAILURE
              elements0 << address4
              address5 = FAILURE
              address5 = _read_SPACE
              unless address5 == FAILURE
                elements0 << address5
              else
                elements0 = nil
                @offset = index2
              end
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode183.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index3, elements1 = @offset, []
        address6 = FAILURE
        chunk2 = nil
        if @offset < @input_size
          chunk2 = @input[@offset...@offset + 1]
        end
        if chunk2 == "."
          address6 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address6 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "'.'"
          end
        end
        unless address6 == FAILURE
          elements1 << address6
          address7 = FAILURE
          address7 = _read_SPACE
          unless address7 == FAILURE
            elements1 << address7
            address8 = FAILURE
            address8 = _read_IDENTIFIER
            unless address8 == FAILURE
              elements1 << address8
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
        else
          elements1 = nil
          @offset = index3
        end
        if elements1.nil?
          address0 = FAILURE
        else
          address0 = TreeNode184.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:designator][index0] = [address0, @offset]
      return address0
    end

    def _read_statement
      address0, index0 = FAILURE, @offset
      cached = @cache[:statement][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      address0 = _read_labeled_statement
      if address0 == FAILURE
        @offset = index1
        address0 = _read_compound_statement
        if address0 == FAILURE
          @offset = index1
          address0 = _read_expression_statement
          if address0 == FAILURE
            @offset = index1
            address0 = _read_selection_statement
            if address0 == FAILURE
              @offset = index1
              address0 = _read_iteration_statement
              if address0 == FAILURE
                @offset = index1
                address0 = _read_jump_statement
                if address0 == FAILURE
                  @offset = index1
                end
              end
            end
          end
        end
      end
      @cache[:statement][index0] = [address0, @offset]
      return address0
    end

    def _read_labeled_statement
      address0, index0 = FAILURE, @offset
      cached = @cache[:labeled_statement][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_IDENTIFIER
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        chunk0 = nil
        if @offset < @input_size
          chunk0 = @input[@offset...@offset + 1]
        end
        if chunk0 == ":"
          address2 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address2 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "':'"
          end
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            address4 = _read_statement
            unless address4 == FAILURE
              elements0 << address4
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode185.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index3, elements1 = @offset, []
        address5 = FAILURE
        address5 = _read_CASE
        unless address5 == FAILURE
          elements1 << address5
          address6 = FAILURE
          address6 = _read_constant_expression
          unless address6 == FAILURE
            elements1 << address6
            address7 = FAILURE
            chunk1 = nil
            if @offset < @input_size
              chunk1 = @input[@offset...@offset + 1]
            end
            if chunk1 == ":"
              address7 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address7 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "':'"
              end
            end
            unless address7 == FAILURE
              elements1 << address7
              address8 = FAILURE
              address8 = _read_SPACE
              unless address8 == FAILURE
                elements1 << address8
                address9 = FAILURE
                address9 = _read_statement
                unless address9 == FAILURE
                  elements1 << address9
                else
                  elements1 = nil
                  @offset = index3
                end
              else
                elements1 = nil
                @offset = index3
              end
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
        else
          elements1 = nil
          @offset = index3
        end
        if elements1.nil?
          address0 = FAILURE
        else
          address0 = TreeNode186.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
          index4, elements2 = @offset, []
          address10 = FAILURE
          address10 = _read_DEFAULT
          unless address10 == FAILURE
            elements2 << address10
            address11 = FAILURE
            chunk2 = nil
            if @offset < @input_size
              chunk2 = @input[@offset...@offset + 1]
            end
            if chunk2 == ":"
              address11 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address11 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "':'"
              end
            end
            unless address11 == FAILURE
              elements2 << address11
              address12 = FAILURE
              address12 = _read_SPACE
              unless address12 == FAILURE
                elements2 << address12
                address13 = FAILURE
                address13 = _read_statement
                unless address13 == FAILURE
                  elements2 << address13
                else
                  elements2 = nil
                  @offset = index4
                end
              else
                elements2 = nil
                @offset = index4
              end
            else
              elements2 = nil
              @offset = index4
            end
          else
            elements2 = nil
            @offset = index4
          end
          if elements2.nil?
            address0 = FAILURE
          else
            address0 = TreeNode187.new(@input[index4...@offset], index4, elements2)
            @offset = @offset
          end
          if address0 == FAILURE
            @offset = index1
          end
        end
      end
      @cache[:labeled_statement][index0] = [address0, @offset]
      return address0
    end

    def _read_compound_statement
      address0, index0 = FAILURE, @offset
      cached = @cache[:compound_statement][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 1]
      end
      if chunk0 == "{"
        address1 = TreeNode.new(@input[@offset...@offset + 1], @offset)
        @offset = @offset + 1
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "'{'"
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          chunk1 = nil
          if @offset < @input_size
            chunk1 = @input[@offset...@offset + 1]
          end
          if chunk1 == "}"
            address3 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address3 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "'}'"
            end
          end
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            address4 = _read_SPACE
            unless address4 == FAILURE
              elements0 << address4
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode188.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index3, elements1 = @offset, []
        address5 = FAILURE
        chunk2 = nil
        if @offset < @input_size
          chunk2 = @input[@offset...@offset + 1]
        end
        if chunk2 == "{"
          address5 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address5 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "'{'"
          end
        end
        unless address5 == FAILURE
          elements1 << address5
          address6 = FAILURE
          address6 = _read_SPACE
          unless address6 == FAILURE
            elements1 << address6
            address7 = FAILURE
            address7 = _read_block_item_list
            unless address7 == FAILURE
              elements1 << address7
              address8 = FAILURE
              chunk3 = nil
              if @offset < @input_size
                chunk3 = @input[@offset...@offset + 1]
              end
              if chunk3 == "}"
                address8 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address8 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "'}'"
                end
              end
              unless address8 == FAILURE
                elements1 << address8
                address9 = FAILURE
                address9 = _read_SPACE
                unless address9 == FAILURE
                  elements1 << address9
                else
                  elements1 = nil
                  @offset = index3
                end
              else
                elements1 = nil
                @offset = index3
              end
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
        else
          elements1 = nil
          @offset = index3
        end
        if elements1.nil?
          address0 = FAILURE
        else
          address0 = TreeNode189.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:compound_statement][index0] = [address0, @offset]
      return address0
    end

    def _read_block_item_list
      address0, index0 = FAILURE, @offset
      cached = @cache[:block_item_list][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_block_item
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          address3 = _read_block_item
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode190.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:block_item_list][index0] = [address0, @offset]
      return address0
    end

    def _read_block_item
      address0, index0 = FAILURE, @offset
      cached = @cache[:block_item][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      address0 = _read_declaration
      if address0 == FAILURE
        @offset = index1
        address0 = _read_statement
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:block_item][index0] = [address0, @offset]
      return address0
    end

    def _read_expression_statement
      address0, index0 = FAILURE, @offset
      cached = @cache[:expression_statement][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 1]
      end
      if chunk0 == ";"
        address1 = TreeNode.new(@input[@offset...@offset + 1], @offset)
        @offset = @offset + 1
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "';'"
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode191.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index3, elements1 = @offset, []
        address3 = FAILURE
        address3 = _read_expression
        unless address3 == FAILURE
          elements1 << address3
          address4 = FAILURE
          chunk1 = nil
          if @offset < @input_size
            chunk1 = @input[@offset...@offset + 1]
          end
          if chunk1 == ";"
            address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address4 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "';'"
            end
          end
          unless address4 == FAILURE
            elements1 << address4
            address5 = FAILURE
            address5 = _read_SPACE
            unless address5 == FAILURE
              elements1 << address5
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
        else
          elements1 = nil
          @offset = index3
        end
        if elements1.nil?
          address0 = FAILURE
        else
          address0 = TreeNode192.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:expression_statement][index0] = [address0, @offset]
      return address0
    end

    def _read_selection_statement
      address0, index0 = FAILURE, @offset
      cached = @cache[:selection_statement][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_IF
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        chunk0 = nil
        if @offset < @input_size
          chunk0 = @input[@offset...@offset + 1]
        end
        if chunk0 == "("
          address2 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address2 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "'('"
          end
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            address4 = _read_expression
            unless address4 == FAILURE
              elements0 << address4
              address5 = FAILURE
              chunk1 = nil
              if @offset < @input_size
                chunk1 = @input[@offset...@offset + 1]
              end
              if chunk1 == ")"
                address5 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address5 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "')'"
                end
              end
              unless address5 == FAILURE
                elements0 << address5
                address6 = FAILURE
                address6 = _read_SPACE
                unless address6 == FAILURE
                  elements0 << address6
                  address7 = FAILURE
                  address7 = _read_statement
                  unless address7 == FAILURE
                    elements0 << address7
                    address8 = FAILURE
                    address8 = _read_ELSE
                    unless address8 == FAILURE
                      elements0 << address8
                      address9 = FAILURE
                      address9 = _read_statement
                      unless address9 == FAILURE
                        elements0 << address9
                      else
                        elements0 = nil
                        @offset = index2
                      end
                    else
                      elements0 = nil
                      @offset = index2
                    end
                  else
                    elements0 = nil
                    @offset = index2
                  end
                else
                  elements0 = nil
                  @offset = index2
                end
              else
                elements0 = nil
                @offset = index2
              end
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode193.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index3, elements1 = @offset, []
        address10 = FAILURE
        address10 = _read_IF
        unless address10 == FAILURE
          elements1 << address10
          address11 = FAILURE
          chunk2 = nil
          if @offset < @input_size
            chunk2 = @input[@offset...@offset + 1]
          end
          if chunk2 == "("
            address11 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address11 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "'('"
            end
          end
          unless address11 == FAILURE
            elements1 << address11
            address12 = FAILURE
            address12 = _read_SPACE
            unless address12 == FAILURE
              elements1 << address12
              address13 = FAILURE
              address13 = _read_expression
              unless address13 == FAILURE
                elements1 << address13
                address14 = FAILURE
                chunk3 = nil
                if @offset < @input_size
                  chunk3 = @input[@offset...@offset + 1]
                end
                if chunk3 == ")"
                  address14 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address14 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "')'"
                  end
                end
                unless address14 == FAILURE
                  elements1 << address14
                  address15 = FAILURE
                  address15 = _read_SPACE
                  unless address15 == FAILURE
                    elements1 << address15
                    address16 = FAILURE
                    address16 = _read_statement
                    unless address16 == FAILURE
                      elements1 << address16
                    else
                      elements1 = nil
                      @offset = index3
                    end
                  else
                    elements1 = nil
                    @offset = index3
                  end
                else
                  elements1 = nil
                  @offset = index3
                end
              else
                elements1 = nil
                @offset = index3
              end
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
        else
          elements1 = nil
          @offset = index3
        end
        if elements1.nil?
          address0 = FAILURE
        else
          address0 = TreeNode194.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
          index4, elements2 = @offset, []
          address17 = FAILURE
          address17 = _read_SWITCH
          unless address17 == FAILURE
            elements2 << address17
            address18 = FAILURE
            chunk4 = nil
            if @offset < @input_size
              chunk4 = @input[@offset...@offset + 1]
            end
            if chunk4 == "("
              address18 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address18 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "'('"
              end
            end
            unless address18 == FAILURE
              elements2 << address18
              address19 = FAILURE
              address19 = _read_SPACE
              unless address19 == FAILURE
                elements2 << address19
                address20 = FAILURE
                address20 = _read_expression
                unless address20 == FAILURE
                  elements2 << address20
                  address21 = FAILURE
                  chunk5 = nil
                  if @offset < @input_size
                    chunk5 = @input[@offset...@offset + 1]
                  end
                  if chunk5 == ")"
                    address21 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address21 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "')'"
                    end
                  end
                  unless address21 == FAILURE
                    elements2 << address21
                    address22 = FAILURE
                    address22 = _read_SPACE
                    unless address22 == FAILURE
                      elements2 << address22
                      address23 = FAILURE
                      address23 = _read_statement
                      unless address23 == FAILURE
                        elements2 << address23
                      else
                        elements2 = nil
                        @offset = index4
                      end
                    else
                      elements2 = nil
                      @offset = index4
                    end
                  else
                    elements2 = nil
                    @offset = index4
                  end
                else
                  elements2 = nil
                  @offset = index4
                end
              else
                elements2 = nil
                @offset = index4
              end
            else
              elements2 = nil
              @offset = index4
            end
          else
            elements2 = nil
            @offset = index4
          end
          if elements2.nil?
            address0 = FAILURE
          else
            address0 = TreeNode195.new(@input[index4...@offset], index4, elements2)
            @offset = @offset
          end
          if address0 == FAILURE
            @offset = index1
          end
        end
      end
      @cache[:selection_statement][index0] = [address0, @offset]
      return address0
    end

    def _read_iteration_statement
      address0, index0 = FAILURE, @offset
      cached = @cache[:iteration_statement][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_WHILE
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        chunk0 = nil
        if @offset < @input_size
          chunk0 = @input[@offset...@offset + 1]
        end
        if chunk0 == "("
          address2 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address2 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "'('"
          end
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            address4 = _read_expression
            unless address4 == FAILURE
              elements0 << address4
              address5 = FAILURE
              chunk1 = nil
              if @offset < @input_size
                chunk1 = @input[@offset...@offset + 1]
              end
              if chunk1 == ")"
                address5 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address5 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "')'"
                end
              end
              unless address5 == FAILURE
                elements0 << address5
                address6 = FAILURE
                address6 = _read_SPACE
                unless address6 == FAILURE
                  elements0 << address6
                  address7 = FAILURE
                  address7 = _read_statement
                  unless address7 == FAILURE
                    elements0 << address7
                  else
                    elements0 = nil
                    @offset = index2
                  end
                else
                  elements0 = nil
                  @offset = index2
                end
              else
                elements0 = nil
                @offset = index2
              end
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode196.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index3, elements1 = @offset, []
        address8 = FAILURE
        address8 = _read_DO
        unless address8 == FAILURE
          elements1 << address8
          address9 = FAILURE
          address9 = _read_statement
          unless address9 == FAILURE
            elements1 << address9
            address10 = FAILURE
            address10 = _read_WHILE
            unless address10 == FAILURE
              elements1 << address10
              address11 = FAILURE
              chunk2 = nil
              if @offset < @input_size
                chunk2 = @input[@offset...@offset + 1]
              end
              if chunk2 == "("
                address11 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address11 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "'('"
                end
              end
              unless address11 == FAILURE
                elements1 << address11
                address12 = FAILURE
                address12 = _read_SPACE
                unless address12 == FAILURE
                  elements1 << address12
                  address13 = FAILURE
                  address13 = _read_expression
                  unless address13 == FAILURE
                    elements1 << address13
                    address14 = FAILURE
                    chunk3 = nil
                    if @offset < @input_size
                      chunk3 = @input[@offset...@offset + 1]
                    end
                    if chunk3 == ")"
                      address14 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address14 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "')'"
                      end
                    end
                    unless address14 == FAILURE
                      elements1 << address14
                      address15 = FAILURE
                      address15 = _read_SPACE
                      unless address15 == FAILURE
                        elements1 << address15
                        address16 = FAILURE
                        chunk4 = nil
                        if @offset < @input_size
                          chunk4 = @input[@offset...@offset + 1]
                        end
                        if chunk4 == ";"
                          address16 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address16 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "';'"
                          end
                        end
                        unless address16 == FAILURE
                          elements1 << address16
                          address17 = FAILURE
                          address17 = _read_SPACE
                          unless address17 == FAILURE
                            elements1 << address17
                          else
                            elements1 = nil
                            @offset = index3
                          end
                        else
                          elements1 = nil
                          @offset = index3
                        end
                      else
                        elements1 = nil
                        @offset = index3
                      end
                    else
                      elements1 = nil
                      @offset = index3
                    end
                  else
                    elements1 = nil
                    @offset = index3
                  end
                else
                  elements1 = nil
                  @offset = index3
                end
              else
                elements1 = nil
                @offset = index3
              end
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
        else
          elements1 = nil
          @offset = index3
        end
        if elements1.nil?
          address0 = FAILURE
        else
          address0 = TreeNode197.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
          index4, elements2 = @offset, []
          address18 = FAILURE
          address18 = _read_FOR
          unless address18 == FAILURE
            elements2 << address18
            address19 = FAILURE
            chunk5 = nil
            if @offset < @input_size
              chunk5 = @input[@offset...@offset + 1]
            end
            if chunk5 == "("
              address19 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address19 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "'('"
              end
            end
            unless address19 == FAILURE
              elements2 << address19
              address20 = FAILURE
              address20 = _read_SPACE
              unless address20 == FAILURE
                elements2 << address20
                address21 = FAILURE
                address21 = _read_expression_statement
                unless address21 == FAILURE
                  elements2 << address21
                  address22 = FAILURE
                  address22 = _read_expression_statement
                  unless address22 == FAILURE
                    elements2 << address22
                    address23 = FAILURE
                    chunk6 = nil
                    if @offset < @input_size
                      chunk6 = @input[@offset...@offset + 1]
                    end
                    if chunk6 == ")"
                      address23 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address23 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "')'"
                      end
                    end
                    unless address23 == FAILURE
                      elements2 << address23
                      address24 = FAILURE
                      address24 = _read_SPACE
                      unless address24 == FAILURE
                        elements2 << address24
                        address25 = FAILURE
                        address25 = _read_statement
                        unless address25 == FAILURE
                          elements2 << address25
                        else
                          elements2 = nil
                          @offset = index4
                        end
                      else
                        elements2 = nil
                        @offset = index4
                      end
                    else
                      elements2 = nil
                      @offset = index4
                    end
                  else
                    elements2 = nil
                    @offset = index4
                  end
                else
                  elements2 = nil
                  @offset = index4
                end
              else
                elements2 = nil
                @offset = index4
              end
            else
              elements2 = nil
              @offset = index4
            end
          else
            elements2 = nil
            @offset = index4
          end
          if elements2.nil?
            address0 = FAILURE
          else
            address0 = TreeNode198.new(@input[index4...@offset], index4, elements2)
            @offset = @offset
          end
          if address0 == FAILURE
            @offset = index1
            index5, elements3 = @offset, []
            address26 = FAILURE
            address26 = _read_FOR
            unless address26 == FAILURE
              elements3 << address26
              address27 = FAILURE
              chunk7 = nil
              if @offset < @input_size
                chunk7 = @input[@offset...@offset + 1]
              end
              if chunk7 == "("
                address27 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address27 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "'('"
                end
              end
              unless address27 == FAILURE
                elements3 << address27
                address28 = FAILURE
                address28 = _read_SPACE
                unless address28 == FAILURE
                  elements3 << address28
                  address29 = FAILURE
                  address29 = _read_expression_statement
                  unless address29 == FAILURE
                    elements3 << address29
                    address30 = FAILURE
                    address30 = _read_expression_statement
                    unless address30 == FAILURE
                      elements3 << address30
                      address31 = FAILURE
                      address31 = _read_expression
                      unless address31 == FAILURE
                        elements3 << address31
                        address32 = FAILURE
                        chunk8 = nil
                        if @offset < @input_size
                          chunk8 = @input[@offset...@offset + 1]
                        end
                        if chunk8 == ")"
                          address32 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address32 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "')'"
                          end
                        end
                        unless address32 == FAILURE
                          elements3 << address32
                          address33 = FAILURE
                          address33 = _read_SPACE
                          unless address33 == FAILURE
                            elements3 << address33
                            address34 = FAILURE
                            address34 = _read_statement
                            unless address34 == FAILURE
                              elements3 << address34
                            else
                              elements3 = nil
                              @offset = index5
                            end
                          else
                            elements3 = nil
                            @offset = index5
                          end
                        else
                          elements3 = nil
                          @offset = index5
                        end
                      else
                        elements3 = nil
                        @offset = index5
                      end
                    else
                      elements3 = nil
                      @offset = index5
                    end
                  else
                    elements3 = nil
                    @offset = index5
                  end
                else
                  elements3 = nil
                  @offset = index5
                end
              else
                elements3 = nil
                @offset = index5
              end
            else
              elements3 = nil
              @offset = index5
            end
            if elements3.nil?
              address0 = FAILURE
            else
              address0 = TreeNode199.new(@input[index5...@offset], index5, elements3)
              @offset = @offset
            end
            if address0 == FAILURE
              @offset = index1
              index6, elements4 = @offset, []
              address35 = FAILURE
              address35 = _read_FOR
              unless address35 == FAILURE
                elements4 << address35
                address36 = FAILURE
                chunk9 = nil
                if @offset < @input_size
                  chunk9 = @input[@offset...@offset + 1]
                end
                if chunk9 == "("
                  address36 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address36 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "'('"
                  end
                end
                unless address36 == FAILURE
                  elements4 << address36
                  address37 = FAILURE
                  address37 = _read_SPACE
                  unless address37 == FAILURE
                    elements4 << address37
                    address38 = FAILURE
                    address38 = _read_declaration
                    unless address38 == FAILURE
                      elements4 << address38
                      address39 = FAILURE
                      address39 = _read_expression_statement
                      unless address39 == FAILURE
                        elements4 << address39
                        address40 = FAILURE
                        chunk10 = nil
                        if @offset < @input_size
                          chunk10 = @input[@offset...@offset + 1]
                        end
                        if chunk10 == ")"
                          address40 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address40 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "')'"
                          end
                        end
                        unless address40 == FAILURE
                          elements4 << address40
                          address41 = FAILURE
                          address41 = _read_SPACE
                          unless address41 == FAILURE
                            elements4 << address41
                            address42 = FAILURE
                            address42 = _read_statement
                            unless address42 == FAILURE
                              elements4 << address42
                            else
                              elements4 = nil
                              @offset = index6
                            end
                          else
                            elements4 = nil
                            @offset = index6
                          end
                        else
                          elements4 = nil
                          @offset = index6
                        end
                      else
                        elements4 = nil
                        @offset = index6
                      end
                    else
                      elements4 = nil
                      @offset = index6
                    end
                  else
                    elements4 = nil
                    @offset = index6
                  end
                else
                  elements4 = nil
                  @offset = index6
                end
              else
                elements4 = nil
                @offset = index6
              end
              if elements4.nil?
                address0 = FAILURE
              else
                address0 = TreeNode200.new(@input[index6...@offset], index6, elements4)
                @offset = @offset
              end
              if address0 == FAILURE
                @offset = index1
                index7, elements5 = @offset, []
                address43 = FAILURE
                address43 = _read_FOR
                unless address43 == FAILURE
                  elements5 << address43
                  address44 = FAILURE
                  chunk11 = nil
                  if @offset < @input_size
                    chunk11 = @input[@offset...@offset + 1]
                  end
                  if chunk11 == "("
                    address44 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address44 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "'('"
                    end
                  end
                  unless address44 == FAILURE
                    elements5 << address44
                    address45 = FAILURE
                    address45 = _read_SPACE
                    unless address45 == FAILURE
                      elements5 << address45
                      address46 = FAILURE
                      address46 = _read_declaration
                      unless address46 == FAILURE
                        elements5 << address46
                        address47 = FAILURE
                        address47 = _read_expression_statement
                        unless address47 == FAILURE
                          elements5 << address47
                          address48 = FAILURE
                          address48 = _read_expression
                          unless address48 == FAILURE
                            elements5 << address48
                            address49 = FAILURE
                            chunk12 = nil
                            if @offset < @input_size
                              chunk12 = @input[@offset...@offset + 1]
                            end
                            if chunk12 == ")"
                              address49 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address49 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "')'"
                              end
                            end
                            unless address49 == FAILURE
                              elements5 << address49
                              address50 = FAILURE
                              address50 = _read_SPACE
                              unless address50 == FAILURE
                                elements5 << address50
                                address51 = FAILURE
                                address51 = _read_statement
                                unless address51 == FAILURE
                                  elements5 << address51
                                else
                                  elements5 = nil
                                  @offset = index7
                                end
                              else
                                elements5 = nil
                                @offset = index7
                              end
                            else
                              elements5 = nil
                              @offset = index7
                            end
                          else
                            elements5 = nil
                            @offset = index7
                          end
                        else
                          elements5 = nil
                          @offset = index7
                        end
                      else
                        elements5 = nil
                        @offset = index7
                      end
                    else
                      elements5 = nil
                      @offset = index7
                    end
                  else
                    elements5 = nil
                    @offset = index7
                  end
                else
                  elements5 = nil
                  @offset = index7
                end
                if elements5.nil?
                  address0 = FAILURE
                else
                  address0 = TreeNode201.new(@input[index7...@offset], index7, elements5)
                  @offset = @offset
                end
                if address0 == FAILURE
                  @offset = index1
                end
              end
            end
          end
        end
      end
      @cache[:iteration_statement][index0] = [address0, @offset]
      return address0
    end

    def _read_jump_statement
      address0, index0 = FAILURE, @offset
      cached = @cache[:jump_statement][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_GOTO
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_IDENTIFIER
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          chunk0 = nil
          if @offset < @input_size
            chunk0 = @input[@offset...@offset + 1]
          end
          if chunk0 == ";"
            address3 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address3 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "';'"
            end
          end
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            address4 = _read_SPACE
            unless address4 == FAILURE
              elements0 << address4
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode202.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index3, elements1 = @offset, []
        address5 = FAILURE
        address5 = _read_CONTINUE
        unless address5 == FAILURE
          elements1 << address5
          address6 = FAILURE
          chunk1 = nil
          if @offset < @input_size
            chunk1 = @input[@offset...@offset + 1]
          end
          if chunk1 == ";"
            address6 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address6 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "';'"
            end
          end
          unless address6 == FAILURE
            elements1 << address6
            address7 = FAILURE
            address7 = _read_SPACE
            unless address7 == FAILURE
              elements1 << address7
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
        else
          elements1 = nil
          @offset = index3
        end
        if elements1.nil?
          address0 = FAILURE
        else
          address0 = TreeNode203.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
          index4, elements2 = @offset, []
          address8 = FAILURE
          address8 = _read_BREAK
          unless address8 == FAILURE
            elements2 << address8
            address9 = FAILURE
            chunk2 = nil
            if @offset < @input_size
              chunk2 = @input[@offset...@offset + 1]
            end
            if chunk2 == ";"
              address9 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address9 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "';'"
              end
            end
            unless address9 == FAILURE
              elements2 << address9
              address10 = FAILURE
              address10 = _read_SPACE
              unless address10 == FAILURE
                elements2 << address10
              else
                elements2 = nil
                @offset = index4
              end
            else
              elements2 = nil
              @offset = index4
            end
          else
            elements2 = nil
            @offset = index4
          end
          if elements2.nil?
            address0 = FAILURE
          else
            address0 = TreeNode204.new(@input[index4...@offset], index4, elements2)
            @offset = @offset
          end
          if address0 == FAILURE
            @offset = index1
            index5, elements3 = @offset, []
            address11 = FAILURE
            address11 = _read_RETURN
            unless address11 == FAILURE
              elements3 << address11
              address12 = FAILURE
              chunk3 = nil
              if @offset < @input_size
                chunk3 = @input[@offset...@offset + 1]
              end
              if chunk3 == ";"
                address12 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address12 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "';'"
                end
              end
              unless address12 == FAILURE
                elements3 << address12
                address13 = FAILURE
                address13 = _read_SPACE
                unless address13 == FAILURE
                  elements3 << address13
                else
                  elements3 = nil
                  @offset = index5
                end
              else
                elements3 = nil
                @offset = index5
              end
            else
              elements3 = nil
              @offset = index5
            end
            if elements3.nil?
              address0 = FAILURE
            else
              address0 = TreeNode205.new(@input[index5...@offset], index5, elements3)
              @offset = @offset
            end
            if address0 == FAILURE
              @offset = index1
              index6, elements4 = @offset, []
              address14 = FAILURE
              address14 = _read_RETURN
              unless address14 == FAILURE
                elements4 << address14
                address15 = FAILURE
                address15 = _read_expression
                unless address15 == FAILURE
                  elements4 << address15
                  address16 = FAILURE
                  chunk4 = nil
                  if @offset < @input_size
                    chunk4 = @input[@offset...@offset + 1]
                  end
                  if chunk4 == ";"
                    address16 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address16 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "';'"
                    end
                  end
                  unless address16 == FAILURE
                    elements4 << address16
                    address17 = FAILURE
                    address17 = _read_SPACE
                    unless address17 == FAILURE
                      elements4 << address17
                    else
                      elements4 = nil
                      @offset = index6
                    end
                  else
                    elements4 = nil
                    @offset = index6
                  end
                else
                  elements4 = nil
                  @offset = index6
                end
              else
                elements4 = nil
                @offset = index6
              end
              if elements4.nil?
                address0 = FAILURE
              else
                address0 = TreeNode206.new(@input[index6...@offset], index6, elements4)
                @offset = @offset
              end
              if address0 == FAILURE
                @offset = index1
              end
            end
          end
        end
      end
      @cache[:jump_statement][index0] = [address0, @offset]
      return address0
    end

    def _read_translation_unit
      address0, index0 = FAILURE, @offset
      cached = @cache[:translation_unit][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_external_declaration
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          address3 = _read_external_declaration
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode207.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:translation_unit][index0] = [address0, @offset]
      return address0
    end

    def _read_external_declaration
      address0, index0 = FAILURE, @offset
      cached = @cache[:external_declaration][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      address0 = _read_function_definition
      if address0 == FAILURE
        @offset = index1
        address0 = _read_declaration
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:external_declaration][index0] = [address0, @offset]
      return address0
    end

    def _read_function_definition
      address0, index0 = FAILURE, @offset
      cached = @cache[:function_definition][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_declaration_specifiers
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_declarator
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_declaration_list
          unless address3 == FAILURE
            elements0 << address3
            address4 = FAILURE
            address4 = _read_compound_statement
            unless address4 == FAILURE
              elements0 << address4
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode208.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index3, elements1 = @offset, []
        address5 = FAILURE
        address5 = _read_declaration_specifiers
        unless address5 == FAILURE
          elements1 << address5
          address6 = FAILURE
          address6 = _read_declarator
          unless address6 == FAILURE
            elements1 << address6
            address7 = FAILURE
            address7 = _read_compound_statement
            unless address7 == FAILURE
              elements1 << address7
            else
              elements1 = nil
              @offset = index3
            end
          else
            elements1 = nil
            @offset = index3
          end
        else
          elements1 = nil
          @offset = index3
        end
        if elements1.nil?
          address0 = FAILURE
        else
          address0 = TreeNode209.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
        end
      end
      @cache[:function_definition][index0] = [address0, @offset]
      return address0
    end

    def _read_declaration_list
      address0, index0 = FAILURE, @offset
      cached = @cache[:declaration_list][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      address1 = _read_declaration
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          address3 = _read_declaration
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode210.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:declaration_list][index0] = [address0, @offset]
      return address0
    end

    def _read_AUTO
      address0, index0 = FAILURE, @offset
      cached = @cache[:AUTO][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 4]
      end
      if chunk0 == "auto"
        address1 = TreeNode.new(@input[@offset...@offset + 4], @offset)
        @offset = @offset + 4
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"auto\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode211.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:AUTO][index0] = [address0, @offset]
      return address0
    end

    def _read_BOOL
      address0, index0 = FAILURE, @offset
      cached = @cache[:BOOL][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 5]
      end
      if chunk0 == "_Bool"
        address1 = TreeNode.new(@input[@offset...@offset + 5], @offset)
        @offset = @offset + 5
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"_Bool\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode212.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:BOOL][index0] = [address0, @offset]
      return address0
    end

    def _read_BREAK
      address0, index0 = FAILURE, @offset
      cached = @cache[:BREAK][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 5]
      end
      if chunk0 == "break"
        address1 = TreeNode.new(@input[@offset...@offset + 5], @offset)
        @offset = @offset + 5
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"break\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode213.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:BREAK][index0] = [address0, @offset]
      return address0
    end

    def _read_CASE
      address0, index0 = FAILURE, @offset
      cached = @cache[:CASE][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 4]
      end
      if chunk0 == "case"
        address1 = TreeNode.new(@input[@offset...@offset + 4], @offset)
        @offset = @offset + 4
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"case\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode214.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:CASE][index0] = [address0, @offset]
      return address0
    end

    def _read_CHAR
      address0, index0 = FAILURE, @offset
      cached = @cache[:CHAR][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 4]
      end
      if chunk0 == "char"
        address1 = TreeNode.new(@input[@offset...@offset + 4], @offset)
        @offset = @offset + 4
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"char\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode215.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:CHAR][index0] = [address0, @offset]
      return address0
    end

    def _read_COMPLEX
      address0, index0 = FAILURE, @offset
      cached = @cache[:COMPLEX][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 8]
      end
      if chunk0 == "_Complex"
        address1 = TreeNode.new(@input[@offset...@offset + 8], @offset)
        @offset = @offset + 8
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"_Complex\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode216.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:COMPLEX][index0] = [address0, @offset]
      return address0
    end

    def _read_CONST
      address0, index0 = FAILURE, @offset
      cached = @cache[:CONST][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 5]
      end
      if chunk0 == "const"
        address1 = TreeNode.new(@input[@offset...@offset + 5], @offset)
        @offset = @offset + 5
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"const\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode217.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:CONST][index0] = [address0, @offset]
      return address0
    end

    def _read_CONTINUE
      address0, index0 = FAILURE, @offset
      cached = @cache[:CONTINUE][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 8]
      end
      if chunk0 == "continue"
        address1 = TreeNode.new(@input[@offset...@offset + 8], @offset)
        @offset = @offset + 8
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"continue\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode218.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:CONTINUE][index0] = [address0, @offset]
      return address0
    end

    def _read_DEFAULT
      address0, index0 = FAILURE, @offset
      cached = @cache[:DEFAULT][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 7]
      end
      if chunk0 == "default"
        address1 = TreeNode.new(@input[@offset...@offset + 7], @offset)
        @offset = @offset + 7
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"default\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode219.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:DEFAULT][index0] = [address0, @offset]
      return address0
    end

    def _read_DO
      address0, index0 = FAILURE, @offset
      cached = @cache[:DO][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "do"
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"do\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode220.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:DO][index0] = [address0, @offset]
      return address0
    end

    def _read_DOUBLE
      address0, index0 = FAILURE, @offset
      cached = @cache[:DOUBLE][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 6]
      end
      if chunk0 == "double"
        address1 = TreeNode.new(@input[@offset...@offset + 6], @offset)
        @offset = @offset + 6
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"double\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode221.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:DOUBLE][index0] = [address0, @offset]
      return address0
    end

    def _read_ELSE
      address0, index0 = FAILURE, @offset
      cached = @cache[:ELSE][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 4]
      end
      if chunk0 == "else"
        address1 = TreeNode.new(@input[@offset...@offset + 4], @offset)
        @offset = @offset + 4
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"else\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode222.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:ELSE][index0] = [address0, @offset]
      return address0
    end

    def _read_ENUM
      address0, index0 = FAILURE, @offset
      cached = @cache[:ENUM][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 4]
      end
      if chunk0 == "enum"
        address1 = TreeNode.new(@input[@offset...@offset + 4], @offset)
        @offset = @offset + 4
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"enum\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode223.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:ENUM][index0] = [address0, @offset]
      return address0
    end

    def _read_EXTERN
      address0, index0 = FAILURE, @offset
      cached = @cache[:EXTERN][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 6]
      end
      if chunk0 == "extern"
        address1 = TreeNode.new(@input[@offset...@offset + 6], @offset)
        @offset = @offset + 6
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"extern\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode224.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:EXTERN][index0] = [address0, @offset]
      return address0
    end

    def _read_FLOAT
      address0, index0 = FAILURE, @offset
      cached = @cache[:FLOAT][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 5]
      end
      if chunk0 == "float"
        address1 = TreeNode.new(@input[@offset...@offset + 5], @offset)
        @offset = @offset + 5
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"float\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode225.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:FLOAT][index0] = [address0, @offset]
      return address0
    end

    def _read_FOR
      address0, index0 = FAILURE, @offset
      cached = @cache[:FOR][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 3]
      end
      if chunk0 == "for"
        address1 = TreeNode.new(@input[@offset...@offset + 3], @offset)
        @offset = @offset + 3
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"for\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode226.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:FOR][index0] = [address0, @offset]
      return address0
    end

    def _read_GOTO
      address0, index0 = FAILURE, @offset
      cached = @cache[:GOTO][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 4]
      end
      if chunk0 == "goto"
        address1 = TreeNode.new(@input[@offset...@offset + 4], @offset)
        @offset = @offset + 4
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"goto\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode227.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:GOTO][index0] = [address0, @offset]
      return address0
    end

    def _read_IF
      address0, index0 = FAILURE, @offset
      cached = @cache[:IF][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "if"
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"if\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode228.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:IF][index0] = [address0, @offset]
      return address0
    end

    def _read_IMAGINARY
      address0, index0 = FAILURE, @offset
      cached = @cache[:IMAGINARY][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 10]
      end
      if chunk0 == "_Imaginary"
        address1 = TreeNode.new(@input[@offset...@offset + 10], @offset)
        @offset = @offset + 10
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"_Imaginary\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode229.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:IMAGINARY][index0] = [address0, @offset]
      return address0
    end

    def _read_INLINE
      address0, index0 = FAILURE, @offset
      cached = @cache[:INLINE][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 6]
      end
      if chunk0 == "inline"
        address1 = TreeNode.new(@input[@offset...@offset + 6], @offset)
        @offset = @offset + 6
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"inline\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode230.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:INLINE][index0] = [address0, @offset]
      return address0
    end

    def _read_INT
      address0, index0 = FAILURE, @offset
      cached = @cache[:INT][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 3]
      end
      if chunk0 == "int"
        address1 = TreeNode.new(@input[@offset...@offset + 3], @offset)
        @offset = @offset + 3
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"int\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode231.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:INT][index0] = [address0, @offset]
      return address0
    end

    def _read_LONG
      address0, index0 = FAILURE, @offset
      cached = @cache[:LONG][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 4]
      end
      if chunk0 == "long"
        address1 = TreeNode.new(@input[@offset...@offset + 4], @offset)
        @offset = @offset + 4
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"long\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode232.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:LONG][index0] = [address0, @offset]
      return address0
    end

    def _read_REGISTER
      address0, index0 = FAILURE, @offset
      cached = @cache[:REGISTER][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 8]
      end
      if chunk0 == "register"
        address1 = TreeNode.new(@input[@offset...@offset + 8], @offset)
        @offset = @offset + 8
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"register\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode233.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:REGISTER][index0] = [address0, @offset]
      return address0
    end

    def _read_RESTRICT
      address0, index0 = FAILURE, @offset
      cached = @cache[:RESTRICT][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 8]
      end
      if chunk0 == "restrict"
        address1 = TreeNode.new(@input[@offset...@offset + 8], @offset)
        @offset = @offset + 8
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"restrict\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode234.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:RESTRICT][index0] = [address0, @offset]
      return address0
    end

    def _read_RETURN
      address0, index0 = FAILURE, @offset
      cached = @cache[:RETURN][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 6]
      end
      if chunk0 == "return"
        address1 = TreeNode.new(@input[@offset...@offset + 6], @offset)
        @offset = @offset + 6
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"return\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode235.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:RETURN][index0] = [address0, @offset]
      return address0
    end

    def _read_SHORT
      address0, index0 = FAILURE, @offset
      cached = @cache[:SHORT][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 5]
      end
      if chunk0 == "short"
        address1 = TreeNode.new(@input[@offset...@offset + 5], @offset)
        @offset = @offset + 5
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"short\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode236.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:SHORT][index0] = [address0, @offset]
      return address0
    end

    def _read_SIGNED
      address0, index0 = FAILURE, @offset
      cached = @cache[:SIGNED][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 6]
      end
      if chunk0 == "signed"
        address1 = TreeNode.new(@input[@offset...@offset + 6], @offset)
        @offset = @offset + 6
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"signed\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode237.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:SIGNED][index0] = [address0, @offset]
      return address0
    end

    def _read_SIZEOF
      address0, index0 = FAILURE, @offset
      cached = @cache[:SIZEOF][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 6]
      end
      if chunk0 == "sizeof"
        address1 = TreeNode.new(@input[@offset...@offset + 6], @offset)
        @offset = @offset + 6
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"sizeof\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode238.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:SIZEOF][index0] = [address0, @offset]
      return address0
    end

    def _read_STATIC
      address0, index0 = FAILURE, @offset
      cached = @cache[:STATIC][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 6]
      end
      if chunk0 == "static"
        address1 = TreeNode.new(@input[@offset...@offset + 6], @offset)
        @offset = @offset + 6
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"static\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode239.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:STATIC][index0] = [address0, @offset]
      return address0
    end

    def _read_STRUCT
      address0, index0 = FAILURE, @offset
      cached = @cache[:STRUCT][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 6]
      end
      if chunk0 == "struct"
        address1 = TreeNode.new(@input[@offset...@offset + 6], @offset)
        @offset = @offset + 6
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"struct\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode240.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:STRUCT][index0] = [address0, @offset]
      return address0
    end

    def _read_SWITCH
      address0, index0 = FAILURE, @offset
      cached = @cache[:SWITCH][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 6]
      end
      if chunk0 == "switch"
        address1 = TreeNode.new(@input[@offset...@offset + 6], @offset)
        @offset = @offset + 6
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"switch\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode241.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:SWITCH][index0] = [address0, @offset]
      return address0
    end

    def _read_TYPEDEF
      address0, index0 = FAILURE, @offset
      cached = @cache[:TYPEDEF][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 7]
      end
      if chunk0 == "typedef"
        address1 = TreeNode.new(@input[@offset...@offset + 7], @offset)
        @offset = @offset + 7
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"typedef\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode242.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:TYPEDEF][index0] = [address0, @offset]
      return address0
    end

    def _read_UNION
      address0, index0 = FAILURE, @offset
      cached = @cache[:UNION][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 5]
      end
      if chunk0 == "union"
        address1 = TreeNode.new(@input[@offset...@offset + 5], @offset)
        @offset = @offset + 5
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"union\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode243.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:UNION][index0] = [address0, @offset]
      return address0
    end

    def _read_UNSIGNED
      address0, index0 = FAILURE, @offset
      cached = @cache[:UNSIGNED][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 8]
      end
      if chunk0 == "unsigned"
        address1 = TreeNode.new(@input[@offset...@offset + 8], @offset)
        @offset = @offset + 8
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"unsigned\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode244.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:UNSIGNED][index0] = [address0, @offset]
      return address0
    end

    def _read_VOID
      address0, index0 = FAILURE, @offset
      cached = @cache[:VOID][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 4]
      end
      if chunk0 == "void"
        address1 = TreeNode.new(@input[@offset...@offset + 4], @offset)
        @offset = @offset + 4
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"void\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode245.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:VOID][index0] = [address0, @offset]
      return address0
    end

    def _read_VOLATILE
      address0, index0 = FAILURE, @offset
      cached = @cache[:VOLATILE][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 8]
      end
      if chunk0 == "volatile"
        address1 = TreeNode.new(@input[@offset...@offset + 8], @offset)
        @offset = @offset + 8
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"volatile\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode246.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:VOLATILE][index0] = [address0, @offset]
      return address0
    end

    def _read_WHILE
      address0, index0 = FAILURE, @offset
      cached = @cache[:WHILE][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 5]
      end
      if chunk0 == "while"
        address1 = TreeNode.new(@input[@offset...@offset + 5], @offset)
        @offset = @offset + 5
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"while\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        index2 = @offset
        address2 = _read_WORD
        @offset = index2
        if address2 == FAILURE
          address2 = TreeNode.new(@input[@offset...@offset], @offset)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          address3 = _read_SPACE
          unless address3 == FAILURE
            elements0 << address3
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode247.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:WHILE][index0] = [address0, @offset]
      return address0
    end

    def _read_IDENTIFIER
      address0, index0 = FAILURE, @offset
      cached = @cache[:IDENTIFIER][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      index2 = @offset
      index3 = @offset
      address1 = _read_AUTO
      if address1 == FAILURE
        @offset = index3
        address1 = _read_BOOL
        if address1 == FAILURE
          @offset = index3
          address1 = _read_BREAK
          if address1 == FAILURE
            @offset = index3
            address1 = _read_CASE
            if address1 == FAILURE
              @offset = index3
              address1 = _read_CHAR
              if address1 == FAILURE
                @offset = index3
                address1 = _read_COMPLEX
                if address1 == FAILURE
                  @offset = index3
                  address1 = _read_CONST
                  if address1 == FAILURE
                    @offset = index3
                    address1 = _read_CONTINUE
                    if address1 == FAILURE
                      @offset = index3
                      address1 = _read_DEFAULT
                      if address1 == FAILURE
                        @offset = index3
                        address1 = _read_DO
                        if address1 == FAILURE
                          @offset = index3
                          address1 = _read_DOUBLE
                          if address1 == FAILURE
                            @offset = index3
                            address1 = _read_ELSE
                            if address1 == FAILURE
                              @offset = index3
                              address1 = _read_ENUM
                              if address1 == FAILURE
                                @offset = index3
                                address1 = _read_EXTERN
                                if address1 == FAILURE
                                  @offset = index3
                                  address1 = _read_FLOAT
                                  if address1 == FAILURE
                                    @offset = index3
                                    address1 = _read_FOR
                                    if address1 == FAILURE
                                      @offset = index3
                                      address1 = _read_GOTO
                                      if address1 == FAILURE
                                        @offset = index3
                                        address1 = _read_IF
                                        if address1 == FAILURE
                                          @offset = index3
                                          address1 = _read_IMAGINARY
                                          if address1 == FAILURE
                                            @offset = index3
                                            address1 = _read_INLINE
                                            if address1 == FAILURE
                                              @offset = index3
                                              address1 = _read_INT
                                              if address1 == FAILURE
                                                @offset = index3
                                                address1 = _read_LONG
                                                if address1 == FAILURE
                                                  @offset = index3
                                                  address1 = _read_REGISTER
                                                  if address1 == FAILURE
                                                    @offset = index3
                                                    address1 = _read_RESTRICT
                                                    if address1 == FAILURE
                                                      @offset = index3
                                                      address1 = _read_RETURN
                                                      if address1 == FAILURE
                                                        @offset = index3
                                                        address1 = _read_SHORT
                                                        if address1 == FAILURE
                                                          @offset = index3
                                                          address1 = _read_SIGNED
                                                          if address1 == FAILURE
                                                            @offset = index3
                                                            address1 = _read_SIZEOF
                                                            if address1 == FAILURE
                                                              @offset = index3
                                                              address1 = _read_STATIC
                                                              if address1 == FAILURE
                                                                @offset = index3
                                                                address1 = _read_STRUCT
                                                                if address1 == FAILURE
                                                                  @offset = index3
                                                                  address1 = _read_SWITCH
                                                                  if address1 == FAILURE
                                                                    @offset = index3
                                                                    address1 = _read_TYPEDEF
                                                                    if address1 == FAILURE
                                                                      @offset = index3
                                                                      address1 = _read_UNION
                                                                      if address1 == FAILURE
                                                                        @offset = index3
                                                                        address1 = _read_UNSIGNED
                                                                        if address1 == FAILURE
                                                                          @offset = index3
                                                                          address1 = _read_VOID
                                                                          if address1 == FAILURE
                                                                            @offset = index3
                                                                            address1 = _read_VOLATILE
                                                                            if address1 == FAILURE
                                                                              @offset = index3
                                                                              address1 = _read_WHILE
                                                                              if address1 == FAILURE
                                                                                @offset = index3
                                                                              end
                                                                            end
                                                                          end
                                                                        end
                                                                      end
                                                                    end
                                                                  end
                                                                end
                                                              end
                                                            end
                                                          end
                                                        end
                                                      end
                                                    end
                                                  end
                                                end
                                              end
                                            end
                                          end
                                        end
                                      end
                                    end
                                  end
                                end
                              end
                            end
                          end
                        end
                      end
                    end
                  end
                end
              end
            end
          end
        end
      end
      @offset = index2
      if address1 == FAILURE
        address1 = TreeNode.new(@input[@offset...@offset], @offset)
        @offset = @offset
      else
        address1 = FAILURE
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        chunk0 = nil
        if @offset < @input_size
          chunk0 = @input[@offset...@offset + 1]
        end
        if chunk0 =~ /\A[a-zA-Z_]/
          address2 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address2 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "[a-zA-Z_]"
          end
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          remaining0, index4, elements1, address4 = 0, @offset, [], true
          until address4 == FAILURE
            index5 = @offset
            chunk1 = nil
            if @offset < @input_size
              chunk1 = @input[@offset...@offset + 1]
            end
            if chunk1 =~ /\A[a-zA-Z_]/
              address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address4 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "[a-zA-Z_]"
              end
            end
            if address4 == FAILURE
              @offset = index5
              chunk2 = nil
              if @offset < @input_size
                chunk2 = @input[@offset...@offset + 1]
              end
              if chunk2 =~ /\A[0-9]/
                address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address4 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "[0-9]"
                end
              end
              if address4 == FAILURE
                @offset = index5
              end
            end
            unless address4 == FAILURE
              elements1 << address4
              remaining0 -= 1
            end
          end
          if remaining0 <= 0
            address3 = TreeNode.new(@input[index4...@offset], index4, elements1)
            @offset = @offset
          else
            address3 = FAILURE
          end
          unless address3 == FAILURE
            elements0 << address3
            address5 = FAILURE
            address5 = _read_SPACE
            unless address5 == FAILURE
              elements0 << address5
            else
              elements0 = nil
              @offset = index1
            end
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode248.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:IDENTIFIER][index0] = [address0, @offset]
      return address0
    end

    def _read_TYPE_NAME
      address0, index0 = FAILURE, @offset
      cached = @cache[:TYPE_NAME][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 1]
      end
      if chunk0 =~ /\A[a-zA-Z_]/
        address1 = TreeNode.new(@input[@offset...@offset + 1], @offset)
        @offset = @offset + 1
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "[a-zA-Z_]"
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        remaining0, index2, elements1, address3 = 0, @offset, [], true
        until address3 == FAILURE
          index3 = @offset
          chunk1 = nil
          if @offset < @input_size
            chunk1 = @input[@offset...@offset + 1]
          end
          if chunk1 =~ /\A[a-zA-Z_]/
            address3 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address3 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "[a-zA-Z_]"
            end
          end
          if address3 == FAILURE
            @offset = index3
            chunk2 = nil
            if @offset < @input_size
              chunk2 = @input[@offset...@offset + 1]
            end
            if chunk2 =~ /\A[0-9]/
              address3 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address3 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "[0-9]"
              end
            end
            if address3 == FAILURE
              @offset = index3
            end
          end
          unless address3 == FAILURE
            elements1 << address3
            remaining0 -= 1
          end
        end
        if remaining0 <= 0
          address2 = TreeNode.new(@input[index2...@offset], index2, elements1)
          @offset = @offset
        else
          address2 = FAILURE
        end
        unless address2 == FAILURE
          elements0 << address2
          address4 = FAILURE
          address4 = _read_SPACE
          unless address4 == FAILURE
            elements0 << address4
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = @actions.distinguish_type_name(@input, index1, @offset, elements0)
        @offset = @offset
      end
      @cache[:TYPE_NAME][index0] = [address0, @offset]
      return address0
    end

    def _read_CONSTANT
      address0, index0 = FAILURE, @offset
      cached = @cache[:CONSTANT][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1 = @offset
      index2, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 1]
      end
      if chunk0 == "0"
        address1 = TreeNode.new(@input[@offset...@offset + 1], @offset)
        @offset = @offset + 1
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"0\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        chunk1 = nil
        if @offset < @input_size
          chunk1 = @input[@offset...@offset + 1]
        end
        if chunk1 =~ /\A[xX]/
          address2 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address2 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "[xX]"
          end
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          remaining0, index3, elements1, address4 = 1, @offset, [], true
          until address4 == FAILURE
            chunk2 = nil
            if @offset < @input_size
              chunk2 = @input[@offset...@offset + 1]
            end
            if chunk2 =~ /\A[a-fA-F0-9]/
              address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address4 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "[a-fA-F0-9]"
              end
            end
            unless address4 == FAILURE
              elements1 << address4
              remaining0 -= 1
            end
          end
          if remaining0 <= 0
            address3 = TreeNode.new(@input[index3...@offset], index3, elements1)
            @offset = @offset
          else
            address3 = FAILURE
          end
          unless address3 == FAILURE
            elements0 << address3
            address5 = FAILURE
            index4 = @offset
            index5 = @offset
            index6, elements2 = @offset, []
            address6 = FAILURE
            index7 = @offset
            chunk3 = nil
            if @offset < @input_size
              chunk3 = @input[@offset...@offset + 2]
            end
            if chunk3 == "ll"
              address6 = TreeNode.new(@input[@offset...@offset + 2], @offset)
              @offset = @offset + 2
            else
              address6 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "\"ll\""
              end
            end
            if address6 == FAILURE
              @offset = index7
              chunk4 = nil
              if @offset < @input_size
                chunk4 = @input[@offset...@offset + 2]
              end
              if chunk4 == "LL"
                address6 = TreeNode.new(@input[@offset...@offset + 2], @offset)
                @offset = @offset + 2
              else
                address6 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "\"LL\""
                end
              end
              if address6 == FAILURE
                @offset = index7
                chunk5 = nil
                if @offset < @input_size
                  chunk5 = @input[@offset...@offset + 1]
                end
                if chunk5 == "l"
                  address6 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address6 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "\"l\""
                  end
                end
                if address6 == FAILURE
                  @offset = index7
                  chunk6 = nil
                  if @offset < @input_size
                    chunk6 = @input[@offset...@offset + 1]
                  end
                  if chunk6 == "L"
                    address6 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address6 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "\"L\""
                    end
                  end
                  if address6 == FAILURE
                    @offset = index7
                  end
                end
              end
            end
            unless address6 == FAILURE
              elements2 << address6
              address7 = FAILURE
              index8 = @offset
              chunk7 = nil
              if @offset < @input_size
                chunk7 = @input[@offset...@offset + 1]
              end
              if chunk7 == "u"
                address7 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address7 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "\"u\""
                end
              end
              if address7 == FAILURE
                @offset = index8
                chunk8 = nil
                if @offset < @input_size
                  chunk8 = @input[@offset...@offset + 1]
                end
                if chunk8 == "U"
                  address7 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address7 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "\"U\""
                  end
                end
                if address7 == FAILURE
                  @offset = index8
                end
              end
              unless address7 == FAILURE
                elements2 << address7
              else
                elements2 = nil
                @offset = index6
              end
            else
              elements2 = nil
              @offset = index6
            end
            if elements2.nil?
              address5 = FAILURE
            else
              address5 = TreeNode.new(@input[index6...@offset], index6, elements2)
              @offset = @offset
            end
            if address5 == FAILURE
              @offset = index5
              index9, elements3 = @offset, []
              address8 = FAILURE
              index10 = @offset
              index11 = @offset
              chunk9 = nil
              if @offset < @input_size
                chunk9 = @input[@offset...@offset + 1]
              end
              if chunk9 == "u"
                address8 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address8 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "\"u\""
                end
              end
              if address8 == FAILURE
                @offset = index11
                chunk10 = nil
                if @offset < @input_size
                  chunk10 = @input[@offset...@offset + 1]
                end
                if chunk10 == "U"
                  address8 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address8 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "\"U\""
                  end
                end
                if address8 == FAILURE
                  @offset = index11
                end
              end
              if address8 == FAILURE
                address8 = TreeNode.new(@input[index10...index10], index10)
                @offset = index10
              end
              unless address8 == FAILURE
                elements3 << address8
                address9 = FAILURE
                index12 = @offset
                chunk11 = nil
                if @offset < @input_size
                  chunk11 = @input[@offset...@offset + 2]
                end
                if chunk11 == "ll"
                  address9 = TreeNode.new(@input[@offset...@offset + 2], @offset)
                  @offset = @offset + 2
                else
                  address9 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "\"ll\""
                  end
                end
                if address9 == FAILURE
                  @offset = index12
                  chunk12 = nil
                  if @offset < @input_size
                    chunk12 = @input[@offset...@offset + 2]
                  end
                  if chunk12 == "LL"
                    address9 = TreeNode.new(@input[@offset...@offset + 2], @offset)
                    @offset = @offset + 2
                  else
                    address9 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "\"LL\""
                    end
                  end
                  if address9 == FAILURE
                    @offset = index12
                    chunk13 = nil
                    if @offset < @input_size
                      chunk13 = @input[@offset...@offset + 1]
                    end
                    if chunk13 == "l"
                      address9 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address9 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "\"l\""
                      end
                    end
                    if address9 == FAILURE
                      @offset = index12
                      chunk14 = nil
                      if @offset < @input_size
                        chunk14 = @input[@offset...@offset + 1]
                      end
                      if chunk14 == "L"
                        address9 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address9 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "\"L\""
                        end
                      end
                      if address9 == FAILURE
                        @offset = index12
                      end
                    end
                  end
                end
                unless address9 == FAILURE
                  elements3 << address9
                else
                  elements3 = nil
                  @offset = index9
                end
              else
                elements3 = nil
                @offset = index9
              end
              if elements3.nil?
                address5 = FAILURE
              else
                address5 = TreeNode.new(@input[index9...@offset], index9, elements3)
                @offset = @offset
              end
              if address5 == FAILURE
                @offset = index5
                index13 = @offset
                chunk15 = nil
                if @offset < @input_size
                  chunk15 = @input[@offset...@offset + 1]
                end
                if chunk15 == "u"
                  address5 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address5 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "\"u\""
                  end
                end
                if address5 == FAILURE
                  @offset = index13
                  chunk16 = nil
                  if @offset < @input_size
                    chunk16 = @input[@offset...@offset + 1]
                  end
                  if chunk16 == "U"
                    address5 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address5 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "\"U\""
                    end
                  end
                  if address5 == FAILURE
                    @offset = index13
                  end
                end
                if address5 == FAILURE
                  @offset = index5
                end
              end
            end
            if address5 == FAILURE
              address5 = TreeNode.new(@input[index4...index4], index4)
              @offset = index4
            end
            unless address5 == FAILURE
              elements0 << address5
              address10 = FAILURE
              address10 = _read_SPACE
              unless address10 == FAILURE
                elements0 << address10
              else
                elements0 = nil
                @offset = index2
              end
            else
              elements0 = nil
              @offset = index2
            end
          else
            elements0 = nil
            @offset = index2
          end
        else
          elements0 = nil
          @offset = index2
        end
      else
        elements0 = nil
        @offset = index2
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode250.new(@input[index2...@offset], index2, elements0)
        @offset = @offset
      end
      if address0 == FAILURE
        @offset = index1
        index14, elements4 = @offset, []
        address11 = FAILURE
        index15 = @offset
        chunk17 = nil
        if @offset < @input_size
          chunk17 = @input[@offset...@offset + 1]
        end
        if chunk17 == "L"
          address11 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address11 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "\"L\""
          end
        end
        if address11 == FAILURE
          address11 = TreeNode.new(@input[index15...index15], index15)
          @offset = index15
        end
        unless address11 == FAILURE
          elements4 << address11
          address12 = FAILURE
          chunk18 = nil
          if @offset < @input_size
            chunk18 = @input[@offset...@offset + 1]
          end
          if chunk18 == "'"
            address12 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address12 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "\"'\""
            end
          end
          unless address12 == FAILURE
            elements4 << address12
            address13 = FAILURE
            remaining1, index16, elements5, address14 = 1, @offset, [], true
            until address14 == FAILURE
              index17 = @offset
              index18, elements6 = @offset, []
              address15 = FAILURE
              chunk19 = nil
              if @offset < @input_size
                chunk19 = @input[@offset...@offset + 1]
              end
              if chunk19 == "\\"
                address15 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address15 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "\"\\\\\""
                end
              end
              unless address15 == FAILURE
                elements6 << address15
                address16 = FAILURE
                chunk20 = nil
                if @offset < @input_size
                  chunk20 = @input[@offset...@offset + 1]
                end
                if chunk20 =~ /\A[^\n]/
                  address16 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address16 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "[^\\n]"
                  end
                end
                unless address16 == FAILURE
                  elements6 << address16
                else
                  elements6 = nil
                  @offset = index18
                end
              else
                elements6 = nil
                @offset = index18
              end
              if elements6.nil?
                address14 = FAILURE
              else
                address14 = TreeNode.new(@input[index18...@offset], index18, elements6)
                @offset = @offset
              end
              if address14 == FAILURE
                @offset = index17
                chunk21 = nil
                if @offset < @input_size
                  chunk21 = @input[@offset...@offset + 1]
                end
                if chunk21 =~ /\A[^\\\'\n]/
                  address14 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address14 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "[^\\\\\\'\\n]"
                  end
                end
                if address14 == FAILURE
                  @offset = index17
                end
              end
              unless address14 == FAILURE
                elements5 << address14
                remaining1 -= 1
              end
            end
            if remaining1 <= 0
              address13 = TreeNode.new(@input[index16...@offset], index16, elements5)
              @offset = @offset
            else
              address13 = FAILURE
            end
            unless address13 == FAILURE
              elements4 << address13
              address17 = FAILURE
              chunk22 = nil
              if @offset < @input_size
                chunk22 = @input[@offset...@offset + 1]
              end
              if chunk22 == "'"
                address17 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address17 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "\"'\""
                end
              end
              unless address17 == FAILURE
                elements4 << address17
                address18 = FAILURE
                address18 = _read_SPACE
                unless address18 == FAILURE
                  elements4 << address18
                else
                  elements4 = nil
                  @offset = index14
                end
              else
                elements4 = nil
                @offset = index14
              end
            else
              elements4 = nil
              @offset = index14
            end
          else
            elements4 = nil
            @offset = index14
          end
        else
          elements4 = nil
          @offset = index14
        end
        if elements4.nil?
          address0 = FAILURE
        else
          address0 = TreeNode251.new(@input[index14...@offset], index14, elements4)
          @offset = @offset
        end
        if address0 == FAILURE
          @offset = index1
          index19, elements7 = @offset, []
          address19 = FAILURE
          remaining2, index20, elements8, address20 = 1, @offset, [], true
          until address20 == FAILURE
            chunk23 = nil
            if @offset < @input_size
              chunk23 = @input[@offset...@offset + 1]
            end
            if chunk23 =~ /\A[0-9]/
              address20 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address20 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "[0-9]"
              end
            end
            unless address20 == FAILURE
              elements8 << address20
              remaining2 -= 1
            end
          end
          if remaining2 <= 0
            address19 = TreeNode.new(@input[index20...@offset], index20, elements8)
            @offset = @offset
          else
            address19 = FAILURE
          end
          unless address19 == FAILURE
            elements7 << address19
            address21 = FAILURE
            index21, elements9 = @offset, []
            address22 = FAILURE
            chunk24 = nil
            if @offset < @input_size
              chunk24 = @input[@offset...@offset + 1]
            end
            if chunk24 =~ /\A[Ee]/
              address22 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address22 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "[Ee]"
              end
            end
            unless address22 == FAILURE
              elements9 << address22
              address23 = FAILURE
              index22 = @offset
              chunk25 = nil
              if @offset < @input_size
                chunk25 = @input[@offset...@offset + 1]
              end
              if chunk25 =~ /\A[+\-]/
                address23 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address23 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "[+\\-]"
                end
              end
              if address23 == FAILURE
                address23 = TreeNode.new(@input[index22...index22], index22)
                @offset = index22
              end
              unless address23 == FAILURE
                elements9 << address23
                address24 = FAILURE
                remaining3, index23, elements10, address25 = 1, @offset, [], true
                until address25 == FAILURE
                  chunk26 = nil
                  if @offset < @input_size
                    chunk26 = @input[@offset...@offset + 1]
                  end
                  if chunk26 =~ /\A[0-9]/
                    address25 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address25 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "[0-9]"
                    end
                  end
                  unless address25 == FAILURE
                    elements10 << address25
                    remaining3 -= 1
                  end
                end
                if remaining3 <= 0
                  address24 = TreeNode.new(@input[index23...@offset], index23, elements10)
                  @offset = @offset
                else
                  address24 = FAILURE
                end
                unless address24 == FAILURE
                  elements9 << address24
                else
                  elements9 = nil
                  @offset = index21
                end
              else
                elements9 = nil
                @offset = index21
              end
            else
              elements9 = nil
              @offset = index21
            end
            if elements9.nil?
              address21 = FAILURE
            else
              address21 = TreeNode.new(@input[index21...@offset], index21, elements9)
              @offset = @offset
            end
            unless address21 == FAILURE
              elements7 << address21
              address26 = FAILURE
              index24 = @offset
              index25 = @offset
              chunk27 = nil
              if @offset < @input_size
                chunk27 = @input[@offset...@offset + 1]
              end
              if chunk27 == "f"
                address26 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address26 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "\"f\""
                end
              end
              if address26 == FAILURE
                @offset = index25
                chunk28 = nil
                if @offset < @input_size
                  chunk28 = @input[@offset...@offset + 1]
                end
                if chunk28 == "F"
                  address26 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address26 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "\"F\""
                  end
                end
                if address26 == FAILURE
                  @offset = index25
                  chunk29 = nil
                  if @offset < @input_size
                    chunk29 = @input[@offset...@offset + 1]
                  end
                  if chunk29 == "l"
                    address26 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address26 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "\"l\""
                    end
                  end
                  if address26 == FAILURE
                    @offset = index25
                    chunk30 = nil
                    if @offset < @input_size
                      chunk30 = @input[@offset...@offset + 1]
                    end
                    if chunk30 == "L"
                      address26 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address26 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "\"L\""
                      end
                    end
                    if address26 == FAILURE
                      @offset = index25
                    end
                  end
                end
              end
              if address26 == FAILURE
                address26 = TreeNode.new(@input[index24...index24], index24)
                @offset = index24
              end
              unless address26 == FAILURE
                elements7 << address26
                address27 = FAILURE
                address27 = _read_SPACE
                unless address27 == FAILURE
                  elements7 << address27
                else
                  elements7 = nil
                  @offset = index19
                end
              else
                elements7 = nil
                @offset = index19
              end
            else
              elements7 = nil
              @offset = index19
            end
          else
            elements7 = nil
            @offset = index19
          end
          if elements7.nil?
            address0 = FAILURE
          else
            address0 = TreeNode252.new(@input[index19...@offset], index19, elements7)
            @offset = @offset
          end
          if address0 == FAILURE
            @offset = index1
            index26, elements11 = @offset, []
            address28 = FAILURE
            remaining4, index27, elements12, address29 = 0, @offset, [], true
            until address29 == FAILURE
              chunk31 = nil
              if @offset < @input_size
                chunk31 = @input[@offset...@offset + 1]
              end
              if chunk31 =~ /\A[0-9]/
                address29 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address29 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "[0-9]"
                end
              end
              unless address29 == FAILURE
                elements12 << address29
                remaining4 -= 1
              end
            end
            if remaining4 <= 0
              address28 = TreeNode.new(@input[index27...@offset], index27, elements12)
              @offset = @offset
            else
              address28 = FAILURE
            end
            unless address28 == FAILURE
              elements11 << address28
              address30 = FAILURE
              chunk32 = nil
              if @offset < @input_size
                chunk32 = @input[@offset...@offset + 1]
              end
              if chunk32 == "."
                address30 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address30 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "\".\""
                end
              end
              unless address30 == FAILURE
                elements11 << address30
                address31 = FAILURE
                remaining5, index28, elements13, address32 = 1, @offset, [], true
                until address32 == FAILURE
                  chunk33 = nil
                  if @offset < @input_size
                    chunk33 = @input[@offset...@offset + 1]
                  end
                  if chunk33 =~ /\A[0-9]/
                    address32 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address32 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "[0-9]"
                    end
                  end
                  unless address32 == FAILURE
                    elements13 << address32
                    remaining5 -= 1
                  end
                end
                if remaining5 <= 0
                  address31 = TreeNode.new(@input[index28...@offset], index28, elements13)
                  @offset = @offset
                else
                  address31 = FAILURE
                end
                unless address31 == FAILURE
                  elements11 << address31
                  address33 = FAILURE
                  index29 = @offset
                  index30, elements14 = @offset, []
                  address34 = FAILURE
                  chunk34 = nil
                  if @offset < @input_size
                    chunk34 = @input[@offset...@offset + 1]
                  end
                  if chunk34 =~ /\A[Ee]/
                    address34 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address34 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "[Ee]"
                    end
                  end
                  unless address34 == FAILURE
                    elements14 << address34
                    address35 = FAILURE
                    index31 = @offset
                    chunk35 = nil
                    if @offset < @input_size
                      chunk35 = @input[@offset...@offset + 1]
                    end
                    if chunk35 =~ /\A[+\-]/
                      address35 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address35 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "[+\\-]"
                      end
                    end
                    if address35 == FAILURE
                      address35 = TreeNode.new(@input[index31...index31], index31)
                      @offset = index31
                    end
                    unless address35 == FAILURE
                      elements14 << address35
                      address36 = FAILURE
                      remaining6, index32, elements15, address37 = 1, @offset, [], true
                      until address37 == FAILURE
                        chunk36 = nil
                        if @offset < @input_size
                          chunk36 = @input[@offset...@offset + 1]
                        end
                        if chunk36 =~ /\A[0-9]/
                          address37 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address37 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "[0-9]"
                          end
                        end
                        unless address37 == FAILURE
                          elements15 << address37
                          remaining6 -= 1
                        end
                      end
                      if remaining6 <= 0
                        address36 = TreeNode.new(@input[index32...@offset], index32, elements15)
                        @offset = @offset
                      else
                        address36 = FAILURE
                      end
                      unless address36 == FAILURE
                        elements14 << address36
                      else
                        elements14 = nil
                        @offset = index30
                      end
                    else
                      elements14 = nil
                      @offset = index30
                    end
                  else
                    elements14 = nil
                    @offset = index30
                  end
                  if elements14.nil?
                    address33 = FAILURE
                  else
                    address33 = TreeNode.new(@input[index30...@offset], index30, elements14)
                    @offset = @offset
                  end
                  if address33 == FAILURE
                    address33 = TreeNode.new(@input[index29...index29], index29)
                    @offset = index29
                  end
                  unless address33 == FAILURE
                    elements11 << address33
                    address38 = FAILURE
                    index33 = @offset
                    index34 = @offset
                    chunk37 = nil
                    if @offset < @input_size
                      chunk37 = @input[@offset...@offset + 1]
                    end
                    if chunk37 == "f"
                      address38 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address38 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "\"f\""
                      end
                    end
                    if address38 == FAILURE
                      @offset = index34
                      chunk38 = nil
                      if @offset < @input_size
                        chunk38 = @input[@offset...@offset + 1]
                      end
                      if chunk38 == "F"
                        address38 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address38 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "\"F\""
                        end
                      end
                      if address38 == FAILURE
                        @offset = index34
                        chunk39 = nil
                        if @offset < @input_size
                          chunk39 = @input[@offset...@offset + 1]
                        end
                        if chunk39 == "l"
                          address38 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address38 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "\"l\""
                          end
                        end
                        if address38 == FAILURE
                          @offset = index34
                          chunk40 = nil
                          if @offset < @input_size
                            chunk40 = @input[@offset...@offset + 1]
                          end
                          if chunk40 == "L"
                            address38 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address38 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "\"L\""
                            end
                          end
                          if address38 == FAILURE
                            @offset = index34
                          end
                        end
                      end
                    end
                    if address38 == FAILURE
                      address38 = TreeNode.new(@input[index33...index33], index33)
                      @offset = index33
                    end
                    unless address38 == FAILURE
                      elements11 << address38
                      address39 = FAILURE
                      address39 = _read_SPACE
                      unless address39 == FAILURE
                        elements11 << address39
                      else
                        elements11 = nil
                        @offset = index26
                      end
                    else
                      elements11 = nil
                      @offset = index26
                    end
                  else
                    elements11 = nil
                    @offset = index26
                  end
                else
                  elements11 = nil
                  @offset = index26
                end
              else
                elements11 = nil
                @offset = index26
              end
            else
              elements11 = nil
              @offset = index26
            end
            if elements11.nil?
              address0 = FAILURE
            else
              address0 = TreeNode253.new(@input[index26...@offset], index26, elements11)
              @offset = @offset
            end
            if address0 == FAILURE
              @offset = index1
              index35, elements16 = @offset, []
              address40 = FAILURE
              remaining7, index36, elements17, address41 = 1, @offset, [], true
              until address41 == FAILURE
                chunk41 = nil
                if @offset < @input_size
                  chunk41 = @input[@offset...@offset + 1]
                end
                if chunk41 =~ /\A[0-9]/
                  address41 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address41 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "[0-9]"
                  end
                end
                unless address41 == FAILURE
                  elements17 << address41
                  remaining7 -= 1
                end
              end
              if remaining7 <= 0
                address40 = TreeNode.new(@input[index36...@offset], index36, elements17)
                @offset = @offset
              else
                address40 = FAILURE
              end
              unless address40 == FAILURE
                elements16 << address40
                address42 = FAILURE
                chunk42 = nil
                if @offset < @input_size
                  chunk42 = @input[@offset...@offset + 1]
                end
                if chunk42 == "."
                  address42 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address42 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "\".\""
                  end
                end
                unless address42 == FAILURE
                  elements16 << address42
                  address43 = FAILURE
                  remaining8, index37, elements18, address44 = 0, @offset, [], true
                  until address44 == FAILURE
                    chunk43 = nil
                    if @offset < @input_size
                      chunk43 = @input[@offset...@offset + 1]
                    end
                    if chunk43 =~ /\A[0-9]/
                      address44 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address44 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "[0-9]"
                      end
                    end
                    unless address44 == FAILURE
                      elements18 << address44
                      remaining8 -= 1
                    end
                  end
                  if remaining8 <= 0
                    address43 = TreeNode.new(@input[index37...@offset], index37, elements18)
                    @offset = @offset
                  else
                    address43 = FAILURE
                  end
                  unless address43 == FAILURE
                    elements16 << address43
                    address45 = FAILURE
                    index38 = @offset
                    index39, elements19 = @offset, []
                    address46 = FAILURE
                    chunk44 = nil
                    if @offset < @input_size
                      chunk44 = @input[@offset...@offset + 1]
                    end
                    if chunk44 =~ /\A[Ee]/
                      address46 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address46 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "[Ee]"
                      end
                    end
                    unless address46 == FAILURE
                      elements19 << address46
                      address47 = FAILURE
                      index40 = @offset
                      chunk45 = nil
                      if @offset < @input_size
                        chunk45 = @input[@offset...@offset + 1]
                      end
                      if chunk45 =~ /\A[+\-]/
                        address47 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address47 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "[+\\-]"
                        end
                      end
                      if address47 == FAILURE
                        address47 = TreeNode.new(@input[index40...index40], index40)
                        @offset = index40
                      end
                      unless address47 == FAILURE
                        elements19 << address47
                        address48 = FAILURE
                        remaining9, index41, elements20, address49 = 1, @offset, [], true
                        until address49 == FAILURE
                          chunk46 = nil
                          if @offset < @input_size
                            chunk46 = @input[@offset...@offset + 1]
                          end
                          if chunk46 =~ /\A[0-9]/
                            address49 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address49 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "[0-9]"
                            end
                          end
                          unless address49 == FAILURE
                            elements20 << address49
                            remaining9 -= 1
                          end
                        end
                        if remaining9 <= 0
                          address48 = TreeNode.new(@input[index41...@offset], index41, elements20)
                          @offset = @offset
                        else
                          address48 = FAILURE
                        end
                        unless address48 == FAILURE
                          elements19 << address48
                        else
                          elements19 = nil
                          @offset = index39
                        end
                      else
                        elements19 = nil
                        @offset = index39
                      end
                    else
                      elements19 = nil
                      @offset = index39
                    end
                    if elements19.nil?
                      address45 = FAILURE
                    else
                      address45 = TreeNode.new(@input[index39...@offset], index39, elements19)
                      @offset = @offset
                    end
                    if address45 == FAILURE
                      address45 = TreeNode.new(@input[index38...index38], index38)
                      @offset = index38
                    end
                    unless address45 == FAILURE
                      elements16 << address45
                      address50 = FAILURE
                      index42 = @offset
                      index43 = @offset
                      chunk47 = nil
                      if @offset < @input_size
                        chunk47 = @input[@offset...@offset + 1]
                      end
                      if chunk47 == "f"
                        address50 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address50 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "\"f\""
                        end
                      end
                      if address50 == FAILURE
                        @offset = index43
                        chunk48 = nil
                        if @offset < @input_size
                          chunk48 = @input[@offset...@offset + 1]
                        end
                        if chunk48 == "F"
                          address50 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address50 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "\"F\""
                          end
                        end
                        if address50 == FAILURE
                          @offset = index43
                          chunk49 = nil
                          if @offset < @input_size
                            chunk49 = @input[@offset...@offset + 1]
                          end
                          if chunk49 == "l"
                            address50 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address50 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "\"l\""
                            end
                          end
                          if address50 == FAILURE
                            @offset = index43
                            chunk50 = nil
                            if @offset < @input_size
                              chunk50 = @input[@offset...@offset + 1]
                            end
                            if chunk50 == "L"
                              address50 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address50 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "\"L\""
                              end
                            end
                            if address50 == FAILURE
                              @offset = index43
                            end
                          end
                        end
                      end
                      if address50 == FAILURE
                        address50 = TreeNode.new(@input[index42...index42], index42)
                        @offset = index42
                      end
                      unless address50 == FAILURE
                        elements16 << address50
                        address51 = FAILURE
                        address51 = _read_SPACE
                        unless address51 == FAILURE
                          elements16 << address51
                        else
                          elements16 = nil
                          @offset = index35
                        end
                      else
                        elements16 = nil
                        @offset = index35
                      end
                    else
                      elements16 = nil
                      @offset = index35
                    end
                  else
                    elements16 = nil
                    @offset = index35
                  end
                else
                  elements16 = nil
                  @offset = index35
                end
              else
                elements16 = nil
                @offset = index35
              end
              if elements16.nil?
                address0 = FAILURE
              else
                address0 = TreeNode254.new(@input[index35...@offset], index35, elements16)
                @offset = @offset
              end
              if address0 == FAILURE
                @offset = index1
                index44, elements21 = @offset, []
                address52 = FAILURE
                chunk51 = nil
                if @offset < @input_size
                  chunk51 = @input[@offset...@offset + 1]
                end
                if chunk51 == "0"
                  address52 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                  @offset = @offset + 1
                else
                  address52 = FAILURE
                  if @offset > @failure
                    @failure = @offset
                    @expected = []
                  end
                  if @offset == @failure
                    @expected << "\"0\""
                  end
                end
                unless address52 == FAILURE
                  elements21 << address52
                  address53 = FAILURE
                  chunk52 = nil
                  if @offset < @input_size
                    chunk52 = @input[@offset...@offset + 1]
                  end
                  if chunk52 =~ /\A[xX]/
                    address53 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address53 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "[xX]"
                    end
                  end
                  unless address53 == FAILURE
                    elements21 << address53
                    address54 = FAILURE
                    remaining10, index45, elements22, address55 = 1, @offset, [], true
                    until address55 == FAILURE
                      chunk53 = nil
                      if @offset < @input_size
                        chunk53 = @input[@offset...@offset + 1]
                      end
                      if chunk53 =~ /\A[a-fA-F0-9]/
                        address55 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address55 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "[a-fA-F0-9]"
                        end
                      end
                      unless address55 == FAILURE
                        elements22 << address55
                        remaining10 -= 1
                      end
                    end
                    if remaining10 <= 0
                      address54 = TreeNode.new(@input[index45...@offset], index45, elements22)
                      @offset = @offset
                    else
                      address54 = FAILURE
                    end
                    unless address54 == FAILURE
                      elements21 << address54
                      address56 = FAILURE
                      index46, elements23 = @offset, []
                      address57 = FAILURE
                      chunk54 = nil
                      if @offset < @input_size
                        chunk54 = @input[@offset...@offset + 1]
                      end
                      if chunk54 =~ /\A[Pp]/
                        address57 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address57 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "[Pp]"
                        end
                      end
                      unless address57 == FAILURE
                        elements23 << address57
                        address58 = FAILURE
                        index47 = @offset
                        chunk55 = nil
                        if @offset < @input_size
                          chunk55 = @input[@offset...@offset + 1]
                        end
                        if chunk55 =~ /\A[+\-]/
                          address58 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address58 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "[+\\-]"
                          end
                        end
                        if address58 == FAILURE
                          address58 = TreeNode.new(@input[index47...index47], index47)
                          @offset = index47
                        end
                        unless address58 == FAILURE
                          elements23 << address58
                          address59 = FAILURE
                          remaining11, index48, elements24, address60 = 1, @offset, [], true
                          until address60 == FAILURE
                            chunk56 = nil
                            if @offset < @input_size
                              chunk56 = @input[@offset...@offset + 1]
                            end
                            if chunk56 =~ /\A[0-9]/
                              address60 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address60 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "[0-9]"
                              end
                            end
                            unless address60 == FAILURE
                              elements24 << address60
                              remaining11 -= 1
                            end
                          end
                          if remaining11 <= 0
                            address59 = TreeNode.new(@input[index48...@offset], index48, elements24)
                            @offset = @offset
                          else
                            address59 = FAILURE
                          end
                          unless address59 == FAILURE
                            elements23 << address59
                          else
                            elements23 = nil
                            @offset = index46
                          end
                        else
                          elements23 = nil
                          @offset = index46
                        end
                      else
                        elements23 = nil
                        @offset = index46
                      end
                      if elements23.nil?
                        address56 = FAILURE
                      else
                        address56 = TreeNode.new(@input[index46...@offset], index46, elements23)
                        @offset = @offset
                      end
                      unless address56 == FAILURE
                        elements21 << address56
                        address61 = FAILURE
                        index49 = @offset
                        index50 = @offset
                        chunk57 = nil
                        if @offset < @input_size
                          chunk57 = @input[@offset...@offset + 1]
                        end
                        if chunk57 == "f"
                          address61 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address61 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "\"f\""
                          end
                        end
                        if address61 == FAILURE
                          @offset = index50
                          chunk58 = nil
                          if @offset < @input_size
                            chunk58 = @input[@offset...@offset + 1]
                          end
                          if chunk58 == "F"
                            address61 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address61 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "\"F\""
                            end
                          end
                          if address61 == FAILURE
                            @offset = index50
                            chunk59 = nil
                            if @offset < @input_size
                              chunk59 = @input[@offset...@offset + 1]
                            end
                            if chunk59 == "l"
                              address61 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address61 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "\"l\""
                              end
                            end
                            if address61 == FAILURE
                              @offset = index50
                              chunk60 = nil
                              if @offset < @input_size
                                chunk60 = @input[@offset...@offset + 1]
                              end
                              if chunk60 == "L"
                                address61 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address61 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "\"L\""
                                end
                              end
                              if address61 == FAILURE
                                @offset = index50
                              end
                            end
                          end
                        end
                        if address61 == FAILURE
                          address61 = TreeNode.new(@input[index49...index49], index49)
                          @offset = index49
                        end
                        unless address61 == FAILURE
                          elements21 << address61
                          address62 = FAILURE
                          address62 = _read_SPACE
                          unless address62 == FAILURE
                            elements21 << address62
                          else
                            elements21 = nil
                            @offset = index44
                          end
                        else
                          elements21 = nil
                          @offset = index44
                        end
                      else
                        elements21 = nil
                        @offset = index44
                      end
                    else
                      elements21 = nil
                      @offset = index44
                    end
                  else
                    elements21 = nil
                    @offset = index44
                  end
                else
                  elements21 = nil
                  @offset = index44
                end
                if elements21.nil?
                  address0 = FAILURE
                else
                  address0 = TreeNode255.new(@input[index44...@offset], index44, elements21)
                  @offset = @offset
                end
                if address0 == FAILURE
                  @offset = index1
                  index51, elements25 = @offset, []
                  address63 = FAILURE
                  chunk61 = nil
                  if @offset < @input_size
                    chunk61 = @input[@offset...@offset + 1]
                  end
                  if chunk61 == "0"
                    address63 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                    @offset = @offset + 1
                  else
                    address63 = FAILURE
                    if @offset > @failure
                      @failure = @offset
                      @expected = []
                    end
                    if @offset == @failure
                      @expected << "\"0\""
                    end
                  end
                  unless address63 == FAILURE
                    elements25 << address63
                    address64 = FAILURE
                    chunk62 = nil
                    if @offset < @input_size
                      chunk62 = @input[@offset...@offset + 1]
                    end
                    if chunk62 =~ /\A[xX]/
                      address64 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address64 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "[xX]"
                      end
                    end
                    unless address64 == FAILURE
                      elements25 << address64
                      address65 = FAILURE
                      remaining12, index52, elements26, address66 = 0, @offset, [], true
                      until address66 == FAILURE
                        chunk63 = nil
                        if @offset < @input_size
                          chunk63 = @input[@offset...@offset + 1]
                        end
                        if chunk63 =~ /\A[a-fA-F0-9]/
                          address66 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address66 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "[a-fA-F0-9]"
                          end
                        end
                        unless address66 == FAILURE
                          elements26 << address66
                          remaining12 -= 1
                        end
                      end
                      if remaining12 <= 0
                        address65 = TreeNode.new(@input[index52...@offset], index52, elements26)
                        @offset = @offset
                      else
                        address65 = FAILURE
                      end
                      unless address65 == FAILURE
                        elements25 << address65
                        address67 = FAILURE
                        chunk64 = nil
                        if @offset < @input_size
                          chunk64 = @input[@offset...@offset + 1]
                        end
                        if chunk64 == "."
                          address67 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address67 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "\".\""
                          end
                        end
                        unless address67 == FAILURE
                          elements25 << address67
                          address68 = FAILURE
                          remaining13, index53, elements27, address69 = 1, @offset, [], true
                          until address69 == FAILURE
                            chunk65 = nil
                            if @offset < @input_size
                              chunk65 = @input[@offset...@offset + 1]
                            end
                            if chunk65 =~ /\A[a-fA-F0-9]/
                              address69 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address69 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "[a-fA-F0-9]"
                              end
                            end
                            unless address69 == FAILURE
                              elements27 << address69
                              remaining13 -= 1
                            end
                          end
                          if remaining13 <= 0
                            address68 = TreeNode.new(@input[index53...@offset], index53, elements27)
                            @offset = @offset
                          else
                            address68 = FAILURE
                          end
                          unless address68 == FAILURE
                            elements25 << address68
                            address70 = FAILURE
                            index54 = @offset
                            index55, elements28 = @offset, []
                            address71 = FAILURE
                            chunk66 = nil
                            if @offset < @input_size
                              chunk66 = @input[@offset...@offset + 1]
                            end
                            if chunk66 =~ /\A[Pp]/
                              address71 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address71 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "[Pp]"
                              end
                            end
                            unless address71 == FAILURE
                              elements28 << address71
                              address72 = FAILURE
                              index56 = @offset
                              chunk67 = nil
                              if @offset < @input_size
                                chunk67 = @input[@offset...@offset + 1]
                              end
                              if chunk67 =~ /\A[+\-]/
                                address72 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address72 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "[+\\-]"
                                end
                              end
                              if address72 == FAILURE
                                address72 = TreeNode.new(@input[index56...index56], index56)
                                @offset = index56
                              end
                              unless address72 == FAILURE
                                elements28 << address72
                                address73 = FAILURE
                                remaining14, index57, elements29, address74 = 1, @offset, [], true
                                until address74 == FAILURE
                                  chunk68 = nil
                                  if @offset < @input_size
                                    chunk68 = @input[@offset...@offset + 1]
                                  end
                                  if chunk68 =~ /\A[0-9]/
                                    address74 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                    @offset = @offset + 1
                                  else
                                    address74 = FAILURE
                                    if @offset > @failure
                                      @failure = @offset
                                      @expected = []
                                    end
                                    if @offset == @failure
                                      @expected << "[0-9]"
                                    end
                                  end
                                  unless address74 == FAILURE
                                    elements29 << address74
                                    remaining14 -= 1
                                  end
                                end
                                if remaining14 <= 0
                                  address73 = TreeNode.new(@input[index57...@offset], index57, elements29)
                                  @offset = @offset
                                else
                                  address73 = FAILURE
                                end
                                unless address73 == FAILURE
                                  elements28 << address73
                                else
                                  elements28 = nil
                                  @offset = index55
                                end
                              else
                                elements28 = nil
                                @offset = index55
                              end
                            else
                              elements28 = nil
                              @offset = index55
                            end
                            if elements28.nil?
                              address70 = FAILURE
                            else
                              address70 = TreeNode.new(@input[index55...@offset], index55, elements28)
                              @offset = @offset
                            end
                            if address70 == FAILURE
                              address70 = TreeNode.new(@input[index54...index54], index54)
                              @offset = index54
                            end
                            unless address70 == FAILURE
                              elements25 << address70
                              address75 = FAILURE
                              index58 = @offset
                              index59 = @offset
                              chunk69 = nil
                              if @offset < @input_size
                                chunk69 = @input[@offset...@offset + 1]
                              end
                              if chunk69 == "f"
                                address75 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address75 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "\"f\""
                                end
                              end
                              if address75 == FAILURE
                                @offset = index59
                                chunk70 = nil
                                if @offset < @input_size
                                  chunk70 = @input[@offset...@offset + 1]
                                end
                                if chunk70 == "F"
                                  address75 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address75 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "\"F\""
                                  end
                                end
                                if address75 == FAILURE
                                  @offset = index59
                                  chunk71 = nil
                                  if @offset < @input_size
                                    chunk71 = @input[@offset...@offset + 1]
                                  end
                                  if chunk71 == "l"
                                    address75 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                    @offset = @offset + 1
                                  else
                                    address75 = FAILURE
                                    if @offset > @failure
                                      @failure = @offset
                                      @expected = []
                                    end
                                    if @offset == @failure
                                      @expected << "\"l\""
                                    end
                                  end
                                  if address75 == FAILURE
                                    @offset = index59
                                    chunk72 = nil
                                    if @offset < @input_size
                                      chunk72 = @input[@offset...@offset + 1]
                                    end
                                    if chunk72 == "L"
                                      address75 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address75 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "\"L\""
                                      end
                                    end
                                    if address75 == FAILURE
                                      @offset = index59
                                    end
                                  end
                                end
                              end
                              if address75 == FAILURE
                                address75 = TreeNode.new(@input[index58...index58], index58)
                                @offset = index58
                              end
                              unless address75 == FAILURE
                                elements25 << address75
                                address76 = FAILURE
                                address76 = _read_SPACE
                                unless address76 == FAILURE
                                  elements25 << address76
                                else
                                  elements25 = nil
                                  @offset = index51
                                end
                              else
                                elements25 = nil
                                @offset = index51
                              end
                            else
                              elements25 = nil
                              @offset = index51
                            end
                          else
                            elements25 = nil
                            @offset = index51
                          end
                        else
                          elements25 = nil
                          @offset = index51
                        end
                      else
                        elements25 = nil
                        @offset = index51
                      end
                    else
                      elements25 = nil
                      @offset = index51
                    end
                  else
                    elements25 = nil
                    @offset = index51
                  end
                  if elements25.nil?
                    address0 = FAILURE
                  else
                    address0 = TreeNode256.new(@input[index51...@offset], index51, elements25)
                    @offset = @offset
                  end
                  if address0 == FAILURE
                    @offset = index1
                    index60, elements30 = @offset, []
                    address77 = FAILURE
                    chunk73 = nil
                    if @offset < @input_size
                      chunk73 = @input[@offset...@offset + 1]
                    end
                    if chunk73 == "0"
                      address77 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                      @offset = @offset + 1
                    else
                      address77 = FAILURE
                      if @offset > @failure
                        @failure = @offset
                        @expected = []
                      end
                      if @offset == @failure
                        @expected << "\"0\""
                      end
                    end
                    unless address77 == FAILURE
                      elements30 << address77
                      address78 = FAILURE
                      chunk74 = nil
                      if @offset < @input_size
                        chunk74 = @input[@offset...@offset + 1]
                      end
                      if chunk74 =~ /\A[xX]/
                        address78 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address78 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "[xX]"
                        end
                      end
                      unless address78 == FAILURE
                        elements30 << address78
                        address79 = FAILURE
                        remaining15, index61, elements31, address80 = 1, @offset, [], true
                        until address80 == FAILURE
                          chunk75 = nil
                          if @offset < @input_size
                            chunk75 = @input[@offset...@offset + 1]
                          end
                          if chunk75 =~ /\A[a-fA-F0-9]/
                            address80 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address80 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "[a-fA-F0-9]"
                            end
                          end
                          unless address80 == FAILURE
                            elements31 << address80
                            remaining15 -= 1
                          end
                        end
                        if remaining15 <= 0
                          address79 = TreeNode.new(@input[index61...@offset], index61, elements31)
                          @offset = @offset
                        else
                          address79 = FAILURE
                        end
                        unless address79 == FAILURE
                          elements30 << address79
                          address81 = FAILURE
                          chunk76 = nil
                          if @offset < @input_size
                            chunk76 = @input[@offset...@offset + 1]
                          end
                          if chunk76 == "."
                            address81 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address81 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "\".\""
                            end
                          end
                          unless address81 == FAILURE
                            elements30 << address81
                            address82 = FAILURE
                            remaining16, index62, elements32, address83 = 0, @offset, [], true
                            until address83 == FAILURE
                              chunk77 = nil
                              if @offset < @input_size
                                chunk77 = @input[@offset...@offset + 1]
                              end
                              if chunk77 =~ /\A[a-fA-F0-9]/
                                address83 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address83 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "[a-fA-F0-9]"
                                end
                              end
                              unless address83 == FAILURE
                                elements32 << address83
                                remaining16 -= 1
                              end
                            end
                            if remaining16 <= 0
                              address82 = TreeNode.new(@input[index62...@offset], index62, elements32)
                              @offset = @offset
                            else
                              address82 = FAILURE
                            end
                            unless address82 == FAILURE
                              elements30 << address82
                              address84 = FAILURE
                              index63 = @offset
                              index64, elements33 = @offset, []
                              address85 = FAILURE
                              chunk78 = nil
                              if @offset < @input_size
                                chunk78 = @input[@offset...@offset + 1]
                              end
                              if chunk78 =~ /\A[Pp]/
                                address85 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address85 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "[Pp]"
                                end
                              end
                              unless address85 == FAILURE
                                elements33 << address85
                                address86 = FAILURE
                                index65 = @offset
                                chunk79 = nil
                                if @offset < @input_size
                                  chunk79 = @input[@offset...@offset + 1]
                                end
                                if chunk79 =~ /\A[+\-]/
                                  address86 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address86 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "[+\\-]"
                                  end
                                end
                                if address86 == FAILURE
                                  address86 = TreeNode.new(@input[index65...index65], index65)
                                  @offset = index65
                                end
                                unless address86 == FAILURE
                                  elements33 << address86
                                  address87 = FAILURE
                                  remaining17, index66, elements34, address88 = 1, @offset, [], true
                                  until address88 == FAILURE
                                    chunk80 = nil
                                    if @offset < @input_size
                                      chunk80 = @input[@offset...@offset + 1]
                                    end
                                    if chunk80 =~ /\A[0-9]/
                                      address88 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address88 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "[0-9]"
                                      end
                                    end
                                    unless address88 == FAILURE
                                      elements34 << address88
                                      remaining17 -= 1
                                    end
                                  end
                                  if remaining17 <= 0
                                    address87 = TreeNode.new(@input[index66...@offset], index66, elements34)
                                    @offset = @offset
                                  else
                                    address87 = FAILURE
                                  end
                                  unless address87 == FAILURE
                                    elements33 << address87
                                  else
                                    elements33 = nil
                                    @offset = index64
                                  end
                                else
                                  elements33 = nil
                                  @offset = index64
                                end
                              else
                                elements33 = nil
                                @offset = index64
                              end
                              if elements33.nil?
                                address84 = FAILURE
                              else
                                address84 = TreeNode.new(@input[index64...@offset], index64, elements33)
                                @offset = @offset
                              end
                              if address84 == FAILURE
                                address84 = TreeNode.new(@input[index63...index63], index63)
                                @offset = index63
                              end
                              unless address84 == FAILURE
                                elements30 << address84
                                address89 = FAILURE
                                index67 = @offset
                                index68 = @offset
                                chunk81 = nil
                                if @offset < @input_size
                                  chunk81 = @input[@offset...@offset + 1]
                                end
                                if chunk81 == "f"
                                  address89 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address89 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "\"f\""
                                  end
                                end
                                if address89 == FAILURE
                                  @offset = index68
                                  chunk82 = nil
                                  if @offset < @input_size
                                    chunk82 = @input[@offset...@offset + 1]
                                  end
                                  if chunk82 == "F"
                                    address89 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                    @offset = @offset + 1
                                  else
                                    address89 = FAILURE
                                    if @offset > @failure
                                      @failure = @offset
                                      @expected = []
                                    end
                                    if @offset == @failure
                                      @expected << "\"F\""
                                    end
                                  end
                                  if address89 == FAILURE
                                    @offset = index68
                                    chunk83 = nil
                                    if @offset < @input_size
                                      chunk83 = @input[@offset...@offset + 1]
                                    end
                                    if chunk83 == "l"
                                      address89 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address89 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "\"l\""
                                      end
                                    end
                                    if address89 == FAILURE
                                      @offset = index68
                                      chunk84 = nil
                                      if @offset < @input_size
                                        chunk84 = @input[@offset...@offset + 1]
                                      end
                                      if chunk84 == "L"
                                        address89 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                        @offset = @offset + 1
                                      else
                                        address89 = FAILURE
                                        if @offset > @failure
                                          @failure = @offset
                                          @expected = []
                                        end
                                        if @offset == @failure
                                          @expected << "\"L\""
                                        end
                                      end
                                      if address89 == FAILURE
                                        @offset = index68
                                      end
                                    end
                                  end
                                end
                                if address89 == FAILURE
                                  address89 = TreeNode.new(@input[index67...index67], index67)
                                  @offset = index67
                                end
                                unless address89 == FAILURE
                                  elements30 << address89
                                  address90 = FAILURE
                                  address90 = _read_SPACE
                                  unless address90 == FAILURE
                                    elements30 << address90
                                  else
                                    elements30 = nil
                                    @offset = index60
                                  end
                                else
                                  elements30 = nil
                                  @offset = index60
                                end
                              else
                                elements30 = nil
                                @offset = index60
                              end
                            else
                              elements30 = nil
                              @offset = index60
                            end
                          else
                            elements30 = nil
                            @offset = index60
                          end
                        else
                          elements30 = nil
                          @offset = index60
                        end
                      else
                        elements30 = nil
                        @offset = index60
                      end
                    else
                      elements30 = nil
                      @offset = index60
                    end
                    if elements30.nil?
                      address0 = FAILURE
                    else
                      address0 = TreeNode257.new(@input[index60...@offset], index60, elements30)
                      @offset = @offset
                    end
                    if address0 == FAILURE
                      @offset = index1
                      index69, elements35 = @offset, []
                      address91 = FAILURE
                      chunk85 = nil
                      if @offset < @input_size
                        chunk85 = @input[@offset...@offset + 1]
                      end
                      if chunk85 == "0"
                        address91 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                        @offset = @offset + 1
                      else
                        address91 = FAILURE
                        if @offset > @failure
                          @failure = @offset
                          @expected = []
                        end
                        if @offset == @failure
                          @expected << "\"0\""
                        end
                      end
                      unless address91 == FAILURE
                        elements35 << address91
                        address92 = FAILURE
                        remaining18, index70, elements36, address93 = 0, @offset, [], true
                        until address93 == FAILURE
                          chunk86 = nil
                          if @offset < @input_size
                            chunk86 = @input[@offset...@offset + 1]
                          end
                          if chunk86 =~ /\A[0-7]/
                            address93 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                            @offset = @offset + 1
                          else
                            address93 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "[0-7]"
                            end
                          end
                          unless address93 == FAILURE
                            elements36 << address93
                            remaining18 -= 1
                          end
                        end
                        if remaining18 <= 0
                          address92 = TreeNode.new(@input[index70...@offset], index70, elements36)
                          @offset = @offset
                        else
                          address92 = FAILURE
                        end
                        unless address92 == FAILURE
                          elements35 << address92
                          address94 = FAILURE
                          index71 = @offset
                          index72 = @offset
                          index73, elements37 = @offset, []
                          address95 = FAILURE
                          index74 = @offset
                          chunk87 = nil
                          if @offset < @input_size
                            chunk87 = @input[@offset...@offset + 2]
                          end
                          if chunk87 == "ll"
                            address95 = TreeNode.new(@input[@offset...@offset + 2], @offset)
                            @offset = @offset + 2
                          else
                            address95 = FAILURE
                            if @offset > @failure
                              @failure = @offset
                              @expected = []
                            end
                            if @offset == @failure
                              @expected << "\"ll\""
                            end
                          end
                          if address95 == FAILURE
                            @offset = index74
                            chunk88 = nil
                            if @offset < @input_size
                              chunk88 = @input[@offset...@offset + 2]
                            end
                            if chunk88 == "LL"
                              address95 = TreeNode.new(@input[@offset...@offset + 2], @offset)
                              @offset = @offset + 2
                            else
                              address95 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "\"LL\""
                              end
                            end
                            if address95 == FAILURE
                              @offset = index74
                              chunk89 = nil
                              if @offset < @input_size
                                chunk89 = @input[@offset...@offset + 1]
                              end
                              if chunk89 == "l"
                                address95 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address95 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "\"l\""
                                end
                              end
                              if address95 == FAILURE
                                @offset = index74
                                chunk90 = nil
                                if @offset < @input_size
                                  chunk90 = @input[@offset...@offset + 1]
                                end
                                if chunk90 == "L"
                                  address95 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address95 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "\"L\""
                                  end
                                end
                                if address95 == FAILURE
                                  @offset = index74
                                end
                              end
                            end
                          end
                          unless address95 == FAILURE
                            elements37 << address95
                            address96 = FAILURE
                            index75 = @offset
                            chunk91 = nil
                            if @offset < @input_size
                              chunk91 = @input[@offset...@offset + 1]
                            end
                            if chunk91 == "u"
                              address96 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address96 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "\"u\""
                              end
                            end
                            if address96 == FAILURE
                              @offset = index75
                              chunk92 = nil
                              if @offset < @input_size
                                chunk92 = @input[@offset...@offset + 1]
                              end
                              if chunk92 == "U"
                                address96 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address96 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "\"U\""
                                end
                              end
                              if address96 == FAILURE
                                @offset = index75
                              end
                            end
                            unless address96 == FAILURE
                              elements37 << address96
                            else
                              elements37 = nil
                              @offset = index73
                            end
                          else
                            elements37 = nil
                            @offset = index73
                          end
                          if elements37.nil?
                            address94 = FAILURE
                          else
                            address94 = TreeNode.new(@input[index73...@offset], index73, elements37)
                            @offset = @offset
                          end
                          if address94 == FAILURE
                            @offset = index72
                            index76, elements38 = @offset, []
                            address97 = FAILURE
                            index77 = @offset
                            index78 = @offset
                            chunk93 = nil
                            if @offset < @input_size
                              chunk93 = @input[@offset...@offset + 1]
                            end
                            if chunk93 == "u"
                              address97 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address97 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "\"u\""
                              end
                            end
                            if address97 == FAILURE
                              @offset = index78
                              chunk94 = nil
                              if @offset < @input_size
                                chunk94 = @input[@offset...@offset + 1]
                              end
                              if chunk94 == "U"
                                address97 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address97 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "\"U\""
                                end
                              end
                              if address97 == FAILURE
                                @offset = index78
                              end
                            end
                            if address97 == FAILURE
                              address97 = TreeNode.new(@input[index77...index77], index77)
                              @offset = index77
                            end
                            unless address97 == FAILURE
                              elements38 << address97
                              address98 = FAILURE
                              index79 = @offset
                              chunk95 = nil
                              if @offset < @input_size
                                chunk95 = @input[@offset...@offset + 2]
                              end
                              if chunk95 == "ll"
                                address98 = TreeNode.new(@input[@offset...@offset + 2], @offset)
                                @offset = @offset + 2
                              else
                                address98 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "\"ll\""
                                end
                              end
                              if address98 == FAILURE
                                @offset = index79
                                chunk96 = nil
                                if @offset < @input_size
                                  chunk96 = @input[@offset...@offset + 2]
                                end
                                if chunk96 == "LL"
                                  address98 = TreeNode.new(@input[@offset...@offset + 2], @offset)
                                  @offset = @offset + 2
                                else
                                  address98 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "\"LL\""
                                  end
                                end
                                if address98 == FAILURE
                                  @offset = index79
                                  chunk97 = nil
                                  if @offset < @input_size
                                    chunk97 = @input[@offset...@offset + 1]
                                  end
                                  if chunk97 == "l"
                                    address98 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                    @offset = @offset + 1
                                  else
                                    address98 = FAILURE
                                    if @offset > @failure
                                      @failure = @offset
                                      @expected = []
                                    end
                                    if @offset == @failure
                                      @expected << "\"l\""
                                    end
                                  end
                                  if address98 == FAILURE
                                    @offset = index79
                                    chunk98 = nil
                                    if @offset < @input_size
                                      chunk98 = @input[@offset...@offset + 1]
                                    end
                                    if chunk98 == "L"
                                      address98 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address98 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "\"L\""
                                      end
                                    end
                                    if address98 == FAILURE
                                      @offset = index79
                                    end
                                  end
                                end
                              end
                              unless address98 == FAILURE
                                elements38 << address98
                              else
                                elements38 = nil
                                @offset = index76
                              end
                            else
                              elements38 = nil
                              @offset = index76
                            end
                            if elements38.nil?
                              address94 = FAILURE
                            else
                              address94 = TreeNode.new(@input[index76...@offset], index76, elements38)
                              @offset = @offset
                            end
                            if address94 == FAILURE
                              @offset = index72
                              index80 = @offset
                              chunk99 = nil
                              if @offset < @input_size
                                chunk99 = @input[@offset...@offset + 1]
                              end
                              if chunk99 == "u"
                                address94 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address94 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "\"u\""
                                end
                              end
                              if address94 == FAILURE
                                @offset = index80
                                chunk100 = nil
                                if @offset < @input_size
                                  chunk100 = @input[@offset...@offset + 1]
                                end
                                if chunk100 == "U"
                                  address94 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address94 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "\"U\""
                                  end
                                end
                                if address94 == FAILURE
                                  @offset = index80
                                end
                              end
                              if address94 == FAILURE
                                @offset = index72
                              end
                            end
                          end
                          if address94 == FAILURE
                            address94 = TreeNode.new(@input[index71...index71], index71)
                            @offset = index71
                          end
                          unless address94 == FAILURE
                            elements35 << address94
                            address99 = FAILURE
                            address99 = _read_SPACE
                            unless address99 == FAILURE
                              elements35 << address99
                            else
                              elements35 = nil
                              @offset = index69
                            end
                          else
                            elements35 = nil
                            @offset = index69
                          end
                        else
                          elements35 = nil
                          @offset = index69
                        end
                      else
                        elements35 = nil
                        @offset = index69
                      end
                      if elements35.nil?
                        address0 = FAILURE
                      else
                        address0 = TreeNode258.new(@input[index69...@offset], index69, elements35)
                        @offset = @offset
                      end
                      if address0 == FAILURE
                        @offset = index1
                        index81, elements39 = @offset, []
                        address100 = FAILURE
                        chunk101 = nil
                        if @offset < @input_size
                          chunk101 = @input[@offset...@offset + 1]
                        end
                        if chunk101 =~ /\A[1-9]/
                          address100 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                          @offset = @offset + 1
                        else
                          address100 = FAILURE
                          if @offset > @failure
                            @failure = @offset
                            @expected = []
                          end
                          if @offset == @failure
                            @expected << "[1-9]"
                          end
                        end
                        unless address100 == FAILURE
                          elements39 << address100
                          address101 = FAILURE
                          remaining19, index82, elements40, address102 = 0, @offset, [], true
                          until address102 == FAILURE
                            chunk102 = nil
                            if @offset < @input_size
                              chunk102 = @input[@offset...@offset + 1]
                            end
                            if chunk102 =~ /\A[0-9]/
                              address102 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                              @offset = @offset + 1
                            else
                              address102 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "[0-9]"
                              end
                            end
                            unless address102 == FAILURE
                              elements40 << address102
                              remaining19 -= 1
                            end
                          end
                          if remaining19 <= 0
                            address101 = TreeNode.new(@input[index82...@offset], index82, elements40)
                            @offset = @offset
                          else
                            address101 = FAILURE
                          end
                          unless address101 == FAILURE
                            elements39 << address101
                            address103 = FAILURE
                            index83 = @offset
                            index84 = @offset
                            index85, elements41 = @offset, []
                            address104 = FAILURE
                            index86 = @offset
                            chunk103 = nil
                            if @offset < @input_size
                              chunk103 = @input[@offset...@offset + 2]
                            end
                            if chunk103 == "ll"
                              address104 = TreeNode.new(@input[@offset...@offset + 2], @offset)
                              @offset = @offset + 2
                            else
                              address104 = FAILURE
                              if @offset > @failure
                                @failure = @offset
                                @expected = []
                              end
                              if @offset == @failure
                                @expected << "\"ll\""
                              end
                            end
                            if address104 == FAILURE
                              @offset = index86
                              chunk104 = nil
                              if @offset < @input_size
                                chunk104 = @input[@offset...@offset + 2]
                              end
                              if chunk104 == "LL"
                                address104 = TreeNode.new(@input[@offset...@offset + 2], @offset)
                                @offset = @offset + 2
                              else
                                address104 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "\"LL\""
                                end
                              end
                              if address104 == FAILURE
                                @offset = index86
                                chunk105 = nil
                                if @offset < @input_size
                                  chunk105 = @input[@offset...@offset + 1]
                                end
                                if chunk105 == "l"
                                  address104 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address104 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "\"l\""
                                  end
                                end
                                if address104 == FAILURE
                                  @offset = index86
                                  chunk106 = nil
                                  if @offset < @input_size
                                    chunk106 = @input[@offset...@offset + 1]
                                  end
                                  if chunk106 == "L"
                                    address104 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                    @offset = @offset + 1
                                  else
                                    address104 = FAILURE
                                    if @offset > @failure
                                      @failure = @offset
                                      @expected = []
                                    end
                                    if @offset == @failure
                                      @expected << "\"L\""
                                    end
                                  end
                                  if address104 == FAILURE
                                    @offset = index86
                                  end
                                end
                              end
                            end
                            unless address104 == FAILURE
                              elements41 << address104
                              address105 = FAILURE
                              index87 = @offset
                              chunk107 = nil
                              if @offset < @input_size
                                chunk107 = @input[@offset...@offset + 1]
                              end
                              if chunk107 == "u"
                                address105 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address105 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "\"u\""
                                end
                              end
                              if address105 == FAILURE
                                @offset = index87
                                chunk108 = nil
                                if @offset < @input_size
                                  chunk108 = @input[@offset...@offset + 1]
                                end
                                if chunk108 == "U"
                                  address105 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address105 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "\"U\""
                                  end
                                end
                                if address105 == FAILURE
                                  @offset = index87
                                end
                              end
                              unless address105 == FAILURE
                                elements41 << address105
                              else
                                elements41 = nil
                                @offset = index85
                              end
                            else
                              elements41 = nil
                              @offset = index85
                            end
                            if elements41.nil?
                              address103 = FAILURE
                            else
                              address103 = TreeNode.new(@input[index85...@offset], index85, elements41)
                              @offset = @offset
                            end
                            if address103 == FAILURE
                              @offset = index84
                              index88, elements42 = @offset, []
                              address106 = FAILURE
                              index89 = @offset
                              index90 = @offset
                              chunk109 = nil
                              if @offset < @input_size
                                chunk109 = @input[@offset...@offset + 1]
                              end
                              if chunk109 == "u"
                                address106 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                @offset = @offset + 1
                              else
                                address106 = FAILURE
                                if @offset > @failure
                                  @failure = @offset
                                  @expected = []
                                end
                                if @offset == @failure
                                  @expected << "\"u\""
                                end
                              end
                              if address106 == FAILURE
                                @offset = index90
                                chunk110 = nil
                                if @offset < @input_size
                                  chunk110 = @input[@offset...@offset + 1]
                                end
                                if chunk110 == "U"
                                  address106 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address106 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "\"U\""
                                  end
                                end
                                if address106 == FAILURE
                                  @offset = index90
                                end
                              end
                              if address106 == FAILURE
                                address106 = TreeNode.new(@input[index89...index89], index89)
                                @offset = index89
                              end
                              unless address106 == FAILURE
                                elements42 << address106
                                address107 = FAILURE
                                index91 = @offset
                                chunk111 = nil
                                if @offset < @input_size
                                  chunk111 = @input[@offset...@offset + 2]
                                end
                                if chunk111 == "ll"
                                  address107 = TreeNode.new(@input[@offset...@offset + 2], @offset)
                                  @offset = @offset + 2
                                else
                                  address107 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "\"ll\""
                                  end
                                end
                                if address107 == FAILURE
                                  @offset = index91
                                  chunk112 = nil
                                  if @offset < @input_size
                                    chunk112 = @input[@offset...@offset + 2]
                                  end
                                  if chunk112 == "LL"
                                    address107 = TreeNode.new(@input[@offset...@offset + 2], @offset)
                                    @offset = @offset + 2
                                  else
                                    address107 = FAILURE
                                    if @offset > @failure
                                      @failure = @offset
                                      @expected = []
                                    end
                                    if @offset == @failure
                                      @expected << "\"LL\""
                                    end
                                  end
                                  if address107 == FAILURE
                                    @offset = index91
                                    chunk113 = nil
                                    if @offset < @input_size
                                      chunk113 = @input[@offset...@offset + 1]
                                    end
                                    if chunk113 == "l"
                                      address107 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                      @offset = @offset + 1
                                    else
                                      address107 = FAILURE
                                      if @offset > @failure
                                        @failure = @offset
                                        @expected = []
                                      end
                                      if @offset == @failure
                                        @expected << "\"l\""
                                      end
                                    end
                                    if address107 == FAILURE
                                      @offset = index91
                                      chunk114 = nil
                                      if @offset < @input_size
                                        chunk114 = @input[@offset...@offset + 1]
                                      end
                                      if chunk114 == "L"
                                        address107 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                        @offset = @offset + 1
                                      else
                                        address107 = FAILURE
                                        if @offset > @failure
                                          @failure = @offset
                                          @expected = []
                                        end
                                        if @offset == @failure
                                          @expected << "\"L\""
                                        end
                                      end
                                      if address107 == FAILURE
                                        @offset = index91
                                      end
                                    end
                                  end
                                end
                                unless address107 == FAILURE
                                  elements42 << address107
                                else
                                  elements42 = nil
                                  @offset = index88
                                end
                              else
                                elements42 = nil
                                @offset = index88
                              end
                              if elements42.nil?
                                address103 = FAILURE
                              else
                                address103 = TreeNode.new(@input[index88...@offset], index88, elements42)
                                @offset = @offset
                              end
                              if address103 == FAILURE
                                @offset = index84
                                index92 = @offset
                                chunk115 = nil
                                if @offset < @input_size
                                  chunk115 = @input[@offset...@offset + 1]
                                end
                                if chunk115 == "u"
                                  address103 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                  @offset = @offset + 1
                                else
                                  address103 = FAILURE
                                  if @offset > @failure
                                    @failure = @offset
                                    @expected = []
                                  end
                                  if @offset == @failure
                                    @expected << "\"u\""
                                  end
                                end
                                if address103 == FAILURE
                                  @offset = index92
                                  chunk116 = nil
                                  if @offset < @input_size
                                    chunk116 = @input[@offset...@offset + 1]
                                  end
                                  if chunk116 == "U"
                                    address103 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                                    @offset = @offset + 1
                                  else
                                    address103 = FAILURE
                                    if @offset > @failure
                                      @failure = @offset
                                      @expected = []
                                    end
                                    if @offset == @failure
                                      @expected << "\"U\""
                                    end
                                  end
                                  if address103 == FAILURE
                                    @offset = index92
                                  end
                                end
                                if address103 == FAILURE
                                  @offset = index84
                                end
                              end
                            end
                            if address103 == FAILURE
                              address103 = TreeNode.new(@input[index83...index83], index83)
                              @offset = index83
                            end
                            unless address103 == FAILURE
                              elements39 << address103
                              address108 = FAILURE
                              address108 = _read_SPACE
                              unless address108 == FAILURE
                                elements39 << address108
                              else
                                elements39 = nil
                                @offset = index81
                              end
                            else
                              elements39 = nil
                              @offset = index81
                            end
                          else
                            elements39 = nil
                            @offset = index81
                          end
                        else
                          elements39 = nil
                          @offset = index81
                        end
                        if elements39.nil?
                          address0 = FAILURE
                        else
                          address0 = TreeNode259.new(@input[index81...@offset], index81, elements39)
                          @offset = @offset
                        end
                        if address0 == FAILURE
                          @offset = index1
                        end
                      end
                    end
                  end
                end
              end
            end
          end
        end
      end
      @cache[:CONSTANT][index0] = [address0, @offset]
      return address0
    end

    def _read_STRING_LITERAL
      address0, index0 = FAILURE, @offset
      cached = @cache[:STRING_LITERAL][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      index2 = @offset
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 1]
      end
      if chunk0 == "L"
        address1 = TreeNode.new(@input[@offset...@offset + 1], @offset)
        @offset = @offset + 1
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"L\""
        end
      end
      if address1 == FAILURE
        address1 = TreeNode.new(@input[index2...index2], index2)
        @offset = index2
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        chunk1 = nil
        if @offset < @input_size
          chunk1 = @input[@offset...@offset + 1]
        end
        if chunk1 == "\""
          address2 = TreeNode.new(@input[@offset...@offset + 1], @offset)
          @offset = @offset + 1
        else
          address2 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "\"\\\"\""
          end
        end
        unless address2 == FAILURE
          elements0 << address2
          address3 = FAILURE
          remaining0, index3, elements1, address4 = 0, @offset, [], true
          until address4 == FAILURE
            index4 = @offset
            index5, elements2 = @offset, []
            address5 = FAILURE
            chunk2 = nil
            if @offset < @input_size
              chunk2 = @input[@offset...@offset + 1]
            end
            if chunk2 == "\\"
              address5 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address5 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "\"\\\\\""
              end
            end
            unless address5 == FAILURE
              elements2 << address5
              address6 = FAILURE
              chunk3 = nil
              if @offset < @input_size
                chunk3 = @input[@offset...@offset + 1]
              end
              if chunk3 =~ /\A[^\n]/
                address6 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address6 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "[^\\n]"
                end
              end
              unless address6 == FAILURE
                elements2 << address6
              else
                elements2 = nil
                @offset = index5
              end
            else
              elements2 = nil
              @offset = index5
            end
            if elements2.nil?
              address4 = FAILURE
            else
              address4 = TreeNode.new(@input[index5...@offset], index5, elements2)
              @offset = @offset
            end
            if address4 == FAILURE
              @offset = index4
              chunk4 = nil
              if @offset < @input_size
                chunk4 = @input[@offset...@offset + 1]
              end
              if chunk4 =~ /\A[^\\\"\n]/
                address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
                @offset = @offset + 1
              else
                address4 = FAILURE
                if @offset > @failure
                  @failure = @offset
                  @expected = []
                end
                if @offset == @failure
                  @expected << "[^\\\\\\\"\\n]"
                end
              end
              if address4 == FAILURE
                @offset = index4
              end
            end
            unless address4 == FAILURE
              elements1 << address4
              remaining0 -= 1
            end
          end
          if remaining0 <= 0
            address3 = TreeNode.new(@input[index3...@offset], index3, elements1)
            @offset = @offset
          else
            address3 = FAILURE
          end
          unless address3 == FAILURE
            elements0 << address3
            address7 = FAILURE
            chunk5 = nil
            if @offset < @input_size
              chunk5 = @input[@offset...@offset + 1]
            end
            if chunk5 == "\""
              address7 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address7 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "\"\\\"\""
              end
            end
            unless address7 == FAILURE
              elements0 << address7
              address8 = FAILURE
              address8 = _read_SPACE
              unless address8 == FAILURE
                elements0 << address8
              else
                elements0 = nil
                @offset = index1
              end
            else
              elements0 = nil
              @offset = index1
            end
          else
            elements0 = nil
            @offset = index1
          end
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode260.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:STRING_LITERAL][index0] = [address0, @offset]
      return address0
    end

    def _read_ELLIPSIS
      address0, index0 = FAILURE, @offset
      cached = @cache[:ELLIPSIS][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 3]
      end
      if chunk0 == "..."
        address1 = TreeNode.new(@input[@offset...@offset + 3], @offset)
        @offset = @offset + 3
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"...\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode261.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:ELLIPSIS][index0] = [address0, @offset]
      return address0
    end

    def _read_RIGHT_ASSIGN
      address0, index0 = FAILURE, @offset
      cached = @cache[:RIGHT_ASSIGN][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 3]
      end
      if chunk0 == ">>="
        address1 = TreeNode.new(@input[@offset...@offset + 3], @offset)
        @offset = @offset + 3
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\">>=\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode262.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:RIGHT_ASSIGN][index0] = [address0, @offset]
      return address0
    end

    def _read_LEFT_ASSIGN
      address0, index0 = FAILURE, @offset
      cached = @cache[:LEFT_ASSIGN][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 3]
      end
      if chunk0 == "<<="
        address1 = TreeNode.new(@input[@offset...@offset + 3], @offset)
        @offset = @offset + 3
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"<<=\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode263.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:LEFT_ASSIGN][index0] = [address0, @offset]
      return address0
    end

    def _read_ADD_ASSIGN
      address0, index0 = FAILURE, @offset
      cached = @cache[:ADD_ASSIGN][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "+="
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"+=\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode264.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:ADD_ASSIGN][index0] = [address0, @offset]
      return address0
    end

    def _read_SUB_ASSIGN
      address0, index0 = FAILURE, @offset
      cached = @cache[:SUB_ASSIGN][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "-="
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"-=\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode265.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:SUB_ASSIGN][index0] = [address0, @offset]
      return address0
    end

    def _read_MUL_ASSIGN
      address0, index0 = FAILURE, @offset
      cached = @cache[:MUL_ASSIGN][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "*="
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"*=\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode266.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:MUL_ASSIGN][index0] = [address0, @offset]
      return address0
    end

    def _read_DIV_ASSIGN
      address0, index0 = FAILURE, @offset
      cached = @cache[:DIV_ASSIGN][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "/="
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"/=\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode267.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:DIV_ASSIGN][index0] = [address0, @offset]
      return address0
    end

    def _read_MOD_ASSIGN
      address0, index0 = FAILURE, @offset
      cached = @cache[:MOD_ASSIGN][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "%="
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"%=\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode268.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:MOD_ASSIGN][index0] = [address0, @offset]
      return address0
    end

    def _read_AND_ASSIGN
      address0, index0 = FAILURE, @offset
      cached = @cache[:AND_ASSIGN][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "&="
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"&=\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode269.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:AND_ASSIGN][index0] = [address0, @offset]
      return address0
    end

    def _read_XOR_ASSIGN
      address0, index0 = FAILURE, @offset
      cached = @cache[:XOR_ASSIGN][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "^="
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"^=\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode270.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:XOR_ASSIGN][index0] = [address0, @offset]
      return address0
    end

    def _read_OR_ASSIGN
      address0, index0 = FAILURE, @offset
      cached = @cache[:OR_ASSIGN][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "|="
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"|=\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode271.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:OR_ASSIGN][index0] = [address0, @offset]
      return address0
    end

    def _read_RIGHT_OP
      address0, index0 = FAILURE, @offset
      cached = @cache[:RIGHT_OP][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == ">>"
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\">>\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode272.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:RIGHT_OP][index0] = [address0, @offset]
      return address0
    end

    def _read_LEFT_OP
      address0, index0 = FAILURE, @offset
      cached = @cache[:LEFT_OP][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "<<"
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"<<\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode273.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:LEFT_OP][index0] = [address0, @offset]
      return address0
    end

    def _read_INC_OP
      address0, index0 = FAILURE, @offset
      cached = @cache[:INC_OP][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "++"
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"++\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode274.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:INC_OP][index0] = [address0, @offset]
      return address0
    end

    def _read_DEC_OP
      address0, index0 = FAILURE, @offset
      cached = @cache[:DEC_OP][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "--"
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"--\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode275.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:DEC_OP][index0] = [address0, @offset]
      return address0
    end

    def _read_PTR_OP
      address0, index0 = FAILURE, @offset
      cached = @cache[:PTR_OP][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "->"
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"->\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode276.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:PTR_OP][index0] = [address0, @offset]
      return address0
    end

    def _read_AND_OP
      address0, index0 = FAILURE, @offset
      cached = @cache[:AND_OP][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "&&"
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"&&\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode277.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:AND_OP][index0] = [address0, @offset]
      return address0
    end

    def _read_OR_OP
      address0, index0 = FAILURE, @offset
      cached = @cache[:OR_OP][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "||"
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"||\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode278.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:OR_OP][index0] = [address0, @offset]
      return address0
    end

    def _read_LE_OP
      address0, index0 = FAILURE, @offset
      cached = @cache[:LE_OP][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "<="
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"<=\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode279.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:LE_OP][index0] = [address0, @offset]
      return address0
    end

    def _read_GE_OP
      address0, index0 = FAILURE, @offset
      cached = @cache[:GE_OP][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == ">="
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\">=\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode280.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:GE_OP][index0] = [address0, @offset]
      return address0
    end

    def _read_EQ_OP
      address0, index0 = FAILURE, @offset
      cached = @cache[:EQ_OP][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "=="
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"==\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode281.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:EQ_OP][index0] = [address0, @offset]
      return address0
    end

    def _read_NE_OP
      address0, index0 = FAILURE, @offset
      cached = @cache[:NE_OP][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 2]
      end
      if chunk0 == "!="
        address1 = TreeNode.new(@input[@offset...@offset + 2], @offset)
        @offset = @offset + 2
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "\"!=\""
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode282.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:NE_OP][index0] = [address0, @offset]
      return address0
    end

    def _read_SPACE
      address0, index0 = FAILURE, @offset
      cached = @cache[:SPACE][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      remaining0, index1, elements0, address1 = 0, @offset, [], true
      until address1 == FAILURE
        index2 = @offset
        index3, elements1 = @offset, []
        address2 = FAILURE
        chunk0 = nil
        if @offset < @input_size
          chunk0 = @input[@offset...@offset + 2]
        end
        if chunk0 == "//"
          address2 = TreeNode.new(@input[@offset...@offset + 2], @offset)
          @offset = @offset + 2
        else
          address2 = FAILURE
          if @offset > @failure
            @failure = @offset
            @expected = []
          end
          if @offset == @failure
            @expected << "\"//\""
          end
        end
        unless address2 == FAILURE
          elements1 << address2
          address3 = FAILURE
          remaining1, index4, elements2, address4 = 0, @offset, [], true
          until address4 == FAILURE
            chunk1 = nil
            if @offset < @input_size
              chunk1 = @input[@offset...@offset + 1]
            end
            if chunk1 =~ /\A[^\n]/
              address4 = TreeNode.new(@input[@offset...@offset + 1], @offset)
              @offset = @offset + 1
            else
              address4 = FAILURE
              if @offset > @failure
                @failure = @offset
                @expected = []
              end
              if @offset == @failure
                @expected << "[^\\n]"
              end
            end
            unless address4 == FAILURE
              elements2 << address4
              remaining1 -= 1
            end
          end
          if remaining1 <= 0
            address3 = TreeNode.new(@input[index4...@offset], index4, elements2)
            @offset = @offset
          else
            address3 = FAILURE
          end
          unless address3 == FAILURE
            elements1 << address3
          else
            elements1 = nil
            @offset = index3
          end
        else
          elements1 = nil
          @offset = index3
        end
        if elements1.nil?
          address1 = FAILURE
        else
          address1 = TreeNode.new(@input[index3...@offset], index3, elements1)
          @offset = @offset
        end
        if address1 == FAILURE
          @offset = index2
          chunk2 = nil
          if @offset < @input_size
            chunk2 = @input[@offset...@offset + 1]
          end
          if chunk2 =~ /\A[ \t\v\n\f]/
            address1 = TreeNode.new(@input[@offset...@offset + 1], @offset)
            @offset = @offset + 1
          else
            address1 = FAILURE
            if @offset > @failure
              @failure = @offset
              @expected = []
            end
            if @offset == @failure
              @expected << "[ \\t\\v\\n\\f]"
            end
          end
          if address1 == FAILURE
            @offset = index2
          end
        end
        unless address1 == FAILURE
          elements0 << address1
          remaining0 -= 1
        end
      end
      if remaining0 <= 0
        address0 = TreeNode.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      else
        address0 = FAILURE
      end
      @cache[:SPACE][index0] = [address0, @offset]
      return address0
    end

    def _read_WORD
      address0, index0 = FAILURE, @offset
      cached = @cache[:WORD][index0]
      if cached
        @offset = cached[1]
        return cached[0]
      end
      index1, elements0 = @offset, []
      address1 = FAILURE
      chunk0 = nil
      if @offset < @input_size
        chunk0 = @input[@offset...@offset + 1]
      end
      if chunk0 =~ /\A[a-zA-Z_0-9]/
        address1 = TreeNode.new(@input[@offset...@offset + 1], @offset)
        @offset = @offset + 1
      else
        address1 = FAILURE
        if @offset > @failure
          @failure = @offset
          @expected = []
        end
        if @offset == @failure
          @expected << "[a-zA-Z_0-9]"
        end
      end
      unless address1 == FAILURE
        elements0 << address1
        address2 = FAILURE
        address2 = _read_SPACE
        unless address2 == FAILURE
          elements0 << address2
        else
          elements0 = nil
          @offset = index1
        end
      else
        elements0 = nil
        @offset = index1
      end
      if elements0.nil?
        address0 = FAILURE
      else
        address0 = TreeNode283.new(@input[index1...@offset], index1, elements0)
        @offset = @offset
      end
      @cache[:WORD][index0] = [address0, @offset]
      return address0
    end
  end

  class Parser
    include Grammar

    def initialize(input, actions, types)
      @input = input
      @input_size = input.size
      @actions = actions
      @actions.set_failure FAILURE
      @types = types
      @offset = 0
      @cache = Hash.new { |h,k| h[k] = {} }
      @failure = 0
      @expected = []
    end

    def parse
      tree = _read_start
      if tree != FAILURE and @offset == @input_size
        return tree
      end
      if @expected.empty?
        @failure = @offset
        @expected << "<EOF>"
      end
      raise ParseError, Parser.format_error(@input, @failure, @expected)
    end

    def self.format_error(input, offset, expected)
      lines, line_no, position = input.split(/\n/), 0, 0
      while position <= offset
        position += lines[line_no].size + 1
        line_no += 1
      end
      message, line = "Line #{line_no}: expected #{expected * ", "}\n", lines[line_no - 1]
      message += "#{line}\n"
      position -= line.size + 1
      message += " " * (offset - position)
      return message + "^"
    end
  end

  def self.parse(input, options = {})
    parser = Parser.new(input, options[:actions], options[:types])
    parser.parse
  end
end
