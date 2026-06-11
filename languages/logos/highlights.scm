; C

(identifier) @variable

((identifier) @constant
  (#match? @constant "^[A-Z][A-Z\\d_]*$"))

(comment) @comment

[
  "break"
  "case"
  "const"
  "continue"
  "default"
  "do"
  "else"
  "enum"
  "extern"
  "for"
  "if"
  "inline"
  "return"
  "sizeof"
  "static"
  "struct"
  "switch"
  "typedef"
  "union"
  "volatile"
  "while"
] @keyword

[
  "#define"
  "#elif"
  "#else"
  "#endif"
  "#if"
  "#ifdef"
  "#ifndef"
  "#include"
] @preproc

(preproc_directive) @preproc

(preproc_undef
  name: (_) @constant) @preproc

((preproc_include
  _ @preproc
  path: (_) @string.special)
  (#any-of? @preproc "#include" "#import"))

[
  "--"
  "-"
  "-="
  "->"
  "="
  "!="
  "*"
  "&"
  "&&"
  "+"
  "++"
  "+="
  "<"
  "=="
  ">"
  "||"
] @operator

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
  "<"
  ">"
] @punctuation.bracket

[
  "."
  ";"
  ","
  ":"
] @punctuation.delimiter

(string_literal) @string
(system_lib_string) @string.special
(null) @constant.builtin
(number_literal) @number
(char_literal) @string.special

((identifier) @constant.builtin
  (#any-of? @constant.builtin "nil" "Nil" "NULL" "YES" "NO" "true" "false"))

(field_identifier) @property
(statement_identifier) @label
(type_identifier) @type
(primitive_type) @type.builtin
(sized_type_specifier) @type.builtin
(typedefed_specifier) @type.builtin

(call_expression
  function: (identifier) @function)

(call_expression
  function: (field_expression
    field: (field_identifier) @function))

(function_declarator
  declarator: (identifier) @function)

(preproc_function_def
  name: (identifier) @function)

; Objective-C

(module_import
  "@import" @preproc
  path: (identifier) @type)

[
  "@optional"
  "@required"
  "__covariant"
  "__contravariant"
  (visibility_specification)
  (protocol_qualifier)
] @keyword

[
  "@autoreleasepool"
  "@synthesize"
  "@dynamic"
  "@protocol"
  "@interface"
  "@implementation"
  "@compatibility_alias"
  "@property"
  "@selector"
  "@defs"
  "@end"
  "@synchronized"
  "availability"
  "oneway"
] @keyword

(class_declaration
  "@" @punctuation.special
  "class" @keyword)

(method_definition
  ["+" "-"] @keyword)

(method_declaration
  ["+" "-"] @keyword)

[
  "__typeof__"
  "__typeof"
  "typeof"
  "in"
] @keyword

[
  "@try"
  "__try"
  "@catch"
  "__catch"
  "@finally"
  "__finally"
  "@throw"
] @keyword

((identifier) @variable.special
  (#any-of? @variable.special "self" "super"))

[
  "objc_bridge_related"
  "@available"
  "__builtin_available"
  "va_arg"
  "asm"
] @function

(method_definition
  (identifier) @function)

(method_declaration
  (identifier) @function)

(method_identifier
  (identifier)? @function
  ":"
  (identifier)? @function)

(message_expression
  method: (identifier) @function)

((message_expression
  method: (identifier) @constructor)
  (#eq? @constructor "init"))

(class_declaration
  (identifier) @type)

(class_interface
  "@interface"
  .
  (identifier) @type
  superclass: _? @type
  category: _? @type)

(class_implementation
  "@implementation"
  .
  (identifier) @type
  superclass: _? @type
  category: _? @type)

(protocol_forward_declaration
  (identifier) @type)

(protocol_reference_list
  (identifier) @type)

[
  "BOOL"
  "IMP"
  "SEL"
  "Class"
  "id"
] @type.builtin

(property_attribute
  (identifier) @constant
  "="?)

(property_implementation
  "@synthesize"
  (identifier) @property)

(method_parameter
  ":"
  (identifier) @variable)

(method_parameter
  declarator: (identifier) @variable)

(platform) @string.special
(version_number) @number
"@" @punctuation.special

; Logos

(logos_directive) @keyword

(logos_group
  name: (identifier) @type)

(logos_hook
  class: (identifier) @type
  category: (identifier)? @type)

(logos_subclass
  class: (identifier) @type
  superclass: (identifier) @type)

(logos_class_lookup
  (logos_argument_list) @type)

(logos_orig_pointer) @keyword
