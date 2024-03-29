
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
#line 1 "x.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	int data[100];
	int yylex();
	int  defn = 0;
	int cnt[1000] = {0};



/* Line 189 of yacc.c  */
#line 85 "x.tab.c"

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
     NUM = 258,
     VAR = 259,
     IF = 260,
     ELSE = 261,
     MAIN = 262,
     INT = 263,
     FLOAT = 264,
     CHAR = 265,
     START = 266,
     END = 267,
     SWITCH = 268,
     CASE = 269,
     DEFAULT = 270,
     BREAK = 271,
     LOOP = 272,
     SHOW = 273,
     SIN = 274,
     COS = 275,
     TAN = 276,
     LOG = 277,
     LOG10 = 278,
     FACTORIAL = 279,
     MAXIMUM = 280,
     GCD = 281,
     LCM = 282,
     MINIMUM = 283,
     SUM = 284,
     ROOT = 285,
     PRIME = 286,
     TRI = 287,
     REV = 288,
     P = 289,
     DE = 290,
     IFX = 291
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 163 "x.tab.c"

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
#define YYLAST   553

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNRULES -- Number of states.  */
#define YYNSTATES  177

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    49,     2,     2,
      46,    47,    41,    39,    48,    40,     2,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,    44,
      37,    45,    38,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    50,     2,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    10,    13,    15,    18,    21,    26,
      32,    40,    48,    56,    64,    72,    82,    90,    99,   113,
     119,   125,   133,   139,   143,   145,   148,   151,   160,   168,
     171,   173,   175,   177,   181,   183,   185,   187,   191,   195,
     199,   203,   207,   211,   215,   219,   223,   228,   233,   236,
     239,   242,   245
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,     7,    43,    11,    53,    12,    -1,    -1,
      53,    54,    -1,    44,    -1,    58,    44,    -1,    61,    44,
      -1,     4,    45,    61,    44,    -1,    24,    46,    61,    47,
      44,    -1,    29,    46,    61,    48,    61,    47,    44,    -1,
      25,    46,    61,    48,    61,    47,    44,    -1,    28,    46,
      61,    48,    61,    47,    44,    -1,    26,    46,    61,    48,
      61,    47,    44,    -1,    27,    46,    61,    48,    61,    47,
      44,    -1,    17,    46,     3,    43,     3,    47,    11,    54,
      12,    -1,    13,    46,     4,    47,    11,    55,    12,    -1,
       5,    46,    61,    47,    11,    61,    44,    12,    -1,     5,
      46,    61,    47,    11,    61,    44,    12,     6,    11,    61,
      44,    12,    -1,    18,    46,    61,    47,    44,    -1,    35,
      46,    61,    47,    44,    -1,    34,    46,    61,    48,    61,
      47,    44,    -1,    33,    46,    61,    47,    44,    -1,    32,
      61,    44,    -1,    56,    -1,    56,    57,    -1,    56,    56,
      -1,    14,     3,    43,    18,    46,    61,    47,    44,    -1,
      15,    43,    18,    46,    61,    47,    44,    -1,    59,    60,
      -1,     8,    -1,     9,    -1,    10,    -1,    60,    48,     4,
      -1,     4,    -1,     3,    -1,     4,    -1,    61,    39,    61,
      -1,    61,    40,    61,    -1,    61,    41,    61,    -1,    61,
      42,    61,    -1,    61,    49,    61,    -1,    61,    50,    61,
      -1,    61,    37,    61,    -1,    61,    38,    61,    -1,    46,
      61,    47,    -1,    30,    46,    61,    47,    -1,    31,    46,
      61,    47,    -1,    19,    61,    -1,    20,    61,    -1,    21,
      61,    -1,    23,    61,    -1,    22,    61,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    31,    33,    36,    37,    39,    41,    47,
      56,    65,    70,    75,    85,    97,   101,   103,   112,   120,
     121,   135,   148,   149,   166,   167,   169,   170,   172,   174,
     178,   179,   180,   185,   197,   210,   212,   214,   216,   218,
     220,   228,   236,   237,   239,   241,   242,   244,   262,   264,
     266,   268,   269
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "VAR", "IF", "ELSE", "MAIN",
  "INT", "FLOAT", "CHAR", "START", "END", "SWITCH", "CASE", "DEFAULT",
  "BREAK", "LOOP", "SHOW", "SIN", "COS", "TAN", "LOG", "LOG10",
  "FACTORIAL", "MAXIMUM", "GCD", "LCM", "MINIMUM", "SUM", "ROOT", "PRIME",
  "TRI", "REV", "P", "DE", "IFX", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'",
  "':'", "';'", "'='", "'('", "')'", "','", "'%'", "'^'", "$accept",
  "program", "go", "stm", "B", "C", "D", "declaration", "TYPE", "ID1",
  "exp", 0
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
     285,   286,   287,   288,   289,   290,   291,    60,    62,    43,
      45,    42,    47,    58,    59,    61,    40,    41,    44,    37,
      94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    55,    55,    56,    56,    57,    58,
      59,    59,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     2,     1,     2,     2,     4,     5,
       7,     7,     7,     7,     7,     9,     7,     8,    13,     5,
       5,     7,     5,     3,     1,     2,     2,     8,     7,     2,
       1,     1,     1,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     4,     2,     2,
       2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     0,    35,    36,     0,
      30,    31,    32,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     4,     0,     0,     0,
       0,     0,     0,     0,     0,    36,    48,    49,    50,    52,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,    34,    29,     0,     0,     0,
       0,     0,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
       0,     0,     0,    45,     0,    43,    44,    37,    38,    39,
      40,    41,    42,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,    47,     0,     0,     0,    33,
       0,     0,     0,    19,     9,     0,     0,     0,     0,     0,
      22,     0,    20,     0,     0,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,     0,    26,    25,
       0,    11,    13,    14,    12,    10,    21,    17,     0,     0,
       0,     0,     0,     0,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    27,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    36,   135,   148,   149,    37,    38,    66,
      39
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -45
static const yytype_int16 yypact[] =
{
      10,   -18,    26,    17,   -45,   -45,   101,   -45,   -14,   -13,
     -45,   -45,   -45,   -45,    -4,     2,     3,    43,    43,    43,
      43,    43,    13,    14,    15,    21,    22,    23,    24,    25,
      43,    35,    37,    39,   -45,    43,   -45,   -12,    52,   -30,
      43,    43,    68,    81,    43,   -45,   499,   499,   499,   499,
     499,    43,    43,    43,    43,    43,    43,    43,    43,    38,
      43,    43,    43,   149,   -45,   -45,    42,    43,    43,    43,
      43,    43,    43,   -45,    43,    43,   163,   177,    44,    54,
     191,   205,   219,   233,   247,   261,   275,   289,   303,   -45,
     317,   331,   345,   -45,    82,   503,   503,   -20,   -20,   -44,
     -44,   499,   499,   -45,    87,    88,    98,    58,    63,    43,
      43,    43,    43,    43,   -45,   -45,    64,    43,    71,   -45,
      43,   102,    65,   -45,   -45,   359,   373,   387,   401,   415,
     -45,   429,   -45,   443,   114,   125,     1,   127,    95,    96,
      97,    99,   100,   110,   130,   103,   -45,   112,   102,   -45,
     148,   -45,   -45,   -45,   -45,   -45,   -45,   153,   142,   144,
     151,   173,   118,   139,   -45,    43,    43,    43,   457,   471,
     485,   181,   162,   164,   -45,   -45,   -45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -45,   -45,   -45,    45,   -45,    76,   -45,   -45,   -45,   -45,
     -17
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      46,    47,    48,    49,    50,    74,    75,    67,    68,    69,
      70,    71,    72,    59,    73,   134,   147,     1,    63,    74,
      75,    71,    72,    76,    77,     3,     4,    80,     5,    74,
      75,    40,    64,    41,    81,    82,    83,    84,    85,    86,
      87,    88,    42,    90,    91,    92,     7,    45,    43,    44,
      95,    96,    97,    98,    99,   100,    65,   101,   102,    51,
      52,    53,    17,    18,    19,    20,    21,    54,    55,    56,
      57,    58,    78,    28,    29,    67,    68,    69,    70,    71,
      72,    60,    89,    61,    79,    62,   119,    74,    75,    35,
      94,   105,   125,   126,   127,   128,   129,   106,   120,   121,
     131,   122,   123,   133,     7,     8,     9,   124,   130,    10,
      11,    12,   137,    13,    14,   132,   134,   145,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,   146,   150,   151,
     152,   153,   157,   154,   155,    34,   158,    35,   168,   169,
     170,     7,     8,     9,   156,   159,    10,    11,    12,   161,
     162,    14,   163,   164,   166,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,   165,   167,    67,    68,    69,    70,
      71,    72,    34,   174,    35,   160,    93,   136,    74,    75,
      67,    68,    69,    70,    71,    72,   175,   103,   176,     0,
       0,     0,    74,    75,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,   104,     0,    74,    75,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,   107,     0,
      74,    75,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,   108,     0,    74,    75,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,   109,    74,    75,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,   110,    74,    75,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,   111,    74,    75,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,   112,
      74,    75,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,   113,    74,    75,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,   114,     0,    74,    75,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
     115,     0,    74,    75,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,   116,     0,    74,    75,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,   117,
      74,    75,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,   118,     0,    74,    75,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,   138,     0,    74,    75,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
     139,     0,    74,    75,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,   140,     0,    74,    75,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,   141,     0,
      74,    75,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,   142,     0,    74,    75,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,   143,     0,    74,    75,
      67,    68,    69,    70,    71,    72,     0,   144,     0,     0,
       0,     0,    74,    75,    67,    68,    69,    70,    71,    72,
       0,   171,     0,     0,     0,     0,    74,    75,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,   172,     0,
      74,    75,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,   173,     0,    74,    75,    67,    68,    69,    70,
      71,    72,    69,    70,    71,    72,     0,     0,    74,    75,
       0,     0,    74,    75
};

