/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse qryparse
#define yylex   qrylex
#define yyerror qryerror
#define yylval  qrylval
#define yychar  qrychar
#define yydebug qrydebug
#define yynerrs qrynerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SELECT = 258,
     WORDS = 259,
     FROM = 260,
     INNER = 261,
     JOIN = 262,
     OUTER = 263,
     RIGHT = 264,
     LEFT = 265,
     WHERE = 266,
     AS = 267,
     ON = 268,
     AND = 269,
     OR = 270,
     GROUP = 271,
     BY = 272,
     HAVING = 273,
     ORDER = 274,
     DESC = 275,
     ASC = 276,
     SUM = 277,
     COUNT = 278,
     AVG = 279,
     T_MAX = 280,
     T_MIN = 281,
     STDDEV = 282,
     VARIANCE = 283
   };
#endif
/* Tokens.  */
#define SELECT 258
#define WORDS 259
#define FROM 260
#define INNER 261
#define JOIN 262
#define OUTER 263
#define RIGHT 264
#define LEFT 265
#define WHERE 266
#define AS 267
#define ON 268
#define AND 269
#define OR 270
#define GROUP 271
#define BY 272
#define HAVING 273
#define ORDER 274
#define DESC 275
#define ASC 276
#define SUM 277
#define COUNT 278
#define AVG 279
#define T_MAX 280
#define T_MIN 281
#define STDDEV 282
#define VARIANCE 283




/* Copy the first part of user declarations.  */
#line 1 "qry_parser.y"

#include <stdio.h>
#include <string.h>
#include <glib.h>
#include <glib-object.h>

#include "bima-app-gui.h"
#include "bima-query.h"
#include "bima-query-field.h"
#include "bima-query-table.h"
#include "bima-utils.h"

extern char *qrytext;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 16 "qry_parser.y"
typedef union YYSTYPE {
	BimaQuery *tquery;
	BimaQueryTable *ttable;
	BimaQueryField *tfield;
	GList *tlist;
	char *tkeyword;
	int	tint;
} YYSTYPE;
/* Line 196 of yacc.c.  */
#line 173 "qry_parser.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 34 "qry_parser.y"

extern BimaAppGui *app_gui;
int nField = 0 ;


/* Line 219 of yacc.c.  */
#line 189 "qry_parser.c"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   106

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  20
/* YYNRULES -- Number of rules. */
#define YYNRULES  55
/* YYNRULES -- Number of states. */
#define YYNSTATES  90

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      30,    31,    35,    33,    29,    34,    37,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    32,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned char yyprhs[] =
{
       0,     0,     3,     5,    10,    16,    26,    29,    30,    33,
      34,    36,    40,    43,    45,    47,    48,    50,    54,    58,
      64,    66,    70,    72,    76,    78,    82,    87,    89,    91,
      93,    95,    97,    99,   101,   103,   105,   109,   113,   115,
     117,   119,   121,   123,   125,   127,   129,   133,   136,   141,
     143,   145,   146,   152,   155,   159
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      39,     0,    -1,    40,    -1,    40,    19,    17,    43,    -1,
       3,    46,     5,    53,    41,    -1,     3,    46,     5,    53,
      41,    16,    17,    48,    42,    -1,    11,    49,    -1,    -1,
      18,    49,    -1,    -1,    44,    -1,    43,    29,    44,    -1,
      51,    45,    -1,    21,    -1,    20,    -1,    -1,    47,    -1,
      46,    29,    47,    -1,    49,    12,     4,    -1,    30,    49,
      31,    12,     4,    -1,    49,    -1,    30,    49,    31,    -1,
      51,    -1,    48,    29,    51,    -1,    51,    -1,    49,    50,
      49,    -1,    52,    30,    49,    31,    -1,    32,    -1,    33,
      -1,    34,    -1,    35,    -1,    36,    -1,    14,    -1,    15,
      -1,     4,    -1,    35,    -1,     4,    37,     4,    -1,     4,
      37,    35,    -1,    22,    -1,    23,    -1,    24,    -1,    25,
      -1,    26,    -1,    27,    -1,    28,    -1,    54,    -1,    53,
      29,    54,    -1,     4,    55,    -1,    30,    40,    31,    55,
      -1,    56,    -1,     4,    -1,    -1,    54,    57,    54,    13,
      49,    -1,     6,     7,    -1,     9,     8,     7,    -1,    10,
       8,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    42,    42,    43,    50,    66,    82,    83,    86,    87,
      90,    95,   101,   108,   109,   110,   113,   119,   125,   130,
     135,   136,   139,   144,   150,   151,   161,   170,   171,   172,
     173,   174,   175,   176,   179,   185,   192,   200,   209,   210,
     211,   212,   213,   214,   215,   218,   223,   229,   239,   246,
     249,   250,   253,   264,   265,   266
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SELECT", "WORDS", "FROM", "INNER",
  "JOIN", "OUTER", "RIGHT", "LEFT", "WHERE", "AS", "ON", "AND", "OR",
  "GROUP", "BY", "HAVING", "ORDER", "DESC", "ASC", "SUM", "COUNT", "AVG",
  "T_MAX", "T_MIN", "STDDEV", "VARIANCE", "','", "'('", "')'", "'='",
  "'+'", "'-'", "'*'", "'/'", "'.'", "$accept", "query", "select",
  "where_sytx", "having_sytx", "sort_list", "sort_field", "sort_op",
  "select_list", "field_as", "group_list", "field_expr", "opr_type",
  "field", "function", "from_list", "table", "alias_lbl", "join_table",
  "join_type", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    44,
      40,    41,    61,    43,    45,    42,    47,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    38,    39,    39,    40,    40,    41,    41,    42,    42,
      43,    43,    44,    45,    45,    45,    46,    46,    47,    47,
      47,    47,    48,    48,    49,    49,    49,    50,    50,    50,
      50,    50,    50,    50,    51,    51,    51,    51,    52,    52,
      52,    52,    52,    52,    52,    53,    53,    54,    54,    54,
      55,    55,    56,    57,    57,    57
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     4,     5,     9,     2,     0,     2,     0,
       1,     3,     2,     1,     1,     0,     1,     3,     3,     5,
       1,     3,     1,     3,     1,     3,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     4,     1,
       1,     0,     5,     2,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,     0,     2,    34,    38,    39,    40,    41,    42,
      43,    44,     0,    35,     0,    16,    20,    24,     0,     1,
       0,     0,     0,     0,     0,     0,    32,    33,    27,    28,
      29,    30,    31,     0,     0,     0,    36,    37,    21,    51,
       0,     7,    45,    49,    17,    18,    25,     0,     3,    10,
      15,     0,    50,    47,     0,     0,     0,     4,     0,     0,
       0,     0,    26,     0,    14,    13,    12,    19,    51,     6,
      46,     0,    53,     0,     0,     0,    11,    48,     0,    54,
      55,     0,     9,    22,    52,     0,     0,     5,     8,    23
};

