#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_DOT = 1,
  anon_sym_const = 2,
  anon_sym_EQ = 3,
  anon_sym_COMMA = 4,
  anon_sym_SEMI = 5,
  anon_sym_var = 6,
  anon_sym_procedure = 7,
  anon_sym_COLON_EQ = 8,
  anon_sym_call = 9,
  anon_sym_QMARK = 10,
  anon_sym_BANG = 11,
  anon_sym_begin = 12,
  anon_sym_end = 13,
  anon_sym_if = 14,
  anon_sym_then = 15,
  anon_sym_while = 16,
  anon_sym_do = 17,
  anon_sym_odd = 18,
  anon_sym_POUND = 19,
  anon_sym_LT = 20,
  anon_sym_LT_EQ = 21,
  anon_sym_GT = 22,
  anon_sym_GT_EQ = 23,
  anon_sym_PLUS = 24,
  anon_sym_DASH = 25,
  anon_sym_STAR = 26,
  anon_sym_SLASH = 27,
  anon_sym_LPAREN = 28,
  anon_sym_RPAREN = 29,
  sym_ident = 30,
  sym_number = 31,
  sym_program = 32,
  sym_block = 33,
  sym_statement = 34,
  sym_condition = 35,
  sym_expression = 36,
  sym_term = 37,
  sym_factor = 38,
  aux_sym_block_repeat1 = 39,
  aux_sym_block_repeat2 = 40,
  aux_sym_block_repeat3 = 41,
  aux_sym_statement_repeat1 = 42,
  aux_sym_expression_repeat1 = 43,
  aux_sym_term_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [anon_sym_const] = "const",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_var] = "var",
  [anon_sym_procedure] = "procedure",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_call] = "call",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BANG] = "!",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_odd] = "odd",
  [anon_sym_POUND] = "#",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_ident] = "ident",
  [sym_number] = "number",
  [sym_program] = "program",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_condition] = "condition",
  [sym_expression] = "expression",
  [sym_term] = "term",
  [sym_factor] = "factor",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_block_repeat2] = "block_repeat2",
  [aux_sym_block_repeat3] = "block_repeat3",
  [aux_sym_statement_repeat1] = "statement_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_term_repeat1] = "term_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_procedure] = anon_sym_procedure,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_odd] = anon_sym_odd,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_ident] = sym_ident,
  [sym_number] = sym_number,
  [sym_program] = sym_program,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_condition] = sym_condition,
  [sym_expression] = sym_expression,
  [sym_term] = sym_term,
  [sym_factor] = sym_factor,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_block_repeat2] = aux_sym_block_repeat2,
  [aux_sym_block_repeat3] = aux_sym_block_repeat3,
  [aux_sym_statement_repeat1] = aux_sym_statement_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_term_repeat1] = aux_sym_term_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_procedure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_odd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_factor] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_term_repeat1] = {
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      ADVANCE_MAP(
        '!', 57,
        '#', 70,
        '(', 79,
        ')', 80,
        '*', 77,
        '+', 75,
        ',', 47,
        '-', 76,
        '.', 43,
        '/', 78,
        ':', 8,
        ';', 48,
        '<', 71,
        '=', 46,
        '>', 73,
        '?', 56,
        'b', 16,
        'c', 9,
        'd', 34,
        'e', 33,
        'i', 21,
        'o', 15,
        'p', 37,
        't', 24,
        'v', 10,
        'w', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 57,
        ',', 47,
        '?', 56,
        'b', 89,
        'c', 82,
        'i', 93,
        'p', 105,
        'w', 95,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 57,
        '?', 56,
        'b', 89,
        'c', 81,
        'i', 93,
        'p', 105,
        'v', 83,
        'w', 95,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(57);
      if (lookahead == '?') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'w') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 57,
        '?', 56,
        'b', 89,
        'c', 82,
        'i', 93,
        'p', 105,
        'v', 83,
        'w', 95,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(57);
      if (lookahead == '?') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'w') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == '-') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_procedure);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_procedure);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_odd);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_odd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_procedure] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_odd] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(90),
    [sym_block] = STATE(75),
    [sym_statement] = STATE(58),
    [aux_sym_block_repeat3] = STATE(33),
    [anon_sym_const] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_procedure] = ACTIONS(7),
    [anon_sym_call] = ACTIONS(9),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_begin] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [sym_ident] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    STATE(3), 1,
      aux_sym_term_repeat1,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 11,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
  [25] = 4,
    STATE(4), 1,
      aux_sym_term_repeat1,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 11,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
  [50] = 4,
    STATE(4), 1,
      aux_sym_term_repeat1,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(33), 11,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
  [75] = 2,
    ACTIONS(42), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(40), 13,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [95] = 2,
    ACTIONS(46), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(44), 13,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [115] = 2,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 13,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [135] = 4,
    STATE(10), 1,
      aux_sym_expression_repeat1,
    ACTIONS(50), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(52), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(48), 9,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [158] = 4,
    STATE(12), 1,
      aux_sym_expression_repeat1,
    ACTIONS(52), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(56), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(54), 9,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [181] = 4,
    STATE(11), 1,
      aux_sym_expression_repeat1,
    ACTIONS(52), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(56), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(54), 9,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [204] = 4,
    STATE(11), 1,
      aux_sym_expression_repeat1,
    ACTIONS(60), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(62), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 9,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [227] = 4,
    STATE(11), 1,
      aux_sym_expression_repeat1,
    ACTIONS(52), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 9,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [250] = 13,
    ACTIONS(3), 1,
      anon_sym_const,
    ACTIONS(5), 1,
      anon_sym_var,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    STATE(33), 1,
      aux_sym_block_repeat3,
    STATE(58), 1,
      sym_statement,
    STATE(74), 1,
      sym_block,
  [290] = 2,
    ACTIONS(60), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 11,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
  [308] = 12,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_block_repeat2,
    STATE(26), 1,
      aux_sym_block_repeat3,
    STATE(65), 1,
      sym_statement,
  [345] = 12,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_block_repeat3,
    STATE(31), 1,
      aux_sym_block_repeat2,
    STATE(55), 1,
      sym_statement,
  [382] = 12,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_block_repeat2,
    STATE(35), 1,
      aux_sym_block_repeat3,
    STATE(64), 1,
      sym_statement,
  [419] = 12,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_block_repeat2,
    STATE(36), 1,
      aux_sym_block_repeat3,
    STATE(66), 1,
      sym_statement,
  [456] = 12,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_block_repeat2,
    STATE(36), 1,
      aux_sym_block_repeat3,
    STATE(66), 1,
      sym_statement,
  [493] = 12,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_block_repeat3,
    STATE(31), 1,
      aux_sym_block_repeat2,
    STATE(69), 1,
      sym_statement,
  [530] = 11,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(71), 1,
      anon_sym_var,
    STATE(25), 1,
      aux_sym_block_repeat3,
    STATE(68), 1,
      sym_statement,
  [564] = 11,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(73), 1,
      anon_sym_var,
    STATE(34), 1,
      aux_sym_block_repeat3,
    STATE(61), 1,
      sym_statement,
  [598] = 10,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(75), 1,
      anon_sym_end,
    STATE(32), 1,
      aux_sym_statement_repeat1,
    STATE(84), 1,
      sym_statement,
  [629] = 10,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    STATE(38), 1,
      aux_sym_block_repeat3,
    STATE(70), 1,
      sym_statement,
  [660] = 10,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    STATE(38), 1,
      aux_sym_block_repeat3,
    STATE(61), 1,
      sym_statement,
  [691] = 10,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    STATE(38), 1,
      aux_sym_block_repeat3,
    STATE(55), 1,
      sym_statement,
  [722] = 9,
    ACTIONS(77), 1,
      anon_sym_odd,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_number,
    STATE(2), 1,
      sym_factor,
    STATE(8), 1,
      sym_term,
    STATE(47), 1,
      sym_expression,
    STATE(76), 1,
      sym_condition,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [751] = 9,
    ACTIONS(77), 1,
      anon_sym_odd,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_number,
    STATE(2), 1,
      sym_factor,
    STATE(8), 1,
      sym_term,
    STATE(47), 1,
      sym_expression,
    STATE(73), 1,
      sym_condition,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [780] = 10,
    ACTIONS(87), 1,
      anon_sym_call,
    ACTIONS(90), 1,
      anon_sym_QMARK,
    ACTIONS(93), 1,
      anon_sym_BANG,
    ACTIONS(96), 1,
      anon_sym_begin,
    ACTIONS(99), 1,
      anon_sym_end,
    ACTIONS(101), 1,
      anon_sym_if,
    ACTIONS(104), 1,
      anon_sym_while,
    ACTIONS(107), 1,
      sym_ident,
    STATE(29), 1,
      aux_sym_statement_repeat1,
    STATE(84), 1,
      sym_statement,
  [811] = 10,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    STATE(38), 1,
      aux_sym_block_repeat3,
    STATE(60), 1,
      sym_statement,
  [842] = 4,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_block_repeat2,
    ACTIONS(115), 2,
      anon_sym_QMARK,
      anon_sym_BANG,
    ACTIONS(113), 6,
      anon_sym_procedure,
      anon_sym_call,
      anon_sym_begin,
      anon_sym_if,
      anon_sym_while,
      sym_ident,
  [861] = 10,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(117), 1,
      anon_sym_end,
    STATE(29), 1,
      aux_sym_statement_repeat1,
    STATE(84), 1,
      sym_statement,
  [892] = 10,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    STATE(38), 1,
      aux_sym_block_repeat3,
    STATE(54), 1,
      sym_statement,
  [923] = 10,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    STATE(38), 1,
      aux_sym_block_repeat3,
    STATE(64), 1,
      sym_statement,
  [954] = 10,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    STATE(38), 1,
      aux_sym_block_repeat3,
    STATE(66), 1,
      sym_statement,
  [985] = 10,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    STATE(38), 1,
      aux_sym_block_repeat3,
    STATE(69), 1,
      sym_statement,
  [1016] = 2,
    ACTIONS(115), 3,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
    ACTIONS(113), 6,
      anon_sym_procedure,
      anon_sym_call,
      anon_sym_begin,
      anon_sym_if,
      anon_sym_while,
      sym_ident,
  [1030] = 4,
    ACTIONS(119), 1,
      anon_sym_procedure,
    STATE(38), 1,
      aux_sym_block_repeat3,
    ACTIONS(124), 2,
      anon_sym_QMARK,
      anon_sym_BANG,
    ACTIONS(122), 5,
      anon_sym_call,
      anon_sym_begin,
      anon_sym_if,
      anon_sym_while,
      sym_ident,
  [1048] = 6,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_factor,
    STATE(8), 1,
      sym_term,
    STATE(83), 1,
      sym_expression,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(85), 2,
      sym_ident,
      sym_number,
  [1069] = 6,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_factor,
    STATE(8), 1,
      sym_term,
    STATE(67), 1,
      sym_expression,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(85), 2,
      sym_ident,
      sym_number,
  [1090] = 6,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_factor,
    STATE(8), 1,
      sym_term,
    STATE(57), 1,
      sym_expression,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(85), 2,
      sym_ident,
      sym_number,
  [1111] = 6,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_factor,
    STATE(8), 1,
      sym_term,
    STATE(62), 1,
      sym_expression,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(85), 2,
      sym_ident,
      sym_number,
  [1132] = 2,
    ACTIONS(128), 2,
      anon_sym_QMARK,
      anon_sym_BANG,
    ACTIONS(126), 6,
      anon_sym_procedure,
      anon_sym_call,
      anon_sym_begin,
      anon_sym_if,
      anon_sym_while,
      sym_ident,
  [1145] = 6,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_factor,
    STATE(8), 1,
      sym_term,
    STATE(59), 1,
      sym_expression,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(85), 2,
      sym_ident,
      sym_number,
  [1166] = 2,
    ACTIONS(130), 2,
      anon_sym_QMARK,
      anon_sym_BANG,
    ACTIONS(99), 6,
      anon_sym_call,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_if,
      anon_sym_while,
      sym_ident,
  [1179] = 8,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_begin,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      sym_ident,
    STATE(56), 1,
      sym_statement,
  [1204] = 2,
    ACTIONS(134), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(132), 4,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1215] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_factor,
    STATE(14), 1,
      sym_term,
    ACTIONS(85), 2,
      sym_ident,
      sym_number,
  [1229] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_factor,
    STATE(9), 1,
      sym_term,
    ACTIONS(85), 2,
      sym_ident,
      sym_number,
  [1243] = 3,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_factor,
    ACTIONS(85), 2,
      sym_ident,
      sym_number,
  [1254] = 3,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      aux_sym_block_repeat1,
  [1264] = 3,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      aux_sym_block_repeat1,
  [1274] = 3,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      aux_sym_block_repeat1,
  [1284] = 1,
    ACTIONS(147), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1289] = 1,
    ACTIONS(149), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1294] = 1,
    ACTIONS(151), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1299] = 1,
    ACTIONS(153), 2,
      anon_sym_then,
      anon_sym_do,
  [1304] = 1,
    ACTIONS(155), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1309] = 1,
    ACTIONS(157), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1314] = 1,
    ACTIONS(159), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1319] = 1,
    ACTIONS(161), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1324] = 1,
    ACTIONS(163), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1329] = 1,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1334] = 1,
    ACTIONS(167), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1339] = 1,
    ACTIONS(169), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1344] = 1,
    ACTIONS(171), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1349] = 1,
    ACTIONS(173), 2,
      anon_sym_then,
      anon_sym_do,
  [1354] = 1,
    ACTIONS(175), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1359] = 1,
    ACTIONS(177), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1364] = 1,
    ACTIONS(179), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1369] = 1,
    ACTIONS(181), 1,
      sym_ident,
  [1373] = 1,
    ACTIONS(183), 1,
      sym_ident,
  [1377] = 1,
    ACTIONS(185), 1,
      anon_sym_do,
  [1381] = 1,
    ACTIONS(187), 1,
      anon_sym_SEMI,
  [1385] = 1,
    ACTIONS(189), 1,
      anon_sym_DOT,
  [1389] = 1,
    ACTIONS(185), 1,
      anon_sym_then,
  [1393] = 1,
    ACTIONS(191), 1,
      sym_number,
  [1397] = 1,
    ACTIONS(193), 1,
      sym_number,
  [1401] = 1,
    ACTIONS(195), 1,
      anon_sym_EQ,
  [1405] = 1,
    ACTIONS(197), 1,
      sym_ident,
  [1409] = 1,
    ACTIONS(199), 1,
      sym_ident,
  [1413] = 1,
    ACTIONS(201), 1,
      anon_sym_SEMI,
  [1417] = 1,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
  [1421] = 1,
    ACTIONS(205), 1,
      anon_sym_SEMI,
  [1425] = 1,
    ACTIONS(207), 1,
      sym_ident,
  [1429] = 1,
    ACTIONS(209), 1,
      sym_ident,
  [1433] = 1,
    ACTIONS(211), 1,
      sym_ident,
  [1437] = 1,
    ACTIONS(213), 1,
      anon_sym_COLON_EQ,
  [1441] = 1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
  [1445] = 1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
  [1449] = 1,
    ACTIONS(219), 1,
      sym_ident,
  [1453] = 1,
    ACTIONS(221), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 135,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 181,
  [SMALL_STATE(11)] = 204,
  [SMALL_STATE(12)] = 227,
  [SMALL_STATE(13)] = 250,
  [SMALL_STATE(14)] = 290,
  [SMALL_STATE(15)] = 308,
  [SMALL_STATE(16)] = 345,
  [SMALL_STATE(17)] = 382,
  [SMALL_STATE(18)] = 419,
  [SMALL_STATE(19)] = 456,
  [SMALL_STATE(20)] = 493,
  [SMALL_STATE(21)] = 530,
  [SMALL_STATE(22)] = 564,
  [SMALL_STATE(23)] = 598,
  [SMALL_STATE(24)] = 629,
  [SMALL_STATE(25)] = 660,
  [SMALL_STATE(26)] = 691,
  [SMALL_STATE(27)] = 722,
  [SMALL_STATE(28)] = 751,
  [SMALL_STATE(29)] = 780,
  [SMALL_STATE(30)] = 811,
  [SMALL_STATE(31)] = 842,
  [SMALL_STATE(32)] = 861,
  [SMALL_STATE(33)] = 892,
  [SMALL_STATE(34)] = 923,
  [SMALL_STATE(35)] = 954,
  [SMALL_STATE(36)] = 985,
  [SMALL_STATE(37)] = 1016,
  [SMALL_STATE(38)] = 1030,
  [SMALL_STATE(39)] = 1048,
  [SMALL_STATE(40)] = 1069,
  [SMALL_STATE(41)] = 1090,
  [SMALL_STATE(42)] = 1111,
  [SMALL_STATE(43)] = 1132,
  [SMALL_STATE(44)] = 1145,
  [SMALL_STATE(45)] = 1166,
  [SMALL_STATE(46)] = 1179,
  [SMALL_STATE(47)] = 1204,
  [SMALL_STATE(48)] = 1215,
  [SMALL_STATE(49)] = 1229,
  [SMALL_STATE(50)] = 1243,
  [SMALL_STATE(51)] = 1254,
  [SMALL_STATE(52)] = 1264,
  [SMALL_STATE(53)] = 1274,
  [SMALL_STATE(54)] = 1284,
  [SMALL_STATE(55)] = 1289,
  [SMALL_STATE(56)] = 1294,
  [SMALL_STATE(57)] = 1299,
  [SMALL_STATE(58)] = 1304,
  [SMALL_STATE(59)] = 1309,
  [SMALL_STATE(60)] = 1314,
  [SMALL_STATE(61)] = 1319,
  [SMALL_STATE(62)] = 1324,
  [SMALL_STATE(63)] = 1329,
  [SMALL_STATE(64)] = 1334,
  [SMALL_STATE(65)] = 1339,
  [SMALL_STATE(66)] = 1344,
  [SMALL_STATE(67)] = 1349,
  [SMALL_STATE(68)] = 1354,
  [SMALL_STATE(69)] = 1359,
  [SMALL_STATE(70)] = 1364,
  [SMALL_STATE(71)] = 1369,
  [SMALL_STATE(72)] = 1373,
  [SMALL_STATE(73)] = 1377,
  [SMALL_STATE(74)] = 1381,
  [SMALL_STATE(75)] = 1385,
  [SMALL_STATE(76)] = 1389,
  [SMALL_STATE(77)] = 1393,
  [SMALL_STATE(78)] = 1397,
  [SMALL_STATE(79)] = 1401,
  [SMALL_STATE(80)] = 1405,
  [SMALL_STATE(81)] = 1409,
  [SMALL_STATE(82)] = 1413,
  [SMALL_STATE(83)] = 1417,
  [SMALL_STATE(84)] = 1421,
  [SMALL_STATE(85)] = 1425,
  [SMALL_STATE(86)] = 1429,
  [SMALL_STATE(87)] = 1433,
  [SMALL_STATE(88)] = 1437,
  [SMALL_STATE(89)] = 1441,
  [SMALL_STATE(90)] = 1445,
  [SMALL_STATE(91)] = 1449,
  [SMALL_STATE(92)] = 1453,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factor, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_factor, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factor, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_factor, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2, 0, 0), SHIFT_REPEAT(85),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat2, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat3, 2, 0, 0), SHIFT_REPEAT(71),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat3, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat3, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat3, 5, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat3, 5, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 4, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 8, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 9, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 10, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 11, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
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

TS_PUBLIC const TSLanguage *tree_sitter_pl0(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
