#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 10
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_Table_token1 = 1,
  sym_Field = 2,
  sym__Separator = 3,
  sym__Comment = 4,
  sym_Table = 5,
  sym_Row = 6,
  aux_sym_Table_repeat1 = 7,
  aux_sym_Row_repeat1 = 8,
  aux_sym_Row_repeat2 = 9,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_Table_token1] = "Table_token1",
  [sym_Field] = "Field",
  [sym__Separator] = "_Separator",
  [sym__Comment] = "_Comment",
  [sym_Table] = "Table",
  [sym_Row] = "Row",
  [aux_sym_Table_repeat1] = "Table_repeat1",
  [aux_sym_Row_repeat1] = "Row_repeat1",
  [aux_sym_Row_repeat2] = "Row_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_Table_token1] = aux_sym_Table_token1,
  [sym_Field] = sym_Field,
  [sym__Separator] = sym__Separator,
  [sym__Comment] = sym__Comment,
  [sym_Table] = sym_Table,
  [sym_Row] = sym_Row,
  [aux_sym_Table_repeat1] = aux_sym_Table_repeat1,
  [aux_sym_Row_repeat1] = aux_sym_Row_repeat1,
  [aux_sym_Row_repeat2] = aux_sym_Row_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_Table_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_Field] = {
    .visible = true,
    .named = true,
  },
  [sym__Separator] = {
    .visible = false,
    .named = true,
  },
  [sym__Comment] = {
    .visible = false,
    .named = true,
  },
  [sym_Table] = {
    .visible = true,
    .named = true,
  },
  [sym_Row] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_Table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Row_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Row_repeat2] = {
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
  [11] = 6,
  [12] = 7,
  [13] = 13,
  [14] = 14,
  [15] = 8,
  [16] = 16,
  [17] = 4,
  [18] = 5,
  [19] = 16,
  [20] = 20,
  [21] = 13,
  [22] = 14,
  [23] = 9,
  [24] = 24,
  [25] = 10,
  [26] = 26,
  [27] = 24,
  [28] = 26,
  [29] = 14,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == 0x0b) ADVANCE(8);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(0);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == 0x0b) ADVANCE(9);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(11);
      END_STATE();
    case 2:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == 0x0b) ADVANCE(7);
      if (lookahead == '\r') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(11);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_Table_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == 0x0b) ADVANCE(7);
      if (lookahead == '\r') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_Table_token1);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_Field);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == 0x0b) ADVANCE(7);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_Field);
      if (lookahead == 0x0b) ADVANCE(8);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(11);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_Field);
      if (lookahead == 0x0b) ADVANCE(9);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_Field);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_Field);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__Separator);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == 0x0b) ADVANCE(7);
      if (lookahead == '\r') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__Separator);
      if (lookahead == 0x0b) ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__Separator);
      if (lookahead == 0x0b) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__Comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
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
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_Field] = ACTIONS(1),
    [sym__Separator] = ACTIONS(1),
    [sym__Comment] = ACTIONS(1),
  },
  [1] = {
    [sym_Table] = STATE(32),
    [sym_Row] = STATE(31),
    [aux_sym_Table_repeat1] = STATE(2),
    [aux_sym_Row_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_Field] = ACTIONS(5),
    [sym__Separator] = ACTIONS(7),
    [sym__Comment] = ACTIONS(9),
  },
  [2] = {
    [sym_Row] = STATE(30),
    [aux_sym_Table_repeat1] = STATE(3),
    [aux_sym_Row_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_Field] = ACTIONS(5),
    [sym__Separator] = ACTIONS(7),
    [sym__Comment] = ACTIONS(9),
  },
  [3] = {
    [sym_Row] = STATE(33),
    [aux_sym_Table_repeat1] = STATE(3),
    [aux_sym_Row_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_Field] = ACTIONS(15),
    [sym__Separator] = ACTIONS(18),
    [sym__Comment] = ACTIONS(21),
  },
  [4] = {
    [aux_sym_Row_repeat1] = STATE(9),
    [aux_sym_Row_repeat2] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(24),
    [aux_sym_Table_token1] = ACTIONS(26),
    [sym_Field] = ACTIONS(28),
    [sym__Separator] = ACTIONS(30),
  },
  [5] = {
    [aux_sym_Row_repeat1] = STATE(13),
    [aux_sym_Row_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(32),
    [aux_sym_Table_token1] = ACTIONS(34),
    [sym_Field] = ACTIONS(36),
    [sym__Separator] = ACTIONS(38),
  },
  [6] = {
    [aux_sym_Row_repeat1] = STATE(10),
    [aux_sym_Row_repeat2] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(40),
    [aux_sym_Table_token1] = ACTIONS(42),
    [sym_Field] = ACTIONS(28),
    [sym__Separator] = ACTIONS(44),
  },
  [7] = {
    [aux_sym_Row_repeat1] = STATE(26),
    [aux_sym_Row_repeat2] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(46),
    [aux_sym_Table_token1] = ACTIONS(48),
    [sym_Field] = ACTIONS(50),
    [sym__Separator] = ACTIONS(53),
  },
  [8] = {
    [aux_sym_Row_repeat1] = STATE(9),
    [aux_sym_Row_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(24),
    [aux_sym_Table_token1] = ACTIONS(26),
    [sym_Field] = ACTIONS(56),
    [sym__Separator] = ACTIONS(30),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      aux_sym_Table_token1,
    ACTIONS(58), 1,
      sym_Field,
    ACTIONS(60), 1,
      sym__Separator,
    STATE(14), 1,
      aux_sym_Row_repeat1,
  [16] = 5,
    ACTIONS(58), 1,
      sym_Field,
    ACTIONS(60), 1,
      sym__Separator,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      aux_sym_Table_token1,
    STATE(14), 1,
      aux_sym_Row_repeat1,
  [32] = 5,
    ACTIONS(42), 1,
      aux_sym_Table_token1,
    ACTIONS(66), 1,
      sym_Field,
    ACTIONS(68), 1,
      sym__Separator,
    STATE(12), 1,
      aux_sym_Row_repeat2,
    STATE(25), 1,
      aux_sym_Row_repeat1,
  [48] = 5,
    ACTIONS(48), 1,
      aux_sym_Table_token1,
    ACTIONS(70), 1,
      sym_Field,
    ACTIONS(73), 1,
      sym__Separator,
    STATE(12), 1,
      aux_sym_Row_repeat2,
    STATE(28), 1,
      aux_sym_Row_repeat1,
  [64] = 5,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      aux_sym_Table_token1,
    ACTIONS(58), 1,
      sym_Field,
    ACTIONS(60), 1,
      sym__Separator,
    STATE(14), 1,
      aux_sym_Row_repeat1,
  [80] = 4,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      sym__Separator,
    STATE(14), 1,
      aux_sym_Row_repeat1,
    ACTIONS(78), 2,
      aux_sym_Table_token1,
      sym_Field,
  [94] = 5,
    ACTIONS(26), 1,
      aux_sym_Table_token1,
    ACTIONS(83), 1,
      sym_Field,
    ACTIONS(85), 1,
      sym__Separator,
    STATE(11), 1,
      aux_sym_Row_repeat2,
    STATE(23), 1,
      aux_sym_Row_repeat1,
  [110] = 5,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      aux_sym_Table_token1,
    ACTIONS(60), 1,
      sym__Separator,
    ACTIONS(87), 1,
      sym_Field,
    STATE(14), 1,
      aux_sym_Row_repeat1,
  [126] = 5,
    ACTIONS(26), 1,
      aux_sym_Table_token1,
    ACTIONS(66), 1,
      sym_Field,
    ACTIONS(85), 1,
      sym__Separator,
    STATE(12), 1,
      aux_sym_Row_repeat2,
    STATE(23), 1,
      aux_sym_Row_repeat1,
  [142] = 5,
    ACTIONS(34), 1,
      aux_sym_Table_token1,
    ACTIONS(89), 1,
      sym_Field,
    ACTIONS(91), 1,
      sym__Separator,
    STATE(17), 1,
      aux_sym_Row_repeat2,
    STATE(21), 1,
      aux_sym_Row_repeat1,
  [158] = 4,
    ACTIONS(34), 1,
      aux_sym_Table_token1,
    ACTIONS(93), 1,
      sym_Field,
    ACTIONS(95), 1,
      sym__Separator,
    STATE(22), 1,
      aux_sym_Row_repeat1,
  [171] = 2,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 3,
      sym_Field,
      sym__Separator,
      sym__Comment,
  [180] = 4,
    ACTIONS(26), 1,
      aux_sym_Table_token1,
    ACTIONS(95), 1,
      sym__Separator,
    ACTIONS(99), 1,
      sym_Field,
    STATE(22), 1,
      aux_sym_Row_repeat1,
  [193] = 3,
    ACTIONS(101), 1,
      sym__Separator,
    STATE(22), 1,
      aux_sym_Row_repeat1,
    ACTIONS(78), 2,
      aux_sym_Table_token1,
      sym_Field,
  [204] = 4,
    ACTIONS(42), 1,
      aux_sym_Table_token1,
    ACTIONS(95), 1,
      sym__Separator,
    ACTIONS(99), 1,
      sym_Field,
    STATE(22), 1,
      aux_sym_Row_repeat1,
  [217] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 3,
      aux_sym_Table_token1,
      sym_Field,
      sym__Separator,
  [226] = 4,
    ACTIONS(64), 1,
      aux_sym_Table_token1,
    ACTIONS(95), 1,
      sym__Separator,
    ACTIONS(99), 1,
      sym_Field,
    STATE(22), 1,
      aux_sym_Row_repeat1,
  [239] = 3,
    ACTIONS(58), 1,
      sym_Field,
    ACTIONS(104), 1,
      sym__Separator,
    STATE(29), 1,
      aux_sym_Row_repeat1,
  [249] = 1,
    ACTIONS(48), 3,
      aux_sym_Table_token1,
      sym_Field,
      sym__Separator,
  [255] = 3,
    ACTIONS(99), 1,
      sym_Field,
    ACTIONS(104), 1,
      sym__Separator,
    STATE(29), 1,
      aux_sym_Row_repeat1,
  [265] = 3,
    ACTIONS(78), 1,
      sym_Field,
    ACTIONS(106), 1,
      sym__Separator,
    STATE(29), 1,
      aux_sym_Row_repeat1,
  [275] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      aux_sym_Table_token1,
  [282] = 2,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      aux_sym_Table_token1,
  [289] = 1,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
  [293] = 1,
    ACTIONS(111), 1,
      aux_sym_Table_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 16,
  [SMALL_STATE(11)] = 32,
  [SMALL_STATE(12)] = 48,
  [SMALL_STATE(13)] = 64,
  [SMALL_STATE(14)] = 80,
  [SMALL_STATE(15)] = 94,
  [SMALL_STATE(16)] = 110,
  [SMALL_STATE(17)] = 126,
  [SMALL_STATE(18)] = 142,
  [SMALL_STATE(19)] = 158,
  [SMALL_STATE(20)] = 171,
  [SMALL_STATE(21)] = 180,
  [SMALL_STATE(22)] = 193,
  [SMALL_STATE(23)] = 204,
  [SMALL_STATE(24)] = 217,
  [SMALL_STATE(25)] = 226,
  [SMALL_STATE(26)] = 239,
  [SMALL_STATE(27)] = 249,
  [SMALL_STATE(28)] = 255,
  [SMALL_STATE(29)] = 265,
  [SMALL_STATE(30)] = 275,
  [SMALL_STATE(31)] = 282,
  [SMALL_STATE(32)] = 289,
  [SMALL_STATE(33)] = 293,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Table, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Table, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Table_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Table_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Table_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Table_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Row, 2, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Row, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Row, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Row, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Row, 3, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Row, 3, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Row_repeat2, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_Row_repeat2, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Row_repeat2, 2, 0, 0), SHIFT_REPEAT(7),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Row_repeat2, 2, 0, 0), SHIFT_REPEAT(26),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Row, 4, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Row, 4, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Row_repeat2, 2, 0, 0), SHIFT_REPEAT(12),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Row_repeat2, 2, 0, 0), SHIFT_REPEAT(28),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Row_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_Row_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Row_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_Table_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Row_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Row_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Table, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [113] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_tbl(void) {
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