/* YYDEFGOTO[NTERM-NUM]. */
static const yysigned_char yydefgoto[] =
{
      -1,     2,     3,    57,    87,    48,    49,    66,    14,    15,
      82,    16,    33,    17,    18,    41,    42,    53,    43,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -49
static const yysigned_char yypact[] =
{
      15,    10,     9,     0,   -17,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,    35,   -49,     2,   -49,    -9,   -49,    17,   -49,
      31,     6,    50,    -2,    10,    52,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,    35,    35,     7,   -49,   -49,    54,    63,
      15,     1,    45,   -49,   -49,   -49,    62,    57,    39,   -49,
      -4,    70,   -49,   -49,    44,    35,    -2,    64,    71,    79,
      91,    -2,   -49,     7,   -49,   -49,   -49,   -49,    63,    62,
      45,    83,   -49,    72,    94,    40,   -49,   -49,     7,   -49,
     -49,    35,   -14,   -49,    62,    35,     7,   -49,    62,   -49
};

/* YYPGOTO[NTERM-NUM].  */
static const yysigned_char yypgoto[] =
{
     -49,   -49,    65,   -49,   -49,   -49,    41,   -49,   -49,    78,
     -49,   -12,   -49,   -34,   -49,   -49,   -48,    38,   -49,   -49
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned char yytable[] =
{
      22,    50,    39,    25,    85,    26,    27,    23,    70,    19,
      36,     4,    55,    75,     4,    86,    64,    65,     1,    20,
      21,    46,    47,    28,    29,    30,    31,    32,    40,    50,
      56,    24,     5,     6,     7,     8,     9,    10,    11,     4,
      12,    37,    13,    69,    83,    13,    58,    34,    35,    59,
      60,    58,    89,    81,    59,    60,    45,     5,     6,     7,
       8,     9,    10,    11,    26,    27,    51,    52,    63,    84,
      13,    26,    27,    88,    67,    68,    26,    27,    72,    79,
      71,    38,    28,    29,    30,    31,    32,    73,    62,    28,
      29,    30,    31,    32,    28,    29,    30,    31,    32,    74,
      78,    80,    44,     0,    76,    54,    77
};

static const yysigned_char yycheck[] =
{
      12,    35,     4,    12,    18,    14,    15,     5,    56,     0,
       4,     4,    11,    61,     4,    29,    20,    21,     3,    19,
      37,    33,    34,    32,    33,    34,    35,    36,    30,    63,
      29,    29,    22,    23,    24,    25,    26,    27,    28,     4,
      30,    35,    35,    55,    78,    35,     6,    30,    17,     9,
      10,     6,    86,    13,     9,    10,     4,    22,    23,    24,
      25,    26,    27,    28,    14,    15,    12,     4,    29,    81,
      35,    14,    15,    85,     4,    31,    14,    15,     7,     7,
      16,    31,    32,    33,    34,    35,    36,     8,    31,    32,
      33,    34,    35,    36,    32,    33,    34,    35,    36,     8,
      17,     7,    24,    -1,    63,    40,    68
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,    39,    40,     4,    22,    23,    24,    25,    26,
      27,    28,    30,    35,    46,    47,    49,    51,    52,     0,
      19,    37,    49,     5,    29,    12,    14,    15,    32,    33,
      34,    35,    36,    50,    30,    17,     4,    35,    31,     4,
      30,    53,    54,    56,    47,     4,    49,    49,    43,    44,
      51,    12,     4,    55,    40,    11,    29,    41,     6,     9,
      10,    57,    31,    29,    20,    21,    45,     4,    31,    49,
      54,    16,     7,     8,     8,    54,    44,    55,    17,     7,
       7,    13,    48,    51,    49,    18,    29,    42,    49,    51
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 42 "qry_parser.y"
    {	app_gui->query = (yyvsp[0].tquery);	;}
    break;

  case 3:
#line 44 "qry_parser.y"
    {
		(yyvsp[-3].tquery)->orders = (yyvsp[0].tlist) ;
		app_gui->query = (yyvsp[-3].tquery);
	;}
    break;

  case 4:
#line 51 "qry_parser.y"
    {
		BimaQuery *q = bima_query_new();
		q->fields = (yyvsp[-3].tlist) ;
		q->tables = (yyvsp[-1].tlist) ;
		q->groups = NULL;
		q->havings = NULL;
		q->wheres = (yyvsp[0].tfield);
		q->orders = NULL;
		
		bima_query_validate_fields(q);
		// just calc BimaQuery->
		//nField = bima_query_count_number_of_fields(q);
//		bima_query_count_num_of_tables(q);
		(yyval.tquery) = q;
	;}
    break;

  case 5:
#line 67 "qry_parser.y"
    {
		BimaQuery *q = bima_query_new();
		q->fields = (yyvsp[-7].tlist) ;
		q->tables = (yyvsp[-5].tlist) ;
		q->groups = (yyvsp[-1].tlist) ; 
		q->havings = (yyvsp[0].tfield) ;
		q->wheres = (yyvsp[-4].tfield) ;
		q->orders = NULL;
		bima_query_validate_fields(q);
		//nField = bima_query_count_number_of_fields(q);
//		bima_query_count_num_of_tables(q);
		(yyval.tquery) = q;	
	;}
    break;

  case 6:
#line 82 "qry_parser.y"
    {	(yyval.tfield) = (yyvsp[0].tfield); ;}
    break;

  case 7:
#line 83 "qry_parser.y"
    {	(yyval.tfield) = NULL; ;}
    break;

  case 8:
#line 86 "qry_parser.y"
    {	(yyval.tfield) = (yyvsp[0].tfield); ;}
    break;

  case 9:
#line 87 "qry_parser.y"
    {	(yyval.tfield) = NULL; ;}
    break;

  case 10:
#line 91 "qry_parser.y"
    {
		(yyval.tlist) = NULL;
		(yyval.tlist) = g_list_append((yyval.tlist), (gpointer)(yyvsp[0].tfield));
	;}
    break;

  case 11:
#line 96 "qry_parser.y"
    {
		(yyval.tlist) = g_list_append((yyvsp[-2].tlist), (gpointer)(yyvsp[0].tfield));
	;}
    break;

  case 12:
#line 102 "qry_parser.y"
    {
		(yyvsp[-1].tfield)->sort_type = (yyvsp[0].tint);
		(yyval.tfield) = (yyvsp[-1].tfield);
	;}
    break;

  case 13:
#line 108 "qry_parser.y"
    {	(yyval.tint) = 1;	;}
    break;

  case 14:
#line 109 "qry_parser.y"
    {	(yyval.tint) = 2;	;}
    break;

  case 15:
#line 110 "qry_parser.y"
    {	(yyval.tint) = 0;	;}
    break;

  case 16:
#line 114 "qry_parser.y"
    {
		//nField++;
		(yyval.tlist) = NULL;
		(yyval.tlist) = g_list_append((yyval.tlist), (gpointer)(yyvsp[0].tfield));
	;}
    break;

  case 17:
#line 120 "qry_parser.y"
    {
		(yyval.tlist) = g_list_append((yyvsp[-2].tlist), (gpointer)(yyvsp[0].tfield));
	;}
    break;

  case 18:
#line 126 "qry_parser.y"
    {
		(yyvsp[-2].tfield)->alias = (yyvsp[0].tkeyword);
		(yyval.tfield) = (yyvsp[-2].tfield);
	;}
    break;

  case 19:
#line 131 "qry_parser.y"
    {
		(yyvsp[-3].tfield)->alias = (yyvsp[0].tkeyword);
		(yyval.tfield) = (yyvsp[-3].tfield);
	;}
    break;

  case 20:
#line 135 "qry_parser.y"
    {	(yyval.tfield) = (yyvsp[0].tfield);	;}
    break;

  case 21:
#line 136 "qry_parser.y"
    {	(yyval.tfield) = (yyvsp[-1].tfield);	;}
    break;

  case 22:
#line 140 "qry_parser.y"
    {
		(yyval.tlist) = NULL;
		(yyval.tlist) = g_list_append((yyval.tlist), (gpointer)(yyvsp[0].tfield));
	;}
    break;

  case 23:
#line 145 "qry_parser.y"
    {
		(yyval.tlist) = g_list_append((yyvsp[-2].tlist), (gpointer)(yyvsp[0].tfield));
	;}
    break;

  case 24:
#line 150 "qry_parser.y"
    {	(yyval.tfield) = (yyvsp[0].tfield);	;}
    break;

  case 25:
#line 152 "qry_parser.y"
    {
		
		BimaQueryField *tmp_qry = bima_query_field_new();
		tmp_qry->opr_type = (yyvsp[-1].tint);
		tmp_qry->left_field = (yyvsp[-2].tfield);
		tmp_qry->right_field = (yyvsp[0].tfield);
		
		(yyval.tfield) = tmp_qry;
	;}
    break;

  case 26:
#line 162 "qry_parser.y"
    {
		BimaQueryField *tmp_qry = bima_query_field_new();
		tmp_qry->opr_type = (yyvsp[-3].tint);
		tmp_qry->left_field = (yyvsp[-1].tfield);		
		(yyval.tfield) = tmp_qry;
	;}
    break;

  case 27:
#line 170 "qry_parser.y"
    {	(yyval.tint) = 1; ;}
    break;

  case 28:
#line 171 "qry_parser.y"
    {	(yyval.tint) = 2; ;}
    break;

  case 29:
#line 172 "qry_parser.y"
    {	(yyval.tint) = 3; ;}
    break;

  case 30:
#line 173 "qry_parser.y"
    {	(yyval.tint) = 4; ;}
    break;

  case 31:
#line 174 "qry_parser.y"
    {	(yyval.tint) = 5; ;}
    break;

  case 32:
#line 175 "qry_parser.y"
    {	(yyval.tint) = 6; ;}
    break;

  case 33:
#line 176 "qry_parser.y"
    {	(yyval.tint) = 7; ;}
    break;

  case 34:
#line 180 "qry_parser.y"
    {
		BimaQueryField *tmp_qry = bima_query_field_new();
		tmp_qry->field = (yyvsp[0].tkeyword);
		(yyval.tfield) = tmp_qry;
	;}
    break;

  case 35:
#line 186 "qry_parser.y"
    {
		BimaQueryField *tmp_qry = bima_query_field_new();
		tmp_qry->field = g_strdup("*");
//		printf("star\n");		
		(yyval.tfield) = tmp_qry;
	;}
    break;

  case 36:
#line 193 "qry_parser.y"
    {
		BimaQueryField *tmp_qry = bima_query_field_new();
		tmp_qry->field = (yyvsp[0].tkeyword);
		tmp_qry->table = (yyvsp[-2].tkeyword);
//		printf("%s %s\n",$1,$3);
		(yyval.tfield) = tmp_qry;
	;}
    break;

  case 37:
#line 201 "qry_parser.y"
    {
		BimaQueryField *tmp_qry = bima_query_field_new();
		tmp_qry->field = g_strdup("*");
		tmp_qry->table = (yyvsp[-2].tkeyword);
		(yyval.tfield) = tmp_qry;
	;}
    break;

  case 38:
#line 209 "qry_parser.y"
    { (yyval.tint) = 100;;}
    break;

  case 39:
#line 210 "qry_parser.y"
    { (yyval.tint) = 101;;}
    break;

  case 40:
#line 211 "qry_parser.y"
    { (yyval.tint) = 102;;}
    break;

  case 41:
#line 212 "qry_parser.y"
    { (yyval.tint) = 103;;}
    break;

  case 42:
#line 213 "qry_parser.y"
    { (yyval.tint) = 104;;}
    break;

  case 43:
#line 214 "qry_parser.y"
    { (yyval.tint) = 105;;}
    break;

  case 44:
#line 215 "qry_parser.y"
    { (yyval.tint) = 106;;}
    break;

  case 45:
#line 219 "qry_parser.y"
    {
		(yyval.tlist) = NULL;
		(yyval.tlist) = g_list_append((yyval.tlist), (gpointer)(yyvsp[0].ttable));
	;}
    break;

  case 46:
#line 224 "qry_parser.y"
    {
		(yyval.tlist) = g_list_append((yyvsp[-2].tlist), (gpointer)(yyvsp[0].ttable));
	;}
    break;

  case 47:
#line 230 "qry_parser.y"
    {
		BimaQueryTable *tmp_tbl = bima_query_table_new();
		tmp_tbl->alias = (yyvsp[0].tkeyword);
		tmp_tbl->table = (yyvsp[-1].tkeyword);
		tmp_tbl->entity = bima_get_object_by_prop(app_gui->app_data->entities , "name", (yyvsp[-1].tkeyword));
		if (!tmp_tbl->entity)
			tmp_tbl->entity = bima_get_object_by_prop(app_gui->app_data->relations , "name", (yyvsp[-1].tkeyword));
		(yyval.ttable) = tmp_tbl;
	;}
    break;

  case 48:
#line 240 "qry_parser.y"
    {
		BimaQueryTable *tmp_tbl = bima_query_table_new();
		tmp_tbl->alias = (yyvsp[0].tkeyword);
		tmp_tbl->sub_query = (yyvsp[-2].tquery);
		(yyval.ttable) = tmp_tbl;
	;}
    break;

  case 49:
#line 246 "qry_parser.y"
    {	(yyval.ttable) = (yyvsp[0].ttable);	;}
    break;

  case 50:
#line 249 "qry_parser.y"
    {	(yyval.tkeyword) = (yyvsp[0].tkeyword);	;}
    break;

  case 51:
#line 250 "qry_parser.y"
    { 	(yyval.tkeyword) = NULL;	;}
    break;

  case 52:
#line 254 "qry_parser.y"
    {
		BimaQueryTable *tmp_tbl = bima_query_table_new();
		tmp_tbl->left_table = (yyvsp[-4].ttable);
		tmp_tbl->join_type = (yyvsp[-3].tint);
		tmp_tbl->right_table = (yyvsp[-2].ttable);
		tmp_tbl->join_rule = (yyvsp[0].tfield);
		(yyval.ttable) = tmp_tbl;	
	;}
    break;

  case 53:
#line 264 "qry_parser.y"
    {	(yyval.tint) = 1; ;}
    break;

  case 54:
#line 265 "qry_parser.y"
    {	(yyval.tint) = 2; ;}
    break;

  case 55:
#line 266 "qry_parser.y"
    {	(yyval.tint) = 3; ;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 1639 "qry_parser.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
	  char *yyfmt;
	  char const *yyf;
	  static char const yyunexpected[] = "syntax error, unexpected %s";
	  static char const yyexpecting[] = ", expecting %s";
	  static char const yyor[] = " or %s";
	  char yyformat[sizeof yyunexpected
			+ sizeof yyexpecting - 1
			+ ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
			   * (sizeof yyor - 1))];
	  char const *yyprefix = yyexpecting;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 1;

	  yyarg[0] = yytname[yytype];
	  yyfmt = yystpcpy (yyformat, yyunexpected);

	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
		  {
		    yycount = 1;
		    yysize = yysize0;
		    yyformat[sizeof yyunexpected - 1] = '\0';
		    break;
		  }
		yyarg[yycount++] = yytname[yyx];
		yysize1 = yysize + yytnamerr (0, yytname[yyx]);
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
		{
		  if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		    {
		      yyp += yytnamerr (yyp, yyarg[yyi++]);
		      yyf += 2;
		    }
		  else
		    {
		      yyp++;
		      yyf++;
		    }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 269 "qry_parser.y"


void qryerror(const char *str)
{
//	printf("query error : %s ,before %s \n", str, qrytext);
	g_object_unref((GObject *) (app_gui->query));
	app_gui->query=NULL;
}

int qrywrap()
{
	return 1;
}

