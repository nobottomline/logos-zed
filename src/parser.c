#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym__whitespace = 2,
  sym_comment = 3,
  sym__inline_whitespace = 4,
  sym_preproc_import_keyword = 5,
  sym_preproc_keyword = 6,
  sym_system_header = 7,
  sym_preproc_rest = 8,
  sym_logos_orig_pointer = 9,
  sym_logos_directive = 10,
  sym_objc_keyword = 11,
  sym_builtin_type = 12,
  sym_keyword = 13,
  sym_objc_string_literal = 14,
  sym_string_literal = 15,
  sym_character_literal = 16,
  sym_number_literal = 17,
  sym_selector_part = 18,
  sym_operator = 19,
  sym_open_bracket = 20,
  sym_close_bracket = 21,
  sym_punctuation = 22,
  sym_unknown = 23,
  sym_source_file = 24,
  sym__token = 25,
  sym_preproc_import = 26,
  sym_preproc_directive = 27,
  aux_sym_source_file_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym__whitespace] = "_whitespace",
  [sym_comment] = "comment",
  [sym__inline_whitespace] = "_inline_whitespace",
  [sym_preproc_import_keyword] = "preproc_import_keyword",
  [sym_preproc_keyword] = "preproc_keyword",
  [sym_system_header] = "system_header",
  [sym_preproc_rest] = "preproc_rest",
  [sym_logos_orig_pointer] = "logos_orig_pointer",
  [sym_logos_directive] = "logos_directive",
  [sym_objc_keyword] = "objc_keyword",
  [sym_builtin_type] = "builtin_type",
  [sym_keyword] = "keyword",
  [sym_objc_string_literal] = "objc_string_literal",
  [sym_string_literal] = "string_literal",
  [sym_character_literal] = "character_literal",
  [sym_number_literal] = "number_literal",
  [sym_selector_part] = "selector_part",
  [sym_operator] = "operator",
  [sym_open_bracket] = "open_bracket",
  [sym_close_bracket] = "close_bracket",
  [sym_punctuation] = "punctuation",
  [sym_unknown] = "unknown",
  [sym_source_file] = "source_file",
  [sym__token] = "_token",
  [sym_preproc_import] = "preproc_import",
  [sym_preproc_directive] = "preproc_directive",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym__whitespace] = sym__whitespace,
  [sym_comment] = sym_comment,
  [sym__inline_whitespace] = sym__inline_whitespace,
  [sym_preproc_import_keyword] = sym_preproc_import_keyword,
  [sym_preproc_keyword] = sym_preproc_keyword,
  [sym_system_header] = sym_system_header,
  [sym_preproc_rest] = sym_preproc_rest,
  [sym_logos_orig_pointer] = sym_logos_orig_pointer,
  [sym_logos_directive] = sym_logos_directive,
  [sym_objc_keyword] = sym_objc_keyword,
  [sym_builtin_type] = sym_builtin_type,
  [sym_keyword] = sym_keyword,
  [sym_objc_string_literal] = sym_objc_string_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_character_literal] = sym_character_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_selector_part] = sym_selector_part,
  [sym_operator] = sym_operator,
  [sym_open_bracket] = sym_open_bracket,
  [sym_close_bracket] = sym_close_bracket,
  [sym_punctuation] = sym_punctuation,
  [sym_unknown] = sym_unknown,
  [sym_source_file] = sym_source_file,
  [sym__token] = sym__token,
  [sym_preproc_import] = sym_preproc_import,
  [sym_preproc_directive] = sym_preproc_directive,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_preproc_import_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_system_header] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_rest] = {
    .visible = true,
    .named = true,
  },
  [sym_logos_orig_pointer] = {
    .visible = true,
    .named = true,
  },
  [sym_logos_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_objc_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_objc_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_character_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_part] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_open_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_close_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_punctuation] = {
    .visible = true,
    .named = true,
  },
  [sym_unknown] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_preproc_import] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(207);
      ADVANCE_MAP(
        '\n', 210,
        '!', 464,
        '"', 476,
        '#', 478,
        '%', 466,
        '&', 460,
        '\'', 477,
        '*', 464,
        '+', 467,
        '-', 470,
        '.', 462,
        '/', 461,
        '0', 446,
        ':', 474,
        '<', 463,
        '=', 469,
        '>', 465,
        '@', 459,
        '^', 464,
        '|', 468,
        '\t', 209,
        ' ', 209,
        ',', 473,
        ';', 473,
        '?', 458,
        '~', 458,
        '(', 471,
        '[', 471,
        '{', 471,
        ')', 472,
        ']', 472,
        '}', 472,
        '\f', 210,
        '\r', 210,
        0x200b, 210,
        0x2060, 210,
        0xfeff, 210,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '<') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(214);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(443);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(458);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(219);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(100);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(438);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(217);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(216);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(165);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(86);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(438);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(216);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(437);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(442);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 91:
      if (lookahead == 'k') ADVANCE(439);
      END_STATE();
    case 92:
      if (lookahead == 'k') ADVANCE(16);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(442);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(442);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(438);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 145:
      if (lookahead == 'q') ADVANCE(188);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(442);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 186:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 191:
      if (lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 192:
      if (lookahead == 'w') ADVANCE(438);
      END_STATE();
    case 193:
      if (lookahead == 'w') ADVANCE(442);
      END_STATE();
    case 194:
      if (lookahead == 'y') ADVANCE(438);
      END_STATE();
    case 195:
      if (lookahead == 'y') ADVANCE(442);
      END_STATE();
    case 196:
      if (lookahead == 'z') ADVANCE(46);
      END_STATE();
    case 197:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(453);
      END_STATE();
    case 201:
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 202:
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 203:
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 204:
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 205:
      if (eof) ADVANCE(207);
      ADVANCE_MAP(
        '\n', 210,
        '!', 464,
        '"', 476,
        '#', 478,
        '%', 466,
        '&', 460,
        '\'', 477,
        '*', 464,
        '+', 467,
        '-', 470,
        '.', 462,
        '/', 461,
        '0', 446,
        ':', 474,
        '<', 463,
        '=', 469,
        '>', 465,
        '@', 459,
        '^', 464,
        '|', 468,
        ',', 473,
        ';', 473,
        '?', 458,
        '~', 458,
        '(', 471,
        '[', 471,
        '{', 471,
        ')', 472,
        ']', 472,
        '}', 472,
        '\t', 210,
        '\f', 210,
        '\r', 210,
        ' ', 210,
        0x200b, 210,
        0x2060, 210,
        0xfeff, 210,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 206:
      if (eof) ADVANCE(207);
      ADVANCE_MAP(
        '\n', 210,
        '!', 238,
        '"', 225,
        '#', 268,
        '%', 237,
        '&', 228,
        '\'', 230,
        '*', 238,
        '+', 429,
        '-', 432,
        '.', 233,
        '/', 231,
        '0', 448,
        ':', 234,
        '<', 235,
        '=', 431,
        '>', 236,
        '@', 227,
        '^', 238,
        '|', 430,
        ',', 436,
        ';', 436,
        '?', 436,
        '~', 436,
        '(', 436,
        '[', 436,
        '{', 436,
        ')', 436,
        ']', 436,
        '}', 436,
        '\t', 208,
        '\f', 208,
        '\r', 208,
        ' ', 208,
        0x200b, 208,
        0x2060, 208,
        0xfeff, 208,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(208);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__inline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_preproc_import_keyword);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_preproc_keyword);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_preproc_keyword);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_preproc_keyword);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_system_header);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '"') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '"') ADVANCE(443);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_preproc_rest);
      ADVANCE_MAP(
        '"', 226,
        'a', 421,
        'c', 241,
        'd', 280,
        'e', 339,
        'f', 315,
        'i', 334,
        'o', 371,
        'p', 242,
        'r', 278,
        's', 279,
        't', 307,
      );
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '%') ADVANCE(367);
      if (lookahead == '&' ||
          lookahead == '=') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '*') ADVANCE(223);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '=') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '.') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == ':') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '=') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '=') ADVANCE(436);
      if (lookahead == '>') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_preproc_rest);
      ADVANCE_MAP(
        '=', 436,
        'c', 441,
        'd', 408,
        'e', 342,
        'g', 382,
        'h', 360,
        'i', 340,
        'l', 352,
        'n', 277,
        'o', 381,
        'p', 386,
        's', 417,
      );
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '=') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'l') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'a') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'b') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'b') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'c') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'c') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'c') ADVANCE(357);
      if (lookahead == 'd') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'c') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'c') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'd') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'd') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'd') ADVANCE(276);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == 'p') ADVANCE(380);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead == 'w') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'd') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == 'y') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == 'y') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(374);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'f') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'f') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'f') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'g') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'g') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'g') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'g') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'g') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'h') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'h') ADVANCE(391);
      if (lookahead == 'r') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'i') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'i') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'k') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'l') ADVANCE(311);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'l') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead == 'o') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'm') ADVANCE(370);
      if (lookahead == 'n') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'm') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'n') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'n') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'n') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'n') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'o') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'o') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'o') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'o') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'o') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'p') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'p') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'p') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'p') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'p') ADVANCE(293);
      if (lookahead == 't') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'q') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 's') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 's') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 't') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'u') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'u') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'u') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'u') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'v') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'w') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'w') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'y') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'y') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == 'z') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '=' ||
          lookahead == '|') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_preproc_rest);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_logos_orig_pointer);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_logos_directive);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_logos_directive);
      if (lookahead == 'f') ADVANCE(438);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_logos_directive);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_logos_directive);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_objc_keyword);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_objc_string_literal);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_character_literal);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_number_literal);
      ADVANCE_MAP(
        '.', 198,
        'E', 197,
        'e', 197,
        'X', 200,
        'x', 200,
        'F', 454,
        'L', 454,
        'U', 454,
        'f', 454,
        'l', 454,
        'u', 454,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_number_literal);
      ADVANCE_MAP(
        '.', 198,
        'E', 197,
        'e', 197,
        'F', 454,
        'L', 454,
        'U', 454,
        'f', 454,
        'l', 454,
        'u', 454,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_number_literal);
      ADVANCE_MAP(
        '.', 434,
        'E', 428,
        'e', 428,
        'X', 435,
        'x', 435,
        'F', 454,
        'L', 454,
        'U', 454,
        'f', 454,
        'l', 454,
        'u', 454,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_number_literal);
      ADVANCE_MAP(
        '.', 434,
        'E', 428,
        'e', 428,
        'F', 454,
        'L', 454,
        'U', 454,
        'f', 454,
        'l', 454,
        'u', 454,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_number_literal);
      ADVANCE_MAP(
        'E', 197,
        'e', 197,
        'F', 454,
        'L', 454,
        'U', 454,
        'f', 454,
        'l', 454,
        'u', 454,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_number_literal);
      ADVANCE_MAP(
        'E', 428,
        'e', 428,
        'F', 454,
        'L', 454,
        'U', 454,
        'f', 454,
        'l', 454,
        'u', 454,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_selector_part);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_operator);
      ADVANCE_MAP(
        '"', 3,
        'a', 190,
        'c', 11,
        'd', 49,
        'e', 107,
        'f', 84,
        'i', 103,
        'o', 140,
        'p', 12,
        'r', 44,
        's', 45,
        't', 76,
      );
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '&' ||
          lookahead == '=') ADVANCE(458);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '=') ADVANCE(458);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '<') ADVANCE(464);
      if (lookahead == '=') ADVANCE(458);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=') ADVANCE(458);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=') ADVANCE(458);
      if (lookahead == '>') ADVANCE(464);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_operator);
      ADVANCE_MAP(
        '=', 458,
        'c', 440,
        'd', 177,
        'e', 111,
        'g', 151,
        'h', 129,
        'i', 109,
        'l', 121,
        'n', 43,
        'o', 150,
        'p', 155,
        's', 186,
      );
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(458);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=' ||
          lookahead == '|') ADVANCE(458);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(458);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(458);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_open_bracket);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_close_bracket);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_punctuation);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_punctuation);
      if (lookahead == ':') ADVANCE(458);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_unknown);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '"') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(4);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(110);
      if (lookahead == 'w') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'B', 1,
        'C', 2,
        'I', 3,
        'N', 4,
        'S', 5,
        'Y', 6,
        'a', 7,
        'b', 8,
        'c', 9,
        'd', 10,
        'e', 11,
        'f', 12,
        'g', 13,
        'i', 14,
        'n', 15,
        'p', 16,
        'r', 17,
        's', 18,
        't', 19,
        'u', 20,
        'v', 21,
        'w', 22,
      );
      END_STATE();
    case 1:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == 'M') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'U') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(55);
      if (lookahead == 'w') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == 'P') ADVANCE(43);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 28:
      if (lookahead == 'L') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'S') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_builtin_type);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 46:
      if (lookahead == 'w') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 53:
      if (lookahead == 'z') ADVANCE(90);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(98);
      if (lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(43);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(26);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 85:
      if (lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 106:
      if (lookahead == 'k') ADVANCE(26);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 129:
      if (lookahead == 'w') ADVANCE(26);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 148:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 151:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 156:
      if (lookahead == 'x') ADVANCE(168);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 165:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(174);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 180:
      if (lookahead == 'y') ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 205},
  [2] = {.lex_state = 205},
  [3] = {.lex_state = 205},
  [4] = {.lex_state = 206},
  [5] = {.lex_state = 206},
  [6] = {.lex_state = 206},
  [7] = {.lex_state = 205},
  [8] = {.lex_state = 205},
  [9] = {.lex_state = 205},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__inline_whitespace] = ACTIONS(1),
    [sym_preproc_import_keyword] = ACTIONS(1),
    [sym_preproc_keyword] = ACTIONS(1),
    [sym_logos_orig_pointer] = ACTIONS(1),
    [sym_logos_directive] = ACTIONS(1),
    [sym_objc_keyword] = ACTIONS(1),
    [sym_builtin_type] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_objc_string_literal] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_character_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_selector_part] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [sym_open_bracket] = ACTIONS(1),
    [sym_close_bracket] = ACTIONS(1),
    [sym_punctuation] = ACTIONS(1),
    [sym_unknown] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [sym__token] = STATE(2),
    [sym_preproc_import] = STATE(2),
    [sym_preproc_directive] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_preproc_import_keyword] = ACTIONS(9),
    [sym_preproc_keyword] = ACTIONS(11),
    [sym_logos_orig_pointer] = ACTIONS(7),
    [sym_logos_directive] = ACTIONS(7),
    [sym_objc_keyword] = ACTIONS(7),
    [sym_builtin_type] = ACTIONS(7),
    [sym_keyword] = ACTIONS(7),
    [sym_objc_string_literal] = ACTIONS(7),
    [sym_string_literal] = ACTIONS(7),
    [sym_character_literal] = ACTIONS(7),
    [sym_number_literal] = ACTIONS(7),
    [sym_selector_part] = ACTIONS(5),
    [sym_operator] = ACTIONS(5),
    [sym_open_bracket] = ACTIONS(5),
    [sym_close_bracket] = ACTIONS(5),
    [sym_punctuation] = ACTIONS(5),
    [sym_unknown] = ACTIONS(5),
  },
  [2] = {
    [sym__token] = STATE(3),
    [sym_preproc_import] = STATE(3),
    [sym_preproc_directive] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(17),
    [sym_comment] = ACTIONS(17),
    [sym_preproc_import_keyword] = ACTIONS(9),
    [sym_preproc_keyword] = ACTIONS(11),
    [sym_logos_orig_pointer] = ACTIONS(17),
    [sym_logos_directive] = ACTIONS(17),
    [sym_objc_keyword] = ACTIONS(17),
    [sym_builtin_type] = ACTIONS(17),
    [sym_keyword] = ACTIONS(17),
    [sym_objc_string_literal] = ACTIONS(17),
    [sym_string_literal] = ACTIONS(17),
    [sym_character_literal] = ACTIONS(17),
    [sym_number_literal] = ACTIONS(17),
    [sym_selector_part] = ACTIONS(15),
    [sym_operator] = ACTIONS(15),
    [sym_open_bracket] = ACTIONS(15),
    [sym_close_bracket] = ACTIONS(15),
    [sym_punctuation] = ACTIONS(15),
    [sym_unknown] = ACTIONS(15),
  },
  [3] = {
    [sym__token] = STATE(3),
    [sym_preproc_import] = STATE(3),
    [sym_preproc_directive] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym__whitespace] = ACTIONS(24),
    [sym_comment] = ACTIONS(24),
    [sym_preproc_import_keyword] = ACTIONS(27),
    [sym_preproc_keyword] = ACTIONS(30),
    [sym_logos_orig_pointer] = ACTIONS(24),
    [sym_logos_directive] = ACTIONS(24),
    [sym_objc_keyword] = ACTIONS(24),
    [sym_builtin_type] = ACTIONS(24),
    [sym_keyword] = ACTIONS(24),
    [sym_objc_string_literal] = ACTIONS(24),
    [sym_string_literal] = ACTIONS(24),
    [sym_character_literal] = ACTIONS(24),
    [sym_number_literal] = ACTIONS(24),
    [sym_selector_part] = ACTIONS(21),
    [sym_operator] = ACTIONS(21),
    [sym_open_bracket] = ACTIONS(21),
    [sym_close_bracket] = ACTIONS(21),
    [sym_punctuation] = ACTIONS(21),
    [sym_unknown] = ACTIONS(21),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym__whitespace] = ACTIONS(35),
    [sym_comment] = ACTIONS(35),
    [sym_preproc_import_keyword] = ACTIONS(33),
    [sym_preproc_keyword] = ACTIONS(33),
    [sym_preproc_rest] = ACTIONS(37),
    [sym_logos_orig_pointer] = ACTIONS(33),
    [sym_logos_directive] = ACTIONS(33),
    [sym_objc_keyword] = ACTIONS(33),
    [sym_builtin_type] = ACTIONS(33),
    [sym_keyword] = ACTIONS(33),
    [sym_objc_string_literal] = ACTIONS(33),
    [sym_string_literal] = ACTIONS(33),
    [sym_character_literal] = ACTIONS(33),
    [sym_number_literal] = ACTIONS(33),
    [sym_selector_part] = ACTIONS(35),
    [sym_operator] = ACTIONS(35),
    [sym_open_bracket] = ACTIONS(35),
    [sym_close_bracket] = ACTIONS(35),
    [sym_punctuation] = ACTIONS(35),
    [sym_unknown] = ACTIONS(35),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
    [sym__whitespace] = ACTIONS(41),
    [sym_comment] = ACTIONS(41),
    [sym_preproc_import_keyword] = ACTIONS(39),
    [sym_preproc_keyword] = ACTIONS(39),
    [sym_preproc_rest] = ACTIONS(43),
    [sym_logos_orig_pointer] = ACTIONS(39),
    [sym_logos_directive] = ACTIONS(39),
    [sym_objc_keyword] = ACTIONS(39),
    [sym_builtin_type] = ACTIONS(39),
    [sym_keyword] = ACTIONS(39),
    [sym_objc_string_literal] = ACTIONS(39),
    [sym_string_literal] = ACTIONS(39),
    [sym_character_literal] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(39),
    [sym_selector_part] = ACTIONS(41),
    [sym_operator] = ACTIONS(41),
    [sym_open_bracket] = ACTIONS(41),
    [sym_close_bracket] = ACTIONS(41),
    [sym_punctuation] = ACTIONS(41),
    [sym_unknown] = ACTIONS(41),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym__whitespace] = ACTIONS(47),
    [sym_comment] = ACTIONS(47),
    [sym_preproc_import_keyword] = ACTIONS(45),
    [sym_preproc_keyword] = ACTIONS(45),
    [sym_preproc_rest] = ACTIONS(49),
    [sym_logos_orig_pointer] = ACTIONS(45),
    [sym_logos_directive] = ACTIONS(45),
    [sym_objc_keyword] = ACTIONS(45),
    [sym_builtin_type] = ACTIONS(45),
    [sym_keyword] = ACTIONS(45),
    [sym_objc_string_literal] = ACTIONS(45),
    [sym_string_literal] = ACTIONS(45),
    [sym_character_literal] = ACTIONS(45),
    [sym_number_literal] = ACTIONS(45),
    [sym_selector_part] = ACTIONS(47),
    [sym_operator] = ACTIONS(47),
    [sym_open_bracket] = ACTIONS(47),
    [sym_close_bracket] = ACTIONS(47),
    [sym_punctuation] = ACTIONS(47),
    [sym_unknown] = ACTIONS(47),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_identifier] = ACTIONS(53),
    [sym__whitespace] = ACTIONS(51),
    [sym_comment] = ACTIONS(51),
    [sym_preproc_import_keyword] = ACTIONS(51),
    [sym_preproc_keyword] = ACTIONS(51),
    [sym_logos_orig_pointer] = ACTIONS(51),
    [sym_logos_directive] = ACTIONS(51),
    [sym_objc_keyword] = ACTIONS(51),
    [sym_builtin_type] = ACTIONS(51),
    [sym_keyword] = ACTIONS(51),
    [sym_objc_string_literal] = ACTIONS(51),
    [sym_string_literal] = ACTIONS(51),
    [sym_character_literal] = ACTIONS(51),
    [sym_number_literal] = ACTIONS(51),
    [sym_selector_part] = ACTIONS(53),
    [sym_operator] = ACTIONS(53),
    [sym_open_bracket] = ACTIONS(53),
    [sym_close_bracket] = ACTIONS(53),
    [sym_punctuation] = ACTIONS(53),
    [sym_unknown] = ACTIONS(53),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym__whitespace] = ACTIONS(45),
    [sym_comment] = ACTIONS(45),
    [sym_preproc_import_keyword] = ACTIONS(45),
    [sym_preproc_keyword] = ACTIONS(45),
    [sym_logos_orig_pointer] = ACTIONS(45),
    [sym_logos_directive] = ACTIONS(45),
    [sym_objc_keyword] = ACTIONS(45),
    [sym_builtin_type] = ACTIONS(45),
    [sym_keyword] = ACTIONS(45),
    [sym_objc_string_literal] = ACTIONS(45),
    [sym_string_literal] = ACTIONS(45),
    [sym_character_literal] = ACTIONS(45),
    [sym_number_literal] = ACTIONS(45),
    [sym_selector_part] = ACTIONS(47),
    [sym_operator] = ACTIONS(47),
    [sym_open_bracket] = ACTIONS(47),
    [sym_close_bracket] = ACTIONS(47),
    [sym_punctuation] = ACTIONS(47),
    [sym_unknown] = ACTIONS(47),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym__whitespace] = ACTIONS(55),
    [sym_comment] = ACTIONS(55),
    [sym_preproc_import_keyword] = ACTIONS(55),
    [sym_preproc_keyword] = ACTIONS(55),
    [sym_logos_orig_pointer] = ACTIONS(55),
    [sym_logos_directive] = ACTIONS(55),
    [sym_objc_keyword] = ACTIONS(55),
    [sym_builtin_type] = ACTIONS(55),
    [sym_keyword] = ACTIONS(55),
    [sym_objc_string_literal] = ACTIONS(55),
    [sym_string_literal] = ACTIONS(55),
    [sym_character_literal] = ACTIONS(55),
    [sym_number_literal] = ACTIONS(55),
    [sym_selector_part] = ACTIONS(57),
    [sym_operator] = ACTIONS(57),
    [sym_open_bracket] = ACTIONS(57),
    [sym_close_bracket] = ACTIONS(57),
    [sym_punctuation] = ACTIONS(57),
    [sym_unknown] = ACTIONS(57),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(59), 1,
      sym__inline_whitespace,
    ACTIONS(61), 2,
      sym_system_header,
      sym_string_literal,
  [8] = 1,
    ACTIONS(63), 2,
      sym_system_header,
      sym_string_literal,
  [13] = 1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 8,
  [SMALL_STATE(12)] = 13,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_directive, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_directive, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_import, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_import, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_import, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_import, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_directive, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_directive, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_import, 4, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_import, 4, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_logos(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
