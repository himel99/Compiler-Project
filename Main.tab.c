
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Main.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>
	#include "symbol_table.h"
	int  yyerror(char *s);
    int yylex();

	int checkSwitch, def;

	


/* Line 189 of yacc.c  */
#line 88 "Main.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MAIN = 258,
     IF = 259,
     ELSE = 260,
     ELSEIF = 261,
     PLUS = 262,
     MINUS = 263,
     MUL = 264,
     DIV = 265,
     MOD = 266,
     ARRAY = 267,
     INT = 268,
     FLOAT = 269,
     CHAR = 270,
     BS = 271,
     BE = 272,
     LOOP = 273,
     WHILE = 274,
     ODDEVEN = 275,
     PRINT = 276,
     FACTORIAL = 277,
     CASE = 278,
     DEFAULT = 279,
     SWITCH = 280,
     REVERSE_LOOP = 281,
     REVERSE_WHILE = 282,
     SIN = 283,
     COS = 284,
     TAN = 285,
     LOG = 286,
     LOG10 = 287,
     NUMBER = 288,
     VAR = 289,
     IFX = 290
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 17 "Main.y"

	char str[1001];
	int val;



/* Line 214 of yacc.c  */
#line 166 "Main.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 178 "Main.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
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
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   322

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  49
/* YYNRULES -- Number of states.  */
#define YYNSTATES  170

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    39,    40,
      36,    41,    37,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,    38,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    10,    13,    15,    18,    21,    26,
      34,    46,    65,    77,    89,    95,   101,   109,   110,   119,
     129,   139,   142,   144,   146,   148,   152,   154,   156,   159,
     160,   163,   169,   174,   176,   178,   182,   186,   190,   194,
     198,   202,   206,   210,   214,   219,   224,   229,   234,   239
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,     3,    39,    16,    49,    17,    -1,    -1,
      49,    50,    -1,    40,    -1,    52,    40,    -1,    59,    40,
      -1,    34,    41,    59,    40,    -1,     4,    42,    59,    43,
      16,    50,    17,    -1,     4,    42,    59,    43,    16,    50,
      17,     5,    16,    50,    17,    -1,     4,    42,    59,    43,
      16,    50,    17,     6,    42,    59,    43,    16,    50,    17,
       5,    16,    50,    17,    -1,    18,    42,    33,    44,    33,
      44,    33,    43,    16,    50,    17,    -1,    26,    42,    33,
      44,    33,    44,    33,    43,    16,    50,    17,    -1,    21,
      42,    59,    43,    40,    -1,    20,    42,    33,    43,    40,
      -1,    12,    53,    34,    45,    33,    46,    40,    -1,    -1,
      25,    42,    33,    43,    51,    16,    55,    17,    -1,    19,
      42,    33,    36,    33,    43,    16,    50,    17,    -1,    27,
      42,    33,    37,    33,    43,    16,    50,    17,    -1,    53,
      54,    -1,    13,    -1,    14,    -1,    15,    -1,    54,    44,
      34,    -1,    34,    -1,    56,    -1,    56,    58,    -1,    -1,
      56,    57,    -1,    23,    33,    39,    59,    40,    -1,    24,
      39,    59,    40,    -1,    33,    -1,    34,    -1,    59,     7,
      59,    -1,    59,     8,    59,    -1,    59,     9,    59,    -1,
      59,    10,    59,    -1,    59,    11,    59,    -1,    59,    38,
      59,    -1,    59,    36,    59,    -1,    59,    37,    59,    -1,
      42,    59,    43,    -1,    28,    42,    59,    43,    -1,    29,
      42,    59,    43,    -1,    30,    42,    59,    43,    -1,    32,
      42,    59,    43,    -1,    31,    42,    59,    43,    -1,    22,
      42,    33,    43,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    42,    44,    47,    48,    50,    54,    62,
      72,    81,    97,   106,   116,   120,   132,   139,   139,   146,
     154,   166,   171,   172,   173,   178,   185,   194,   195,   198,
     199,   202,   210,   220,   222,   224,   226,   228,   230,   240,
     250,   251,   253,   255,   257,   259,   261,   263,   265,   267
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN", "IF", "ELSE", "ELSEIF", "PLUS",
  "MINUS", "MUL", "DIV", "MOD", "ARRAY", "INT", "FLOAT", "CHAR", "BS",
  "BE", "LOOP", "WHILE", "ODDEVEN", "PRINT", "FACTORIAL", "CASE",
  "DEFAULT", "SWITCH", "REVERSE_LOOP", "REVERSE_WHILE", "SIN", "COS",
  "TAN", "LOG", "LOG10", "NUMBER", "VAR", "IFX", "'<'", "'>'", "'^'",
  "':'", "';'", "'='", "'('", "')'", "','", "'['", "']'", "$accept",
  "start_program", "body_inside", "statement", "$@1", "declaration",
  "TYPE", "ID1", "SWITCHCASE", "casegrammer", "casenumber",
  "defaultgrammer", "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,    60,    62,    94,    58,
      59,    61,    40,    41,    44,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    51,    50,    50,
      50,    52,    53,    53,    53,    54,    54,    55,    55,    56,
      56,    57,    58,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     2,     1,     2,     2,     4,     7,
      11,    18,    11,    11,     5,     5,     7,     0,     8,     9,
       9,     2,     1,     1,     1,     3,     1,     1,     2,     0,
       2,     5,     4,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     4,     4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     0,     0,     0,    22,
      23,    24,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    34,     5,     0,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,     6,    26,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    35,    36,    37,    38,    39,    41,    42,    40,
       0,     0,     0,     0,     0,     0,    49,    17,     0,     0,
      44,    45,    46,    48,    47,     8,    25,     0,     0,     0,
       0,    15,    14,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,     9,    16,     0,     0,     0,    27,     0,
       0,     0,     0,     0,     0,    18,     0,     0,    30,    28,
       0,     0,     0,     0,     0,    19,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,    10,     0,    12,     0,
      32,    13,     0,    31,     0,     0,     0,     0,     0,    11
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    30,   113,    31,    32,    54,   127,   128,
     138,   139,    33
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -106
static const yytype_int16 yypact[] =
{
      31,   -38,    36,    22,  -106,  -106,    46,    -1,     9,  -106,
    -106,  -106,  -106,     2,     3,     5,     6,     7,    14,    27,
      28,    41,    42,    43,    45,    51,  -106,    53,  -106,   280,
    -106,     0,    12,   248,   280,    66,    68,    79,    80,   280,
      82,    83,    87,    88,   280,   280,   280,   280,   280,   280,
    -106,   118,  -106,  -106,    78,   280,   280,   280,   280,   280,
     280,   280,   280,  -106,   126,    85,    94,    95,    89,   134,
      96,    97,   102,    86,   142,   179,   187,   195,   203,   253,
    -106,   113,    -3,    -3,   110,   110,     4,    44,    44,  -106,
     141,   125,   127,   132,   119,   128,  -106,  -106,   133,   140,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,    77,   121,   130,
     138,  -106,  -106,   159,   139,   148,   165,   136,   151,   176,
    -106,   160,   183,    -2,  -106,   157,    77,   184,   -15,   164,
      77,   192,   167,   202,   204,  -106,   186,   181,  -106,  -106,
     210,   211,    77,   280,    77,  -106,   188,   280,    77,  -106,
     212,   240,   217,   280,   258,   218,  -106,   220,  -106,   263,
    -106,  -106,    77,  -106,   225,   232,   227,    77,   228,  -106
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -106,  -106,  -106,  -105,  -106,  -106,   236,  -106,  -106,  -106,
    -106,  -106,   -29
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      51,     3,   116,   131,   132,    64,    57,    58,   136,   137,
      69,    55,    56,    57,    58,    74,    75,    76,    77,    78,
      79,   134,     9,    10,    11,   141,    82,    83,    84,    85,
      86,    87,    88,    89,     1,    62,     4,   150,     5,   152,
      52,    34,    62,   155,    36,    37,    53,    38,    39,    40,
       7,    55,    56,    57,    58,    59,    41,   164,     8,     9,
      10,    11,   168,    12,    13,    14,    15,    16,    17,    42,
      43,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     7,    62,    44,    45,    46,    28,    47,    29,     8,
       9,    10,    11,    48,    49,    13,    14,    15,    16,    17,
      65,    66,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    67,    68,   151,    70,    71,    28,   154,    29,
      72,    73,    81,    99,   159,    55,    56,    57,    58,    59,
      91,    93,    94,    55,    56,    57,    58,    59,    92,    96,
      97,    55,    56,    57,    58,    59,    98,   106,    62,    55,
      56,    57,    58,    59,    60,    61,    62,   107,   108,   111,
     109,    80,    60,    61,    62,   110,   114,   117,   112,    90,
      60,    61,    62,   115,   118,   120,   124,    95,    60,    61,
      62,   119,   123,   121,   125,   100,    55,    56,    57,    58,
      59,   122,   126,   129,    55,    56,    57,    58,    59,   130,
     133,   135,    55,    56,    57,    58,    59,   140,   142,   143,
      55,    56,    57,    58,    59,    60,    61,    62,   144,   146,
     147,   145,   101,    60,    61,    62,   148,   153,   149,   156,
     102,    60,    61,    62,   158,   161,   162,   166,   103,    60,
      61,    62,   165,   167,    35,   169,   104,    55,    56,    57,
      58,    59,     0,     0,     0,    55,    56,    57,    58,    59,
      55,    56,    57,    58,    59,    55,    56,    57,    58,    59,
      55,    56,    57,    58,    59,     0,    60,    61,    62,     0,
       0,     0,     0,   157,    60,    61,    62,     0,    63,    60,
      61,    62,     0,   105,    60,    61,    62,     0,   160,    60,
      61,    62,    17,   163,     0,     0,     0,     0,    21,    22,
      23,    24,    25,    26,    50,     0,     0,     0,     0,     0,
       0,     0,    29
};

