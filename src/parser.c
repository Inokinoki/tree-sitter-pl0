#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 108
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 12
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
  anon_sym_write = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_begin = 15,
  anon_sym_end = 16,
  anon_sym_if = 17,
  anon_sym_then = 18,
  anon_sym_while = 19,
  anon_sym_do = 20,
  anon_sym_odd = 21,
  anon_sym_POUND = 22,
  anon_sym_LT = 23,
  anon_sym_LT_EQ = 24,
  anon_sym_GT = 25,
  anon_sym_GT_EQ = 26,
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_STAR = 29,
  anon_sym_SLASH = 30,
  sym_ident = 31,
  sym_number = 32,
  sym_program = 33,
  sym_block = 34,
  sym_statement = 35,
  sym_condition = 36,
  sym_expression = 37,
  sym_term = 38,
  sym_factor = 39,
  aux_sym_block_repeat1 = 40,
  aux_sym_block_repeat2 = 41,
  aux_sym_block_repeat3 = 42,
  aux_sym_statement_repeat1 = 43,
  aux_sym_statement_repeat2 = 44,
  aux_sym_expression_repeat1 = 45,
  aux_sym_term_repeat1 = 46,
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
  [anon_sym_write] = "write",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [aux_sym_statement_repeat2] = "statement_repeat2",
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
  [anon_sym_write] = anon_sym_write,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [aux_sym_statement_repeat2] = aux_sym_statement_repeat2,
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
  [anon_sym_write] = {
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
  [aux_sym_statement_repeat2] = {
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
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      ADVANCE_MAP(
        '!', 60,
        '#', 77,
        '(', 63,
        ')', 64,
        '*', 84,
        '+', 82,
        ',', 50,
        '-', 83,
        '.', 46,
        '/', 85,
        ':', 8,
        ';', 51,
        '<', 78,
        '=', 49,
        '>', 80,
        '?', 59,
        'b', 16,
        'c', 9,
        'd', 36,
        'e', 35,
        'i', 22,
        'o', 15,
        'p', 39,
        't', 25,
        'v', 10,
        'w', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 60,
        ';', 51,
        '?', 59,
        'b', 94,
        'c', 87,
        'e', 110,
        'i', 99,
        'w', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 60,
        '?', 59,
        'b', 94,
        'c', 86,
        'i', 99,
        'p', 112,
        'v', 88,
        'w', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 60,
        '?', 59,
        'b', 94,
        'c', 87,
        'i', 99,
        'p', 112,
        'v', 88,
        'w', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == '?') ADVANCE(59);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(112);
      if (lookahead == 'w') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == '?') ADVANCE(59);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'w') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == '+') ADVANCE(82);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == '+') ADVANCE(82);
      if (lookahead == '-') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_procedure);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_procedure);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_write);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_odd);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_odd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
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
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
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
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 7},
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
    [anon_sym_write] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(98),
    [sym_block] = STATE(99),
    [sym_statement] = STATE(83),
    [aux_sym_block_repeat3] = STATE(20),
    [anon_sym_const] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_procedure] = ACTIONS(7),
    [anon_sym_call] = ACTIONS(9),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_write] = ACTIONS(15),
    [anon_sym_begin] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_while] = ACTIONS(21),
    [sym_ident] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    STATE(4), 1,
      aux_sym_term_repeat1,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(25), 13,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [27] = 4,
    STATE(2), 1,
      aux_sym_term_repeat1,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 13,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [54] = 4,
    STATE(4), 1,
      aux_sym_term_repeat1,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(35), 13,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [81] = 2,
    ACTIONS(44), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(42), 15,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [103] = 2,
    ACTIONS(48), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(46), 15,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [125] = 2,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 15,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [147] = 4,
    STATE(11), 1,
      aux_sym_expression_repeat1,
    ACTIONS(52), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(54), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(50), 11,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [172] = 4,
    STATE(12), 1,
      aux_sym_expression_repeat1,
    ACTIONS(52), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(54), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(50), 11,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [197] = 4,
    STATE(8), 1,
      aux_sym_expression_repeat1,
    ACTIONS(54), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(56), 11,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [222] = 4,
    STATE(11), 1,
      aux_sym_expression_repeat1,
    ACTIONS(62), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(64), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(60), 11,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [247] = 4,
    STATE(11), 1,
      aux_sym_expression_repeat1,
    ACTIONS(54), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 11,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [272] = 2,
    ACTIONS(62), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(60), 13,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_then,
      anon_sym_do,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [292] = 14,
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
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    STATE(20), 1,
      aux_sym_block_repeat3,
    STATE(83), 1,
      sym_statement,
    STATE(96), 1,
      sym_block,
  [335] = 12,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      anon_sym_end,
    STATE(48), 1,
      aux_sym_statement_repeat2,
    STATE(53), 1,
      sym_statement,
  [372] = 12,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    ACTIONS(75), 1,
      anon_sym_var,
    STATE(24), 1,
      aux_sym_block_repeat3,
    STATE(80), 1,
      sym_statement,
  [409] = 12,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    ACTIONS(77), 1,
      anon_sym_var,
    STATE(23), 1,
      aux_sym_block_repeat3,
    STATE(76), 1,
      sym_statement,
  [446] = 11,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    STATE(32), 1,
      aux_sym_block_repeat3,
    STATE(70), 1,
      sym_statement,
  [480] = 11,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    STATE(21), 1,
      aux_sym_block_repeat3,
    STATE(79), 1,
      sym_statement,
  [514] = 11,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    STATE(32), 1,
      aux_sym_block_repeat3,
    STATE(77), 1,
      sym_statement,
  [548] = 11,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    STATE(32), 1,
      aux_sym_block_repeat3,
    STATE(73), 1,
      sym_statement,
  [582] = 11,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    STATE(26), 1,
      aux_sym_block_repeat3,
    STATE(73), 1,
      sym_statement,
  [616] = 11,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    STATE(32), 1,
      aux_sym_block_repeat3,
    STATE(80), 1,
      sym_statement,
  [650] = 11,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    STATE(32), 1,
      aux_sym_block_repeat3,
    STATE(82), 1,
      sym_statement,
  [684] = 11,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    STATE(27), 1,
      aux_sym_block_repeat3,
    STATE(69), 1,
      sym_statement,
  [718] = 11,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    STATE(32), 1,
      aux_sym_block_repeat3,
    STATE(76), 1,
      sym_statement,
  [752] = 11,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    STATE(32), 1,
      aux_sym_block_repeat3,
    STATE(84), 1,
      sym_statement,
  [786] = 11,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    STATE(29), 1,
      aux_sym_block_repeat3,
    STATE(84), 1,
      sym_statement,
  [820] = 11,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    STATE(32), 1,
      aux_sym_block_repeat3,
    STATE(85), 1,
      sym_statement,
  [854] = 11,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    STATE(18), 1,
      aux_sym_block_repeat3,
    STATE(85), 1,
      sym_statement,
  [888] = 9,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_odd,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      sym_number,
    STATE(3), 1,
      sym_factor,
    STATE(10), 1,
      sym_term,
    STATE(44), 1,
      sym_expression,
    STATE(101), 1,
      sym_condition,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [917] = 4,
    ACTIONS(89), 1,
      anon_sym_procedure,
    STATE(32), 1,
      aux_sym_block_repeat3,
    ACTIONS(94), 2,
      anon_sym_QMARK,
      anon_sym_BANG,
    ACTIONS(92), 6,
      anon_sym_call,
      anon_sym_write,
      anon_sym_begin,
      anon_sym_if,
      anon_sym_while,
      sym_ident,
  [936] = 9,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_odd,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      sym_number,
    STATE(3), 1,
      sym_factor,
    STATE(10), 1,
      sym_term,
    STATE(44), 1,
      sym_expression,
    STATE(87), 1,
      sym_condition,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [965] = 9,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    STATE(51), 1,
      sym_statement,
  [993] = 9,
    ACTIONS(9), 1,
      anon_sym_call,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_write,
    ACTIONS(17), 1,
      anon_sym_begin,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      sym_ident,
    STATE(72), 1,
      sym_statement,
  [1021] = 2,
    ACTIONS(98), 2,
      anon_sym_QMARK,
      anon_sym_BANG,
    ACTIONS(96), 7,
      anon_sym_procedure,
      anon_sym_call,
      anon_sym_write,
      anon_sym_begin,
      anon_sym_if,
      anon_sym_while,
      sym_ident,
  [1035] = 6,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_factor,
    STATE(10), 1,
      sym_term,
    STATE(63), 1,
      sym_expression,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      sym_ident,
      sym_number,
  [1056] = 6,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_factor,
    STATE(10), 1,
      sym_term,
    STATE(66), 1,
      sym_expression,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      sym_ident,
      sym_number,
  [1077] = 6,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_factor,
    STATE(10), 1,
      sym_term,
    STATE(100), 1,
      sym_expression,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      sym_ident,
      sym_number,
  [1098] = 6,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_factor,
    STATE(10), 1,
      sym_term,
    STATE(75), 1,
      sym_expression,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      sym_ident,
      sym_number,
  [1119] = 6,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_factor,
    STATE(10), 1,
      sym_term,
    STATE(74), 1,
      sym_expression,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      sym_ident,
      sym_number,
  [1140] = 6,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_factor,
    STATE(10), 1,
      sym_term,
    STATE(64), 1,
      sym_expression,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      sym_ident,
      sym_number,
  [1161] = 6,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_factor,
    STATE(10), 1,
      sym_term,
    STATE(71), 1,
      sym_expression,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      sym_ident,
      sym_number,
  [1182] = 2,
    ACTIONS(102), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 4,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1193] = 4,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_factor,
    STATE(13), 1,
      sym_term,
    ACTIONS(87), 2,
      sym_ident,
      sym_number,
  [1207] = 4,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_factor,
    STATE(9), 1,
      sym_term,
    ACTIONS(87), 2,
      sym_ident,
      sym_number,
  [1221] = 3,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_factor,
    ACTIONS(87), 2,
      sym_ident,
      sym_number,
  [1232] = 3,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(104), 1,
      anon_sym_end,
    STATE(68), 1,
      aux_sym_statement_repeat2,
  [1242] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      aux_sym_block_repeat1,
  [1252] = 3,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      aux_sym_block_repeat2,
  [1262] = 1,
    ACTIONS(115), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_end,
  [1268] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_statement_repeat1,
  [1278] = 3,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(104), 1,
      anon_sym_end,
    STATE(67), 1,
      aux_sym_statement_repeat2,
  [1288] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      aux_sym_block_repeat1,
  [1298] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      aux_sym_block_repeat2,
  [1308] = 1,
    ACTIONS(127), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_end,
  [1314] = 3,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      aux_sym_block_repeat1,
  [1324] = 3,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_statement_repeat1,
  [1334] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      aux_sym_block_repeat2,
  [1344] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      aux_sym_block_repeat2,
  [1354] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      aux_sym_block_repeat2,
  [1364] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      aux_sym_block_repeat2,
  [1374] = 1,
    ACTIONS(145), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_end,
  [1380] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_statement_repeat1,
  [1390] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      aux_sym_block_repeat2,
  [1400] = 1,
    ACTIONS(151), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_end,
  [1406] = 3,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(147), 1,
      anon_sym_end,
    STATE(68), 1,
      aux_sym_statement_repeat2,
  [1416] = 3,
    ACTIONS(153), 1,
      anon_sym_SEMI,
    ACTIONS(156), 1,
      anon_sym_end,
    STATE(68), 1,
      aux_sym_statement_repeat2,
  [1426] = 1,
    ACTIONS(158), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1431] = 1,
    ACTIONS(160), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1436] = 1,
    ACTIONS(162), 2,
      anon_sym_then,
      anon_sym_do,
  [1441] = 1,
    ACTIONS(156), 2,
      anon_sym_SEMI,
      anon_sym_end,
  [1446] = 1,
    ACTIONS(164), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1451] = 1,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1456] = 1,
    ACTIONS(166), 2,
      anon_sym_then,
      anon_sym_do,
  [1461] = 1,
    ACTIONS(168), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1466] = 1,
    ACTIONS(170), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1471] = 1,
    ACTIONS(113), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1476] = 1,
    ACTIONS(172), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1481] = 1,
    ACTIONS(174), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1486] = 1,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1491] = 1,
    ACTIONS(178), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1496] = 1,
    ACTIONS(180), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1501] = 1,
    ACTIONS(182), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1506] = 1,
    ACTIONS(184), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1511] = 1,
    ACTIONS(186), 1,
      sym_ident,
  [1515] = 1,
    ACTIONS(188), 1,
      anon_sym_then,
  [1519] = 1,
    ACTIONS(190), 1,
      sym_number,
  [1523] = 1,
    ACTIONS(192), 1,
      sym_ident,
  [1527] = 1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
  [1531] = 1,
    ACTIONS(196), 1,
      sym_ident,
  [1535] = 1,
    ACTIONS(198), 1,
      sym_number,
  [1539] = 1,
    ACTIONS(200), 1,
      anon_sym_EQ,
  [1543] = 1,
    ACTIONS(202), 1,
      sym_ident,
  [1547] = 1,
    ACTIONS(204), 1,
      anon_sym_COLON_EQ,
  [1551] = 1,
    ACTIONS(206), 1,
      anon_sym_SEMI,
  [1555] = 1,
    ACTIONS(208), 1,
      sym_ident,
  [1559] = 1,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
  [1563] = 1,
    ACTIONS(212), 1,
      anon_sym_DOT,
  [1567] = 1,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
  [1571] = 1,
    ACTIONS(188), 1,
      anon_sym_do,
  [1575] = 1,
    ACTIONS(216), 1,
      sym_ident,
  [1579] = 1,
    ACTIONS(218), 1,
      sym_ident,
  [1583] = 1,
    ACTIONS(220), 1,
      anon_sym_EQ,
  [1587] = 1,
    ACTIONS(222), 1,
      anon_sym_SEMI,
  [1591] = 1,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
  [1595] = 1,
    ACTIONS(226), 1,
      sym_ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 103,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 172,
  [SMALL_STATE(10)] = 197,
  [SMALL_STATE(11)] = 222,
  [SMALL_STATE(12)] = 247,
  [SMALL_STATE(13)] = 272,
  [SMALL_STATE(14)] = 292,
  [SMALL_STATE(15)] = 335,
  [SMALL_STATE(16)] = 372,
  [SMALL_STATE(17)] = 409,
  [SMALL_STATE(18)] = 446,
  [SMALL_STATE(19)] = 480,
  [SMALL_STATE(20)] = 514,
  [SMALL_STATE(21)] = 548,
  [SMALL_STATE(22)] = 582,
  [SMALL_STATE(23)] = 616,
  [SMALL_STATE(24)] = 650,
  [SMALL_STATE(25)] = 684,
  [SMALL_STATE(26)] = 718,
  [SMALL_STATE(27)] = 752,
  [SMALL_STATE(28)] = 786,
  [SMALL_STATE(29)] = 820,
  [SMALL_STATE(30)] = 854,
  [SMALL_STATE(31)] = 888,
  [SMALL_STATE(32)] = 917,
  [SMALL_STATE(33)] = 936,
  [SMALL_STATE(34)] = 965,
  [SMALL_STATE(35)] = 993,
  [SMALL_STATE(36)] = 1021,
  [SMALL_STATE(37)] = 1035,
  [SMALL_STATE(38)] = 1056,
  [SMALL_STATE(39)] = 1077,
  [SMALL_STATE(40)] = 1098,
  [SMALL_STATE(41)] = 1119,
  [SMALL_STATE(42)] = 1140,
  [SMALL_STATE(43)] = 1161,
  [SMALL_STATE(44)] = 1182,
  [SMALL_STATE(45)] = 1193,
  [SMALL_STATE(46)] = 1207,
  [SMALL_STATE(47)] = 1221,
  [SMALL_STATE(48)] = 1232,
  [SMALL_STATE(49)] = 1242,
  [SMALL_STATE(50)] = 1252,
  [SMALL_STATE(51)] = 1262,
  [SMALL_STATE(52)] = 1268,
  [SMALL_STATE(53)] = 1278,
  [SMALL_STATE(54)] = 1288,
  [SMALL_STATE(55)] = 1298,
  [SMALL_STATE(56)] = 1308,
  [SMALL_STATE(57)] = 1314,
  [SMALL_STATE(58)] = 1324,
  [SMALL_STATE(59)] = 1334,
  [SMALL_STATE(60)] = 1344,
  [SMALL_STATE(61)] = 1354,
  [SMALL_STATE(62)] = 1364,
  [SMALL_STATE(63)] = 1374,
  [SMALL_STATE(64)] = 1380,
  [SMALL_STATE(65)] = 1390,
  [SMALL_STATE(66)] = 1400,
  [SMALL_STATE(67)] = 1406,
  [SMALL_STATE(68)] = 1416,
  [SMALL_STATE(69)] = 1426,
  [SMALL_STATE(70)] = 1431,
  [SMALL_STATE(71)] = 1436,
  [SMALL_STATE(72)] = 1441,
  [SMALL_STATE(73)] = 1446,
  [SMALL_STATE(74)] = 1451,
  [SMALL_STATE(75)] = 1456,
  [SMALL_STATE(76)] = 1461,
  [SMALL_STATE(77)] = 1466,
  [SMALL_STATE(78)] = 1471,
  [SMALL_STATE(79)] = 1476,
  [SMALL_STATE(80)] = 1481,
  [SMALL_STATE(81)] = 1486,
  [SMALL_STATE(82)] = 1491,
  [SMALL_STATE(83)] = 1496,
  [SMALL_STATE(84)] = 1501,
  [SMALL_STATE(85)] = 1506,
  [SMALL_STATE(86)] = 1511,
  [SMALL_STATE(87)] = 1515,
  [SMALL_STATE(88)] = 1519,
  [SMALL_STATE(89)] = 1523,
  [SMALL_STATE(90)] = 1527,
  [SMALL_STATE(91)] = 1531,
  [SMALL_STATE(92)] = 1535,
  [SMALL_STATE(93)] = 1539,
  [SMALL_STATE(94)] = 1543,
  [SMALL_STATE(95)] = 1547,
  [SMALL_STATE(96)] = 1551,
  [SMALL_STATE(97)] = 1555,
  [SMALL_STATE(98)] = 1559,
  [SMALL_STATE(99)] = 1563,
  [SMALL_STATE(100)] = 1567,
  [SMALL_STATE(101)] = 1571,
  [SMALL_STATE(102)] = 1575,
  [SMALL_STATE(103)] = 1579,
  [SMALL_STATE(104)] = 1583,
  [SMALL_STATE(105)] = 1587,
  [SMALL_STATE(106)] = 1591,
  [SMALL_STATE(107)] = 1595,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factor, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_factor, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factor, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_factor, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat3, 2, 0, 0), SHIFT_REPEAT(102),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat3, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat3, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat3, 5, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat3, 5, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2, 0, 0), SHIFT_REPEAT(94),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 5, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat2, 2, 0, 0), SHIFT_REPEAT(35),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat2, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 9, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 12, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 8, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 10, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 11, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [210] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
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
