#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 5
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym__whitespace = 2,
  sym_comment = 3,
  sym_preproc_directive = 4,
  sym_logos_orig_pointer = 5,
  sym_logos_directive = 6,
  sym_objc_keyword = 7,
  sym_builtin_type = 8,
  sym_keyword = 9,
  sym_objc_string_literal = 10,
  sym_string_literal = 11,
  sym_character_literal = 12,
  sym_number_literal = 13,
  sym_selector_part = 14,
  sym_operator = 15,
  sym_open_bracket = 16,
  sym_close_bracket = 17,
  sym_punctuation = 18,
  sym_unknown = 19,
  sym_source_file = 20,
  sym__token = 21,
  aux_sym_source_file_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym__whitespace] = "_whitespace",
  [sym_comment] = "comment",
  [sym_preproc_directive] = "preproc_directive",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym__whitespace] = sym__whitespace,
  [sym_comment] = sym_comment,
  [sym_preproc_directive] = sym_preproc_directive,
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
  [sym_preproc_directive] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(165);
      ADVANCE_MAP(
        '\n', 166,
        '!', 193,
        '"', 205,
        '#', 169,
        '%', 195,
        '&', 189,
        '\'', 206,
        '*', 193,
        '+', 196,
        '-', 199,
        '.', 191,
        '/', 190,
        '0', 178,
        ':', 203,
        '<', 192,
        '=', 198,
        '>', 194,
        '@', 188,
        '^', 193,
        '|', 197,
        ',', 202,
        ';', 202,
        '?', 187,
        '~', 187,
        '(', 200,
        '[', 200,
        '{', 200,
        ')', 201,
        ']', 201,
        '}', 201,
        '\t', 166,
        '\f', 166,
        '\r', 166,
        ' ', 166,
        0x200b, 166,
        0x2060, 166,
        0xfeff, 166,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(187);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(128);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(174);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 69:
      if (lookahead == 'k') ADVANCE(172);
      END_STATE();
    case 70:
      if (lookahead == 'k') ADVANCE(11);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 113:
      if (lookahead == 'q') ADVANCE(150);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 152:
      if (lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 153:
      if (lookahead == 'w') ADVANCE(171);
      END_STATE();
    case 154:
      if (lookahead == 'w') ADVANCE(174);
      END_STATE();
    case 155:
      if (lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 156:
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 157:
      if (lookahead == 'z') ADVANCE(37);
      END_STATE();
    case 158:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 162:
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 163:
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 164:
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_logos_orig_pointer);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_logos_directive);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_logos_directive);
      if (lookahead == 'f') ADVANCE(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_logos_directive);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_objc_keyword);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_objc_string_literal);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_character_literal);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_number_literal);
      ADVANCE_MAP(
        '.', 159,
        'E', 158,
        'e', 158,
        'X', 161,
        'x', 161,
        'F', 183,
        'L', 183,
        'U', 183,
        'f', 183,
        'l', 183,
        'u', 183,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_number_literal);
      ADVANCE_MAP(
        '.', 159,
        'E', 158,
        'e', 158,
        'F', 183,
        'L', 183,
        'U', 183,
        'f', 183,
        'l', 183,
        'u', 183,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_number_literal);
      ADVANCE_MAP(
        'E', 158,
        'e', 158,
        'F', 183,
        'L', 183,
        'U', 183,
        'f', 183,
        'l', 183,
        'u', 183,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_selector_part);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_operator);
      ADVANCE_MAP(
        '"', 2,
        'a', 151,
        'c', 10,
        'd', 34,
        'e', 83,
        'f', 64,
        'i', 79,
        'o', 109,
        'p', 7,
        'r', 35,
        's', 36,
        't', 58,
      );
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '%') ADVANCE(105);
      if (lookahead == '&' ||
          lookahead == '=') ADVANCE(187);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '=') ADVANCE(187);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '<') ADVANCE(193);
      if (lookahead == '=') ADVANCE(187);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=') ADVANCE(187);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '>') ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_operator);
      ADVANCE_MAP(
        '=', 187,
        'c', 173,
        'd', 140,
        'e', 82,
        'g', 119,
        'h', 100,
        'i', 85,
        'l', 92,
        'n', 33,
        'o', 116,
        'p', 122,
        's', 148,
      );
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(187);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=' ||
          lookahead == '|') ADVANCE(187);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(187);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(187);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_open_bracket);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_close_bracket);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_punctuation);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_punctuation);
      if (lookahead == ':') ADVANCE(187);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_unknown);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_unknown);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(3);
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
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_preproc_directive] = ACTIONS(1),
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
    [sym_source_file] = STATE(4),
    [sym__token] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_preproc_directive] = ACTIONS(7),
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
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(13),
    [sym_comment] = ACTIONS(13),
    [sym_preproc_directive] = ACTIONS(13),
    [sym_logos_orig_pointer] = ACTIONS(13),
    [sym_logos_directive] = ACTIONS(13),
    [sym_objc_keyword] = ACTIONS(13),
    [sym_builtin_type] = ACTIONS(13),
    [sym_keyword] = ACTIONS(13),
    [sym_objc_string_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [sym_character_literal] = ACTIONS(13),
    [sym_number_literal] = ACTIONS(13),
    [sym_selector_part] = ACTIONS(11),
    [sym_operator] = ACTIONS(11),
    [sym_open_bracket] = ACTIONS(11),
    [sym_close_bracket] = ACTIONS(11),
    [sym_punctuation] = ACTIONS(11),
    [sym_unknown] = ACTIONS(11),
  },
  [3] = {
    [sym__token] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym__whitespace] = ACTIONS(20),
    [sym_comment] = ACTIONS(20),
    [sym_preproc_directive] = ACTIONS(20),
    [sym_logos_orig_pointer] = ACTIONS(20),
    [sym_logos_directive] = ACTIONS(20),
    [sym_objc_keyword] = ACTIONS(20),
    [sym_builtin_type] = ACTIONS(20),
    [sym_keyword] = ACTIONS(20),
    [sym_objc_string_literal] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(20),
    [sym_character_literal] = ACTIONS(20),
    [sym_number_literal] = ACTIONS(20),
    [sym_selector_part] = ACTIONS(17),
    [sym_operator] = ACTIONS(17),
    [sym_open_bracket] = ACTIONS(17),
    [sym_close_bracket] = ACTIONS(17),
    [sym_punctuation] = ACTIONS(17),
    [sym_unknown] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [23] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