static const yytype_int16 yycheck[] =
{
      29,    39,   107,     5,     6,    34,     9,    10,    23,    24,
      39,     7,     8,     9,    10,    44,    45,    46,    47,    48,
      49,   126,    13,    14,    15,   130,    55,    56,    57,    58,
      59,    60,    61,    62,     3,    38,     0,   142,    16,   144,
      40,    42,    38,   148,    42,    42,    34,    42,    42,    42,
       4,     7,     8,     9,    10,    11,    42,   162,    12,    13,
      14,    15,   167,    17,    18,    19,    20,    21,    22,    42,
      42,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     4,    38,    42,    42,    42,    40,    42,    42,    12,
      13,    14,    15,    42,    41,    18,    19,    20,    21,    22,
      34,    33,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    33,    33,   143,    33,    33,    40,   147,    42,
      33,    33,    44,    37,   153,     7,     8,     9,    10,    11,
      45,    36,    43,     7,     8,     9,    10,    11,    44,    43,
      43,     7,     8,     9,    10,    11,    44,    34,    38,     7,
       8,     9,    10,    11,    36,    37,    38,    16,    33,    40,
      33,    43,    36,    37,    38,    33,    33,    46,    40,    43,
      36,    37,    38,    33,    44,    16,    40,    43,    36,    37,
      38,    43,    17,    44,    33,    43,     7,     8,     9,    10,
      11,    43,    16,    33,     7,     8,     9,    10,    11,    16,
      43,    17,     7,     8,     9,    10,    11,    43,    16,    42,
       7,     8,     9,    10,    11,    36,    37,    38,    16,    33,
      39,    17,    43,    36,    37,    38,    16,    39,    17,    17,
      43,    36,    37,    38,    17,    17,    16,     5,    43,    36,
      37,    38,    17,    16,     8,    17,    43,     7,     8,     9,
      10,    11,    -1,    -1,    -1,     7,     8,     9,    10,    11,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
       7,     8,     9,    10,    11,    -1,    36,    37,    38,    -1,
      -1,    -1,    -1,    43,    36,    37,    38,    -1,    40,    36,
      37,    38,    -1,    40,    36,    37,    38,    -1,    40,    36,
      37,    38,    22,    40,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    48,    39,     0,    16,    49,     4,    12,    13,
      14,    15,    17,    18,    19,    20,    21,    22,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    40,    42,
      50,    52,    53,    59,    42,    53,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    41,
      34,    59,    40,    34,    54,     7,     8,     9,    10,    11,
      36,    37,    38,    40,    59,    34,    33,    33,    33,    59,
      33,    33,    33,    33,    59,    59,    59,    59,    59,    59,
      43,    44,    59,    59,    59,    59,    59,    59,    59,    59,
      43,    45,    44,    36,    43,    43,    43,    43,    44,    37,
      43,    43,    43,    43,    43,    40,    34,    16,    33,    33,
      33,    40,    40,    51,    33,    33,    50,    46,    44,    43,
      16,    44,    43,    17,    40,    33,    16,    55,    56,    33,
      16,     5,     6,    43,    50,    17,    23,    24,    57,    58,
      43,    50,    16,    42,    16,    17,    33,    39,    16,    17,
      50,    59,    50,    39,    59,    50,    17,    43,    17,    59,
      40,    17,    16,    40,    50,    17,     5,    16,    50,    17
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
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
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
    while (YYID (0))
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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
      YYSIZE_T yyn = 0;
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
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
      int yychecklim = YYLAST - yyn + 1;
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
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
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
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  YYUSE (yyvaluep);

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
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

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
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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

/* Line 1455 of yacc.c  */
#line 39 "Main.y"
    {printf("\n::::    MAIN Function END    ::::\n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 44 "Main.y"
    { ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 47 "Main.y"
    { ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 48 "Main.y"
    {  ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 50 "Main.y"
    {   printf("value of expression: %d\n", (yyvsp[(1) - (2)].val)); (yyval.val)=(yyvsp[(1) - (2)].val);
		printf("\n\n");
		;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 54 "Main.y"
    { 
							printf("\nValue of the variable : %d\n",(yyvsp[(3) - (4)].val));
							setVal((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].val));
							//data[$1]=$3;
							(yyval.val)=(yyvsp[(3) - (4)].val);
							printf("\n\n");
						;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 62 "Main.y"
    {
								if((yyvsp[(3) - (7)].val)){
									printf("\nvalue of expression in IF : %d\n",(yyvsp[(6) - (7)].val));
								}
								else{
									printf("\ncondition value zero in IF block\n");
								}
								printf("\n\n");
							;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 72 "Main.y"
    {
								if((yyvsp[(3) - (11)].val)){
									printf("value of expression in IF : %d\n",(yyvsp[(6) - (11)].val));
								}
								else{
									printf("value of expression in ELSE : %d\n",(yyvsp[(10) - (11)].val));
								}
								printf("\n\n");
							;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 81 "Main.y"
    {
									if((yyvsp[(3) - (18)].val)){
									printf("value of expression in IF : %d\n",(yyvsp[(6) - (18)].val));
								}
								else if((yyvsp[(10) - (18)].val)){
									printf("value of expression in ELSE-IF : %d\n",(yyvsp[(13) - (18)].val));
								}
								else{
									printf("value of expression in ELSE : %d\n",(yyvsp[(17) - (18)].val));
								}
								printf("\n\n");
	;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 97 "Main.y"
    {
	                                int i;
	                                printf("For Loop execution\n");
	                                for(i=(yyvsp[(3) - (11)].val) ; i<(yyvsp[(5) - (11)].val) ; i=i+(yyvsp[(7) - (11)].val) ) 
	                                {printf("\nvalue of i : %d expression value : %d\n", i,(yyvsp[(10) - (11)].val));}
	                                printf("\n\n");

				               ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 106 "Main.y"
    {
	                                int i;
	                                printf("Reverse For Loop execution\n");
	                                for(i=(yyvsp[(3) - (11)].val) ; i>=(yyvsp[(5) - (11)].val) ; i=i-(yyvsp[(7) - (11)].val) ) 
	                                {printf("\nvalue of i : %d expression value : %d\n", i,(yyvsp[(10) - (11)].val));}
	                                printf("\n\n");

				               ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 116 "Main.y"
    {printf("\nPrint Expression %d\n",(yyvsp[(3) - (5)].val));
		printf("\n\n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 120 "Main.y"
    {
		printf("Odd Even Number detection \n");

		if((yyvsp[(3) - (5)].val) %2 ==0){
			printf("Number : %d is -> Even\n",(yyvsp[(3) - (5)].val));
		}
		else{
			printf("Number is : %d is -> Odd\n",(yyvsp[(3) - (5)].val));
		}
		printf("\n\n");
		;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 132 "Main.y"
    {
		printf("\nARRAY Declaration  [ ]\n");
		
		printf("\nSize of the ARRAY is : %d\n",(yyvsp[(5) - (7)].val));
		printf("\n\n");
	;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 139 "Main.y"
    { checkSwitch = (yyvsp[(3) - (4)].val);
									printf("\nCheck Switch  : %d\n",checkSwitch);;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 141 "Main.y"
    {
		printf("\nSWITCH CASE Declaration  &  Case : %d executed\n",checkSwitch);
        printf("\n\n");
	;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 146 "Main.y"
    {
	                                int i;
	                                printf("\n WHILE Loop execution \n");
	                                for(i=(yyvsp[(3) - (9)].val) ; i<(yyvsp[(5) - (9)].val) ; i++) {printf("\niteration loop : %d    \n", i);}
	                                printf("\n\n");
	                                								
				               ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 154 "Main.y"
    {
	                                int i;
	                                printf("\n REVERSE WHILE Loop execution \n");
	                                for(i=(yyvsp[(3) - (9)].val) ; i>(yyvsp[(5) - (9)].val) ; i--) {printf("\niteration loop : %d    \n", i);}
	                                printf("\n\n");
	                                								
				               ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 166 "Main.y"
    {printf("\nvariable Dection\n");
		printf("\n\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 171 "Main.y"
    {printf("interger declaration\n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 172 "Main.y"
    {printf("float declaration\n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 173 "Main.y"
    {printf("char declaration\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 178 "Main.y"
    {
	int res = addNewVal((yyvsp[(3) - (3)].str));
		if(res == 0){
			printf("Compilation Error :: Varriable already declared\n");
			exit(-1);
		}
	;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 185 "Main.y"
    {
		int res = addNewVal((yyvsp[(1) - (1)].str));
		if(res == 0){
			printf("Compilation Error :: Varriable already declared\n");
			exit(-1);
		}
	;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 202 "Main.y"
    { int check = (yyvsp[(2) - (5)].val);
											if(check == checkSwitch)
											{
												printf("\nCase No : %d & expression value : %d \n",(yyvsp[(2) - (5)].val),(yyvsp[(4) - (5)].val));
												def = -1000;
											}
										;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 210 "Main.y"
    {
				if(def != -1000)
				{
					printf("\nDefault case & expression value : %d",(yyvsp[(3) - (4)].val));
				}
 				
 			;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 220 "Main.y"
    {  (yyval.val) = (yyvsp[(1) - (1)].val);  ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 222 "Main.y"
    { (yyval.val) = getVal((yyvsp[(1) - (1)].str)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 224 "Main.y"
    {printf("\nAddition : %d+%d = %d \n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)+(yyvsp[(3) - (3)].val) );  (yyval.val) = (yyvsp[(1) - (3)].val) + (yyvsp[(3) - (3)].val);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 226 "Main.y"
    {printf("\nSubtraction : %d-%d=%d \n ",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)-(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) - (yyvsp[(3) - (3)].val); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 228 "Main.y"
    {printf("\nMultiplication : %d*%d \n ",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)*(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) * (yyvsp[(3) - (3)].val); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 230 "Main.y"
    { if((yyvsp[(3) - (3)].val)){
				     					printf("\nDivision : %d/%d \n ",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)/(yyvsp[(3) - (3)].val));
				     					(yyval.val) = (yyvsp[(1) - (3)].val) / (yyvsp[(3) - (3)].val);
				     					
				  					}
				  					else{
										(yyval.val) = 0;
										printf("\nDivision by zero\n\t");
				  					} 	
				    			;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 240 "Main.y"
    { if((yyvsp[(3) - (3)].val)){
				     					printf("\nMod : %d MOD %d \n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val) % (yyvsp[(3) - (3)].val));
				     					(yyval.val) = (yyvsp[(1) - (3)].val) % (yyvsp[(3) - (3)].val);
				     					
				  					}
				  					else{
										(yyval.val) = 0;
										printf("\nMOD by zero\n");
				  					} 	
				    			;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 250 "Main.y"
    {printf("\nPower  : %d ^ %d \n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val) ^ (yyvsp[(3) - (3)].val));  (yyval.val) = pow((yyvsp[(1) - (3)].val) , (yyvsp[(3) - (3)].val));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 251 "Main.y"
    {printf("\nLess Than : %d < %d \n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val) < (yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) < (yyvsp[(3) - (3)].val) ; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 253 "Main.y"
    {printf("\nGreater than : %d > %d \n ",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val) > (yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) > (yyvsp[(3) - (3)].val); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 255 "Main.y"
    {	 (yyval.val) = (yyvsp[(2) - (3)].val); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 257 "Main.y"
    {printf("Value of Sin(%d) is %lf\n",(yyvsp[(3) - (4)].val),sin((yyvsp[(3) - (4)].val)*3.1416/180)); (yyval.val)=sin((yyvsp[(3) - (4)].val)*3.1416/180);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 259 "Main.y"
    {printf("Value of Cos(%d) is %lf\n",(yyvsp[(3) - (4)].val),cos((yyvsp[(3) - (4)].val)*3.1416/180)); (yyval.val)=cos((yyvsp[(3) - (4)].val)*3.1416/180);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 261 "Main.y"
    {printf("Value of Tan(%d) is %lf\n",(yyvsp[(3) - (4)].val),tan((yyvsp[(3) - (4)].val)*3.1416/180)); (yyval.val)=tan((yyvsp[(3) - (4)].val)*3.1416/180);;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 263 "Main.y"
    {printf("Value of Log10(%d) is %lf\n",(yyvsp[(3) - (4)].val),(log((yyvsp[(3) - (4)].val)*1.0)/log(10.0))); (yyval.val)=(log((yyvsp[(3) - (4)].val)*1.0)/log(10.0));;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 265 "Main.y"
    {printf("Value of Log(%d) is %lf\n",(yyvsp[(3) - (4)].val),(log((yyvsp[(3) - (4)].val)))); (yyval.val)=(log((yyvsp[(3) - (4)].val)));;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 267 "Main.y"
    {
		printf("\nFACTORIAL declaration\n");
		int i;
		int f=1;
		for(i=1;i<=(yyvsp[(3) - (4)].val);i++)
		{
			f=f*i;
		}
		printf("FACTORIAL of %d is : %d\n",(yyvsp[(3) - (4)].val),f);
		printf("\n\n");

		;}
    break;



/* Line 1455 of yacc.c  */
#line 1960 "Main.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
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
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 281 "Main.y"



int  yyerror(char *s){
	printf( "%s\n", s);
}
int yywrap()
{
	return 1;
}

int main()
{
	freopen("input_test.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	yyparse();

    
	return 0;
}


