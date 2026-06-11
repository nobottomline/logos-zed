/**
 * @file Theos Logos grammar for tree-sitter.
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const Objc = require("tree-sitter-objc/grammar");

const LOGOS_DIRECTIVES = [
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
  "%c",
];

module.exports = grammar(Objc, {
  name: "logos",

  rules: {
    _top_level_item: ($, original) => choice(
      original,
      $.logos_config,
      $.logos_group,
      $.logos_hook,
      $.logos_subclass,
      $.logos_hookf,
      $.logos_ctor,
      $.logos_dtor,
    ),

    implementation_definition: ($, original) => choice(
      original,
      $.logos_property,
      $.logos_new,
      $.logos_statement,
    ),

    _expression_not_binary: ($, original) => choice(
      original,
      $.logos_expression,
    ),

    logos_config: $ => prec.right(1, seq(
      field("directive", alias("%config", $.logos_directive)),
      $.logos_argument_list,
      optional(";"),
    )),

    logos_group: $ => seq(
      field("directive", alias("%group", $.logos_directive)),
      field("name", $.identifier),
      repeat($._top_level_item),
      $.logos_end,
    ),

    logos_hook: $ => seq(
      field("directive", alias("%hook", $.logos_directive)),
      field("class", $.identifier),
      optional(seq("(", field("category", optional($.identifier)), ")")),
      repeat($.implementation_definition),
      $.logos_end,
    ),

    logos_subclass: $ => seq(
      field("directive", alias("%subclass", $.logos_directive)),
      field("class", $.identifier),
      ":",
      field("superclass", $.identifier),
      optional(field("protocols", $.protocol_reference_list)),
      repeat($.implementation_definition),
      $.logos_end,
    ),

    logos_hookf: $ => seq(
      field("directive", alias("%hookf", $.logos_directive)),
      $.logos_argument_list,
      field("body", $.compound_statement),
    ),

    logos_ctor: $ => seq(
      field("directive", alias("%ctor", $.logos_directive)),
      optional($.logos_argument_list),
      field("body", $.compound_statement),
    ),

    logos_dtor: $ => seq(
      field("directive", alias("%dtor", $.logos_directive)),
      optional($.logos_argument_list),
      field("body", $.compound_statement),
    ),

    logos_property: $ => seq(
      field("directive", alias("%property", $.logos_directive)),
      optional(token(/[^;\n]+/)),
      ";",
    ),

    logos_new: $ => prec.right(1, seq(
      field("directive", alias("%new", $.logos_directive)),
      optional($.logos_argument_list),
      optional(";"),
    )),

    logos_statement: $ => prec.right(1, seq(
      $.logos_expression,
      optional(";"),
    )),

    logos_expression: $ => choice(
      $.logos_orig,
      $.logos_init,
      $.logos_log,
      $.logos_class_lookup,
      $.logos_orig_pointer,
    ),

    logos_orig: $ => prec.right(1, seq(
      field("directive", alias("%orig", $.logos_directive)),
      optional($.logos_argument_list),
    )),

    logos_init: $ => prec.right(1, seq(
      field("directive", alias("%init", $.logos_directive)),
      optional($.logos_argument_list),
    )),

    logos_log: $ => prec.right(1, seq(
      field("directive", alias("%log", $.logos_directive)),
      optional($.logos_argument_list),
    )),

    logos_class_lookup: $ => seq(
      field("directive", alias("%c", $.logos_directive)),
      $.logos_argument_list,
    ),

    logos_orig_pointer: $ => alias("&%orig", $.logos_directive),

    logos_end: $ => alias("%end", $.logos_directive),

    logos_argument_list: $ => seq(
      "(",
      repeat(choice(
        $.logos_argument_list,
        $.logos_expression,
        $.comment,
        token(/[^()%\n]+/),
        token(/%[A-Za-z_][A-Za-z0-9_]*/),
      )),
      ")",
    ),

    logos_directive: _ => token(choice(...LOGOS_DIRECTIVES)),
  },
});
