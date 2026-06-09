/**
 * @file Lexical parser for Theos Logos files.
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  directive: 10,
  literal: 8,
  keyword: 6,
  identifier: 1,
  unknown: -1,
};

module.exports = grammar({
  name: "logos",

  extras: _ => [],

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._token),

    _token: $ => choice(
      $._whitespace,
      $.comment,
      $.preproc_import,
      $.preproc_directive,
      $.logos_orig_pointer,
      $.logos_directive,
      $.objc_keyword,
      $.builtin_type,
      $.keyword,
      $.objc_string_literal,
      $.string_literal,
      $.character_literal,
      $.number_literal,
      $.selector_part,
      $.identifier,
      $.operator,
      $.open_bracket,
      $.close_bracket,
      $.punctuation,
      $.unknown
    ),

    _whitespace: _ => token(/[ \t\r\n\f\uFEFF\u2060\u200B]+/),

    comment: _ => token(choice(
      seq("//", /[^\n]*/),
      seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")
    )),

    preproc_import: $ => seq(
      $.preproc_import_keyword,
      optional($._inline_whitespace),
      choice($.system_header, $.string_literal),
      optional($.preproc_rest)
    ),

    preproc_directive: $ => seq(
      $.preproc_keyword,
      optional($.preproc_rest)
    ),

    _inline_whitespace: _ => token(/[ \t]+/),

    preproc_import_keyword: _ => token(prec(PREC.directive, choice(
      "#import",
      "#include"
    ))),

    preproc_keyword: _ => token(prec(PREC.directive, choice(
      "#define",
      "#undef",
      "#if",
      "#ifdef",
      "#ifndef",
      "#elif",
      "#else",
      "#endif",
      "#pragma",
      "#error",
      "#warning"
    ))),

    system_header: _ => token(prec(PREC.literal, /<[A-Za-z0-9_./+-]+>/)),

    preproc_rest: _ => token(/[^\n]+/),

    logos_orig_pointer: _ => token(prec(PREC.directive, "&%orig")),

    logos_directive: _ => token(prec(PREC.directive, choice(
      "%config",
      "%hookf",
      "%hook",
      "%group",
      "%subclass",
      "%property",
      "%new",
      "%end",
      "%ctor",
      "%dtor",
      "%init",
      "%orig",
      "%log",
      "%c"
    ))),

    objc_keyword: _ => token(prec(PREC.keyword, choice(
      "@autoreleasepool",
      "@catch",
      "@class",
      "@defs",
      "@dynamic",
      "@encode",
      "@end",
      "@finally",
      "@implementation",
      "@import",
      "@interface",
      "@optional",
      "@package",
      "@private",
      "@property",
      "@protected",
      "@protocol",
      "@public",
      "@required",
      "@selector",
      "@synthesize",
      "@throw",
      "@try"
    ))),

    builtin_type: _ => token(prec(PREC.keyword, choice(
      "BOOL",
      "Class",
      "IMP",
      "SEL",
      "id",
      "instancetype",
      "void"
    ))),

    keyword: _ => token(prec(PREC.keyword, choice(
      "asm",
      "auto",
      "break",
      "case",
      "catch",
      "class",
      "const",
      "constexpr",
      "continue",
      "default",
      "delete",
      "do",
      "else",
      "enum",
      "extern",
      "false",
      "for",
      "goto",
      "if",
      "inline",
      "namespace",
      "new",
      "nil",
      "nullptr",
      "private",
      "protected",
      "public",
      "return",
      "self",
      "sizeof",
      "static",
      "struct",
      "super",
      "switch",
      "template",
      "this",
      "throw",
      "true",
      "try",
      "typedef",
      "typename",
      "union",
      "using",
      "volatile",
      "while",
      "NO",
      "NULL",
      "YES"
    ))),

    objc_string_literal: _ => token(prec(PREC.literal, seq(
      "@\"",
      repeat(choice(/[^"\\\n]/, /\\(.|\n)/)),
      "\""
    ))),

    string_literal: _ => token(prec(PREC.literal, seq(
      "\"",
      repeat(choice(/[^"\\\n]/, /\\(.|\n)/)),
      "\""
    ))),

    character_literal: _ => token(prec(PREC.literal, seq(
      "'",
      repeat1(choice(/[^'\\\n]/, /\\(.|\n)/)),
      "'"
    ))),

    number_literal: _ => token(prec(PREC.literal, choice(
      /0[xX][0-9a-fA-F]+[uUlL]*/,
      /[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)?[fFuUlL]*/
    ))),

    selector_part: _ => token(prec(PREC.identifier + 1, /[A-Za-z_][A-Za-z0-9_]*:/)),

    identifier: _ => token(prec(PREC.identifier, /[A-Za-z_][A-Za-z0-9_]*/)),

    operator: _ => token(choice(
      "...",
      "::",
      "->",
      "++",
      "--",
      "==",
      "!=",
      "<=",
      ">=",
      "&&",
      "||",
      "+=",
      "-=",
      "*=",
      "/=",
      "%=",
      "&=",
      "|=",
      "^=",
      "<<=",
      ">>=",
      "<<",
      ">>",
      "=>",
      "+",
      "-",
      "*",
      "/",
      "%",
      "=",
      "<",
      ">",
      "!",
      "~",
      "&",
      "|",
      "^",
      "@",
      "?",
      "."
    )),

    open_bracket: _ => token(choice("(", "[", "{", "<")),

    close_bracket: _ => token(choice(")", "]", "}", ">")),

    punctuation: _ => token(choice(";", ",", ":")),

    unknown: _ => token(prec(PREC.unknown, /./)),
  },
});
