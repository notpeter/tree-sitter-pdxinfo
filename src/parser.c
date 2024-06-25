#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  sym__newline = 3,
  anon_sym_name = 4,
  anon_sym_EQ = 5,
  anon_sym_author = 6,
  anon_sym_description = 7,
  anon_sym_version = 8,
  anon_sym_bundleID = 9,
  anon_sym_buildNumber = 10,
  anon_sym_imagePath = 11,
  anon_sym_launchSoundPath = 12,
  anon_sym_contentWarning = 13,
  anon_sym_contentWarning2 = 14,
  sym_string = 15,
  sym_integer = 16,
  sym_reverse_dns = 17,
  sym_pdxinfo = 18,
  sym_comment = 19,
  sym_definition = 20,
  sym_name = 21,
  sym_author = 22,
  sym_description = 23,
  sym_version = 24,
  sym_bundleID = 25,
  sym_buildNumber = 26,
  sym_imagePath = 27,
  sym_launchSoundPath = 28,
  sym_contentWarning = 29,
  sym_contentWarning2 = 30,
  aux_sym_pdxinfo_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__newline] = "_newline",
  [anon_sym_name] = "name",
  [anon_sym_EQ] = "=",
  [anon_sym_author] = "author",
  [anon_sym_description] = "description",
  [anon_sym_version] = "version",
  [anon_sym_bundleID] = "bundleID",
  [anon_sym_buildNumber] = "buildNumber",
  [anon_sym_imagePath] = "imagePath",
  [anon_sym_launchSoundPath] = "launchSoundPath",
  [anon_sym_contentWarning] = "contentWarning",
  [anon_sym_contentWarning2] = "contentWarning2",
  [sym_string] = "string",
  [sym_integer] = "integer",
  [sym_reverse_dns] = "reverse_dns",
  [sym_pdxinfo] = "pdxinfo",
  [sym_comment] = "comment",
  [sym_definition] = "definition",
  [sym_name] = "name",
  [sym_author] = "author",
  [sym_description] = "description",
  [sym_version] = "version",
  [sym_bundleID] = "bundleID",
  [sym_buildNumber] = "buildNumber",
  [sym_imagePath] = "imagePath",
  [sym_launchSoundPath] = "launchSoundPath",
  [sym_contentWarning] = "contentWarning",
  [sym_contentWarning2] = "contentWarning2",
  [aux_sym_pdxinfo_repeat1] = "pdxinfo_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__newline] = sym__newline,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_author] = anon_sym_author,
  [anon_sym_description] = anon_sym_description,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_bundleID] = anon_sym_bundleID,
  [anon_sym_buildNumber] = anon_sym_buildNumber,
  [anon_sym_imagePath] = anon_sym_imagePath,
  [anon_sym_launchSoundPath] = anon_sym_launchSoundPath,
  [anon_sym_contentWarning] = anon_sym_contentWarning,
  [anon_sym_contentWarning2] = anon_sym_contentWarning2,
  [sym_string] = sym_string,
  [sym_integer] = sym_integer,
  [sym_reverse_dns] = sym_reverse_dns,
  [sym_pdxinfo] = sym_pdxinfo,
  [sym_comment] = sym_comment,
  [sym_definition] = sym_definition,
  [sym_name] = sym_name,
  [sym_author] = sym_author,
  [sym_description] = sym_description,
  [sym_version] = sym_version,
  [sym_bundleID] = sym_bundleID,
  [sym_buildNumber] = sym_buildNumber,
  [sym_imagePath] = sym_imagePath,
  [sym_launchSoundPath] = sym_launchSoundPath,
  [sym_contentWarning] = sym_contentWarning,
  [sym_contentWarning2] = sym_contentWarning2,
  [aux_sym_pdxinfo_repeat1] = aux_sym_pdxinfo_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_author] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bundleID] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_buildNumber] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imagePath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_launchSoundPath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contentWarning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contentWarning2] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_reverse_dns] = {
    .visible = true,
    .named = true,
  },
  [sym_pdxinfo] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_author] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_bundleID] = {
    .visible = true,
    .named = true,
  },
  [sym_buildNumber] = {
    .visible = true,
    .named = true,
  },
  [sym_imagePath] = {
    .visible = true,
    .named = true,
  },
  [sym_launchSoundPath] = {
    .visible = true,
    .named = true,
  },
  [sym_contentWarning] = {
    .visible = true,
    .named = true,
  },
  [sym_contentWarning2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pdxinfo_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(80);
      ADVANCE_MAP(
        '\n', 83,
        '\r', 1,
        '#', 81,
        '=', 85,
        'a', 72,
        'b', 73,
        'c', 53,
        'd', 22,
        'i', 44,
        'l', 12,
        'n', 11,
        'v', 23,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(83);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'D') ADVANCE(89);
      END_STATE();
    case 4:
      if (lookahead == 'I') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'N') ADVANCE(75);
      END_STATE();
    case 6:
      if (lookahead == 'P') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'P') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'S') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == 'W') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(8);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 77:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 78:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 79:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(95);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_author);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_bundleID);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_buildNumber);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_imagePath);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_launchSoundPath);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_contentWarning);
      if (lookahead == '2') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_contentWarning2);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_reverse_dns);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
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
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 82},
  [18] = {.lex_state = 79},
  [19] = {.lex_state = 79},
  [20] = {.lex_state = 79},
  [21] = {.lex_state = 77},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 79},
  [24] = {.lex_state = 79},
  [25] = {.lex_state = 79},
  [26] = {.lex_state = 79},
  [27] = {.lex_state = 79},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_author] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_bundleID] = ACTIONS(1),
    [anon_sym_buildNumber] = ACTIONS(1),
    [anon_sym_imagePath] = ACTIONS(1),
    [anon_sym_launchSoundPath] = ACTIONS(1),
    [anon_sym_contentWarning] = ACTIONS(1),
    [anon_sym_contentWarning2] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_pdxinfo] = STATE(28),
    [sym_comment] = STATE(3),
    [sym_definition] = STATE(3),
    [sym_name] = STATE(15),
    [sym_author] = STATE(15),
    [sym_description] = STATE(15),
    [sym_version] = STATE(15),
    [sym_bundleID] = STATE(15),
    [sym_buildNumber] = STATE(15),
    [sym_imagePath] = STATE(15),
    [sym_launchSoundPath] = STATE(15),
    [sym_contentWarning] = STATE(15),
    [sym_contentWarning2] = STATE(15),
    [aux_sym_pdxinfo_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [anon_sym_name] = ACTIONS(9),
    [anon_sym_author] = ACTIONS(11),
    [anon_sym_description] = ACTIONS(13),
    [anon_sym_version] = ACTIONS(15),
    [anon_sym_bundleID] = ACTIONS(17),
    [anon_sym_buildNumber] = ACTIONS(19),
    [anon_sym_imagePath] = ACTIONS(21),
    [anon_sym_launchSoundPath] = ACTIONS(23),
    [anon_sym_contentWarning] = ACTIONS(25),
    [anon_sym_contentWarning2] = ACTIONS(27),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [sym_definition] = STATE(2),
    [sym_name] = STATE(15),
    [sym_author] = STATE(15),
    [sym_description] = STATE(15),
    [sym_version] = STATE(15),
    [sym_bundleID] = STATE(15),
    [sym_buildNumber] = STATE(15),
    [sym_imagePath] = STATE(15),
    [sym_launchSoundPath] = STATE(15),
    [sym_contentWarning] = STATE(15),
    [sym_contentWarning2] = STATE(15),
    [aux_sym_pdxinfo_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [sym__newline] = ACTIONS(34),
    [anon_sym_name] = ACTIONS(37),
    [anon_sym_author] = ACTIONS(40),
    [anon_sym_description] = ACTIONS(43),
    [anon_sym_version] = ACTIONS(46),
    [anon_sym_bundleID] = ACTIONS(49),
    [anon_sym_buildNumber] = ACTIONS(52),
    [anon_sym_imagePath] = ACTIONS(55),
    [anon_sym_launchSoundPath] = ACTIONS(58),
    [anon_sym_contentWarning] = ACTIONS(61),
    [anon_sym_contentWarning2] = ACTIONS(64),
  },
  [3] = {
    [sym_comment] = STATE(2),
    [sym_definition] = STATE(2),
    [sym_name] = STATE(15),
    [sym_author] = STATE(15),
    [sym_description] = STATE(15),
    [sym_version] = STATE(15),
    [sym_bundleID] = STATE(15),
    [sym_buildNumber] = STATE(15),
    [sym_imagePath] = STATE(15),
    [sym_launchSoundPath] = STATE(15),
    [sym_contentWarning] = STATE(15),
    [sym_contentWarning2] = STATE(15),
    [aux_sym_pdxinfo_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_POUND] = ACTIONS(5),
    [sym__newline] = ACTIONS(69),
    [anon_sym_name] = ACTIONS(9),
    [anon_sym_author] = ACTIONS(11),
    [anon_sym_description] = ACTIONS(13),
    [anon_sym_version] = ACTIONS(15),
    [anon_sym_bundleID] = ACTIONS(17),
    [anon_sym_buildNumber] = ACTIONS(19),
    [anon_sym_imagePath] = ACTIONS(21),
    [anon_sym_launchSoundPath] = ACTIONS(23),
    [anon_sym_contentWarning] = ACTIONS(25),
    [anon_sym_contentWarning2] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(73), 1,
      anon_sym_contentWarning,
    ACTIONS(71), 12,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [18] = 2,
    ACTIONS(77), 1,
      anon_sym_contentWarning,
    ACTIONS(75), 12,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [36] = 2,
    ACTIONS(81), 1,
      anon_sym_contentWarning,
    ACTIONS(79), 12,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [54] = 2,
    ACTIONS(85), 1,
      anon_sym_contentWarning,
    ACTIONS(83), 12,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [72] = 2,
    ACTIONS(89), 1,
      anon_sym_contentWarning,
    ACTIONS(87), 12,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [90] = 2,
    ACTIONS(93), 1,
      anon_sym_contentWarning,
    ACTIONS(91), 12,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [108] = 2,
    ACTIONS(97), 1,
      anon_sym_contentWarning,
    ACTIONS(95), 12,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [126] = 2,
    ACTIONS(101), 1,
      anon_sym_contentWarning,
    ACTIONS(99), 12,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [144] = 2,
    ACTIONS(105), 1,
      anon_sym_contentWarning,
    ACTIONS(103), 12,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [162] = 2,
    ACTIONS(109), 1,
      anon_sym_contentWarning,
    ACTIONS(107), 12,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [180] = 2,
    ACTIONS(113), 1,
      anon_sym_contentWarning,
    ACTIONS(111), 12,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [198] = 2,
    ACTIONS(117), 1,
      anon_sym_contentWarning,
    ACTIONS(115), 12,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [216] = 1,
    ACTIONS(119), 1,
      anon_sym_EQ,
  [220] = 1,
    ACTIONS(121), 1,
      aux_sym_comment_token1,
  [224] = 1,
    ACTIONS(123), 1,
      sym_string,
  [228] = 1,
    ACTIONS(125), 1,
      sym_string,
  [232] = 1,
    ACTIONS(127), 1,
      sym_string,
  [236] = 1,
    ACTIONS(129), 1,
      sym_reverse_dns,
  [240] = 1,
    ACTIONS(131), 1,
      sym_integer,
  [244] = 1,
    ACTIONS(133), 1,
      sym_string,
  [248] = 1,
    ACTIONS(135), 1,
      sym_string,
  [252] = 1,
    ACTIONS(137), 1,
      sym_string,
  [256] = 1,
    ACTIONS(139), 1,
      sym_string,
  [260] = 1,
    ACTIONS(141), 1,
      sym_string,
  [264] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
  [268] = 1,
    ACTIONS(145), 1,
      anon_sym_EQ,
  [272] = 1,
    ACTIONS(147), 1,
      anon_sym_EQ,
  [276] = 1,
    ACTIONS(149), 1,
      anon_sym_EQ,
  [280] = 1,
    ACTIONS(151), 1,
      anon_sym_EQ,
  [284] = 1,
    ACTIONS(153), 1,
      anon_sym_EQ,
  [288] = 1,
    ACTIONS(155), 1,
      anon_sym_EQ,
  [292] = 1,
    ACTIONS(157), 1,
      anon_sym_EQ,
  [296] = 1,
    ACTIONS(159), 1,
      anon_sym_EQ,
  [300] = 1,
    ACTIONS(161), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 36,
  [SMALL_STATE(7)] = 54,
  [SMALL_STATE(8)] = 72,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 108,
  [SMALL_STATE(11)] = 126,
  [SMALL_STATE(12)] = 144,
  [SMALL_STATE(13)] = 162,
  [SMALL_STATE(14)] = 180,
  [SMALL_STATE(15)] = 198,
  [SMALL_STATE(16)] = 216,
  [SMALL_STATE(17)] = 220,
  [SMALL_STATE(18)] = 224,
  [SMALL_STATE(19)] = 228,
  [SMALL_STATE(20)] = 232,
  [SMALL_STATE(21)] = 236,
  [SMALL_STATE(22)] = 240,
  [SMALL_STATE(23)] = 244,
  [SMALL_STATE(24)] = 248,
  [SMALL_STATE(25)] = 252,
  [SMALL_STATE(26)] = 256,
  [SMALL_STATE(27)] = 260,
  [SMALL_STATE(28)] = 264,
  [SMALL_STATE(29)] = 268,
  [SMALL_STATE(30)] = 272,
  [SMALL_STATE(31)] = 276,
  [SMALL_STATE(32)] = 280,
  [SMALL_STATE(33)] = 284,
  [SMALL_STATE(34)] = 288,
  [SMALL_STATE(35)] = 292,
  [SMALL_STATE(36)] = 296,
  [SMALL_STATE(37)] = 300,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pdxinfo, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pdxinfo_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pdxinfo_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pdxinfo_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pdxinfo_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pdxinfo_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pdxinfo_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pdxinfo_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pdxinfo_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pdxinfo_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pdxinfo_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pdxinfo_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pdxinfo_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pdxinfo_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pdxinfo, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentWarning2, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contentWarning2, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentWarning, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contentWarning, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_launchSoundPath, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_launchSoundPath, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imagePath, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imagePath, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buildNumber, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buildNumber, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundleID, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundleID, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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

TS_PUBLIC const TSLanguage *tree_sitter_pdxinfo(void) {
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