static const yytype_int16 yycheck[] =
{
      17,    18,    19,    20,    21,    49,    50,    37,    38,    39,
      40,    41,    42,    30,    44,    14,    15,     7,    35,    49,
      50,    41,    42,    40,    41,    43,     0,    44,    11,    49,
      50,    45,    44,    46,    51,    52,    53,    54,    55,    56,
      57,    58,    46,    60,    61,    62,     3,     4,    46,    46,
      67,    68,    69,    70,    71,    72,     4,    74,    75,    46,
      46,    46,    19,    20,    21,    22,    23,    46,    46,    46,
      46,    46,     4,    30,    31,    37,    38,    39,    40,    41,
      42,    46,    44,    46,     3,    46,     4,    49,    50,    46,
      48,    47,   109,   110,   111,   112,   113,    43,    11,    11,
     117,     3,    44,   120,     3,     4,     5,    44,    44,     8,
       9,    10,    47,    12,    13,    44,    14,     3,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    12,    11,    44,
      44,    44,    12,    44,    44,    44,    43,    46,   165,   166,
     167,     3,     4,     5,    44,    43,     8,     9,    10,     6,
      18,    13,    18,    12,    46,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    11,    46,    37,    38,    39,    40,
      41,    42,    44,    12,    46,   150,    47,   121,    49,    50,
      37,    38,    39,    40,    41,    42,    44,    44,    44,    -1,
      -1,    -1,    49,    50,    37,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    47,    -1,    49,    50,    37,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    47,    -1,
      49,    50,    37,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    50,    37,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      37,    38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    37,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    37,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    37,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    37,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,
      37,    38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      47,    -1,    49,    50,    37,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    47,    -1,    49,    50,    37,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    37,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    50,    37,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,
      37,    38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      47,    -1,    49,    50,    37,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    47,    -1,    49,    50,    37,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    47,    -1,
      49,    50,    37,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    50,    37,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,
      37,    38,    39,    40,    41,    42,    -1,    44,    -1,    -1,
      -1,    -1,    49,    50,    37,    38,    39,    40,    41,    42,
      -1,    44,    -1,    -1,    -1,    -1,    49,    50,    37,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    47,    -1,
      49,    50,    37,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    50,    37,    38,    39,    40,
      41,    42,    39,    40,    41,    42,    -1,    -1,    49,    50,
      -1,    -1,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    52,    43,     0,    11,    53,     3,     4,     5,
       8,     9,    10,    12,    13,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    44,    46,    54,    58,    59,    61,
      45,    46,    46,    46,    46,     4,    61,    61,    61,    61,
      61,    46,    46,    46,    46,    46,    46,    46,    46,    61,
      46,    46,    46,    61,    44,     4,    60,    37,    38,    39,
      40,    41,    42,    44,    49,    50,    61,    61,     4,     3,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    44,
      61,    61,    61,    47,    48,    61,    61,    61,    61,    61,
      61,    61,    61,    44,    47,    47,    43,    47,    47,    48,
      48,    48,    48,    48,    47,    47,    47,    48,    47,     4,
      11,    11,     3,    44,    44,    61,    61,    61,    61,    61,
      44,    61,    44,    61,    14,    55,    56,    47,    47,    47,
      47,    47,    47,    47,    44,     3,    12,    15,    56,    57,
      11,    44,    44,    44,    44,    44,    44,    12,    43,    43,
      54,     6,    18,    18,    12,    11,    46,    46,    61,    61,
      61,    44,    47,    47,    12,    44,    44
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
        case 6:

/* Line 1455 of yacc.c  */
#line 37 "x.y"
    { printf("Declaration\n"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 39 "x.y"
    {   printf("value of exp: %d\n", (yyvsp[(1) - (2)])); (yyval)=(yyvsp[(1) - (2)]);;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 41 "x.y"
    { 
							data[(yyvsp[(1) - (4)])] = (yyvsp[(3) - (4)]); 
							printf("Value of the variable: %d\t\n",(yyvsp[(3) - (4)]));
							(yyval)=(yyvsp[(3) - (4)]);
						;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 47 "x.y"
    {
	         int f=1;
			for(int i=(yyvsp[(3) - (5)]); i>=2; i--)
			{
				f*=i;			
			}
			(yyval)=f;
			printf("Value of the Factorial: %d\n",(yyval));
	     ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 56 "x.y"
    {
	         int f=0;
			for(int i=(yyvsp[(3) - (7)]); i<=(yyvsp[(5) - (7)]); i++)
			{
				f+=i;			
			}
			(yyval)=f;
			printf("Summation bewteen %d and %d is: %d\n", (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]),(yyval));
	     ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 65 "x.y"
    {
			   if((yyvsp[(3) - (7)])>(yyvsp[(5) - (7)])) (yyval)=(yyvsp[(3) - (7)]);
			   else (yyval) = (yyvsp[(5) - (7)]);
			   printf("Maximum of the two numbers = %d\n",(yyval));
			;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 70 "x.y"
    {
			   if((yyvsp[(3) - (7)])<(yyvsp[(5) - (7)])) (yyval)=(yyvsp[(3) - (7)]);
			   else (yyval) = (yyvsp[(5) - (7)]);
			   printf("Minimum of the two numbers = %d\n",(yyval));
			;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 75 "x.y"
    {
      int gcd;
	    for(int i=1; i <= (yyvsp[(3) - (7)]) && i <=(yyvsp[(5) - (7)]) ; ++i)
    {
        
        if((yyvsp[(3) - (7)])%i==0 && (yyvsp[(5) - (7)])%i==0)
            gcd = i;
    }
    printf("G.C.D of %d and %d is %d\n", (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), gcd);
	;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 85 "x.y"
    {
      int gcd,lcm;
	    for(int i=1; i <= (yyvsp[(3) - (7)]) && i <=(yyvsp[(5) - (7)]) ; ++i)
    {
        
        if((yyvsp[(3) - (7)])%i==0 && (yyvsp[(5) - (7)])%i==0)
            gcd = i;
    }
    lcm = ((yyvsp[(3) - (7)]) * (yyvsp[(5) - (7)])) / gcd;    
    printf("L.C.M of %d and %d is %d\n", (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), lcm);
	;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 97 "x.y"
    {
	                                int i;
	                                for(i=(yyvsp[(3) - (9)]) ; i<=(yyvsp[(5) - (9)]) ; i++) {printf("value of the loop: %d exp value: %d\n", i,(yyvsp[(8) - (9)]));}									
				               ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 103 "x.y"
    {
								if((yyvsp[(3) - (8)])){
									printf("\nvalue of exp in IF: %d\n",(yyvsp[(6) - (8)]));
								}
								else{
									printf("condition value zero in IF block\n");
								}
							;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 112 "x.y"
    {
								if((yyvsp[(3) - (13)])){
									printf("value of exp in IF: %d\n",(yyvsp[(6) - (13)]));
								}
								else{
									printf("value of exp in ELSE: %d\n",(yyvsp[(11) - (13)]));
								}
							;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 120 "x.y"
    {printf("Print exp %d\n",(yyvsp[(3) - (5)]));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 121 "x.y"
    {int binaryToDecimal(long binarynum)
{
    int decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}
printf("Equivalent decimal number of %d is: %d\n",(yyvsp[(3) - (5)]), binaryToDecimal((yyvsp[(3) - (5)])));
;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 135 "x.y"
    {int fact(int n) 
{ 
    if (n <= 1) 
        return 1; 
    return n*fact(n-1); 
} 
  
int nPr(int n, int r) 
{ 
    return fact(n)/fact(n-r); 
} 
 printf("%dP%d is %d\n", (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), nPr((yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]))); 
  ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 148 "x.y"
    {int r=0; while ((yyvsp[(3) - (5)]) != 0){r = r * 10; r = r + (yyvsp[(3) - (5)])%10;  (yyvsp[(3) - (5)]) = (yyvsp[(3) - (5)])/10;}printf("Reverse of the number = %d\n", r);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 149 "x.y"
    {
	int i ,j,k=0;
	printf("\nTriangle of %d:\n",(yyvsp[(2) - (3)]));
	    for (i=1; i<=(yyvsp[(2) - (3)]); ++i,k=0) {
        for (j=1; j<=(yyvsp[(2) - (3)])-i; ++j)
        { printf("  "); }
        while (k!=2*i-1) {
            printf("* ");
            ++k;
        }
        printf("\n");
    }    
      printf("\n");
	;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 170 "x.y"
    {printf("Print Switch expression value %d\n",(yyvsp[(6) - (8)])); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 172 "x.y"
    {printf("Print Switch expression value %d\n",(yyvsp[(5) - (7)])); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 185 "x.y"
    {
            if(cnt[(yyvsp[(3) - (3)])]==0)
			{
			    cnt[(yyvsp[(3) - (3)])]++;
			}
			else
			{
			   defn = 1;
			   printf("Variable %c can't be declared twice\n",(yyvsp[(3) - (3)])+'a');
			}
			   
         ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 197 "x.y"
    {
	      if(cnt[(yyvsp[(1) - (1)])]==0)
			{
			    cnt[(yyvsp[(1) - (1)])]++;
			}
			else
			{
			   defn = 1;
			   printf("Variable %c can't be declared twice\n",(yyvsp[(1) - (1)])+'a');
			}
	;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 210 "x.y"
    { (yyval) = (yyvsp[(1) - (1)]); 	;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 212 "x.y"
    { (yyval) = data[(yyvsp[(1) - (1)])]; ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 214 "x.y"
    { (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 216 "x.y"
    { (yyval) = (yyvsp[(1) - (3)]) - (yyvsp[(3) - (3)]); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 218 "x.y"
    { (yyval) = (yyvsp[(1) - (3)]) * (yyvsp[(3) - (3)]); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 220 "x.y"
    { if((yyvsp[(3) - (3)])){
				     					(yyval) = (yyvsp[(1) - (3)]) / (yyvsp[(3) - (3)]);
				  					}
				  					else{
										(yyval) = 0;
										printf("\ndivision by zero\t");
				  					} 	
				    			;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 228 "x.y"
    { if((yyvsp[(3) - (3)])){
				     					(yyval) = (yyvsp[(1) - (3)]) % (yyvsp[(3) - (3)]);
				  					}
				  					else{
										(yyval) = 0;
										printf("\nMOD by zero\t");
				  					} 	
				    			;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 236 "x.y"
    { (yyval) = pow((yyvsp[(1) - (3)]) , (yyvsp[(3) - (3)]));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 237 "x.y"
    { (yyval) = (yyvsp[(1) - (3)]) < (yyvsp[(3) - (3)]); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 239 "x.y"
    { (yyval) = (yyvsp[(1) - (3)]) > (yyvsp[(3) - (3)]); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 241 "x.y"
    { (yyval) = (yyvsp[(2) - (3)]);	;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 242 "x.y"
    { (yyval) = sqrt((yyvsp[(3) - (4)]));
							 printf("Square root of the number = %d\n",(yyval));;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 244 "x.y"
    { 
	    int n, i, flag = 0;
	for (i = 2; i < (yyvsp[(3) - (4)]) / 2; ++i) {
        if ((yyvsp[(3) - (4)]) % i == 0) {
            flag = 1;
            break;
        }
    }
    if ((yyvsp[(3) - (4)]) == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.\n", (yyvsp[(3) - (4)]));
        else
            printf("%d is not a prime number.\n", (yyvsp[(3) - (4)]));}

	 ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 262 "x.y"
    {printf("Value of Sin(%d) is %lf\n",(yyvsp[(2) - (2)]),sin((yyvsp[(2) - (2)])*3.1416/180)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 264 "x.y"
    {printf("Value of Cos(%d) is %lf\n",(yyvsp[(2) - (2)]),cos((yyvsp[(2) - (2)])*3.1416/180)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 266 "x.y"
    {printf("Value of Tan(%d) is %lf\n",(yyvsp[(2) - (2)]),tan((yyvsp[(2) - (2)])*3.1416/180)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 268 "x.y"
    {printf("Value of Log10(%d) is %lf\n",(yyvsp[(2) - (2)]),(log((yyvsp[(2) - (2)])*1.0)/log(10.0))); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 269 "x.y"
    {printf("Value of Log(%d) is %lf\n",(yyvsp[(2) - (2)]),(log((yyvsp[(2) - (2)]))));;}
    break;



/* Line 1455 of yacc.c  */
#line 1990 "x.tab.c"
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
#line 271 "x.y"



yyerror(char *s){
	printf( "%s\n", s);
}


