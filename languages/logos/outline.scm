; Logos

(logos_group
  (logos_directive) @context
  name: (identifier) @name) @item

(logos_hook
  (logos_directive) @context
  class: (identifier) @name
  category: (identifier)? @name) @item

(logos_subclass
  (logos_directive) @context
  class: (identifier) @name
  ":" @context
  superclass: (identifier) @context) @item

(logos_hookf
  (logos_directive) @context
  (logos_argument_list) @name) @item

(logos_ctor
  (logos_directive) @name) @item

(logos_dtor
  (logos_directive) @name) @item

(logos_property
  (logos_directive) @context
  (struct_declaration
    (struct_declarator) @name)) @item

; Objective-C

(class_interface
  "@interface" @context
  .
  (identifier) @name
  superclass: (identifier)? @context) @item

(class_implementation
  "@implementation" @context
  .
  (identifier) @name) @item

(protocol_declaration
  "@protocol" @context
  (identifier) @name) @item

(method_definition
  ["+" "-"] @context
  (identifier) @name) @item

(method_declaration
  ["+" "-"] @context
  (identifier) @name) @item

(property_declaration
  "@property" @context
  (struct_declaration
    (struct_declarator) @name)) @item

; C

(preproc_def
  "#define" @context
  name: (_) @name) @item

(preproc_function_def
  "#define" @context
  name: (_) @name
  parameters: (preproc_params
    "(" @context
    ")" @context)) @item

(struct_specifier
  "struct" @context
  name: (_) @name) @item

(union_specifier
  "union" @context
  name: (_) @name) @item

(enum_specifier
  "enum" @context
  name: (_) @name) @item

(type_definition
  "typedef" @context
  declarator: (_) @name) @item

(function_definition
  (type_qualifier)? @context
  type: (_)? @context
  declarator: [
    (function_declarator
      declarator: (_) @name
      parameters: (parameter_list
        "(" @context
        ")" @context))
    (pointer_declarator
      "*" @context
      declarator: (function_declarator
        declarator: (_) @name
        parameters: (parameter_list
          "(" @context
          ")" @context)))
  ]) @item

(comment) @annotation
