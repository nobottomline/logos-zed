(comment) @comment

(preproc_directive) @preproc

(logos_orig_pointer) @keyword @preproc
(logos_directive) @keyword @preproc

(objc_keyword) @keyword
(builtin_type) @type.builtin
(keyword) @keyword

(selector_part) @function

((identifier) @type
  (#match? @type "^[A-Z][A-Za-z0-9_]*$"))

((identifier) @variable
  (#match? @variable "^[a-z_][A-Za-z0-9_]*$"))

(number_literal) @number
(objc_string_literal) @string.special
(string_literal) @string
(character_literal) @string.special

(operator) @operator
(open_bracket) @punctuation.bracket
(close_bracket) @punctuation.bracket
(punctuation) @punctuation.delimiter
