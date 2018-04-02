/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 8 "yacc.y"

	#define YYERROR_VERBOSE 1
	#define YYDEBUG 1
	
	#include <iostream>
	#include <stack>
	#include <string>
	#include<queue>
	#include "../logger/Logger.h"
	#include "../Error Handler/error_handler.h"
	#include "../Symbol Table/symbol_parser.h"
	#include "../Symbol Table/Symbol.h"
	#include "../AST/Object/Procedure.h"
	#include "../AST/Node.h"
	#include "../AST/Expression/Expression.h"
	#include "../AST/Expression/AutoConst.h"
	#include "../AST/Expression/Identifier.h"
	#include "../AST/Expression/BinaryExpression.h"
	#include "../AST/Expression/UnaryExpression.h"
	#include "../AST/Statement/Statement.h"
	#include "../AST/Statement/Assignment.h"


	extern symbolParser* SPL;

	using namespace std;
	

	extern int yylex();
	extern int yyparse();
	extern FILE* yyin;
	extern Procedure* AST;

	Logger l("logs/parser.log");
	void yyerror(const char *);
		


/* Line 371 of yacc.c  */
#line 107 "yacc.tab.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "yacc.tab.h".  */
#ifndef YY_YY_YACC_TAB_H_INCLUDED
# define YY_YY_YACC_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     RANK_SPECIFIER = 258,
     IDENTIFIER = 259,
     INTEGER_LITERAL = 260,
     REAL_LITERAL = 261,
     CHARACTER_LITERAL = 262,
     STRING_LITERAL = 263,
     ABSTRACT = 264,
     AS = 265,
     BASE = 266,
     BOOL = 267,
     BREAK = 268,
     BYTE = 269,
     CASE = 270,
     CATCH = 271,
     CHAR = 272,
     CHECKED = 273,
     CLASS = 274,
     CONST = 275,
     CONTINUE = 276,
     DECIMAL = 277,
     DEFAULT = 278,
     DELEGATE = 279,
     DO = 280,
     DOUBLE = 281,
     ELSE = 282,
     ENUM = 283,
     EVENT = 284,
     EXPLICIT = 285,
     EXTERN = 286,
     FALSE = 287,
     FINALLY = 288,
     FIXED = 289,
     FLOAT = 290,
     FOR = 291,
     FOREACH = 292,
     GOTO = 293,
     IF = 294,
     IMPLICIT = 295,
     IN = 296,
     INT = 297,
     INTERFACE = 298,
     INTERNAL = 299,
     IS = 300,
     LOCK = 301,
     LONG = 302,
     NAMESPACE = 303,
     NEW = 304,
     NULL_LITERAL = 305,
     OBJECT = 306,
     OPERATOR = 307,
     OUT = 308,
     OVERRIDE = 309,
     PARAMS = 310,
     PRIVATE = 311,
     PROTECTED = 312,
     PUBLIC = 313,
     READONLY = 314,
     REF = 315,
     RETURN = 316,
     SBYTE = 317,
     SEALED = 318,
     SHORT = 319,
     SIZEOF = 320,
     STACKALLOC = 321,
     STATIC = 322,
     STRING = 323,
     STRUCT = 324,
     SWITCH = 325,
     THIS = 326,
     THROW = 327,
     TRUE = 328,
     TRY = 329,
     TYPEOF = 330,
     UINT = 331,
     ULONG = 332,
     UNCHECKED = 333,
     UNSAFE = 334,
     USHORT = 335,
     USING = 336,
     VIRTUAL = 337,
     VOID = 338,
     VOLATILE = 339,
     WHILE = 340,
     ASSEMBLY = 341,
     FIELD = 342,
     METHOD = 343,
     MODULE = 344,
     PARAM = 345,
     PROPERTY = 346,
     TYPE = 347,
     GET = 348,
     SET = 349,
     ADD = 350,
     REMOVE = 351,
     COMMA = 352,
     LEFT_BRACKET = 353,
     RIGHT_BRACKET = 354,
     LEFT_BRACKET_GROUP = 355,
     RIGHT_BRACKET_GROUP = 356,
     LEFT_BRACKET_CIRCLE = 357,
     RIGHT_BRACKET_CIRCLE = 358,
     GREATER = 359,
     SMALLER = 360,
     SEMICOLON = 361,
     COLON = 362,
     DOT = 363,
     PLUS = 364,
     MINUS = 365,
     STAR = 366,
     SLASH = 367,
     PERCENT = 368,
     AND = 369,
     OR = 370,
     EXCLAMATION_POINT = 371,
     TILDE = 372,
     QUESTION_MARK = 373,
     POWER = 374,
     EQUAL = 375,
     PLUSEQ = 376,
     MINUSEQ = 377,
     STAREQ = 378,
     DIVEQ = 379,
     MODEQ = 380,
     XOREQ = 381,
     ANDEQ = 382,
     OREQ = 383,
     LTLT = 384,
     GTGT = 385,
     GTGTEQ = 386,
     LTLTEQ = 387,
     EQEQ = 388,
     NOTEQ = 389,
     LEQ = 390,
     GEQ = 391,
     ANDAND = 392,
     OROR = 393,
     PLUSPLUS = 394,
     MINUSMINUS = 395,
     ARROW = 396,
     THEN = 397
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 47 "yacc.y"

	struct R{
		int i;
		float f;
		char c;
		char* str;
		int line_no;
		int col_no;

		string *modifier,*base;
		queue<string> *modifiers ,*bases;

		string *identifier;
		queue<string> *identifiers ;
		queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >* types_ids;

		Procedure* proc;
		Symbol* symbol;
		Expression *exp;
		Statement* st;
		Operator op;
		Node* node;

		bool known_type;
        
		}r;
	

/* Line 387 of yacc.c  */
#line 321 "yacc.tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 349 "yacc.tab.cpp"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3284

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  261
/* YYNRULES -- Number of rules.  */
#define YYNRULES  602
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1004

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   397

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    51,    53,    55,    57,
      59,    61,    63,    65,    67,    69,    71,    73,    76,    79,
      82,    85,    88,    89,    92,    94,    96,    98,   102,   104,
     107,   110,   112,   114,   116,   118,   120,   122,   124,   126,
     128,   130,   132,   134,   136,   138,   142,   146,   150,   154,
     159,   164,   165,   167,   172,   177,   178,   180,   182,   186,
     188,   192,   197,   200,   203,   205,   211,   219,   223,   224,
     226,   231,   236,   241,   246,   250,   253,   258,   260,   262,
     264,   266,   268,   271,   274,   276,   278,   281,   284,   287,
     290,   293,   295,   297,   299,   301,   306,   312,   319,   325,
     331,   337,   338,   340,   342,   345,   347,   349,   351,   355,
     359,   363,   365,   369,   373,   375,   379,   383,   385,   389,
     393,   397,   401,   405,   409,   411,   415,   419,   421,   425,
     427,   431,   433,   437,   439,   443,   445,   449,   451,   457,
     461,   463,   465,   467,   469,   471,   473,   475,   477,   479,
     481,   483,   485,   487,   489,   491,   493,   495,   497,   499,
     501,   503,   505,   507,   509,   511,   513,   515,   517,   519,
     521,   523,   524,   529,   533,   534,   536,   538,   541,   543,
     547,   550,   553,   556,   559,   562,   564,   568,   570,   574,
     576,   578,   580,   586,   590,   592,   596,   600,   603,   606,
     609,   612,   615,   618,   621,   624,   627,   630,   633,   636,
     639,   642,   644,   646,   648,   650,   652,   654,   656,   658,
     660,   666,   674,   680,   684,   685,   687,   689,   692,   695,
     697,   700,   704,   707,   709,   711,   713,   715,   718,   724,
     730,   731,   732,   740,   748,   756,   766,   767,   769,   770,
     772,   773,   775,   777,   779,   781,   783,   785,   789,   798,
     800,   802,   804,   806,   808,   811,   814,   817,   820,   824,
     829,   833,   837,   842,   846,   850,   854,   855,   857,   861,
     865,   869,   873,   878,   880,   883,   890,   897,   900,   901,
     903,   906,   909,   912,   918,   924,   926,   928,   935,   937,
     941,   945,   948,   951,   952,   954,   955,   957,   958,   960,
     961,   968,   969,   971,   973,   976,   979,   983,   988,   990,
     993,   995,   997,  1003,  1009,  1013,  1017,  1019,  1022,  1024,
    1026,  1028,  1030,  1032,  1034,  1036,  1037,  1039,  1041,  1044,
    1046,  1048,  1050,  1052,  1054,  1056,  1058,  1060,  1062,  1064,
    1066,  1068,  1070,  1072,  1073,  1082,  1083,  1092,  1093,  1095,
    1098,  1101,  1106,  1108,  1112,  1116,  1117,  1119,  1121,  1124,
    1126,  1128,  1130,  1132,  1134,  1136,  1138,  1140,  1142,  1144,
    1151,  1158,  1164,  1170,  1172,  1173,  1183,  1184,  1194,  1195,
    1205,  1206,  1216,  1225,  1234,  1243,  1252,  1253,  1255,  1257,
    1261,  1263,  1265,  1267,  1271,  1273,  1277,  1279,  1281,  1286,
    1290,  1294,  1295,  1297,  1299,  1304,  1314,  1317,  1320,  1321,
    1323,  1324,  1326,  1332,  1338,  1340,  1342,  1349,  1360,  1363,
    1366,  1372,  1378,  1387,  1393,  1399,  1402,  1407,  1409,  1411,
    1419,  1430,  1432,  1434,  1436,  1438,  1440,  1442,  1444,  1446,
    1448,  1450,  1452,  1454,  1456,  1458,  1460,  1462,  1464,  1466,
    1468,  1470,  1472,  1474,  1482,  1490,  1491,  1501,  1502,  1504,
    1510,  1516,  1524,  1526,  1528,  1530,  1532,  1540,  1541,  1543,
    1546,  1550,  1551,  1553,  1555,  1558,  1560,  1562,  1564,  1566,
    1568,  1570,  1572,  1574,  1576,  1580,  1585,  1586,  1588,  1590,
    1594,  1595,  1604,  1605,  1607,  1610,  1614,  1615,  1617,  1619,
    1622,  1624,  1626,  1628,  1630,  1639,  1648,  1649,  1651,  1652,
    1663,  1664,  1678,  1682,  1686,  1693,  1700,  1707,  1709,  1712,
    1720,  1721,  1723,  1726,  1730,  1735,  1736,  1738,  1740,  1744,
    1747,  1752,  1762,  1772,  1774,  1776,  1779,  1786,  1794,  1795,
    1797,  1800,  1802,  1804,  1806,  1808,  1810,  1812,  1814,  1816,
    1818,  1820,  1824,  1827,  1828,  1830,  1832,  1836,  1837,  1838,
    1839,  1840,  1841,  1842,  1844,  1846,  1848,  1850,  1852,  1854,
    1856,  1858,  1860
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     274,     0,    -1,   145,    -1,     5,    -1,     6,    -1,     7,
      -1,     8,    -1,    50,    -1,    73,    -1,    32,    -1,   281,
      -1,   281,    -1,   149,    -1,   157,    -1,   150,    -1,   147,
      -1,   151,    -1,   155,    -1,   156,    -1,   152,    -1,    12,
      -1,   153,    -1,   154,    -1,    22,    -1,    62,    -1,    14,
      -1,    64,    -1,    80,    -1,    42,    -1,    76,    -1,    47,
      -1,    77,    -1,    17,    -1,    35,    -1,    26,    -1,    51,
      -1,    68,    -1,   148,   111,    -1,    83,   111,    -1,   157,
     159,    -1,   150,   159,    -1,   281,   159,    -1,    -1,   159,
     158,    -1,     3,    -1,   208,    -1,   162,    -1,   161,    97,
     162,    -1,   208,    -1,    60,   160,    -1,    53,   160,    -1,
     165,    -1,   164,    -1,   144,    -1,   178,    -1,   166,    -1,
     167,    -1,   169,    -1,   172,    -1,   173,    -1,   176,    -1,
     180,    -1,   185,    -1,   181,    -1,   182,    -1,   102,   208,
     103,    -1,   163,   108,     4,    -1,   151,   108,     4,    -1,
     155,   108,     4,    -1,   164,   102,   168,   103,    -1,   281,
     102,   168,   103,    -1,    -1,   161,    -1,   163,    98,   171,
      99,    -1,   281,    98,   171,    99,    -1,    -1,   171,    -1,
     208,    -1,   171,    97,   208,    -1,    71,    -1,    11,   108,
       4,    -1,    11,    98,   171,    99,    -1,   186,   139,    -1,
     186,   140,    -1,   177,    -1,    49,   148,   102,   168,   103,
      -1,    49,   149,    98,   171,    99,   158,   179,    -1,    49,
     157,   354,    -1,    -1,   354,    -1,    75,   102,   148,   103,
      -1,    75,   102,    83,   103,    -1,    18,   102,   208,   103,
      -1,    78,   102,   208,   103,    -1,   186,   141,     4,    -1,
     114,   190,    -1,    65,   102,   148,   103,    -1,   163,    -1,
     281,    -1,   174,    -1,   175,    -1,   183,    -1,   116,   190,
      -1,   117,   190,    -1,   191,    -1,   186,    -1,   139,   190,
      -1,   140,   190,    -1,   109,   190,    -1,   110,   190,    -1,
     111,   190,    -1,   188,    -1,   189,    -1,   184,    -1,   187,
      -1,   102,   208,   103,   187,    -1,   102,   195,   111,   103,
     190,    -1,   102,   281,   159,   192,   103,   190,    -1,   102,
     151,   192,   103,   190,    -1,   102,   155,   192,   103,   190,
      -1,   102,    83,   192,   103,   190,    -1,    -1,   193,    -1,
     194,    -1,   193,   194,    -1,   159,    -1,   111,    -1,   190,
      -1,   195,   111,   190,    -1,   195,   112,   190,    -1,   195,
     113,   190,    -1,   195,    -1,   196,   109,   195,    -1,   196,
     110,   195,    -1,   196,    -1,   197,   129,   196,    -1,   197,
     130,   196,    -1,   197,    -1,   198,   105,   197,    -1,   198,
     104,   197,    -1,   198,   135,   197,    -1,   198,   136,   197,
      -1,   198,    45,   148,    -1,   198,    10,   148,    -1,   198,
      -1,   199,   133,   198,    -1,   199,   134,   198,    -1,   199,
      -1,   200,   114,   199,    -1,   200,    -1,   201,   119,   200,
      -1,   201,    -1,   202,   115,   201,    -1,   202,    -1,   203,
     137,   202,    -1,   203,    -1,   204,   138,   203,    -1,   204,
      -1,   204,   118,   208,   107,   208,    -1,   190,   207,   208,
      -1,   120,    -1,   121,    -1,   122,    -1,   123,    -1,   124,
      -1,   125,    -1,   126,    -1,   127,    -1,   128,    -1,   131,
      -1,   132,    -1,   205,    -1,   206,    -1,   208,    -1,   208,
      -1,   218,    -1,   219,    -1,   212,    -1,   213,    -1,   217,
      -1,   228,    -1,   230,    -1,   239,    -1,   254,    -1,   261,
      -1,   266,    -1,   267,    -1,   268,    -1,   269,    -1,   240,
      -1,   271,    -1,    -1,   100,   214,   215,   101,    -1,   100,
       1,   101,    -1,    -1,   216,    -1,   211,    -1,   216,   211,
      -1,   106,    -1,     4,   107,   211,    -1,   220,   106,    -1,
     225,   106,    -1,   220,     1,    -1,   225,     1,    -1,   148,
     221,    -1,   222,    -1,   221,    97,   222,    -1,     4,    -1,
       4,   120,   223,    -1,   208,    -1,   354,    -1,   224,    -1,
      66,   148,    98,   208,    99,    -1,    20,   148,   226,    -1,
     227,    -1,   226,    97,   227,    -1,     4,   120,   209,    -1,
     167,   106,    -1,   177,   106,    -1,   206,   106,    -1,   174,
     106,    -1,   175,   106,    -1,   188,   106,    -1,   189,   106,
      -1,   167,     1,    -1,   177,     1,    -1,   206,     1,    -1,
     174,     1,    -1,   175,     1,    -1,   188,     1,    -1,   189,
       1,    -1,   167,    -1,   177,    -1,   206,    -1,   174,    -1,
     175,    -1,   188,    -1,   189,    -1,   231,    -1,   232,    -1,
      39,   400,   210,   401,   212,    -1,    39,   400,   210,   401,
     212,    27,   212,    -1,    70,   400,   208,   401,   233,    -1,
     100,   234,   101,    -1,    -1,   235,    -1,   236,    -1,   235,
     236,    -1,   237,   216,    -1,   238,    -1,   237,   238,    -1,
      15,   209,   107,    -1,    23,   107,    -1,   241,    -1,   244,
      -1,   245,    -1,   253,    -1,    79,   213,    -1,    85,   102,
     210,   103,   212,    -1,    85,   102,     1,   103,   212,    -1,
      -1,    -1,    85,     1,   242,   210,     1,   212,   243,    -1,
      25,   212,    85,   102,   210,   103,   106,    -1,    25,   212,
      85,   102,   210,   103,     1,    -1,    36,   400,   246,   402,
     247,   402,   248,   401,   212,    -1,    -1,   249,    -1,    -1,
     250,    -1,    -1,   251,    -1,   220,    -1,   252,    -1,   210,
      -1,   252,    -1,   229,    -1,   252,    97,   229,    -1,    37,
     400,   148,     4,   403,   208,   401,   212,    -1,   255,    -1,
     256,    -1,   257,    -1,   258,    -1,   260,    -1,    13,   106,
      -1,    13,     1,    -1,    21,   106,    -1,    21,     1,    -1,
      38,     4,   106,    -1,    38,    15,   209,   106,    -1,    38,
      23,   106,    -1,    38,     4,     1,    -1,    38,    15,   209,
       1,    -1,    38,    23,     1,    -1,    61,   259,   106,    -1,
      61,   259,     1,    -1,    -1,   208,    -1,    72,   259,   106,
      -1,    72,   259,     1,    -1,    74,   213,   262,    -1,    74,
     213,   265,    -1,    74,   213,   262,   265,    -1,   263,    -1,
     262,   263,    -1,    16,   102,   155,   264,   103,   213,    -1,
      16,   102,   147,   264,   103,   213,    -1,    16,   213,    -1,
      -1,     4,    -1,    33,   213,    -1,    18,   213,    -1,    78,
     213,    -1,    46,   102,   208,   103,   212,    -1,    81,   102,
     270,   103,   212,    -1,   220,    -1,   208,    -1,    34,   102,
     148,   272,   103,   212,    -1,   273,    -1,   272,    97,   273,
      -1,     4,   120,   208,    -1,   275,   276,    -1,   275,   288,
      -1,    -1,   284,    -1,    -1,   382,    -1,    -1,   288,    -1,
      -1,   276,    48,   281,   279,   283,   280,    -1,    -1,   106,
      -1,     4,    -1,   282,     4,    -1,     4,   108,    -1,   282,
       4,   108,    -1,   100,   275,   277,   101,    -1,   285,    -1,
     284,   285,    -1,   286,    -1,   287,    -1,    81,     4,   120,
     281,   106,    -1,    81,     4,   120,   281,     1,    -1,    81,
     146,   106,    -1,    81,   146,     1,    -1,   289,    -1,   288,
     289,    -1,   278,    -1,   290,    -1,   294,    -1,   347,    -1,
     357,    -1,   374,    -1,   381,    -1,    -1,   292,    -1,   293,
      -1,   292,   293,    -1,     9,    -1,    31,    -1,    44,    -1,
      49,    -1,    54,    -1,    56,    -1,    57,    -1,    58,    -1,
      59,    -1,    63,    -1,    67,    -1,    79,    -1,    82,    -1,
      84,    -1,    -1,   276,   291,   399,     4,   297,   295,   300,
     280,    -1,    -1,   276,   291,   399,     4,   297,   296,     1,
     280,    -1,    -1,   298,    -1,   107,   155,    -1,   107,   299,
      -1,   107,   155,    97,   299,    -1,   147,    -1,   299,    97,
     147,    -1,   100,   301,   101,    -1,    -1,   302,    -1,   303,
      -1,   302,   303,    -1,   304,    -1,   305,    -1,   306,    -1,
     321,    -1,   328,    -1,   332,    -1,   335,    -1,   340,    -1,
     344,    -1,   290,    -1,   276,   291,    20,   148,   226,   106,
      -1,   276,   291,    20,   148,   226,     1,    -1,   276,   291,
     148,   221,   106,    -1,   276,   291,   148,   221,     1,    -1,
     307,    -1,    -1,   276,   291,   148,   281,   102,   312,   103,
     308,   213,    -1,    -1,   276,   291,    83,   281,   102,   312,
     103,   309,   213,    -1,    -1,   276,   291,   148,   281,   102,
       1,   103,   310,   213,    -1,    -1,   276,   291,    83,   281,
     102,     1,   103,   311,   213,    -1,   276,   291,   148,   281,
     102,   312,   103,   106,    -1,   276,   291,    83,   281,   102,
     312,   103,   106,    -1,   276,   291,   148,   281,   102,     1,
     103,   106,    -1,   276,   291,    83,   281,   102,     1,   103,
     106,    -1,    -1,   314,    -1,   315,    -1,   314,    97,   315,
      -1,   148,    -1,    83,    -1,   316,    -1,   314,    97,   316,
      -1,   318,    -1,   315,    97,   318,    -1,   317,    -1,   320,
      -1,   276,   319,   148,     4,    -1,   317,   120,   223,    -1,
     320,   120,   223,    -1,    -1,    60,    -1,    53,    -1,   276,
      55,   148,     4,    -1,   276,   291,   148,   281,   397,   100,
     322,   101,   398,    -1,   325,   323,    -1,   326,   324,    -1,
      -1,   326,    -1,    -1,   325,    -1,   276,    93,   398,   327,
     397,    -1,   276,    94,   398,   327,   397,    -1,   213,    -1,
     106,    -1,   276,   291,    29,   148,   221,   106,    -1,   276,
     291,    29,   148,   281,   395,   100,   329,   101,   396,    -1,
     330,   331,    -1,   331,   330,    -1,   276,    95,   396,   213,
     395,    -1,   276,    96,   396,   213,   395,    -1,   276,   291,
     333,   397,   100,   322,   101,   398,    -1,   148,    71,    98,
     314,    99,    -1,   148,   334,    98,   314,    99,    -1,   282,
      71,    -1,   276,   291,   336,   345,    -1,   337,    -1,   339,
      -1,   148,    52,   338,   102,   148,     4,   103,    -1,   148,
      52,   338,   102,   148,     4,    97,   148,     4,   103,    -1,
     109,    -1,   110,    -1,   116,    -1,   117,    -1,   139,    -1,
     140,    -1,    73,    -1,    32,    -1,   111,    -1,   112,    -1,
     113,    -1,   114,    -1,   115,    -1,   119,    -1,   129,    -1,
     130,    -1,   133,    -1,   134,    -1,   104,    -1,   105,    -1,
     136,    -1,   135,    -1,    40,    52,   148,   102,   148,     4,
     103,    -1,    30,    52,   148,   102,   148,     4,   103,    -1,
      -1,   276,   291,     4,   102,   312,   103,   341,   342,   346,
      -1,    -1,   343,    -1,   107,    11,   102,   168,   103,    -1,
     107,    71,   102,   168,   103,    -1,   276,   291,   117,     4,
     102,   103,   213,    -1,   213,    -1,   106,    -1,   213,    -1,
     106,    -1,   276,   291,    69,     4,   348,   350,   280,    -1,
      -1,   349,    -1,   107,   299,    -1,   100,   351,   101,    -1,
      -1,   352,    -1,   353,    -1,   352,   353,    -1,   304,    -1,
     305,    -1,   306,    -1,   321,    -1,   328,    -1,   332,    -1,
     335,    -1,   340,    -1,   290,    -1,   100,   355,   101,    -1,
     100,   356,    97,   101,    -1,    -1,   356,    -1,   223,    -1,
     356,    97,   223,    -1,    -1,   276,   291,    43,     4,   359,
     358,   361,   280,    -1,    -1,   360,    -1,   107,   299,    -1,
     100,   362,   101,    -1,    -1,   363,    -1,   364,    -1,   363,
     364,    -1,   365,    -1,   367,    -1,   372,    -1,   369,    -1,
     276,   366,   148,     4,   102,   312,   103,   373,    -1,   276,
     366,    83,     4,   102,   312,   103,   373,    -1,    -1,    49,
      -1,    -1,   276,   366,   148,     4,   397,   100,   371,   101,
     398,   368,    -1,    -1,   276,   366,   148,    71,    98,   314,
      99,   397,   100,   371,   101,   398,   370,    -1,   276,    93,
     373,    -1,   276,    94,   373,    -1,   276,    93,   373,   276,
      94,   373,    -1,   276,    94,   373,   276,    93,   373,    -1,
     276,   366,    29,   148,     4,   373,    -1,   106,    -1,   100,
     101,    -1,   276,   291,    28,     4,   375,   377,   280,    -1,
      -1,   376,    -1,   107,   153,    -1,   100,   378,   101,    -1,
     100,   379,    97,   101,    -1,    -1,   379,    -1,   380,    -1,
     379,    97,   380,    -1,   276,     4,    -1,   276,     4,   120,
     209,    -1,   276,   291,    24,   313,     4,   102,   312,   103,
     106,    -1,   276,   291,    24,   313,     4,   102,   312,   103,
       1,    -1,   383,    -1,   384,    -1,   383,   384,    -1,   393,
      98,   385,   388,    99,   394,    -1,   393,    98,   385,   388,
      97,    99,   394,    -1,    -1,   386,    -1,   387,   107,    -1,
      86,    -1,    87,    -1,    29,    -1,    88,    -1,    89,    -1,
      90,    -1,    91,    -1,    61,    -1,    92,    -1,   389,    -1,
     388,    97,   389,    -1,   391,   390,    -1,    -1,   392,    -1,
     147,    -1,   102,   170,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,     1,    -1,   102,    -1,     1,    -1,
     103,    -1,     1,    -1,   106,    -1,     1,    -1,    41,    -1,
       1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   138,   138,   139,   140,   141,   142,   143,   146,   147,
     153,   157,   162,   163,   167,   168,   172,   173,   174,   178,
     179,   183,   184,   185,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   200,   201,   204,   205,   208,   209,   212,
     213,   214,   217,   218,   221,   225,   229,   230,   233,   234,
     235,   238,   239,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   256,   259,   260,   261,   264,
     265,   268,   269,   272,   273,   276,   277,   280,   281,   284,
     287,   288,   291,   294,   297,   300,   303,   304,   307,   308,
     311,   312,   315,   318,   321,   324,   327,   330,   331,   332,
     333,   334,   337,   338,   339,   340,   343,   346,   349,   350,
     351,   352,   353,   354,   355,   363,   364,   365,   366,   367,
     368,   371,   372,   375,   376,   379,   380,   383,   384,   389,
     394,   402,   407,   412,   420,   425,   430,   438,   443,   448,
     453,   458,   463,   468,   476,   481,   486,   494,   499,   506,
     511,   519,   524,   532,   537,   545,   550,   559,   564,   572,
     580,   581,   582,   583,   584,   585,   586,   587,   588,   589,
     590,   593,   594,   597,   600,   604,   605,   606,   609,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   624,   624,   625,   628,   629,   633,   634,   637,   640,
     643,   644,   645,   646,   649,   657,   662,   669,   673,   679,
     680,   681,   684,   687,   694,   700,   708,   717,   718,   719,
     720,   721,   722,   723,   724,   725,   726,   727,   728,   729,
     730,   733,   734,   735,   736,   737,   738,   739,   742,   743,
     746,   747,   750,   753,   756,   757,   760,   761,   764,   767,
     768,   771,   772,   775,   776,   777,   778,   781,   784,   785,
     786,   786,   786,   789,   790,   794,   799,   800,   803,   804,
     807,   808,   811,   812,   815,   818,   821,   822,   825,   828,
     829,   830,   831,   832,   835,   836,   839,   840,   843,   844,
     845,   846,   847,   848,   851,   852,   855,   856,   859,   860,
     863,   864,   865,   868,   869,   872,   873,   874,   877,   878,
     881,   884,   887,   890,   893,   896,   897,   901,   904,   905,
     908,   911,   912,   915,   916,   919,   920,   923,   924,   927,
     927,   931,   932,   936,   940,   947,   948,   952,   955,   956,
     959,   960,   963,   964,   967,   968,   971,   972,   975,   976,
     979,   980,   981,   982,   983,   995,   999,  1006,  1012,  1020,
    1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,
    1031,  1032,  1033,  1044,  1043,  1049,  1048,  1057,  1058,  1061,
    1062,  1063,  1075,  1081,  1090,  1094,  1095,  1098,  1099,  1102,
    1103,  1104,  1105,  1106,  1107,  1108,  1109,  1110,  1111,  1114,
    1119,  1127,  1132,  1140,  1145,  1144,  1152,  1151,  1158,  1157,
    1164,  1162,  1173,  1177,  1181,  1185,  1193,  1196,  1200,  1204,
    1213,  1214,  1226,  1231,  1238,  1243,  1250,  1258,  1268,  1279,
    1287,  1298,  1299,  1300,  1303,  1314,  1320,  1321,  1324,  1325,
    1328,  1329,  1332,  1338,  1344,  1345,  1348,  1349,  1355,  1356,
    1359,  1365,  1371,  1377,  1379,  1382,  1386,  1389,  1390,  1393,
    1394,  1397,  1398,  1399,  1400,  1401,  1402,  1403,  1404,  1405,
    1406,  1407,  1408,  1409,  1410,  1411,  1412,  1413,  1414,  1415,
    1416,  1417,  1418,  1421,  1422,  1426,  1425,  1432,  1433,  1436,
    1437,  1453,  1456,  1457,  1460,  1461,  1466,  1469,  1470,  1473,
    1476,  1479,  1480,  1483,  1484,  1487,  1488,  1489,  1490,  1491,
    1492,  1493,  1494,  1496,  1501,  1502,  1505,  1506,  1509,  1510,
    1516,  1515,  1523,  1524,  1527,  1530,  1533,  1534,  1537,  1538,
    1541,  1542,  1543,  1544,  1548,  1554,  1562,  1563,  1569,  1566,
    1576,  1572,  1580,  1581,  1582,  1583,  1586,  1591,  1592,  1597,
    1600,  1601,  1604,  1607,  1608,  1611,  1612,  1615,  1616,  1619,
    1620,  1625,  1626,  1631,  1634,  1635,  1638,  1639,  1642,  1643,
    1646,  1649,  1650,  1651,  1652,  1653,  1654,  1655,  1656,  1657,
    1660,  1661,  1664,  1667,  1668,  1671,  1674,  1681,  1684,  1687,
    1690,  1693,  1696,  1704,  1705,  1708,  1709,  1712,  1713,  1716,
    1717,  1720,  1721
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RANK_SPECIFIER", "IDENTIFIER",
  "\"int_value\"", "\"real_value\"", "\"char_value\"", "\"str_value\"",
  "ABSTRACT", "AS", "BASE", "BOOL", "BREAK", "BYTE", "CASE", "CATCH",
  "CHAR", "CHECKED", "CLASS", "CONST", "CONTINUE", "DECIMAL", "DEFAULT",
  "DELEGATE", "DO", "DOUBLE", "ELSE", "ENUM", "EVENT", "EXPLICIT",
  "EXTERN", "FALSE", "FINALLY", "FIXED", "FLOAT", "FOR", "FOREACH", "GOTO",
  "IF", "IMPLICIT", "IN", "INT", "INTERFACE", "INTERNAL", "IS", "LOCK",
  "LONG", "NAMESPACE", "NEW", "NULL_LITERAL", "OBJECT", "OPERATOR", "OUT",
  "OVERRIDE", "PARAMS", "PRIVATE", "PROTECTED", "PUBLIC", "READONLY",
  "REF", "RETURN", "SBYTE", "SEALED", "SHORT", "SIZEOF", "STACKALLOC",
  "STATIC", "STRING", "STRUCT", "SWITCH", "THIS", "THROW", "TRUE", "TRY",
  "TYPEOF", "UINT", "ULONG", "UNCHECKED", "UNSAFE", "USHORT", "USING",
  "VIRTUAL", "VOID", "VOLATILE", "WHILE", "ASSEMBLY", "FIELD", "METHOD",
  "MODULE", "PARAM", "PROPERTY", "TYPE", "GET", "SET", "ADD", "REMOVE",
  "\",\"", "\"[\"", "\"]\"", "\"{\"", "\"}\"", "\"(\"", "\")\"", "\">\"",
  "\"<\"", "\";\"", "\":\"", "\".\"", "PLUS", "MINUS", "STAR", "SLASH",
  "PERCENT", "AND", "OR", "EXCLAMATION_POINT", "TILDE", "QUESTION_MARK",
  "POWER", "EQUAL", "PLUSEQ", "MINUSEQ", "STAREQ", "DIVEQ", "MODEQ",
  "XOREQ", "ANDEQ", "OREQ", "LTLT", "GTGT", "GTGTEQ", "LTLTEQ", "EQEQ",
  "NOTEQ", "LEQ", "GEQ", "ANDAND", "OROR", "PLUSPLUS", "MINUSMINUS",
  "ARROW", "THEN", "$accept", "literal", "boolean_literal",
  "namespace_name", "type_name", "type", "non_array_type", "simple_type",
  "primitive_type", "numeric_type", "integral_type", "floating_point_type",
  "class_type", "pointer_type", "array_type", "rank_specifiers_opt",
  "rank_specifier", "variable_reference", "argument_list", "argument",
  "primary_expression", "primary_expression_no_parenthesis",
  "parenthesized_expression", "member_access", "invocation_expression",
  "argument_list_opt", "element_access", "expression_list_opt",
  "expression_list", "this_access", "base_access",
  "post_increment_expression", "post_decrement_expression",
  "new_expression", "object_creation_expression",
  "array_creation_expression", "array_initializer_opt",
  "typeof_expression", "checked_expression", "unchecked_expression",
  "pointer_member_access", "addressof_expression", "sizeof_expression",
  "postfix_expression", "unary_expression_not_plusminus",
  "pre_increment_expression", "pre_decrement_expression",
  "unary_expression", "cast_expression", "type_quals_opt", "type_quals",
  "type_qual", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "conditional_and_expression", "conditional_or_expression",
  "conditional_expression", "assignment", "assignment_operator",
  "expression", "constant_expression", "boolean_expression", "statement",
  "embedded_statement", "block", "$@1", "statement_list_opt",
  "statement_list", "empty_statement", "labeled_statement",
  "declaration_statement", "local_variable_declaration",
  "variable_declarators", "variable_declarator", "variable_initializer",
  "stackalloc_initializer", "local_constant_declaration",
  "constant_declarators", "constant_declarator", "expression_statement",
  "statement_expression", "selection_statement", "if_statement",
  "switch_statement", "switch_block", "switch_sections_opt",
  "switch_sections", "switch_section", "switch_labels", "switch_label",
  "iteration_statement", "unsafe_statement", "while_statement", "$@2",
  "$@3", "do_statement", "for_statement", "for_initializer_opt",
  "for_condition_opt", "for_iterator_opt", "for_initializer",
  "for_condition", "for_iterator", "statement_expression_list",
  "foreach_statement", "jump_statement", "break_statement",
  "continue_statement", "goto_statement", "return_statement",
  "expression_opt", "throw_statement", "try_statement", "catch_clauses",
  "catch_clause", "identifier_opt", "finally_clause", "checked_statement",
  "unchecked_statement", "lock_statement", "using_statement",
  "resource_acquisition", "fixed_statement", "fixed_pointer_declarators",
  "fixed_pointer_declarator", "compilation_unit", "using_directives_opt",
  "attributes_opt", "namespace_member_declarations_opt",
  "namespace_declaration", "$@4", "comma_opt", "qualified_identifier",
  "qualifier", "namespace_body", "using_directives", "using_directive",
  "using_alias_directive", "using_namespace_directive",
  "namespace_member_declarations", "namespace_member_declaration",
  "type_declaration", "modifiers_opt", "modifiers", "modifier",
  "class_declaration", "$@5", "$@6", "class_base_opt", "class_base",
  "interface_type_list", "class_body", "class_member_declarations_opt",
  "class_member_declarations", "class_member_declaration",
  "constant_declaration", "field_declaration", "method_declaration",
  "method_header", "$@7", "$@8", "$@9", "$@10",
  "formal_parameter_list_opt", "return_type", "formal_parameter_list",
  "formal_parameter_default_list", "formal_parameter", "fixed_parameter",
  "formal_parameter_default", "parameter_modifier_opt", "parameter_array",
  "property_declaration", "accessor_declarations",
  "set_accessor_declaration_opt", "get_accessor_declaration_opt",
  "get_accessor_declaration", "set_accessor_declaration", "accessor_body",
  "event_declaration", "event_accessor_declarations",
  "add_accessor_declaration", "remove_accessor_declaration",
  "indexer_declaration", "indexer_declarator", "qualified_this",
  "operator_declaration", "operator_declarator",
  "overloadable_operator_declarator", "overloadable_operator",
  "conversion_operator_declarator", "constructor_declaration", "$@11",
  "constructor_initializer_opt", "constructor_initializer",
  "destructor_declaration", "operator_body", "constructor_body",
  "struct_declaration", "struct_interfaces_opt", "struct_interfaces",
  "struct_body", "struct_member_declarations_opt",
  "struct_member_declarations", "struct_member_declaration",
  "array_initializer", "variable_initializer_list_opt",
  "variable_initializer_list", "interface_declaration", "$@12",
  "interface_base_opt", "interface_base", "interface_body",
  "interface_member_declarations_opt", "interface_member_declarations",
  "interface_member_declaration", "interface_method_declaration",
  "new_opt", "interface_property_declaration", "$@13",
  "interface_indexer_declaration", "$@14", "interface_accessors",
  "interface_event_declaration", "interface_empty_body",
  "enum_declaration", "enum_base_opt", "enum_base", "enum_body",
  "enum_member_declarations_opt", "enum_member_declarations",
  "enum_member_declaration", "delegate_declaration", "attributes",
  "attribute_sections", "attribute_section",
  "attribute_target_specifier_opt", "attribute_target_specifier",
  "attribute_target", "attribute_list", "attribute",
  "attribute_arguments_opt", "attribute_name", "attribute_arguments",
  "ENTER_attrib", "EXIT_attrib", "ENTER_accessor_decl",
  "EXIT_accessor_decl", "ENTER_getset", "EXIT_getset", "class",
  "left_bracket_circle", "right_bracket_circle", "semicolon", "in", YY_NULL
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   143,   144,   144,   144,   144,   144,   144,   145,   145,
     146,   147,   148,   148,   149,   149,   150,   150,   150,   151,
     151,   152,   152,   152,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   154,   154,   155,   155,   156,   156,   157,
     157,   157,   158,   158,   159,   160,   161,   161,   162,   162,
     162,   163,   163,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   165,   166,   166,   166,   167,
     167,   168,   168,   169,   169,   170,   170,   171,   171,   172,
     173,   173,   174,   175,   176,   177,   178,   178,   179,   179,
     180,   180,   181,   182,   183,   184,   185,   186,   186,   186,
     186,   186,   187,   187,   187,   187,   188,   189,   190,   190,
     190,   190,   190,   190,   190,   191,   191,   191,   191,   191,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   195,
     195,   196,   196,   196,   197,   197,   197,   198,   198,   198,
     198,   198,   198,   198,   199,   199,   199,   200,   200,   201,
     201,   202,   202,   203,   203,   204,   204,   205,   205,   206,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   208,   208,   209,   210,   211,   211,   211,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   214,   213,   213,   215,   215,   216,   216,   217,   218,
     219,   219,   219,   219,   220,   221,   221,   222,   222,   223,
     223,   223,   224,   225,   226,   226,   227,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   229,   229,   229,   229,   229,   229,   229,   230,   230,
     231,   231,   232,   233,   234,   234,   235,   235,   236,   237,
     237,   238,   238,   239,   239,   239,   239,   240,   241,   241,
     242,   243,   241,   244,   244,   245,   246,   246,   247,   247,
     248,   248,   249,   249,   250,   251,   252,   252,   253,   254,
     254,   254,   254,   254,   255,   255,   256,   256,   257,   257,
     257,   257,   257,   257,   258,   258,   259,   259,   260,   260,
     261,   261,   261,   262,   262,   263,   263,   263,   264,   264,
     265,   266,   267,   268,   269,   270,   270,   271,   272,   272,
     273,   274,   274,   275,   275,   276,   276,   277,   277,   279,
     278,   280,   280,   281,   281,   282,   282,   283,   284,   284,
     285,   285,   286,   286,   287,   287,   288,   288,   289,   289,
     290,   290,   290,   290,   290,   291,   291,   292,   292,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   295,   294,   296,   294,   297,   297,   298,
     298,   298,   299,   299,   300,   301,   301,   302,   302,   303,
     303,   303,   303,   303,   303,   303,   303,   303,   303,   304,
     304,   305,   305,   306,   308,   307,   309,   307,   310,   307,
     311,   307,   307,   307,   307,   307,   312,   312,   312,   312,
     313,   313,   314,   314,   315,   315,   316,   316,   317,   318,
     318,   319,   319,   319,   320,   321,   322,   322,   323,   323,
     324,   324,   325,   326,   327,   327,   328,   328,   329,   329,
     330,   331,   332,   333,   333,   334,   335,   336,   336,   337,
     337,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   339,   339,   341,   340,   342,   342,   343,
     343,   344,   345,   345,   346,   346,   347,   348,   348,   349,
     350,   351,   351,   352,   352,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   354,   354,   355,   355,   356,   356,
     358,   357,   359,   359,   360,   361,   362,   362,   363,   363,
     364,   364,   364,   364,   365,   365,   366,   366,   368,   367,
     370,   369,   371,   371,   371,   371,   372,   373,   373,   374,
     375,   375,   376,   377,   377,   378,   378,   379,   379,   380,
     380,   381,   381,   382,   383,   383,   384,   384,   385,   385,
     386,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     388,   388,   389,   390,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   399,   400,   400,   401,   401,   402,
     402,   403,   403
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     0,     2,     1,     1,     1,     3,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     4,
       4,     0,     1,     4,     4,     0,     1,     1,     3,     1,
       3,     4,     2,     2,     1,     5,     7,     3,     0,     1,
       4,     4,     4,     4,     3,     2,     4,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     4,     5,     6,     5,     5,
       5,     0,     1,     1,     2,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     3,     0,     1,     1,     2,     1,     3,
       2,     2,     2,     2,     2,     1,     3,     1,     3,     1,
       1,     1,     5,     3,     1,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     7,     5,     3,     0,     1,     1,     2,     2,     1,
       2,     3,     2,     1,     1,     1,     1,     2,     5,     5,
       0,     0,     7,     7,     7,     9,     0,     1,     0,     1,
       0,     1,     1,     1,     1,     1,     1,     3,     8,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     3,     4,
       3,     3,     4,     3,     3,     3,     0,     1,     3,     3,
       3,     3,     4,     1,     2,     6,     6,     2,     0,     1,
       2,     2,     2,     5,     5,     1,     1,     6,     1,     3,
       3,     2,     2,     0,     1,     0,     1,     0,     1,     0,
       6,     0,     1,     1,     2,     2,     3,     4,     1,     2,
       1,     1,     5,     5,     3,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     8,     0,     8,     0,     1,     2,
       2,     4,     1,     3,     3,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       6,     5,     5,     1,     0,     9,     0,     9,     0,     9,
       0,     9,     8,     8,     8,     8,     0,     1,     1,     3,
       1,     1,     1,     3,     1,     3,     1,     1,     4,     3,
       3,     0,     1,     1,     4,     9,     2,     2,     0,     1,
       0,     1,     5,     5,     1,     1,     6,    10,     2,     2,
       5,     5,     8,     5,     5,     2,     4,     1,     1,     7,
      10,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     7,     7,     0,     9,     0,     1,     5,
       5,     7,     1,     1,     1,     1,     7,     0,     1,     2,
       3,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     0,     1,     1,     3,
       0,     8,     0,     1,     2,     3,     0,     1,     1,     2,
       1,     1,     1,     1,     8,     8,     0,     1,     0,    10,
       0,    13,     3,     3,     6,     6,     6,     1,     2,     7,
       0,     1,     2,     3,     4,     0,     1,     1,     3,     2,
       4,     9,     9,     1,     1,     2,     6,     7,     0,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     0,     1,     1,     3,     0,     0,     0,
       0,     0,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     323,     0,     0,   325,   324,   338,   340,   341,   333,     0,
      10,     0,     1,   355,   348,   325,   346,   349,   350,   351,
     352,   353,   354,   326,   563,   564,     0,   339,   335,     0,
     345,   344,   334,   359,   360,   361,     0,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,     0,   356,
     357,   355,   347,   565,   568,   333,     0,   336,   329,   594,
     593,     0,     0,     0,     0,     0,   358,   573,   578,   571,
     572,   574,   575,   576,   577,   579,     0,   569,     0,   343,
     342,     0,    20,    25,    32,    23,    34,    33,    28,    30,
      35,    24,    26,    36,    29,    31,    27,   421,    15,   420,
      12,    14,    16,    19,    21,    22,    17,    18,    13,    11,
       0,   550,   522,   497,   377,   585,    11,     0,   580,   583,
     570,   323,   331,    38,    37,    44,    40,    39,    41,     0,
       0,     0,   551,     0,   520,   523,     0,     0,   498,     0,
     373,   378,     0,   588,    75,   582,   584,   325,   332,   330,
     325,   552,   325,   331,   382,   524,     0,   499,   325,   331,
     379,   380,     0,     0,   588,   581,   566,     3,     4,     5,
       6,     0,     0,     9,     0,     7,     0,    79,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     2,     0,     0,    97,    52,    51,    55,    56,    57,
       0,    76,    58,    59,    99,   100,    60,    84,    54,    61,
      63,    64,   101,   113,    62,   105,   114,   111,   112,   127,
     104,   131,   134,   137,   144,   147,   149,   151,   153,   155,
     157,   171,   172,    77,    98,     0,   325,   431,     0,   417,
     418,   422,   426,   424,   427,     0,     0,   556,   557,   549,
       0,   325,   331,   355,   513,   505,   506,   507,   403,   508,
     509,   510,   511,   512,     0,   325,   503,   496,     0,   325,
     331,   331,   567,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,   121,   121,   121,   131,     0,    98,   108,
     109,   110,    95,   102,   103,   106,   107,     0,     0,     0,
       0,    71,   586,     0,    82,    83,     0,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,   337,   433,     0,   432,     0,     0,   325,   325,
       0,     0,   559,   553,   325,   383,   536,     0,   325,   528,
     530,   531,   533,   532,   521,     0,   500,   504,   381,   355,
     398,     0,   325,   387,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   374,   376,     0,    80,     0,    71,     0,
     516,    87,     0,     0,     0,     0,   126,   125,     0,   122,
     123,     0,     0,     0,    65,   121,    67,    68,     0,    66,
       0,     0,    72,    46,     0,    48,    78,    94,   159,   128,
     129,   130,   127,   132,   133,   135,   136,   143,   142,   139,
     138,   140,   141,   145,   146,   148,   150,   152,   154,     0,
     156,     0,     0,     0,     0,   562,   561,   419,   423,     0,
     425,     0,     0,   209,   429,   211,   210,   430,     0,   554,
     558,   537,     0,   525,   529,   333,     0,     0,     0,     0,
       0,     0,   591,     0,   457,   458,     0,   384,   388,    81,
      92,     0,     0,   518,     0,   517,    96,    91,    90,    93,
       0,   124,     0,     0,     0,   115,     0,    73,    50,    45,
      49,     0,    69,     0,    74,    70,   434,   428,     0,   173,
     560,     0,     0,     0,   325,     0,     0,     0,     0,     0,
     207,     0,     0,     0,   205,   591,     0,     0,     0,     0,
     493,   492,   456,     0,    85,    42,   514,     0,   120,   118,
     119,   116,     0,    47,   158,     0,     0,     0,   591,     0,
       0,     0,     0,   214,     0,   589,     0,     0,     0,     0,
     468,   467,   479,   480,   461,   462,   469,   470,   471,   472,
     473,   463,   464,   474,   475,   476,   477,   478,   482,   481,
     465,   466,     0,   325,   402,     0,   401,     0,     0,   455,
     325,   325,     0,   194,     0,    88,    42,   515,   519,   117,
       0,     0,   325,   325,     0,   325,   485,     0,   400,     0,
     399,   446,     0,     0,     0,     0,     0,   208,     0,     0,
     426,   427,   207,   206,     0,     0,   325,     0,     0,     0,
     325,   325,   193,   333,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   296,     0,   296,     0,     0,
       0,     0,     0,   198,     0,    16,    17,     0,     0,     0,
       0,     0,     0,     0,     0,   196,   177,   178,     0,   195,
     179,   175,   176,     0,     0,   180,   181,   238,   239,   182,
     189,   253,   254,   255,   256,   183,   279,   280,   281,   282,
     283,   184,   185,   186,   187,   188,   190,    98,     0,    86,
      89,    43,   212,     0,   547,   546,     0,     0,   325,     0,
     487,   216,   215,   325,     0,     0,   410,   406,     0,   325,
     453,   408,   404,     0,   454,   592,   592,   592,     0,   436,
     439,     0,   437,   441,     0,   285,   284,   311,     0,   287,
     286,     0,     0,   596,   595,   266,     0,     0,     0,     0,
       0,     0,   297,     0,     0,     0,     0,   312,   257,     0,
     260,     0,   204,   224,   217,   227,   220,   228,   221,   225,
     218,   229,   222,   230,   223,   226,   219,   192,   197,   202,
     200,   203,   201,     0,   548,     0,     0,     0,     0,   591,
       0,     0,   488,     0,     0,   325,   325,     0,     0,   415,
       0,   413,     0,     0,   414,     0,   412,     0,   592,     0,
       0,   452,   199,   213,     0,     0,    56,    99,   100,    84,
     111,   112,   233,   272,   276,     0,   267,   273,     0,   291,
     288,     0,   293,   290,   174,     0,     0,   295,   294,     0,
     299,   298,     0,     0,   300,   303,   301,   316,   315,     0,
       0,     0,     0,   491,   535,   534,     0,     0,   592,     0,
       0,     0,   495,   494,   486,   590,   590,   590,     0,   448,
       0,   449,   484,   483,   411,   407,     0,   459,   409,   405,
     435,   445,   444,   591,   591,     0,     0,     0,   318,   600,
     599,   268,     0,     0,   292,   289,   598,   597,     0,     0,
       0,     0,   307,   310,   304,   302,     0,     0,     0,     0,
     325,   325,   538,   325,    71,    71,     0,     0,   447,     0,
     442,   443,     0,     0,     0,     0,   274,     0,   269,   277,
     602,   601,     0,   240,   313,   244,   242,   308,   308,   314,
       0,   259,   258,     0,     0,   539,     0,     0,     0,   589,
     589,     0,     0,   320,   319,   317,   270,     0,     0,     0,
       0,     0,   245,   246,     0,   249,   309,     0,     0,   261,
       0,     0,   592,   489,   490,   450,   451,   460,   264,   263,
       0,   271,   275,     0,   241,     0,   252,   243,   247,   248,
     250,     0,     0,   262,   544,   545,   540,     0,   278,   251,
     306,   305,   541,   265
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   190,   191,     9,    98,   654,   100,   101,   192,   103,
     104,   105,   193,   107,   108,   595,   397,   498,   412,   413,
     194,   195,   196,   197,   198,   414,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   699,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   398,
     399,   400,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   318,   415,   510,   835,   665,   666,
     667,   593,   668,   669,   670,   671,   672,   673,   523,   524,
     454,   455,   674,   552,   553,   675,   824,   676,   677,   678,
     936,   961,   962,   963,   964,   965,   679,   680,   681,   850,
     993,   682,   683,   825,   927,   980,   826,   928,   981,   827,
     684,   685,   686,   687,   688,   689,   753,   690,   691,   844,
     845,   967,   846,   692,   693,   694,   695,   849,   696,   887,
     888,     2,     3,   237,   235,    14,    81,   149,   234,    11,
     122,     4,     5,     6,     7,    15,    16,    17,    48,    49,
      50,    18,   162,   163,   140,   141,   155,   270,   371,   372,
     373,   255,   256,   257,   258,   807,   802,   805,   800,   238,
     110,   239,   240,   241,   242,   243,   346,   244,   259,   629,
     729,   732,   630,   631,   883,   260,   794,   795,   796,   261,
     472,   527,   262,   473,   474,   582,   475,   263,   710,   791,
     792,   382,   532,   864,    19,   137,   138,   159,   264,   265,
     266,   456,   484,   485,    20,   156,   134,   135,   252,   357,
     358,   359,   360,   462,   361,   945,   362,  1002,   788,   363,
     705,    21,   131,   132,   153,   246,   247,   248,    22,    23,
      24,    25,    76,    77,    78,   117,   118,   145,   119,   146,
      26,   166,   612,   916,   528,   809,    65,   745,   898,   891,
     932
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -819
static const yytype_int16 yypact[] =
{
     -31,    98,   107,    80,   -31,  -819,  -819,  -819,   209,    75,
    -819,   172,  -819,  2928,  -819,    45,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,    80,  -819,   123,  -819,  -819,   302,
    -819,  -819,   200,  -819,  -819,  -819,   302,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,   501,  3200,
    -819,  3171,  -819,  -819,   568,   225,   165,  -819,  -819,  -819,
    -819,  1525,   402,   440,   450,   459,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,   302,  -819,   361,  -819,
    -819,   296,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,   371,  -819,   393,
    -819,   515,  -819,  -819,  -819,  -819,  -819,  -819,   515,   515,
     547,   430,   451,   455,   474,  -819,  -819,   268,  -819,   473,
    -819,   -31,   504,  -819,  -819,  -819,  -819,  -819,  -819,   538,
     477,   544,  -819,   302,  -819,  -819,   302,   553,  -819,   344,
     661,  -819,    35,  -819,  2561,  -819,  -819,   -49,  -819,  -819,
     246,  -819,   342,   504,  -819,   567,   566,   567,   382,   504,
     576,   567,   575,   678,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,   234,   578,  -819,  3087,  -819,   579,  -819,  -819,   581,
     583,  2274,  2561,  2561,  2561,  2561,  2561,  2561,  2561,  2561,
    -819,  -819,   582,   584,   274,   587,  -819,  -819,  -819,  -819,
     590,   589,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,   468,  -819,  -819,  -819,   893,
    -819,   507,    18,   300,    14,   359,   580,   577,   588,   560,
     -72,  -819,  -819,  -819,   -18,   597,   432,   418,   596,   605,
     608,  -819,   586,  -819,   591,   703,   613,   612,  -819,  -819,
     302,   433,   504,  3200,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,   617,   470,  -819,  -819,   302,   471,
     504,   504,  -819,  2561,   717,  2561,   371,   -23,   625,   258,
    3087,  3131,  2561,    41,    60,    66,   514,   628,   337,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,   724,   730,  2561,
     731,  2073,  -819,  2561,  -819,  -819,   732,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  2561,  2561,
    2561,  2561,  2561,  2561,  2561,  2561,  3087,  3087,  2561,  2561,
    2561,  2561,  2561,  2561,  2561,  2561,  2561,  2561,  2561,  2561,
    2561,  2073,  -819,  -819,  3087,  -819,  3087,   195,    80,    80,
    2159,  2159,   618,  -819,   476,  -819,   688,   638,   484,  -819,
    -819,  -819,  -819,  -819,  -819,  2999,  -819,  -819,   567,  3200,
    -819,   639,   488,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,   399,  -819,   643,  2073,  2561,
    2159,  -819,   167,   235,   282,   644,  -819,  -819,   645,    41,
    -819,   646,   647,  2360,  2765,    41,  -819,  -819,   502,  -819,
    2561,  2561,   654,  -819,   650,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,   507,   507,    18,    18,   393,   393,   300,
     300,   300,   300,    14,    14,   359,   580,   577,   588,   648,
     560,   505,   651,    50,    61,  -819,  -819,   608,  -819,   586,
    -819,   591,  3087,  -819,  -819,  -819,  -819,  -819,  2561,  -819,
    -819,  -819,  3043,  -819,  -819,   278,  3087,  3087,   705,   709,
      78,    58,  -819,   327,  -819,  -819,  2685,  -819,  -819,  -819,
    -819,   659,   533,  -819,   664,   669,  -819,  -819,  -819,  -819,
    2561,  -819,  2561,  2561,  2561,  -819,   665,  -819,  -819,  -819,
    -819,  2073,  -819,  2561,  -819,  -819,  -819,  -819,   174,  -819,
    -819,  3087,    79,    83,   246,    81,    95,  3087,  3087,   670,
     406,  2761,   673,    39,  -819,   671,    51,   676,   667,  1362,
    -819,  -819,  -819,   771,  -819,   515,  -819,  1958,  -819,  -819,
    -819,  -819,  2561,  -819,  -819,  2561,    99,   681,   682,   687,
     683,   668,   254,  -819,   207,  -819,   272,   313,  2605,  2159,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,   685,    80,  -819,   786,  -819,  2898,   691,  -819,
      80,    80,   692,  1727,   690,   694,   515,  -819,  -819,  -819,
     696,   350,   246,   246,   697,    80,  -819,  2561,  -819,   794,
    -819,  -819,   700,  3087,  3087,   698,   701,  -819,  3087,   534,
    -819,  -819,   699,  -819,   707,   711,    80,   537,   429,   716,
     489,   493,  -819,   404,   206,   545,  3087,   224,  1843,   710,
     187,   187,   316,   187,   718,  2561,   187,  2561,   722,   548,
     722,   721,   253,  -819,   100,   582,   584,  1173,   850,   925,
    1221,    77,   978,   893,   255,  -819,  -819,  -819,   723,  1727,
    -819,  -819,  -819,   257,   263,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,    22,   725,  -819,
    -819,  -819,  -819,   729,  -819,  -819,   728,   733,    80,   552,
     734,  -819,  -819,    80,   101,   102,   719,   736,   105,    80,
    -819,   738,   739,   737,  -819,  -819,  -819,  -819,   743,  -819,
    -819,   746,  -819,  -819,  1727,  -819,  -819,  -819,    81,  -819,
    -819,   763,  3087,  -819,  -819,  2475,  3087,   265,  2561,   275,
    2561,  2561,  -819,   281,  2561,   286,    92,  -819,  -819,  2475,
    -819,  1481,   752,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,   722,  -819,   350,   350,   449,   754,  -819,
      40,   379,  -819,   519,   755,    80,    80,   750,   756,  -819,
     722,  -819,   722,   387,  -819,   722,  -819,   722,  -819,   395,
     395,  -819,  -819,   760,   759,   109,   244,   256,   308,   310,
     320,   322,  -819,  -819,  -819,   297,  -819,   761,   122,  -819,
    -819,   304,  -819,  -819,  -819,    76,   764,  -819,  -819,    76,
    -819,  -819,   561,   722,    92,  -819,  -819,  -819,  -819,   766,
    2561,   769,   770,  -819,  -819,  -819,   350,   350,  -819,   762,
     772,   774,  -819,  -819,  -819,  -819,  -819,  -819,   768,  -819,
     782,  -819,  -819,  -819,  -819,  -819,  3087,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  2561,   758,   400,  -819,  -819,
    -819,  2561,  2561,    56,  -819,  -819,  -819,  -819,  1843,  1843,
     779,   344,  -819,  -819,  -819,  -819,  1843,   865,  1843,  1843,
     495,   497,  -819,    80,  2073,  2073,   722,   722,  -819,   136,
    -819,  -819,   777,  2561,   877,  1843,  -819,   297,  -819,  -819,
    -819,  -819,  2561,   856,  -819,   419,  -819,   880,   880,  -819,
    1843,  -819,  -819,   791,   795,  -819,   788,   784,   789,  -819,
    -819,   790,   314,  -819,  -819,  -819,  2561,    76,  1843,  2561,
     787,   796,   419,  -819,  1611,  -819,  -819,   798,   799,  -819,
     350,   350,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
      76,  -819,   761,  1843,  -819,   792,  -819,  -819,  -819,  1727,
    -819,   722,   722,  -819,  -819,  -819,  -819,  1843,  -819,  -819,
    -819,  -819,  -819,  -819
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -819,  -819,  -819,  -819,   -75,    10,   740,  -819,   -30,  -819,
     773,  -819,   -58,  -819,   744,   295,   -97,   487,  -819,   409,
    -819,  -819,  -819,  -819,  -451,  -335,  -819,  -819,  -226,  -819,
    -819,  -129,    44,  -819,   171,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,   503,   183,   277,   -93,  -819,  -247,
    -819,   512,  -167,   345,   219,   339,   585,   595,   599,   601,
     573,  -819,  -819,   289,  -819,   392,  -602,  -738,  -662,  -606,
     -83,  -819,  -819,   -51,  -819,  -819,  -819,  -689,  -494,   335,
    -342,  -819,  -819,   186,   312,  -819,    47,  -819,  -819,  -819,
    -819,  -819,  -819,   -29,  -819,   -32,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,   -16,
    -819,  -819,  -819,  -819,  -819,  -819,   294,  -819,  -819,  -819,
     103,     6,   104,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
      21,  -819,   828,    12,  -819,  -819,  -819,   -85,    -1,   483,
    -819,  -819,   951,  -819,  -819,   810,    -2,  -148,  -212,  -819,
     911,  -819,  -819,  -819,  -819,  -819,  -103,  -819,  -819,  -819,
     592,  -235,   -50,    -4,  -819,  -819,  -819,  -819,  -819,  -472,
    -819,  -138,   614,  -346,  -331,   616,  -819,  -330,     4,   340,
    -819,  -819,   330,   338,   157,    26,  -819,   184,   188,    30,
    -819,  -819,    49,  -819,  -819,  -819,  -819,    59,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
     720,  -271,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,   629,  -819,  -819,  -819,  -819,  -819,  -819,    73,  -819,
    -756,  -819,  -819,  -819,  -819,  -819,  -819,   640,  -819,  -819,
    -819,   968,  -819,  -819,  -819,  -819,   851,  -819,  -819,  -819,
    -819,   831,  -328,  -189,  -505,  -710,  -819,   -82,  -818,    69,
    -819
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -588
static const yytype_int16 yytable[] =
{
      10,   115,   448,   106,   126,   711,   442,   778,   391,   457,
     254,   127,   128,    52,   286,    13,   810,   811,   449,   451,
     588,   900,   554,   852,   326,   125,   -11,    51,    56,   854,
     855,   102,   741,   157,   374,    58,   161,   401,   402,    55,
     584,   365,   550,   604,   125,  -322,   338,   385,   483,  -587,
       1,   860,  -327,   481,   506,    32,   823,   930,   154,   327,
     109,   154,   520,   125,   154,   507,   339,   115,   249,   125,
     848,    99,   812,   408,   267,   116,    30,   896,   771,   388,
     340,   160,    55,   547,   341,   551,   616,   548,   124,   289,
     290,   291,   292,   293,   294,   295,   296,   931,   880,   520,
     910,   911,     8,   601,   622,   797,   798,    12,   842,   803,
     521,   861,   907,   886,   441,   625,   106,   254,   328,   329,
     340,   370,   589,   285,   341,   843,   893,   322,   323,   522,
     706,   707,   116,   -11,   164,   116,   585,   374,   116,   983,
     951,   116,   657,  -587,   102,   586,   831,   922,   912,   330,
     331,   284,   396,   926,   549,   423,   424,   476,   496,    51,
     762,   124,   997,   482,   245,   368,    79,   364,   297,   124,
     253,   396,   124,   109,   298,   355,    32,   396,  -587,   897,
     288,    31,   127,   772,   277,   383,   384,   657,   743,   123,
     123,   405,   124,   154,   124,   598,   445,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,   124,   735,  -111,  -111,
     124,   124,   124,   124,   994,   995,   124,   617,   657,   375,
     124,    54,   106,   106,   370,   739,   419,   420,   421,   422,
     422,   422,   422,   124,    52,   422,   422,   422,   422,   422,
     422,   422,   422,   422,   422,  -231,   422,   124,    51,   116,
     102,   102,   620,   621,   760,   608,   775,  -234,   779,   620,
     621,   125,   996,   356,   781,   376,   829,   116,   106,   106,
     486,    80,   545,   377,   620,   621,   832,   253,   124,   109,
     109,   369,   837,   657,   859,   124,   106,   840,   106,   744,
     392,   394,   933,   934,   816,   378,   102,   102,   889,   379,
     939,   446,   941,   942,   585,   894,    55,   106,    57,  -235,
     419,  -232,   736,   611,   102,   978,   102,    28,   380,   955,
     747,  -236,   375,  -237,   700,   109,   109,   778,   381,    29,
     740,   748,   273,    28,   969,   102,   427,   428,   487,   749,
     125,  -231,   274,   109,  -587,   109,   123,  -231,    55,  -416,
    -231,   609,   984,  -234,   443,   761,   444,   985,   390,  -234,
     610,   776,  -234,   780,   109,   142,   245,   143,   376,   782,
     356,   830,   299,   448,   613,   471,   377,   998,   920,   921,
     514,   833,   300,   124,   369,   488,    28,   838,   620,   621,
     531,  1003,   841,   124,   106,    90,   121,   538,   378,   539,
     540,   541,   379,   890,   106,  -235,   111,  -232,   106,   106,
     895,  -235,    93,  -232,  -235,   614,  -232,  -236,   106,  -237,
     979,   380,   102,  -236,   124,  -237,  -236,   529,  -237,   324,
     325,   381,   102,   530,   959,   340,   102,   102,   596,   341,
    -587,   816,   960,  -555,   112,   619,   102,   657,   657,   599,
     703,   109,   627,   106,   113,   657,   704,   657,   657,   106,
     106,   109,   508,   114,   658,   109,   109,   709,   120,   519,
     525,   343,   513,   344,   657,   109,   515,   516,   345,   529,
    -587,   102,   123,  -501,   876,   862,   471,   102,   102,   657,
     877,    83,   332,   333,    84,   529,   303,   924,   479,   596,
     663,   881,    59,   925,   124,   816,  -333,   657,  -333,   658,
     109,   734,    28,   657,    28,   555,   109,   109,   125,    88,
      60,   546,   725,   726,    89,    61,   559,   556,   557,    62,
    -587,  -587,   657,  -328,  -526,   656,   233,   130,   657,    91,
     658,    92,   856,   857,    63,   663,   657,   429,   430,   431,
     432,   129,   737,    94,    95,   106,   106,    96,   133,   746,
     106,   750,   136,   655,   754,   756,   757,   758,  -587,  -587,
      64,  -502,  -385,   287,  -587,   144,   663,   459,   106,   947,
     948,   139,  -587,   102,   102,  -527,  -587,  -587,   102,  -386,
    -438,  -587,   697,  -587,  -440,  -587,  -542,    67,  -543,   303,
     128,   497,   303,   628,   504,   658,   102,   304,   305,   306,
     148,   656,   109,   109,   865,   866,   817,   109,   319,   320,
     321,   975,   976,   714,   715,   403,   320,   321,   718,    68,
     303,   719,   535,   720,   719,   109,   724,   659,   628,   655,
     150,   663,   728,   731,   152,   529,   738,   275,   529,   719,
     282,   789,   663,   158,    69,    70,    71,    72,    73,    74,
      75,   529,  -375,   901,   250,   233,   251,   387,   697,   425,
     426,   433,   434,   268,   395,   269,   656,   917,   918,   271,
     275,   280,   659,   281,   106,   282,   303,   656,   106,   301,
     297,   233,   298,   302,   334,   416,   335,   337,   342,   347,
     853,   656,   348,   336,   655,   349,   350,   352,   863,   354,
     418,   351,   102,   659,   353,   655,   102,   874,   366,   875,
     787,   386,   878,   389,   879,   793,   882,   882,   406,   655,
     439,   404,   233,   697,   407,   409,   417,   461,   458,   463,
     477,   109,   453,   453,   697,   109,   480,   489,   490,   492,
     493,   501,   815,   502,   505,   503,   828,   517,   697,   902,
     903,   518,   534,   817,   660,   536,   537,   591,   542,   658,
     658,   583,   558,   587,   590,   594,   661,   658,   659,   658,
     658,   233,   453,   602,   603,   605,   606,   618,   607,   818,
     622,   626,   698,   632,   390,   702,   658,   708,   551,   663,
     713,   716,   499,   499,   717,   663,   663,   868,   870,   660,
     721,   658,   742,   663,   722,   663,   663,   727,   106,   559,
     751,   661,   529,   759,   777,   799,   937,   817,   783,   658,
     784,   785,   663,   949,   950,   658,   786,   726,   808,   725,
     660,   790,   801,   938,   804,   806,   102,   663,   814,   585,
     509,   765,   661,   872,   658,   858,   867,   609,   892,   873,
     658,   885,   913,   663,   866,   663,   940,   899,   658,   906,
     662,   663,   908,   909,   914,   109,   915,   865,   923,   935,
     952,   886,   664,   958,   966,   970,   919,   973,   971,   972,
     663,   701,   974,   977,   986,   544,   663,   987,   500,   999,
     116,   991,   992,   151,   663,   660,   656,   495,  1000,  1001,
     543,   491,   440,   989,   278,   662,   819,   661,   279,   435,
     623,   712,   943,   944,   813,   787,   767,   664,   820,   453,
     436,   656,   990,   988,   655,   437,   818,   600,   438,   929,
     982,   755,   659,   659,   968,   954,   662,   904,   905,   147,
     659,   453,   659,   659,   526,    27,   766,   236,   664,   655,
      66,   733,   447,   697,   478,   450,   723,   884,   730,   659,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   773,
     871,   -99,   -99,   869,   659,   367,   946,   464,   697,   -99,
     -99,   -99,    53,   165,   460,   272,   956,     0,     0,   509,
     818,     0,   659,     0,     0,     0,     0,     0,   659,     0,
       0,   662,     0,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   821,   664,   316,   317,     0,   659,     0,     0,
       0,   768,     0,   659,   822,     0,     0,   752,     0,   752,
       0,   659,     0,     0,     0,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,     0,     0,  -100,  -100,     0,     0,
       0,     0,     0,   819,  -100,  -100,  -100,     0,     0,   660,
     660,     0,     0,     0,     0,   820,     0,   660,     0,   660,
     660,   661,   661,     0,   774,     0,     0,     0,     0,   661,
       0,   661,   661,     0,     0,     0,   660,     0,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,     0,   661,  -112,
    -112,   660,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   661,     0,     0,     0,   819,     0,   660,
       0,     0,     0,     0,     0,   660,     0,     0,     0,   820,
     509,   661,   834,   836,     0,     0,   839,   661,     0,     0,
       0,   847,     0,   834,   660,     0,     0,     0,     0,     0,
     660,     0,     0,     0,     0,     0,   661,     0,   660,   821,
       0,     0,   661,     0,   763,   662,   662,     0,     0,     0,
     661,   822,     0,   662,     0,   662,   662,   664,   664,     0,
       0,     0,     0,     0,     0,   664,     0,   664,   664,     0,
       0,     0,   662,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   664,     0,     0,   662,     0,     0,
       0,     0,   769,     0,     0,     0,     0,     0,     0,   664,
       0,     0,     0,   821,     0,   662,     0,     0,     0,     0,
       0,   662,   834,     0,     0,   822,     0,   664,     0,     0,
       0,     0,     0,   664,     0,     0,     0,     0,     0,     0,
     662,     0,     0,     0,     0,     0,   662,     0,     0,     0,
       0,   -56,   664,     0,   662,   -56,     0,   834,   664,   764,
       0,   -56,     0,   834,     0,     0,   664,     0,     0,     0,
       0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,     0,     0,   -56,   -56,     0,     0,     0,     0,
       0,     0,   -56,   -56,   -56,   953,     0,     0,     0,   -84,
       0,     0,     0,   -84,   957,     0,     0,   770,     0,   -84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,   509,   -84,   -84,     0,     0,     0,     0,     0,     0,
     -84,   -84,   -84,   592,     0,     0,  -191,  -191,  -191,  -191,
    -191,     0,     0,  -191,  -191,  -191,  -191,     0,     0,  -191,
    -191,     0,  -191,  -191,  -191,     0,     0,  -191,  -191,     0,
       0,     0,     0,     0,  -191,     0,  -191,  -191,  -191,  -191,
    -191,  -191,     0,     0,  -191,     0,     0,     0,  -191,  -191,
       0,  -191,  -191,  -191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -191,  -191,     0,  -191,  -191,     0,     0,
    -191,     0,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,     0,  -191,     0,  -191,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -191,  -191,  -191,     0,     0,     0,  -191,     0,
       0,  -191,  -191,  -191,     0,     0,  -191,     0,  -191,  -191,
       0,     0,   851,     0,     0,    55,   167,   168,   169,   170,
       0,     0,   171,    82,     0,    83,     0,     0,    84,   172,
       0,  -191,  -191,    85,     0,     0,     0,    86,     0,     0,
       0,     0,     0,   173,     0,     0,    87,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    55,
     174,   175,    90,     0,     0,     0,     0,    82,     0,    83,
       0,     0,    84,    91,     0,    92,   176,    85,     0,    93,
       0,    86,   177,     0,   178,     0,   179,    94,    95,   180,
      87,    96,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,   181,     0,     0,     0,    91,     0,    92,
     182,   183,   184,    93,     0,   185,     0,   186,   187,     0,
       0,    94,    95,     0,     0,    96,     0,     0,    97,     0,
       0,     0,     0,     0,     0,   633,   167,   168,   169,   170,
     188,   189,   171,    82,   634,    83,   959,     0,    84,   635,
       0,   636,   637,    85,   960,     0,   638,    86,     0,     0,
       0,     0,     0,   173,     0,   639,    87,   640,   641,   642,
     643,     0,     0,    88,     0,     0,     0,   644,    89,     0,
     174,   175,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   645,    91,     0,    92,   176,     0,     0,    93,
       0,   646,   177,   647,   178,   648,   179,    94,    95,   649,
     650,    96,   651,     0,   276,     0,   652,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   529,     0,   181,     0,     0,     0,   653,     0,     0,
     182,   183,   184,     0,     0,   185,     0,   186,   187,     0,
       0,   633,   167,   168,   169,   170,     0,     0,   171,    82,
     634,    83,     0,     0,    84,   635,     0,   636,   637,    85,
     188,   189,   638,    86,     0,     0,     0,     0,     0,   173,
       0,   639,    87,   640,   641,   642,   643,     0,     0,    88,
       0,     0,     0,   644,    89,     0,   174,   175,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   645,    91,
       0,    92,   176,     0,     0,    93,     0,   646,   177,   647,
     178,   648,   179,    94,    95,   649,   650,    96,   651,     0,
     276,     0,   652,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   529,     0,   181,
       0,     0,     0,   653,     0,     0,   182,   183,   184,     0,
       0,   185,     0,   186,   187,     0,     0,    55,   167,   168,
     169,   170,     0,     0,   171,    82,   634,    83,     0,     0,
      84,   635,     0,     0,   637,    85,   188,   189,   638,    86,
       0,     0,     0,     0,     0,   173,     0,   639,    87,   640,
     641,   642,   643,     0,     0,    88,     0,     0,     0,   644,
      89,     0,   174,   175,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   645,    91,     0,    92,   176,     0,
       0,    93,     0,   646,   177,   647,   178,   648,   179,    94,
      95,   649,   650,    96,   651,     0,     0,     0,   652,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   529,     0,   181,     0,     0,     0,   653,
       0,     0,   182,   183,   184,     0,     0,   185,     0,   186,
     187,     0,    55,   167,   168,   169,   170,     0,     0,   171,
      82,     0,    83,     0,     0,    84,   172,     0,     0,     0,
      85,     0,   188,   189,    86,     0,     0,     0,     0,     0,
     173,     0,     0,    87,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,     0,   174,   175,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,     0,    92,   176,   452,     0,    93,     0,     0,   177,
       0,   178,     0,   179,    94,    95,   180,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   390,   597,
     181,     0,     0,     0,     0,     0,     0,   182,   183,   184,
       0,     0,   185,     0,   186,   187,     0,    55,   167,   168,
     169,   170,     0,     0,   171,    82,     0,    83,     0,     0,
      84,   172,     0,     0,     0,    85,     0,   188,   189,    86,
       0,     0,     0,     0,     0,   173,     0,     0,    87,     0,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,     0,   174,   175,    90,     0,   410,     0,     0,     0,
       0,     0,     0,   411,     0,    91,     0,    92,   176,     0,
       0,    93,     0,     0,   177,     0,   178,     0,   179,    94,
      95,   180,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,   167,   168,   169,   170,     0,     0,
     171,    82,     0,    83,     0,   181,    84,   172,     0,     0,
       0,    85,   182,   183,   184,    86,     0,   185,     0,   186,
     187,   173,     0,     0,    87,     0,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,     0,   174,   175,
      90,     0,   188,   189,     0,     0,     0,     0,     0,     0,
       0,    91,     0,    92,   176,   452,     0,    93,     0,     0,
     177,     0,   178,     0,   179,    94,    95,   180,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   390,
       0,   181,     0,     0,     0,     0,     0,     0,   182,   183,
     184,     0,     0,   185,     0,   186,   187,     0,    55,   167,
     168,   169,   170,     0,     0,   171,    82,     0,    83,     0,
       0,    84,   172,     0,     0,     0,    85,     0,   188,   189,
      86,     0,     0,     0,     0,     0,   173,     0,     0,    87,
       0,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,     0,   174,   175,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,     0,    92,   176,
       0,     0,    93,     0,     0,   177,     0,   178,     0,   179,
      94,    95,   180,     0,    96,     0,     0,   283,     0,     0,
       0,     0,     0,     0,    55,   167,   168,   169,   170,     0,
       0,   171,    82,     0,    83,     0,   181,    84,   172,     0,
       0,     0,    85,   182,   183,   184,    86,     0,   185,     0,
     186,   187,   173,     0,     0,    87,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,     0,   174,
     175,    90,     0,   188,   189,     0,     0,     0,     0,     0,
       0,     0,    91,     0,    92,   176,     0,     0,    93,     0,
       0,   177,     0,   178,     0,   179,    94,    95,   180,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   181,   494,     0,     0,     0,     0,     0,   182,
     183,   184,     0,     0,   185,     0,   186,   187,     0,    55,
     167,   168,   169,   170,     0,     0,   171,    82,     0,    83,
       0,     0,    84,   172,     0,     0,     0,    85,     0,   188,
     189,    86,     0,     0,     0,     0,     0,   173,     0,     0,
      87,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,     0,   174,   175,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,     0,    92,
     176,     0,     0,    93,     0,     0,   177,     0,   178,     0,
     179,    94,    95,   180,     0,    96,     0,     0,   276,     0,
       0,     0,     0,     0,     0,    55,   167,   168,   169,   170,
       0,     0,   171,    82,     0,    83,     0,   181,    84,   172,
       0,     0,     0,    85,   182,   183,   184,    86,     0,   185,
       0,   186,   187,   173,     0,     0,    87,     0,     0,     0,
       0,     0,     0,    88,     0,     0,   615,     0,    89,  -325,
     174,   175,    90,     0,   188,   189,     0,  -325,     0,  -325,
       0,     0,  -325,    91,     0,    92,   176,  -325,     0,    93,
       0,  -325,   177,     0,   178,     0,   179,    94,    95,   180,
    -325,    96,     0,     0,     0,     0,     0,  -325,     0,     0,
       0,     0,  -325,     0,     0,     0,  -325,     0,  -325,     0,
    -325,     0,     0,   181,     0,  -325,     0,  -325,     0,  -325,
     182,   183,   184,  -325,     0,   185,     0,   186,   187,     0,
       0,  -325,  -325,     0,     0,  -325,    59,     0,  -325,   465,
       0,     0,     0,     0,     0,     0,     0,    82,     0,    83,
     188,   189,    84,  -587,    60,   466,     0,    85,  -416,    61,
       0,    86,     0,    62,   467,   468,     0,     0,     0,     0,
      87,     0,     0,     0,     0,   469,     0,    88,    63,     0,
       0,     0,    89,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,     0,    92,
       0,     0,     0,    93,    64,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,    96,     0,     0,   470,    55,
     167,   168,   169,   170,     0,     0,   171,    82,     0,    83,
       0,     0,    84,   172,     0,     0,     0,    85,     0,     0,
       0,    86,     0,   560,     0,     0,     0,   173,     0,     0,
      87,     0,   533,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,     0,   174,   175,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,     0,    92,
     176,     0,     0,    93,   561,     0,   177,     0,   178,     0,
     179,    94,    95,   180,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   562,   563,   181,     0,     0,
     564,   565,   566,   567,   568,   569,   570,   571,   572,     0,
     573,   186,   187,     0,     0,     0,     0,     0,     0,     0,
     574,   575,     0,     0,   576,   577,   578,   579,     0,   624,
     580,   581,  -325,     0,     0,     0,     0,     0,     0,     0,
    -325,     0,  -325,     0,     0,  -325,     0,     0,     0,     0,
    -325,     0,     0,     0,  -325,     0,     0,     0,  -321,     0,
       0,     0,     0,  -325,     0,     0,     0,    33,     0,     0,
    -325,     0,     0,     0,     0,  -325,     0,     0,     0,  -325,
       0,  -325,     0,  -325,     0,     0,     0,     0,  -325,    34,
    -325,     0,  -325,     0,     0,     0,  -325,     0,     0,     0,
       0,     0,    35,     0,  -325,  -325,    36,    37,  -325,     0,
       0,  -325,    38,     0,    39,    40,    41,    42,     0,     0,
       0,    43,     0,     0,     0,    44,  -587,     0,     0,     0,
      59,  -416,     0,   465,     0,     0,     0,    45,     0,     0,
      46,    82,    47,    83,     0,     0,    84,     0,    60,   466,
       0,    85,     0,    61,     0,    86,     0,    62,   467,   468,
       0,     0,     0,     0,    87,     0,     0,     0,     0,   469,
       0,    88,    63,     0,     0,     0,    89,    55,     0,     0,
      90,     0,     0,     0,     0,    82,     0,    83,     0,     0,
      84,    91,     0,    92,     0,    85,     0,    93,    64,    86,
       0,     0,   511,     0,     0,    94,    95,     0,    87,    96,
       0,     0,   470,     0,     0,    88,     0,     0,     0,     0,
      89,    55,     0,     0,    90,     0,     0,     0,     0,    82,
       0,    83,     0,     0,    84,    91,     0,    92,     0,    85,
       0,    93,     0,    86,     0,     0,     0,     0,     0,    94,
      95,     0,    87,    96,     0,     0,   512,     0,     0,    88,
       0,     0,     0,     0,    89,    55,     0,     0,    90,     0,
       0,     0,     0,    82,     0,    83,     0,     0,    84,    91,
       0,    92,     0,    85,     0,    93,     0,    86,     0,     0,
       0,     0,     0,    94,    95,     0,    87,    96,     0,     0,
     276,     0,     0,    88,     0,     0,     0,     0,    89,     0,
      33,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,    92,     0,     0,     0,    93,
       0,     0,    34,     0,     0,     0,     0,    94,    95,    33,
       0,    96,     0,     0,   393,    35,     0,     0,     0,    36,
      37,     0,     0,     0,     0,    38,     0,    39,    40,    41,
      42,    34,     0,     0,    43,     0,     0,     0,    44,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,    37,
      45,     0,     0,    46,    38,    47,    39,    40,    41,    42,
       0,     0,     0,    43,     0,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,    46,     0,    47
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-819)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       1,    76,   348,    61,   101,   607,   341,   669,   279,   351,
     158,   108,   109,    15,   181,     3,   726,   727,   349,   349,
     525,   839,   516,   761,    10,     3,     4,    15,    29,   785,
     786,    61,   638,   136,   269,    36,   139,   284,   285,     4,
       1,   253,   514,   548,     3,     0,   118,   273,   390,    98,
      81,    11,   101,   388,     4,     4,   745,     1,   133,    45,
      61,   136,     4,     3,   139,     4,   138,   142,   153,     3,
     759,    61,   734,   299,   159,    76,     1,     1,     1,   102,
      98,   139,     4,     4,   102,     4,   558,     4,   111,   182,
     183,   184,   185,   186,   187,   188,   189,    41,   808,     4,
     856,   857,     4,     4,     4,     4,     4,     0,    16,     4,
      52,    71,   850,     4,   340,   587,   174,   265,   104,   105,
      98,   269,    71,   181,   102,    33,     4,   109,   110,    71,
     602,   603,   133,   111,    99,   136,    97,   372,   139,   957,
       4,   142,   593,    98,   174,   106,   748,   885,   858,   135,
     136,   181,   111,   891,    71,   322,   323,   369,   405,   147,
     654,   111,   980,   389,   152,   268,     1,   252,   108,   111,
     158,   111,   111,   174,   108,   250,     4,   111,    98,   103,
     181,   106,   279,   106,   174,   270,   271,   638,     1,   111,
     111,   288,   111,   268,   111,   537,     1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   111,     1,   131,   132,
     111,   111,   111,   111,   970,   971,   111,   559,   669,   269,
     111,    98,   280,   281,   372,     1,   319,   320,   321,   322,
     323,   324,   325,   111,   236,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,     1,   339,   111,   236,   250,
     280,   281,   583,   583,     1,     1,     1,     1,     1,   590,
     590,     3,   972,   251,     1,   269,     1,   268,   326,   327,
     103,   106,    98,   269,   605,   605,     1,   265,   111,   280,
     281,   269,     1,   734,   789,   111,   344,     1,   346,   102,
     280,   281,   898,   899,   745,   269,   326,   327,     1,   269,
     906,   106,   908,   909,    97,     1,     4,   365,   108,     1,
     403,     1,   106,   106,   344,     1,   346,   108,   269,   925,
       4,     1,   372,     1,   595,   326,   327,   989,   269,   120,
     106,    15,    98,   108,   940,   365,   326,   327,   103,    23,
       3,    97,   108,   344,    98,   346,   111,   103,     4,   103,
     106,    97,   958,    97,   344,   102,   346,   959,   100,   103,
     106,   106,   106,   106,   365,    97,   354,    99,   372,   106,
     358,   106,    98,   719,   102,   365,   372,   983,   883,   884,
     102,   106,   108,   111,   372,   103,   108,   106,   719,   719,
     473,   997,   106,   111,   452,    51,   100,   490,   372,   492,
     493,   494,   372,   106,   462,    97,     4,    97,   466,   467,
     106,   103,    68,   103,   106,   102,   106,    97,   476,    97,
     106,   372,   452,   103,   111,   103,   106,   100,   106,   129,
     130,   372,   462,   106,    15,    98,   466,   467,   535,   102,
      98,   892,    23,   101,     4,   583,   476,   898,   899,   542,
     100,   452,   590,   511,     4,   906,   106,   908,   909,   517,
     518,   462,   452,     4,   593,   466,   467,   605,   107,   470,
     471,    53,   462,    55,   925,   476,   466,   467,    60,   100,
      98,   511,   111,   101,    97,   106,   476,   517,   518,   940,
     103,    14,   133,   134,    17,   100,    97,    97,    99,   596,
     593,   106,     1,   103,   111,   956,   100,   958,   102,   638,
     511,   107,   108,   964,   108,   516,   517,   518,     3,    42,
      19,   511,    93,    94,    47,    24,   120,   517,   518,    28,
      98,    98,   983,   101,   101,   593,   144,   107,   989,    62,
     669,    64,    93,    94,    43,   638,   997,   328,   329,   330,
     331,     4,   635,    76,    77,   613,   614,    80,   107,   641,
     618,   643,   107,   593,   646,   648,   649,   650,    98,    98,
      69,   101,   101,   181,    98,   102,   669,   101,   636,   914,
     915,   107,    98,   613,   614,   101,    98,    98,   618,   101,
     101,    98,   593,    98,   101,    98,   101,    29,   101,    97,
     697,    99,    97,   591,    99,   734,   636,   139,   140,   141,
     106,   669,   613,   614,    95,    96,   745,   618,   111,   112,
     113,   949,   950,   613,   614,   111,   112,   113,   618,    61,
      97,    97,    99,    99,    97,   636,    99,   593,   626,   669,
     102,   734,   630,   631,   100,   100,   636,   102,   100,    97,
     102,    99,   745,   100,    86,    87,    88,    89,    90,    91,
      92,   100,     1,   102,    97,   273,   100,   275,   669,   324,
     325,   332,   333,    97,   282,   100,   734,   866,   867,     1,
     102,   102,   638,   102,   742,   102,    97,   745,   746,   102,
     108,   299,   108,   103,   114,   303,   119,   137,   101,   103,
     783,   759,    97,   115,   734,    97,   120,     4,   791,    97,
     318,   120,   742,   669,   101,   745,   746,   800,   101,   802,
     708,     4,   805,    98,   807,   713,   809,   810,     4,   759,
     338,   103,   340,   734,     4,     4,     4,    49,   120,   101,
     101,   742,   350,   351,   745,   746,   103,   103,   103,   103,
     103,    97,   742,   103,   103,   107,   746,    52,   759,   842,
     843,    52,   103,   892,   593,   101,    97,   100,   103,   898,
     899,    98,   102,   102,    98,     4,   593,   906,   734,   908,
     909,   389,   390,   102,   102,    98,   103,   102,   120,   745,
       4,   100,   102,   101,   100,    99,   925,   100,     4,   892,
     100,   103,   410,   411,   103,   898,   899,   795,   796,   638,
     103,   940,   102,   906,   103,   908,   909,   101,   876,   120,
     102,   638,   100,   102,   101,   106,   901,   956,   103,   958,
     101,   103,   925,   916,   917,   964,   103,    94,   101,    93,
     669,   107,   106,   901,   106,   106,   876,   940,    85,    97,
     458,     1,   669,   103,   983,   101,   101,    97,    97,   103,
     989,   102,   100,   956,    96,   958,     1,   103,   997,   103,
     593,   964,   103,   103,   102,   876,   102,    95,   120,   100,
     103,     4,   593,    27,     4,    94,   876,   103,    93,   101,
     983,   596,   103,   103,   107,   503,   989,   101,   411,   107,
     901,   103,   103,   130,   997,   734,   964,   404,   991,   992,
     501,   399,   339,   964,   174,   638,   745,   734,   174,   334,
     585,   609,   910,   911,   738,   913,     1,   638,   745,   537,
     335,   989,   964,   962,   964,   336,   892,   545,   337,   892,
     956,   647,   898,   899,   938,   924,   669,   844,   844,   121,
     906,   559,   908,   909,   471,     4,   106,   147,   669,   989,
      49,   631,   348,   964,   372,   349,   626,   810,   630,   925,
     120,   121,   122,   123,   124,   125,   126,   127,   128,     1,
     796,   131,   132,   795,   940,   265,   913,   358,   989,   139,
     140,   141,    24,   142,   354,   164,   927,    -1,    -1,   607,
     956,    -1,   958,    -1,    -1,    -1,    -1,    -1,   964,    -1,
      -1,   734,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   745,   734,   131,   132,    -1,   983,    -1,    -1,
      -1,   106,    -1,   989,   745,    -1,    -1,   645,    -1,   647,
      -1,   997,    -1,    -1,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,   131,   132,    -1,    -1,
      -1,    -1,    -1,   892,   139,   140,   141,    -1,    -1,   898,
     899,    -1,    -1,    -1,    -1,   892,    -1,   906,    -1,   908,
     909,   898,   899,    -1,   106,    -1,    -1,    -1,    -1,   906,
      -1,   908,   909,    -1,    -1,    -1,   925,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,   925,   131,
     132,   940,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   940,    -1,    -1,    -1,   956,    -1,   958,
      -1,    -1,    -1,    -1,    -1,   964,    -1,    -1,    -1,   956,
     748,   958,   750,   751,    -1,    -1,   754,   964,    -1,    -1,
      -1,   759,    -1,   761,   983,    -1,    -1,    -1,    -1,    -1,
     989,    -1,    -1,    -1,    -1,    -1,   983,    -1,   997,   892,
      -1,    -1,   989,    -1,     1,   898,   899,    -1,    -1,    -1,
     997,   892,    -1,   906,    -1,   908,   909,   898,   899,    -1,
      -1,    -1,    -1,    -1,    -1,   906,    -1,   908,   909,    -1,
      -1,    -1,   925,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   925,    -1,    -1,   940,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,   940,
      -1,    -1,    -1,   956,    -1,   958,    -1,    -1,    -1,    -1,
      -1,   964,   850,    -1,    -1,   956,    -1,   958,    -1,    -1,
      -1,    -1,    -1,   964,    -1,    -1,    -1,    -1,    -1,    -1,
     983,    -1,    -1,    -1,    -1,    -1,   989,    -1,    -1,    -1,
      -1,    98,   983,    -1,   997,   102,    -1,   885,   989,   106,
      -1,   108,    -1,   891,    -1,    -1,   997,    -1,    -1,    -1,
      -1,    -1,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   923,    -1,    -1,    -1,    98,
      -1,    -1,    -1,   102,   932,    -1,    -1,   106,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,   959,   131,   132,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,     1,    -1,    -1,     4,     5,     6,     7,
       8,    -1,    -1,    11,    12,    13,    14,    -1,    -1,    17,
      18,    -1,    20,    21,    22,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,
      -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    64,    65,    -1,    -1,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    -1,    83,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,   101,   102,    -1,    -1,    -1,   106,    -1,
      -1,   109,   110,   111,    -1,    -1,   114,    -1,   116,   117,
      -1,    -1,     1,    -1,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,
      -1,   139,   140,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,     4,
      49,    50,    51,    -1,    -1,    -1,    -1,    12,    -1,    14,
      -1,    -1,    17,    62,    -1,    64,    65,    22,    -1,    68,
      -1,    26,    71,    -1,    73,    -1,    75,    76,    77,    78,
      35,    80,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    62,    -1,    64,
     109,   110,   111,    68,    -1,   114,    -1,   116,   117,    -1,
      -1,    76,    77,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,
     139,   140,    11,    12,    13,    14,    15,    -1,    17,    18,
      -1,    20,    21,    22,    23,    -1,    25,    26,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    64,    65,    -1,    -1,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    83,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,
     109,   110,   111,    -1,    -1,   114,    -1,   116,   117,    -1,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      13,    14,    -1,    -1,    17,    18,    -1,    20,    21,    22,
     139,   140,    25,    26,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      -1,    -1,    -1,    46,    47,    -1,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    64,    65,    -1,    -1,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    -1,
      83,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,
      -1,    -1,    -1,   106,    -1,    -1,   109,   110,   111,    -1,
      -1,   114,    -1,   116,   117,    -1,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    13,    14,    -1,    -1,
      17,    18,    -1,    -1,    21,    22,   139,   140,    25,    26,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,
      47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    64,    65,    -1,
      -1,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,   102,    -1,    -1,    -1,   106,
      -1,    -1,   109,   110,   111,    -1,    -1,   114,    -1,   116,
     117,    -1,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
      22,    -1,   139,   140,    26,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    65,    66,    -1,    68,    -1,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    78,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,
      -1,    -1,   114,    -1,   116,   117,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,    -1,
      17,    18,    -1,    -1,    -1,    22,    -1,   139,   140,    26,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,    -1,    49,    50,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    62,    -1,    64,    65,    -1,
      -1,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      11,    12,    -1,    14,    -1,   102,    17,    18,    -1,    -1,
      -1,    22,   109,   110,   111,    26,    -1,   114,    -1,   116,
     117,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,
      51,    -1,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    64,    65,    66,    -1,    68,    -1,    -1,
      71,    -1,    73,    -1,    75,    76,    77,    78,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,
     111,    -1,    -1,   114,    -1,   116,   117,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,    22,    -1,   139,   140,
      26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,
      -1,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,    75,
      76,    77,    78,    -1,    80,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    -1,    14,    -1,   102,    17,    18,    -1,
      -1,    -1,    22,   109,   110,   111,    26,    -1,   114,    -1,
     116,   117,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,
      50,    51,    -1,   139,   140,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    64,    65,    -1,    -1,    68,    -1,
      -1,    71,    -1,    73,    -1,    75,    76,    77,    78,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,    -1,    -1,   114,    -1,   116,   117,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    -1,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,   139,
     140,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,
      65,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    78,    -1,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    -1,    14,    -1,   102,    17,    18,
      -1,    -1,    -1,    22,   109,   110,   111,    26,    -1,   114,
      -1,   116,   117,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,     1,    -1,    47,     4,
      49,    50,    51,    -1,   139,   140,    -1,    12,    -1,    14,
      -1,    -1,    17,    62,    -1,    64,    65,    22,    -1,    68,
      -1,    26,    71,    -1,    73,    -1,    75,    76,    77,    78,
      35,    80,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    -1,    53,    -1,
      55,    -1,    -1,   102,    -1,    60,    -1,    62,    -1,    64,
     109,   110,   111,    68,    -1,   114,    -1,   116,   117,    -1,
      -1,    76,    77,    -1,    -1,    80,     1,    -1,    83,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,
     139,   140,    17,    98,    19,    20,    -1,    22,   103,    24,
      -1,    26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    40,    -1,    42,    43,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,
      -1,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    -1,    80,    -1,    -1,    83,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    -1,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    32,    -1,    -1,    -1,    32,    -1,    -1,
      35,    -1,   117,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,
      65,    -1,    -1,    68,    73,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,   102,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,   116,   117,    -1,
     119,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,    -1,   133,   134,   135,   136,    -1,     1,
     139,   140,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,     0,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,     9,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    60,    31,
      62,    -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    76,    77,    48,    49,    80,    -1,
      -1,    83,    54,    -1,    56,    57,    58,    59,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    67,    98,    -1,    -1,    -1,
       1,   103,    -1,     4,    -1,    -1,    -1,    79,    -1,    -1,
      82,    12,    84,    14,    -1,    -1,    17,    -1,    19,    20,
      -1,    22,    -1,    24,    -1,    26,    -1,    28,    29,    30,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    -1,    -1,    -1,    47,     4,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,
      17,    62,    -1,    64,    -1,    22,    -1,    68,    69,    26,
      -1,    -1,    29,    -1,    -1,    76,    77,    -1,    35,    80,
      -1,    -1,    83,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,     4,    -1,    -1,    51,    -1,    -1,    -1,    -1,    12,
      -1,    14,    -1,    -1,    17,    62,    -1,    64,    -1,    22,
      -1,    68,    -1,    26,    -1,    -1,    -1,    -1,    -1,    76,
      77,    -1,    35,    80,    -1,    -1,    83,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,     4,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,    62,
      -1,    64,    -1,    22,    -1,    68,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    35,    80,    -1,    -1,
      83,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,
       9,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    68,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    76,    77,     9,
      -1,    80,    -1,    -1,    83,    44,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    31,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,
      79,    -1,    -1,    82,    54,    84,    56,    57,    58,    59,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,    -1,    84
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    81,   274,   275,   284,   285,   286,   287,     4,   146,
     281,   282,     0,   276,   278,   288,   289,   290,   294,   347,
     357,   374,   381,   382,   383,   384,   393,   285,   108,   120,
       1,   106,     4,     9,    31,    44,    48,    49,    54,    56,
      57,    58,    59,    63,    67,    79,    82,    84,   291,   292,
     293,   276,   289,   384,    98,     4,   281,   108,   281,     1,
      19,    24,    28,    43,    69,   399,   293,    29,    61,    86,
      87,    88,    89,    90,    91,    92,   385,   386,   387,     1,
     106,   279,    12,    14,    17,    22,    26,    35,    42,    47,
      51,    62,    64,    68,    76,    77,    80,    83,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   281,
     313,     4,     4,     4,     4,   147,   281,   388,   389,   391,
     107,   100,   283,   111,   111,     3,   159,   159,   159,     4,
     107,   375,   376,   107,   359,   360,   107,   348,   349,   107,
     297,   298,    97,    99,   102,   390,   392,   275,   106,   280,
     102,   153,   100,   377,   147,   299,   358,   299,   100,   350,
     155,   299,   295,   296,    99,   389,   394,     5,     6,     7,
       8,    11,    18,    32,    49,    50,    65,    71,    73,    75,
      78,   102,   109,   110,   111,   114,   116,   117,   139,   140,
     144,   145,   151,   155,   163,   164,   165,   166,   167,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   208,   281,   277,   288,   276,   312,   314,
     315,   316,   317,   318,   320,   276,   378,   379,   380,   280,
      97,   100,   361,   276,   290,   304,   305,   306,   307,   321,
     328,   332,   335,   340,   351,   352,   353,   280,    97,   100,
     300,     1,   394,    98,   108,   102,    83,   148,   149,   157,
     102,   102,   102,    83,   151,   155,   195,   208,   281,   190,
     190,   190,   190,   190,   190,   190,   190,   108,   108,    98,
     108,   102,   103,    97,   139,   140,   141,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   131,   132,   207,   111,
     112,   113,   109,   110,   129,   130,    10,    45,   104,   105,
     135,   136,   133,   134,   114,   119,   115,   137,   118,   138,
      98,   102,   101,    53,    55,    60,   319,   103,    97,    97,
     120,   120,     4,   101,    97,   147,   276,   362,   363,   364,
     365,   367,   369,   372,   280,   291,   101,   353,   299,   276,
     290,   301,   302,   303,   304,   305,   306,   321,   328,   332,
     335,   340,   344,   280,   280,   171,     4,   208,   102,    98,
     100,   354,   148,    83,   148,   208,   111,   159,   192,   193,
     194,   192,   192,   111,   103,   159,     4,     4,   171,     4,
      53,    60,   161,   162,   168,   208,   208,     4,   208,   190,
     190,   190,   190,   195,   195,   196,   196,   148,   148,   197,
     197,   197,   197,   198,   198,   199,   200,   201,   202,   208,
     203,   171,   168,   148,   148,     1,   106,   315,   316,   317,
     318,   320,    66,   208,   223,   224,   354,   223,   120,   101,
     380,    49,   366,   101,   364,     4,    20,    29,    30,    40,
      83,   148,   333,   336,   337,   339,   291,   101,   303,    99,
     103,   168,   171,   223,   355,   356,   103,   103,   103,   103,
     103,   194,   103,   103,   103,   187,   192,    99,   160,   208,
     160,    97,   103,   107,    99,   103,     4,     4,   148,   208,
     209,    29,    83,   148,   102,   148,   148,    52,    52,   281,
       4,    52,    71,   221,   222,   281,   282,   334,   397,   100,
     106,   213,   345,   117,   103,    99,   101,    97,   190,   190,
     190,   190,   103,   162,   208,    98,   148,     4,     4,    71,
     312,     4,   226,   227,   221,   281,   148,   148,   102,   120,
      32,    73,   104,   105,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   119,   129,   130,   133,   134,   135,   136,
     139,   140,   338,    98,     1,    97,   106,   102,   397,    71,
      98,   100,     1,   214,     4,   158,   159,   101,   223,   190,
     208,     4,   102,   102,   397,    98,   103,   120,     1,    97,
     106,   106,   395,   102,   102,     1,   312,   223,   102,   314,
     317,   320,     4,   222,     1,   312,   100,   314,   276,   322,
     325,   326,   101,     4,    13,    18,    20,    21,    25,    34,
      36,    37,    38,    39,    46,    61,    70,    72,    74,    78,
      79,    81,    85,   106,   148,   151,   155,   167,   174,   175,
     177,   188,   189,   190,   206,   211,   212,   213,   215,   216,
     217,   218,   219,   220,   225,   228,   230,   231,   232,   239,
     240,   241,   244,   245,   253,   254,   255,   256,   257,   258,
     260,   261,   266,   267,   268,   269,   271,   281,   102,   179,
     354,   158,    99,   100,   106,   373,   312,   312,   100,   314,
     341,   209,   227,   100,   148,   148,   103,   103,   148,    97,
      99,   103,   103,   322,    99,    93,    94,   101,   276,   323,
     326,   276,   324,   325,   107,     1,   106,   213,   148,     1,
     106,   212,   102,     1,   102,   400,   400,     4,    15,    23,
     400,   102,   208,   259,   400,   259,   213,   213,   213,   102,
       1,   102,   221,     1,   106,     1,   106,     1,   106,     1,
     106,     1,   106,     1,   106,     1,   106,   101,   211,     1,
     106,     1,   106,   103,   101,   103,   103,   276,   371,    99,
     107,   342,   343,   276,   329,   330,   331,     4,     4,   106,
     311,   106,   309,     4,   106,   310,   106,   308,   101,   398,
     398,   398,   211,   226,    85,   148,   167,   174,   175,   177,
     188,   189,   206,   220,   229,   246,   249,   252,   148,     1,
     106,   209,     1,   106,   208,   210,   208,     1,   106,   208,
       1,   106,    16,    33,   262,   263,   265,   208,   220,   270,
     242,     1,   210,   213,   373,   373,    93,    94,   101,   397,
      11,    71,   106,   213,   346,    95,    96,   101,   276,   331,
     276,   330,   103,   103,   213,   213,    97,   103,   213,   213,
     398,   106,   213,   327,   327,   102,     4,   272,   273,     1,
     106,   402,    97,     4,     1,   106,     1,   103,   401,   103,
     401,   102,   213,   213,   263,   265,   103,   210,   103,   103,
     373,   373,   398,   100,   102,   102,   396,   396,   396,   148,
     397,   397,   210,   120,    97,   103,   210,   247,   250,   229,
       1,    41,   403,   212,   212,   100,   233,   147,   155,   212,
       1,   212,   212,   276,   276,   368,   371,   168,   168,   213,
     213,     4,   103,   208,   273,   212,   402,   208,    27,    15,
      23,   234,   235,   236,   237,   238,     4,   264,   264,   212,
      94,    93,   101,   103,   103,   395,   395,   103,     1,   106,
     248,   251,   252,   401,   212,   209,   107,   101,   236,   216,
     238,   103,   103,   243,   373,   373,   398,   401,   212,   107,
     213,   213,   370,   212
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1792 of yacc.c  */
#line 138 "yacc.y"
    {l.a("boolean_literal",1);	  (yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 139 "yacc.y"
    {l.a("INTEGER_LITERAL",0);	  (yyval.r.exp) = new AutoConst("INT",new int((yyvsp[(1) - (1)].r.i)),Node::current);}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 140 "yacc.y"
    {l.a("REAL_LITERAL",0);		  (yyval.r.exp) = new AutoConst("FLOAT",new float((yyvsp[(1) - (1)].r.f)),Node::current);}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 141 "yacc.y"
    {l.a("CHARACTER_LITERAL",0);  (yyval.r.exp) = new AutoConst("CHAR",new char((yyvsp[(1) - (1)].r.c)),Node::current);}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 142 "yacc.y"
    {l.a("STRING_LITERAL",0);     (yyval.r.exp) = new AutoConst("STRING",new string((yyvsp[(1) - (1)].r.str)),Node::current);}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 143 "yacc.y"
    {l.a("NULL_LITERAL",0);       (yyval.r.exp) = new AutoConst("NULL",nullptr,Node::current);}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 146 "yacc.y"
    {l.a("TRUE",0);(yyval.r.exp) = new AutoConst("BOOL",new bool(true),Node::current);}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 147 "yacc.y"
    {l.a("FALSE",0);(yyval.r.exp) = new AutoConst("BOOL",new bool(false),Node::current);}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 153 "yacc.y"
    {l.a("namespace_name",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 157 "yacc.y"
    {l.a("type_name",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 162 "yacc.y"
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[(1) - (1)].r.known_type);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 163 "yacc.y"
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[(1) - (1)].r.known_type);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 167 "yacc.y"
    {l.a("non_array_type",1);(yyval.r.known_type) = true;(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 168 "yacc.y"
    {l.a("non_array_type",1);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 172 "yacc.y"
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 173 "yacc.y"
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 174 "yacc.y"
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 178 "yacc.y"
    {l.a("primitive_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 179 "yacc.y"
    {l.a("primitive_type",0);(yyval.r.base) = new string("BOOL");}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 183 "yacc.y"
    {l.a("numeric_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 184 "yacc.y"
    {l.a("numeric_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 185 "yacc.y"
    {l.a("numeric_type",0);(yyval.r.base) = new string("DECIMAL");}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 189 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("SBYTE");}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 190 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("BYTE");}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 191 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("SHORT");}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 192 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("USHORT");}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 193 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("INT");}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 194 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("UINT");}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 195 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("LONG");}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 196 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("ULONG");}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 197 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("CHAR");}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 200 "yacc.y"
    {l.a("floating_point_type",0);(yyval.r.base) = new string("FLOAT");}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 201 "yacc.y"
    {l.a("floating_point_type",0);(yyval.r.base) = new string("DOUBLE");}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 204 "yacc.y"
    {l.a("class_type",0);(yyval.r.base) = new string("OBJECT");}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 205 "yacc.y"
    {l.a("class_type",0);(yyval.r.base) = new string("STRING");}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 208 "yacc.y"
    {l.a("pointer_type",1);}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 209 "yacc.y"
    {l.a("pointer_type",0);}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 212 "yacc.y"
    {l.a("array_type",2);(yyval.r.known_type) = (yyvsp[(1) - (2)].r.known_type);(yyval.r.base) = (yyvsp[(1) - (2)].r.base);}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 213 "yacc.y"
    {l.a("array_type",2);(yyval.r.known_type) = true;(yyval.r.base) = (yyvsp[(1) - (2)].r.base);}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 214 "yacc.y"
    {l.a("array_type",2);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[(1) - (2)].r.base);}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 217 "yacc.y"
    {l.a("rank_specifiers_opt",0);}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 218 "yacc.y"
    {l.a("rank_specifiers_opt",2);}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 221 "yacc.y"
    {l.a("rank_specifier",0);}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 225 "yacc.y"
    {l.a("variable_reference",1);}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 229 "yacc.y"
    {l.a("argument_list",1);}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 230 "yacc.y"
    {l.a("argument_list",2);}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 233 "yacc.y"
    {l.a("argument",1);}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 234 "yacc.y"
    {l.a("argument",1);}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 235 "yacc.y"
    {l.a("argument",1);}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 238 "yacc.y"
    {l.a("primary_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 239 "yacc.y"
    {l.a("primary_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 242 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 243 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 244 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 245 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 246 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 247 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 248 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 249 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 250 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 251 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 252 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 253 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 256 "yacc.y"
    {l.a("parenthesized_expression",1);(yyval.r.exp) = (yyvsp[(2) - (3)].r.exp);}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 259 "yacc.y"
    {l.a("member_access",1);}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 260 "yacc.y"
    {l.a("member_access",1);}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 261 "yacc.y"
    {l.a("member_access",1);}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 264 "yacc.y"
    {l.a("invocation_expression",2);}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 265 "yacc.y"
    {l.a("invocation_expression",2);}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 268 "yacc.y"
    {l.a("argument_list_opt",0);}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 269 "yacc.y"
    {l.a("argument_list_opt",1);}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 272 "yacc.y"
    {l.a("element_access",2);}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 273 "yacc.y"
    {l.a("element_access",2);}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 276 "yacc.y"
    {l.a("expression_list_opt",0);}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 277 "yacc.y"
    {l.a("expression_list_opt",1);}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 280 "yacc.y"
    {l.a("expression_list",1);}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 281 "yacc.y"
    {l.a("expression_list",2);}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 284 "yacc.y"
    {l.a("this_access",0);}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 287 "yacc.y"
    {l.a("base_access",0);}
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 288 "yacc.y"
    {l.a("base_access",1);}
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 291 "yacc.y"
    {l.a("post_increment_expression",1);(yyval.r.exp) = new UnaryExpression(post_plusplus,(yyvsp[(1) - (2)].r.exp),Node::current);}
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 294 "yacc.y"
    {l.a("post_decrement_expression",1);(yyval.r.exp) = new UnaryExpression(post_minusminus,(yyvsp[(1) - (2)].r.exp),Node::current);}
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 297 "yacc.y"
    {l.a("new_expression",1);}
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 300 "yacc.y"
    {l.a("object_creation_expression",2);}
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 303 "yacc.y"
    {l.a("array_creation_expression",4);}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 304 "yacc.y"
    {l.a("array_creation_expression",2);}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 307 "yacc.y"
    {l.a("array_initializer_opt",0);}
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 308 "yacc.y"
    {l.a("array_initializer_opt",1);}
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 311 "yacc.y"
    {l.a("typeof_expression",1);}
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 312 "yacc.y"
    {l.a("typeof_expression",0);}
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 315 "yacc.y"
    {l.a("checked_expression",1);}
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 318 "yacc.y"
    {l.a("unchecked_expression",1);}
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 321 "yacc.y"
    {l.a("pointer_member_access",1);}
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 324 "yacc.y"
    {l.a("addressof_expression",1);(yyval.r.exp) = new UnaryExpression(And,(yyvsp[(2) - (2)].r.exp),Node::current);}
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 327 "yacc.y"
    {l.a("sizeof_expression",1);}
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 330 "yacc.y"
    {l.a("postfix_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 331 "yacc.y"
    {l.a("postfix_expression",1);(yyval.r.exp) = new Identifier(SPL->find(*(yyvsp[(1) - (1)].r.base)));}
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 332 "yacc.y"
    {l.a("postfix_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 333 "yacc.y"
    {l.a("postfix_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 334 "yacc.y"
    {l.a("postfix_expression",1);}
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 337 "yacc.y"
    {l.a("unary_expression_not_plusminus",1);(yyval.r.exp) = new UnaryExpression(exclamation_point,(yyvsp[(2) - (2)].r.exp),Node::current);}
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 338 "yacc.y"
    {l.a("unary_expression_not_plusminus",1);(yyval.r.exp) = new UnaryExpression(tilde,(yyvsp[(2) - (2)].r.exp),Node::current);}
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 339 "yacc.y"
    {l.a("unary_expression_not_plusminus",1);}
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 340 "yacc.y"
    {l.a("unary_expression_not_plusminus",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 343 "yacc.y"
    {l.a("pre_increment_expression",1);(yyval.r.exp) = (yyvsp[(2) - (2)].r.exp);}
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 346 "yacc.y"
    {l.a("pre_decrement_expression",1);(yyval.r.exp) = (yyvsp[(2) - (2)].r.exp);}
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 349 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.exp) = (yyvsp[(2) - (2)].r.exp);}
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 350 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.exp) = (yyvsp[(2) - (2)].r.exp);}
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 351 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.exp) = (yyvsp[(2) - (2)].r.exp);}
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 352 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 353 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 354 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 355 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 363 "yacc.y"
    {l.a("cast_expression",2);}
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 364 "yacc.y"
    {l.a("cast_expression",2);}
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 365 "yacc.y"
    {l.a("cast_expression",4);}
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 366 "yacc.y"
    {l.a("cast_expression",3);}
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 367 "yacc.y"
    {l.a("cast_expression",3);}
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 368 "yacc.y"
    {l.a("cast_expression",2);}
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 371 "yacc.y"
    {l.a("type_quals_opt",0);}
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 372 "yacc.y"
    {l.a("type_quals_opt",1);}
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 375 "yacc.y"
    {l.a("type_quals",1);}
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 376 "yacc.y"
    {l.a("type_quals",2);}
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 379 "yacc.y"
    {l.a("type_qual",1);}
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 380 "yacc.y"
    {l.a("type_qual",0);}
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 383 "yacc.y"
    {(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 385 "yacc.y"
    {
		l.a("multiplicative_expression STAR",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),star,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 390 "yacc.y"
    {
		l.a("multiplicative_expression SLASH",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),slash,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 395 "yacc.y"
    {
		l.a("multiplicative_expression PERCENT",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),percent,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 403 "yacc.y"
    {
		l.a("additive_expression multiplicative_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 408 "yacc.y"
    {
		l.a("additive_expression PLUS",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),Plus,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 413 "yacc.y"
    {
		l.a("additive_expression MINUS",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),Minus,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 421 "yacc.y"
    {
		l.a("shift_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 426 "yacc.y"
    {
		l.a("shift_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),ltlt,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 431 "yacc.y"
    {
		l.a("shift_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),gtgt,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 439 "yacc.y"
    {
		l.a("relational_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 444 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),smaller,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 449 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),Greater,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 454 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),leq,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 459 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),geq,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 464 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),Is,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 469 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),As,(yyvsp[(3) - (3)].r.exp),Node::current);		
  }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 477 "yacc.y"
    {
		l.a("equality_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 482 "yacc.y"
    {
		l.a("equality_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),eqeq,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 487 "yacc.y"
    {
		l.a("equality_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),noteq,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 495 "yacc.y"
    {
		l.a("and_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 500 "yacc.y"
    {
		l.a("and_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),And,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 507 "yacc.y"
    {
		l.a("exclusive_or_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 512 "yacc.y"
    {
		l.a("exclusive_or_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),power,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 520 "yacc.y"
    {
		l.a("inclusive_or_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 525 "yacc.y"
    {
		l.a("inclusive_or_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),Or,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 533 "yacc.y"
    {
		l.a("conditional_and_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 538 "yacc.y"
    {
		l.a("conditional_and_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),andand,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 546 "yacc.y"
    {
		l.a("conditional_or_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 551 "yacc.y"
    {
		l.a("conditional_or_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),oror,(yyvsp[(3) - (3)].r.exp),Node::current);
  
  }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 560 "yacc.y"
    {
		l.a("conditional_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 565 "yacc.y"
    {
		l.a("conditional_expression",3);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (5)].r.exp),question_mark,(yyvsp[(3) - (5)].r.exp),Node::current);  
  }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 573 "yacc.y"
    {
		l.a("assignment",3);
		(yyval.r.st) = new Assignment(new Variable(((Identifier*)(yyvsp[(1) - (3)].r.exp))->symbol,Node::current),(yyvsp[(2) - (3)].r.op),(yyvsp[(3) - (3)].r.node),Node::current);
  }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 580 "yacc.y"
    {l.a("assignment_operator EQUAL",0);(yyval.r.op) = Equal;}
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 581 "yacc.y"
    {l.a("assignment_operator PLUSEQ",0);(yyval.r.op) = pluseq;}
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 582 "yacc.y"
    {l.a("assignment_operator MINUSEQ",0);(yyval.r.op) = minuseq;}
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 583 "yacc.y"
    {l.a("assignment_operator STAREQ",0);(yyval.r.op) = stareq;}
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 584 "yacc.y"
    {l.a("assignment_operator DIVEQ",0);(yyval.r.op) = diveq;}
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 585 "yacc.y"
    {l.a("assignment_operator MODEQ",0);(yyval.r.op) = modeq;}
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 586 "yacc.y"
    {l.a("assignment_operator XOREQ",0);(yyval.r.op) = xoreq;}
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 587 "yacc.y"
    {l.a("assignment_operator ANDEQ",0);(yyval.r.op) = andeq;}
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 588 "yacc.y"
    {l.a("assignment_operator OREQ",0);(yyval.r.op) = oreq;}
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 589 "yacc.y"
    {l.a("assignment_operator GTGTEQ",0);(yyval.r.op) = gtgteq;}
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 590 "yacc.y"
    {l.a("assignment_operator LTLTEQ",0);(yyval.r.op) = ltlteq;}
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 593 "yacc.y"
    {l.a("expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 594 "yacc.y"
    {l.a("expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.st);}
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 597 "yacc.y"
    {l.a("constant_expression",1);}
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 600 "yacc.y"
    {l.a("boolean_expression",1);}
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 604 "yacc.y"
    {l.a("statement",1);}
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 605 "yacc.y"
    {l.a("statement",1);}
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 606 "yacc.y"
    {l.a("statement",1);}
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 609 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 610 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 611 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 612 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 613 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 614 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 615 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 616 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 617 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 618 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 619 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 620 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 621 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 624 "yacc.y"
    { SPL->add_scope(); }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 624 "yacc.y"
    {l.a("block",1);  SPL->endScope();}
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 625 "yacc.y"
    {l.a("block",1,1);}
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 628 "yacc.y"
    {l.a("statement_list_opt",0);}
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 629 "yacc.y"
    {l.a("statement_list_opt",1);}
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 633 "yacc.y"
    {l.a("statement_list",1);}
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 634 "yacc.y"
    {l.a("statement_list",2);}
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 637 "yacc.y"
    {l.a("empty_statement",0);}
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 640 "yacc.y"
    {l.a("labeled_statement",1);}
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 643 "yacc.y"
    {l.a("declaration_statement",1);}
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 644 "yacc.y"
    {l.a("declaration_statement",1);}
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 645 "yacc.y"
    { l.a("declaration_statement",1,1);}
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 646 "yacc.y"
    { l.a("declaration_statement",1,1);}
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 650 "yacc.y"
    {
		l.a("local_variable_declaration",2);

		SPL->addLocalVariable(*(yyvsp[(1) - (2)].r.base),*(yyvsp[(2) - (2)].r.identifiers),(yyvsp[(1) - (2)].r.known_type),false,(yyvsp[(2) - (2)].r.line_no),(yyvsp[(2) - (2)].r.col_no)) ;
	}
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 658 "yacc.y"
    {	 l.a("variable_declarators",1); 
				 (yyval.r.identifiers) = new queue<string>();
				 (yyval.r.identifiers)->push(*(yyvsp[(1) - (1)].r.identifier));
		   }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 663 "yacc.y"
    {      l.a("variable_declarators",2);
				  (yyval.r.identifiers) = (yyvsp[(1) - (3)].r.identifiers);
				  (yyval.r.identifiers)->push(*(yyvsp[(3) - (3)].r.identifier));
		   }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 670 "yacc.y"
    {		 l.a("variable_declarator",0); 
				 (yyval.r.identifier) = new string ((yyvsp[(1) - (1)].r.str)) ; 
		  }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 674 "yacc.y"
    {		l.a("variable_declarator",1); 
					(yyval.r.identifier) = new string ((yyvsp[(1) - (3)].r.str));
		   }
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 679 "yacc.y"
    {l.a("variable_initializer",1);}
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 680 "yacc.y"
    {l.a("variable_initializer",1);}
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 681 "yacc.y"
    {l.a("variable_initializer",1);}
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 684 "yacc.y"
    {l.a("stackalloc_initializer",2);}
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 688 "yacc.y"
    {
		l.a("local_constant_declaration",2);
		SPL->addLocalVariable(*(yyvsp[(2) - (3)].r.base),*(yyvsp[(3) - (3)].r.identifiers),(yyvsp[(2) - (3)].r.known_type),true,(yyvsp[(2) - (3)].r.line_no),(yyvsp[(2) - (3)].r.col_no)) ;
  }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 695 "yacc.y"
    {
		l.a("constant_declarators",1);
  		(yyval.r.identifiers) = new queue<string>();
		(yyval.r.identifiers)->push(*(yyvsp[(1) - (1)].r.identifier));
  }
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 701 "yacc.y"
    {
		l.a("constant_declarators",2);
	  	(yyval.r.identifiers) = (yyvsp[(1) - (3)].r.identifiers);
		(yyval.r.identifiers)->push(*(yyvsp[(3) - (3)].r.identifier));	
  }
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 708 "yacc.y"
    {l.a("constant_declarator",1);(yyval.r.identifier) = new string((yyvsp[(1) - (3)].r.str));}
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 717 "yacc.y"
    {l.a("expression_statement",1);}
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 718 "yacc.y"
    {l.a("expression_statement",1);}
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 719 "yacc.y"
    {l.a("expression_statement",1);}
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 720 "yacc.y"
    {l.a("expression_statement",1);}
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 721 "yacc.y"
    {l.a("expression_statement",1);}
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 722 "yacc.y"
    {l.a("expression_statement",1);}
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 723 "yacc.y"
    {l.a("expression_statement",1);}
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 724 "yacc.y"
    { l.a("expression_statement",1,1);}
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 725 "yacc.y"
    {l.a("expression_statement",1,1);}
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 726 "yacc.y"
    {l.a("expression_statement",1,1);}
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 727 "yacc.y"
    {l.a("expression_statement",1,1);}
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 728 "yacc.y"
    {l.a("expression_statement",1,1);}
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 729 "yacc.y"
    {l.a("expression_statement",1,1);}
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 730 "yacc.y"
    {l.a("expression_statement",1,1);}
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 733 "yacc.y"
    {l.a("statement_expression",1);}
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 734 "yacc.y"
    {l.a("statement_expression",1);}
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 735 "yacc.y"
    {l.a("statement_expression",1);}
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 736 "yacc.y"
    {l.a("statement_expression",1);}
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 737 "yacc.y"
    {l.a("statement_expression",1);}
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 738 "yacc.y"
    {l.a("statement_expression",1);}
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 739 "yacc.y"
    {l.a("statement_expression",1);}
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 742 "yacc.y"
    {l.a("selection_statement",1);}
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 743 "yacc.y"
    {l.a("selection_statement",1);}
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 746 "yacc.y"
    {l.a("if_statement",2);}
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 747 "yacc.y"
    {l.a("if_statement",3);}
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 750 "yacc.y"
    {l.a("switch_statement",2);}
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 753 "yacc.y"
    {l.a("switch_block",1);}
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 756 "yacc.y"
    {l.a("switch_sections_opt",0);}
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 757 "yacc.y"
    {l.a("switch_sections_opt",1);}
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 760 "yacc.y"
    {l.a("switch_sections",1);}
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 761 "yacc.y"
    {l.a("switch_sections",2);}
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 764 "yacc.y"
    {l.a("switch_section",2);}
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 767 "yacc.y"
    {l.a("switch_labels",1);}
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 768 "yacc.y"
    {l.a("switch_labels",2);}
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 771 "yacc.y"
    {l.a("switch_label",1);}
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 772 "yacc.y"
    {l.a("switch_label",0);}
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 775 "yacc.y"
    {l.a("iteration_statement",1);}
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 776 "yacc.y"
    {l.a("iteration_statement",1);}
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 777 "yacc.y"
    {l.a("iteration_statement",1);}
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 778 "yacc.y"
    {l.a("iteration_statement",1);}
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 781 "yacc.y"
    {l.a("unsafe_statement",1);}
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 784 "yacc.y"
    {l.a("while_statement",2);}
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 785 "yacc.y"
    {l.a("while_statement",2,1);}
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 786 "yacc.y"
    {yyclearin;}
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 786 "yacc.y"
    {  }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 786 "yacc.y"
    {l.a("while_statement",2,1);}
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 789 "yacc.y"
    {l.a("do_statement",2);}
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 790 "yacc.y"
    { l.a("do_statement",2,1);}
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 794 "yacc.y"
    {l.a("for_statement",8);}
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 799 "yacc.y"
    {l.a("for_initializer_opt",0);}
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 800 "yacc.y"
    {l.a("for_initializer_opt",1);}
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 803 "yacc.y"
    {l.a("for_condition_opt",0);}
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 804 "yacc.y"
    {l.a("for_condition_opt",1);}
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 807 "yacc.y"
    {l.a("for_iterator_opt",0);}
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 808 "yacc.y"
    {l.a("for_iterator_opt",1);}
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 811 "yacc.y"
    {l.a("for_initializer",1);}
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 812 "yacc.y"
    {l.a("for_initializer",1);}
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 815 "yacc.y"
    {l.a("for_condition",1);}
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 818 "yacc.y"
    {l.a("for_iterator",1);}
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 821 "yacc.y"
    {l.a("statement_expression_list",1);}
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 822 "yacc.y"
    {l.a("statement_expression_list",2);}
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 825 "yacc.y"
    {l.a("foreach_statement",7);}
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 828 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 829 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 830 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 831 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 832 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 835 "yacc.y"
    {l.a("break_statement",0);}
    break;

  case 285:
/* Line 1792 of yacc.c  */
#line 836 "yacc.y"
    {l.a("break_statement",0,1);}
    break;

  case 286:
/* Line 1792 of yacc.c  */
#line 839 "yacc.y"
    {l.a("continue_statement",0);}
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 840 "yacc.y"
    {l.a("continue_statement",0,1);}
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 843 "yacc.y"
    {l.a("goto_statement",0);}
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 844 "yacc.y"
    {l.a("goto_statement",1);}
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 845 "yacc.y"
    {l.a("goto_statement",0);}
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 846 "yacc.y"
    {l.a("goto_statement",0,1);}
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 847 "yacc.y"
    {l.a("goto_statement",1,1);}
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 848 "yacc.y"
    {l.a("goto_statement",0,1);}
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 851 "yacc.y"
    {l.a("return_statement",1);}
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 852 "yacc.y"
    {l.a("return_statement",1,1);}
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 855 "yacc.y"
    {l.a("expression_opt",0);}
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 856 "yacc.y"
    {l.a("expression_opt",1);}
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 859 "yacc.y"
    {l.a("throw_statement",1);}
    break;

  case 299:
/* Line 1792 of yacc.c  */
#line 860 "yacc.y"
    {l.a("throw_statement",1);}
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 863 "yacc.y"
    {l.a("try_statement",2);}
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 864 "yacc.y"
    {l.a("try_statement",2);}
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 865 "yacc.y"
    {l.a("try_statement",3);}
    break;

  case 303:
/* Line 1792 of yacc.c  */
#line 868 "yacc.y"
    {l.a("catch_clauses",1);}
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 869 "yacc.y"
    {l.a("catch_clauses",2);}
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 872 "yacc.y"
    {l.a("catch_clause",3);}
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 873 "yacc.y"
    {l.a("catch_clause",3);}
    break;

  case 308:
/* Line 1792 of yacc.c  */
#line 877 "yacc.y"
    {l.a("identifier_opt",0);}
    break;

  case 309:
/* Line 1792 of yacc.c  */
#line 878 "yacc.y"
    {l.a("identifier_opt",0);}
    break;

  case 310:
/* Line 1792 of yacc.c  */
#line 881 "yacc.y"
    {l.a("finally_clause",1);}
    break;

  case 311:
/* Line 1792 of yacc.c  */
#line 884 "yacc.y"
    {l.a("checked_statement",1);}
    break;

  case 312:
/* Line 1792 of yacc.c  */
#line 887 "yacc.y"
    {l.a("unchecked_statement",1);}
    break;

  case 313:
/* Line 1792 of yacc.c  */
#line 890 "yacc.y"
    {l.a("lock_statement",2);}
    break;

  case 314:
/* Line 1792 of yacc.c  */
#line 893 "yacc.y"
    {l.a("using_statement",2);}
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 896 "yacc.y"
    {l.a("resource_acquisition",1);}
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 897 "yacc.y"
    {l.a("resource_acquisition",1);}
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 901 "yacc.y"
    {l.a("fixed_statement",3);}
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 904 "yacc.y"
    {l.a("fixed_pointer_declarators",1);}
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 905 "yacc.y"
    {l.a("fixed_pointer_declarators",2);}
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 908 "yacc.y"
    {l.a("fixed_pointer_declarator",1);}
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 911 "yacc.y"
    {l.a("compilation_unit",2);}
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 912 "yacc.y"
    {l.a("compilation_unit",2);}
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 915 "yacc.y"
    {l.a("using_directives_opt",0);}
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 916 "yacc.y"
    {l.a("using_directives_opt",1);}
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 919 "yacc.y"
    {l.a("attributes_opt",0);}
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 920 "yacc.y"
    {l.a("attributes_opt",1);}
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 923 "yacc.y"
    {l.a("namespace_member_declarations_opt",0);}
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 924 "yacc.y"
    {l.a("namespace_member_declarations_opt",1);}
    break;

  case 329:
/* Line 1792 of yacc.c  */
#line 927 "yacc.y"
    {SPL->addNamespace(*(yyvsp[(3) - (3)].r.base),(yyvsp[(3) - (3)].r.line_no),(yyvsp[(3) - (3)].r.col_no));}
    break;

  case 330:
/* Line 1792 of yacc.c  */
#line 928 "yacc.y"
    {l.a("namespace_declaration",4);SPL->endScope();}
    break;

  case 331:
/* Line 1792 of yacc.c  */
#line 931 "yacc.y"
    {l.a("comma_opt",0);}
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 932 "yacc.y"
    {l.a("comma_opt",0);}
    break;

  case 333:
/* Line 1792 of yacc.c  */
#line 937 "yacc.y"
    {		l.a("qualified_identifier",0);
				(yyval.r.base) = new string((yyvsp[(1) - (1)].r.str));
		  }
    break;

  case 334:
/* Line 1792 of yacc.c  */
#line 941 "yacc.y"
    {	l.a("qualified_identifier",1);
			(yyval.r.base) = new string(string(*(yyvsp[(1) - (2)].r.base)) + string((yyvsp[(2) - (2)].r.str)));
		}
    break;

  case 335:
/* Line 1792 of yacc.c  */
#line 947 "yacc.y"
    {l.a("qualifier",0);(yyval.r.base) = new string(string((yyvsp[(1) - (2)].r.str)) + ".");}
    break;

  case 336:
/* Line 1792 of yacc.c  */
#line 948 "yacc.y"
    {l.a("qualifier",1);(yyval.r.base) = new string(*(yyvsp[(1) - (3)].r.base) + string((yyvsp[(2) - (3)].r.str)) + ".");}
    break;

  case 337:
/* Line 1792 of yacc.c  */
#line 952 "yacc.y"
    {l.a("namespace_body",2);}
    break;

  case 338:
/* Line 1792 of yacc.c  */
#line 955 "yacc.y"
    {l.a("using_directives",1);}
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 956 "yacc.y"
    {l.a("using_directives",2);}
    break;

  case 340:
/* Line 1792 of yacc.c  */
#line 959 "yacc.y"
    {l.a("using_directive",1);}
    break;

  case 341:
/* Line 1792 of yacc.c  */
#line 960 "yacc.y"
    {l.a("using_directive",1);}
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 963 "yacc.y"
    {l.a("using_alias_directive",1);}
    break;

  case 343:
/* Line 1792 of yacc.c  */
#line 964 "yacc.y"
    {l.a("using_alias_directive",1,1);}
    break;

  case 344:
/* Line 1792 of yacc.c  */
#line 967 "yacc.y"
    {l.a("using_namespace_directive",1);  SPL->add_using(*(yyvsp[(2) - (3)].r.base),(yyvsp[(1) - (3)].r.line_no),(yyvsp[(1) - (3)].r.col_no));}
    break;

  case 345:
/* Line 1792 of yacc.c  */
#line 968 "yacc.y"
    {l.a("using_namespace_directive",1,1);SPL->add_using(*(yyvsp[(2) - (3)].r.base),(yyvsp[(1) - (3)].r.line_no),(yyvsp[(1) - (3)].r.col_no));}
    break;

  case 346:
/* Line 1792 of yacc.c  */
#line 971 "yacc.y"
    {l.a("namespace_member_declarations",1);}
    break;

  case 347:
/* Line 1792 of yacc.c  */
#line 972 "yacc.y"
    {l.a("namespace_member_declarations",2);}
    break;

  case 348:
/* Line 1792 of yacc.c  */
#line 975 "yacc.y"
    {l.a("namespace_member_declaration",1);}
    break;

  case 349:
/* Line 1792 of yacc.c  */
#line 976 "yacc.y"
    {l.a("namespace_member_declaration",1);}
    break;

  case 350:
/* Line 1792 of yacc.c  */
#line 979 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 351:
/* Line 1792 of yacc.c  */
#line 980 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 352:
/* Line 1792 of yacc.c  */
#line 981 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 982 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 354:
/* Line 1792 of yacc.c  */
#line 983 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 355:
/* Line 1792 of yacc.c  */
#line 995 "yacc.y"
    {		
		l.a("modifiers_opt",0);
		(yyval.r.modifiers) = new queue<string>();
  }
    break;

  case 356:
/* Line 1792 of yacc.c  */
#line 1000 "yacc.y"
    {	
		l.a("modifiers_opt",1);
		(yyval.r.modifiers) = (yyvsp[(1) - (1)].r.modifiers);
  }
    break;

  case 357:
/* Line 1792 of yacc.c  */
#line 1007 "yacc.y"
    {	
		l.a("modifiers",1);
		(yyval.r.modifiers) = new queue<string>();
		(yyval.r.modifiers)->push(*(yyvsp[(1) - (1)].r.modifier));
  }
    break;

  case 358:
/* Line 1792 of yacc.c  */
#line 1013 "yacc.y"
    {
		l.a("modifiers",2);
		(yyval.r.modifiers) = (yyvsp[(1) - (2)].r.modifiers);
		(yyval.r.modifiers)->push(*(yyvsp[(2) - (2)].r.modifier));
  }
    break;

  case 359:
/* Line 1792 of yacc.c  */
#line 1020 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("ABSTRACT"); }
    break;

  case 360:
/* Line 1792 of yacc.c  */
#line 1021 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("EXTERN");	  }
    break;

  case 361:
/* Line 1792 of yacc.c  */
#line 1022 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("INTERNAL"); }
    break;

  case 362:
/* Line 1792 of yacc.c  */
#line 1023 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("NEW");      }
    break;

  case 363:
/* Line 1792 of yacc.c  */
#line 1024 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("OVERRIDE"); }
    break;

  case 364:
/* Line 1792 of yacc.c  */
#line 1025 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("PRIVATE");  }
    break;

  case 365:
/* Line 1792 of yacc.c  */
#line 1026 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("PROTECTED");}
    break;

  case 366:
/* Line 1792 of yacc.c  */
#line 1027 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("PUBLIC");   }
    break;

  case 367:
/* Line 1792 of yacc.c  */
#line 1028 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("READONLY"); }
    break;

  case 368:
/* Line 1792 of yacc.c  */
#line 1029 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("SEALED");   }
    break;

  case 369:
/* Line 1792 of yacc.c  */
#line 1030 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("STATIC");   }
    break;

  case 370:
/* Line 1792 of yacc.c  */
#line 1031 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("UNSAFE");   }
    break;

  case 371:
/* Line 1792 of yacc.c  */
#line 1032 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("VIRTUAL");  }
    break;

  case 372:
/* Line 1792 of yacc.c  */
#line 1033 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("VOLATILE"); }
    break;

  case 373:
/* Line 1792 of yacc.c  */
#line 1044 "yacc.y"
    {
		SPL->addClass(*(yyvsp[(2) - (5)].r.modifiers),string((yyvsp[(4) - (5)].r.str)),*(yyvsp[(5) - (5)].r.bases),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no));
  }
    break;

  case 374:
/* Line 1792 of yacc.c  */
#line 1047 "yacc.y"
    {l.a("class_declaration",6);SPL->endScope();}
    break;

  case 375:
/* Line 1792 of yacc.c  */
#line 1049 "yacc.y"
    {
		SPL->addClass(*(yyvsp[(2) - (5)].r.modifiers),string((yyvsp[(4) - (5)].r.str)),*(yyvsp[(5) - (5)].r.bases),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no));
  }
    break;

  case 376:
/* Line 1792 of yacc.c  */
#line 1052 "yacc.y"
    {l.a("class_declaration",5);SPL->endScope();}
    break;

  case 377:
/* Line 1792 of yacc.c  */
#line 1057 "yacc.y"
    {l.a("class_base_opt",0);(yyval.r.bases) = new queue<string>();}
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 1058 "yacc.y"
    {l.a("class_base_opt",1);(yyval.r.bases) = (yyvsp[(1) - (1)].r.bases);}
    break;

  case 379:
/* Line 1792 of yacc.c  */
#line 1061 "yacc.y"
    {l.a("class_base",1);(yyval.r.bases) = new queue<string>();(yyval.r.bases)->push(*(yyvsp[(2) - (2)].r.base));}
    break;

  case 380:
/* Line 1792 of yacc.c  */
#line 1062 "yacc.y"
    {l.a("class_base",1);(yyval.r.bases) = (yyvsp[(2) - (2)].r.bases);}
    break;

  case 381:
/* Line 1792 of yacc.c  */
#line 1064 "yacc.y"
    {
		l.a("class_base",2);(yyval.r.bases) = new queue<string>();
		(yyval.r.bases)->push(*(yyvsp[(2) - (4)].r.base));
		while(!(yyvsp[(4) - (4)].r.bases)->empty())
		{
			(yyval.r.bases)->push((yyvsp[(4) - (4)].r.bases)->front());
			(yyvsp[(4) - (4)].r.bases)->pop();
		}
  }
    break;

  case 382:
/* Line 1792 of yacc.c  */
#line 1076 "yacc.y"
    {
		l.a("interface_type_list",1);
		(yyval.r.bases) = new queue<string>();
		(yyval.r.bases)->push(*(yyvsp[(1) - (1)].r.base));
  }
    break;

  case 383:
/* Line 1792 of yacc.c  */
#line 1082 "yacc.y"
    {
		l.a("interface_type_list",2);
		(yyval.r.bases) = (yyvsp[(1) - (3)].r.bases);
		(yyval.r.bases)->push(*(yyvsp[(3) - (3)].r.base));
  }
    break;

  case 384:
/* Line 1792 of yacc.c  */
#line 1090 "yacc.y"
    {l.a("class_body",1);}
    break;

  case 385:
/* Line 1792 of yacc.c  */
#line 1094 "yacc.y"
    {l.a("class_member_declarations_opt",0);}
    break;

  case 386:
/* Line 1792 of yacc.c  */
#line 1095 "yacc.y"
    {l.a("class_member_declarations_opt",1);}
    break;

  case 387:
/* Line 1792 of yacc.c  */
#line 1098 "yacc.y"
    {l.a("class_member_declarations",1);}
    break;

  case 388:
/* Line 1792 of yacc.c  */
#line 1099 "yacc.y"
    {l.a("class_member_declarations",2);}
    break;

  case 389:
/* Line 1792 of yacc.c  */
#line 1102 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 390:
/* Line 1792 of yacc.c  */
#line 1103 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 391:
/* Line 1792 of yacc.c  */
#line 1104 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 392:
/* Line 1792 of yacc.c  */
#line 1105 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 393:
/* Line 1792 of yacc.c  */
#line 1106 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 394:
/* Line 1792 of yacc.c  */
#line 1107 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 395:
/* Line 1792 of yacc.c  */
#line 1108 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 396:
/* Line 1792 of yacc.c  */
#line 1109 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 397:
/* Line 1792 of yacc.c  */
#line 1110 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 398:
/* Line 1792 of yacc.c  */
#line 1111 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 399:
/* Line 1792 of yacc.c  */
#line 1115 "yacc.y"
    {		
		         l.a("constant_declaration",4);
	          SPL->addFieldConst(*(yyvsp[(2) - (6)].r.modifiers),string("CONST"),*(yyvsp[(4) - (6)].r.base),*(yyvsp[(5) - (6)].r.identifiers),(yyvsp[(5) - (6)].r.line_no),(yyvsp[(5) - (6)].r.col_no),(yyvsp[(4) - (6)].r.known_type));
		  }
    break;

  case 400:
/* Line 1792 of yacc.c  */
#line 1120 "yacc.y"
    {
		    l.a("constant_declaration",4,1);
         SPL->addFieldConst(*(yyvsp[(2) - (6)].r.modifiers),string("CONST"),*(yyvsp[(4) - (6)].r.base),*(yyvsp[(5) - (6)].r.identifiers),(yyvsp[(5) - (6)].r.line_no),(yyvsp[(5) - (6)].r.col_no),(yyvsp[(4) - (6)].r.known_type));

		 }
    break;

  case 401:
/* Line 1792 of yacc.c  */
#line 1128 "yacc.y"
    {
		        SPL->addField(*(yyvsp[(2) - (5)].r.modifiers),*(yyvsp[(3) - (5)].r.base),*(yyvsp[(4) - (5)].r.identifiers),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no),(yyvsp[(3) - (5)].r.known_type));
  		      l.a("field_declaration",4);
	      }
    break;

  case 402:
/* Line 1792 of yacc.c  */
#line 1133 "yacc.y"
    {
            l.a("field_declaration",4,1);
	          SPL->addField(*(yyvsp[(2) - (5)].r.modifiers),*(yyvsp[(3) - (5)].r.base),*(yyvsp[(4) - (5)].r.identifiers),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no),(yyvsp[(3) - (5)].r.known_type));
        }
    break;

  case 403:
/* Line 1792 of yacc.c  */
#line 1140 "yacc.y"
    {l.a("method_declaration",2);SPL->check_function(); SPL->endScope();}
    break;

  case 404:
/* Line 1792 of yacc.c  */
#line 1145 "yacc.y"
    {    l.a("method_header",5); 
          SPL->addMethod(*(yyvsp[(2) - (7)].r.modifiers),*(yyvsp[(3) - (7)].r.base),string(*(yyvsp[(4) - (7)].r.base)),*(yyvsp[(6) - (7)].r.types_ids),(yyvsp[(4) - (7)].r.line_no),(yyvsp[(4) - (7)].r.col_no),(yyvsp[(3) - (7)].r.known_type),1);
      }
    break;

  case 406:
/* Line 1792 of yacc.c  */
#line 1152 "yacc.y"
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[(2) - (7)].r.modifiers),"VOID",string(*(yyvsp[(4) - (7)].r.base)),*(yyvsp[(6) - (7)].r.types_ids),(yyvsp[(4) - (7)].r.line_no),(yyvsp[(4) - (7)].r.col_no),1,1);
      }
    break;

  case 408:
/* Line 1792 of yacc.c  */
#line 1158 "yacc.y"
    {    l.a("method_header",5); 
               SPL->addMethod(*(yyvsp[(2) - (7)].r.modifiers),*(yyvsp[(3) - (7)].r.base),string(*(yyvsp[(4) - (7)].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[(4) - (7)].r.line_no),(yyvsp[(4) - (7)].r.col_no),(yyvsp[(3) - (7)].r.known_type),1);
         }
    break;

  case 410:
/* Line 1792 of yacc.c  */
#line 1164 "yacc.y"
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[(2) - (7)].r.modifiers),"VOID",string(*(yyvsp[(4) - (7)].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[(4) - (7)].r.line_no),(yyvsp[(4) - (7)].r.col_no),1,1);
         }
    break;

  case 412:
/* Line 1792 of yacc.c  */
#line 1174 "yacc.y"
    {    l.a("method_header",5); 
          SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),*(yyvsp[(3) - (8)].r.base),string(*(yyvsp[(4) - (8)].r.base)),*(yyvsp[(6) - (8)].r.types_ids),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),(yyvsp[(3) - (8)].r.known_type),0);
      }
    break;

  case 413:
/* Line 1792 of yacc.c  */
#line 1178 "yacc.y"
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),"VOID",string(*(yyvsp[(4) - (8)].r.base)),*(yyvsp[(6) - (8)].r.types_ids),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),1,0);
      }
    break;

  case 414:
/* Line 1792 of yacc.c  */
#line 1182 "yacc.y"
    {    l.a("method_header",5); 
               SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),*(yyvsp[(3) - (8)].r.base),string(*(yyvsp[(4) - (8)].r.base)),queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>(),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),(yyvsp[(3) - (8)].r.known_type),0);
         }
    break;

  case 415:
/* Line 1792 of yacc.c  */
#line 1186 "yacc.y"
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),"VOID",string(*(yyvsp[(4) - (8)].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),1,0);
         }
    break;

  case 416:
/* Line 1792 of yacc.c  */
#line 1193 "yacc.y"
    {	   l.a("formal_parameter_list_opt",0);
               (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
        }
    break;

  case 417:
/* Line 1792 of yacc.c  */
#line 1197 "yacc.y"
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[(1) - (1)].r.types_ids) ;
        }
    break;

  case 418:
/* Line 1792 of yacc.c  */
#line 1201 "yacc.y"
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[(1) - (1)].r.types_ids) ;
        }
    break;

  case 419:
/* Line 1792 of yacc.c  */
#line 1205 "yacc.y"
    {   l.a("formal_parameter_list_opt",2);
            //merge queues
            (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >();
            while(!((yyvsp[(1) - (3)].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[(1) - (3)].r.types_ids))->front()); ((yyvsp[(1) - (3)].r.types_ids))->pop();}
            while(!((yyvsp[(3) - (3)].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[(3) - (3)].r.types_ids))->front()); ((yyvsp[(3) - (3)].r.types_ids))->pop();}
        }
    break;

  case 420:
/* Line 1792 of yacc.c  */
#line 1213 "yacc.y"
    {l.a("return_type",1);}
    break;

  case 421:
/* Line 1792 of yacc.c  */
#line 1214 "yacc.y"
    {l.a("return_type",0);}
    break;

  case 422:
/* Line 1792 of yacc.c  */
#line 1227 "yacc.y"
    {   l.a("formal_parameter_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[(1) - (1)].r.base) ,*(yyvsp[(1) - (1)].r.identifier)),make_pair((yyvsp[(1) - (1)].r.line_no),(yyvsp[(1) - (1)].r.col_no))),(yyvsp[(1) - (1)].r.known_type)));
      }
    break;

  case 423:
/* Line 1792 of yacc.c  */
#line 1232 "yacc.y"
    {   l.a("formal_parameter_list",2);
      		(yyval.r.types_ids) = (yyvsp[(1) - (3)].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[(3) - (3)].r.base) ,*(yyvsp[(3) - (3)].r.identifier)),make_pair((yyvsp[(3) - (3)].r.line_no),(yyvsp[(3) - (3)].r.col_no))),(yyvsp[(3) - (3)].r.known_type))); 
      }
    break;

  case 424:
/* Line 1792 of yacc.c  */
#line 1239 "yacc.y"
    {   l.a("formal_parameter_default_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[(1) - (1)].r.base) ,*(yyvsp[(1) - (1)].r.identifier)),make_pair((yyvsp[(1) - (1)].r.line_no),(yyvsp[(1) - (1)].r.col_no))),(yyvsp[(1) - (1)].r.known_type)));
      }
    break;

  case 425:
/* Line 1792 of yacc.c  */
#line 1244 "yacc.y"
    {  l.a("formal_parameter_default_list",2);
          (yyval.r.types_ids) = (yyvsp[(1) - (3)].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[(3) - (3)].r.base) ,*(yyvsp[(3) - (3)].r.identifier)),make_pair((yyvsp[(3) - (3)].r.line_no),(yyvsp[(3) - (3)].r.col_no))),(yyvsp[(3) - (3)].r.known_type))); 
       }
    break;

  case 426:
/* Line 1792 of yacc.c  */
#line 1251 "yacc.y"
    {	l.a("formal_parameter",1); 
        (yyval.r.base) = (yyvsp[(1) - (1)].r.base) ;
        (yyval.r.identifier) = (yyvsp[(1) - (1)].r.identifier);
        (yyval.r.line_no) = (yyvsp[(1) - (1)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(1) - (1)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(1) - (1)].r.known_type);
      }
    break;

  case 427:
/* Line 1792 of yacc.c  */
#line 1259 "yacc.y"
    { l.a("formal_parameter",1);
        (yyval.r.base) = (yyvsp[(1) - (1)].r.base);
        (yyval.r.identifier) = (yyvsp[(1) - (1)].r.identifier);
        (yyval.r.line_no) = (yyvsp[(1) - (1)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(1) - (1)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(1) - (1)].r.known_type);
      }
    break;

  case 428:
/* Line 1792 of yacc.c  */
#line 1269 "yacc.y"
    { l.a("fixed_parameter",3);
        (yyval.r.base) = (yyvsp[(3) - (4)].r.base);
        (yyval.r.identifier) = new string ((yyvsp[(4) - (4)].r.str));  
        (yyval.r.line_no) = (yyvsp[(4) - (4)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(4) - (4)].r.col_no); 
        (yyval.r.known_type) = (yyvsp[(3) - (4)].r.known_type);
      }
    break;

  case 429:
/* Line 1792 of yacc.c  */
#line 1280 "yacc.y"
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[(1) - (3)].r.base) ;
        (yyval.r.identifier) = (yyvsp[(1) - (3)].r.identifier);
        (yyval.r.line_no) = (yyvsp[(1) - (3)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(1) - (3)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(1) - (3)].r.known_type);
      }
    break;

  case 430:
/* Line 1792 of yacc.c  */
#line 1288 "yacc.y"
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[(1) - (3)].r.base);
        (yyval.r.identifier) = (yyvsp[(1) - (3)].r.identifier);
        (yyval.r.line_no) = (yyvsp[(1) - (3)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(1) - (3)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(1) - (3)].r.known_type);
      }
    break;

  case 431:
/* Line 1792 of yacc.c  */
#line 1298 "yacc.y"
    {l.a("parameter_modifier_opt",0);}
    break;

  case 432:
/* Line 1792 of yacc.c  */
#line 1299 "yacc.y"
    {l.a("parameter_modifier_opt",0);}
    break;

  case 433:
/* Line 1792 of yacc.c  */
#line 1300 "yacc.y"
    {l.a("parameter_modifier_opt",0);}
    break;

  case 434:
/* Line 1792 of yacc.c  */
#line 1304 "yacc.y"
    { l.a("parameter_array",2);
        (yyval.r.base) = (yyvsp[(3) - (4)].r.base);
        (yyval.r.identifier) = new string ((yyvsp[(4) - (4)].r.str));
        (yyval.r.line_no) = (yyvsp[(4) - (4)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(4) - (4)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(3) - (4)].r.known_type);
      }
    break;

  case 435:
/* Line 1792 of yacc.c  */
#line 1317 "yacc.y"
    {l.a("property_declaration",7);}
    break;

  case 436:
/* Line 1792 of yacc.c  */
#line 1320 "yacc.y"
    {l.a("accessor_declarations",2);}
    break;

  case 437:
/* Line 1792 of yacc.c  */
#line 1321 "yacc.y"
    {l.a("accessor_declarations",2);}
    break;

  case 438:
/* Line 1792 of yacc.c  */
#line 1324 "yacc.y"
    {l.a("set_accessor_declaration_opt",0);}
    break;

  case 439:
/* Line 1792 of yacc.c  */
#line 1325 "yacc.y"
    {l.a("set_accessor_declaration_opt",1);}
    break;

  case 440:
/* Line 1792 of yacc.c  */
#line 1328 "yacc.y"
    {l.a("get_accessor_declaration_opt",0);}
    break;

  case 441:
/* Line 1792 of yacc.c  */
#line 1329 "yacc.y"
    {l.a("get_accessor_declaration_opt",1);}
    break;

  case 442:
/* Line 1792 of yacc.c  */
#line 1335 "yacc.y"
    {l.a("get_accessor_declaration",4);}
    break;

  case 443:
/* Line 1792 of yacc.c  */
#line 1341 "yacc.y"
    {l.a("set_accessor_declaration",4);}
    break;

  case 444:
/* Line 1792 of yacc.c  */
#line 1344 "yacc.y"
    {l.a("accessor_body",1);}
    break;

  case 445:
/* Line 1792 of yacc.c  */
#line 1345 "yacc.y"
    {l.a("accessor_body",0);}
    break;

  case 446:
/* Line 1792 of yacc.c  */
#line 1348 "yacc.y"
    {l.a("event_declaration",4);}
    break;

  case 447:
/* Line 1792 of yacc.c  */
#line 1352 "yacc.y"
    {l.a("event_declaration",7);}
    break;

  case 448:
/* Line 1792 of yacc.c  */
#line 1355 "yacc.y"
    {l.a("event_accessor_declarations",2);}
    break;

  case 449:
/* Line 1792 of yacc.c  */
#line 1356 "yacc.y"
    {l.a("event_accessor_declarations",2);}
    break;

  case 450:
/* Line 1792 of yacc.c  */
#line 1362 "yacc.y"
    {l.a("add_accessor_declaration",4);}
    break;

  case 451:
/* Line 1792 of yacc.c  */
#line 1368 "yacc.y"
    {l.a("remove_accessor_declaration",4);}
    break;

  case 452:
/* Line 1792 of yacc.c  */
#line 1374 "yacc.y"
    {l.a("indexer_declaration",6);}
    break;

  case 453:
/* Line 1792 of yacc.c  */
#line 1377 "yacc.y"
    {l.a("indexer_declarator",2);}
    break;

  case 454:
/* Line 1792 of yacc.c  */
#line 1379 "yacc.y"
    {l.a("indexer_declarator",3);}
    break;

  case 455:
/* Line 1792 of yacc.c  */
#line 1382 "yacc.y"
    {l.a("qualified_this",1);}
    break;

  case 456:
/* Line 1792 of yacc.c  */
#line 1386 "yacc.y"
    {l.a("operator_declaration",4);}
    break;

  case 457:
/* Line 1792 of yacc.c  */
#line 1389 "yacc.y"
    {l.a("operator_declarator",2);}
    break;

  case 458:
/* Line 1792 of yacc.c  */
#line 1390 "yacc.y"
    {l.a("operator_declarator",2);}
    break;

  case 459:
/* Line 1792 of yacc.c  */
#line 1393 "yacc.y"
    {l.a("overloadable_operator_declarator",3);}
    break;

  case 460:
/* Line 1792 of yacc.c  */
#line 1394 "yacc.y"
    {l.a("overloadable_operator_declarator",4);}
    break;

  case 461:
/* Line 1792 of yacc.c  */
#line 1397 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 462:
/* Line 1792 of yacc.c  */
#line 1398 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 463:
/* Line 1792 of yacc.c  */
#line 1399 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 464:
/* Line 1792 of yacc.c  */
#line 1400 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 465:
/* Line 1792 of yacc.c  */
#line 1401 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 466:
/* Line 1792 of yacc.c  */
#line 1402 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 467:
/* Line 1792 of yacc.c  */
#line 1403 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 468:
/* Line 1792 of yacc.c  */
#line 1404 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 469:
/* Line 1792 of yacc.c  */
#line 1405 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 470:
/* Line 1792 of yacc.c  */
#line 1406 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 471:
/* Line 1792 of yacc.c  */
#line 1407 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 472:
/* Line 1792 of yacc.c  */
#line 1408 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 473:
/* Line 1792 of yacc.c  */
#line 1409 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 474:
/* Line 1792 of yacc.c  */
#line 1410 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 475:
/* Line 1792 of yacc.c  */
#line 1411 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 476:
/* Line 1792 of yacc.c  */
#line 1412 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 477:
/* Line 1792 of yacc.c  */
#line 1413 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 478:
/* Line 1792 of yacc.c  */
#line 1414 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 479:
/* Line 1792 of yacc.c  */
#line 1415 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 480:
/* Line 1792 of yacc.c  */
#line 1416 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 481:
/* Line 1792 of yacc.c  */
#line 1417 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 482:
/* Line 1792 of yacc.c  */
#line 1418 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 483:
/* Line 1792 of yacc.c  */
#line 1421 "yacc.y"
    {l.a("conversion_operator_declarator",2);}
    break;

  case 484:
/* Line 1792 of yacc.c  */
#line 1422 "yacc.y"
    {l.a("conversion_operator_declarator",2);}
    break;

  case 485:
/* Line 1792 of yacc.c  */
#line 1426 "yacc.y"
    {
  SPL->addMethod(*(yyvsp[(2) - (6)].r.modifiers),"",string((yyvsp[(3) - (6)].r.str)),*(yyvsp[(5) - (6)].r.types_ids),(yyvsp[(3) - (6)].r.line_no),(yyvsp[(3) - (6)].r.col_no),1,1);
  }
    break;

  case 486:
/* Line 1792 of yacc.c  */
#line 1429 "yacc.y"
    {l.a("constructor_declaration",4);SPL->endScope();}
    break;

  case 487:
/* Line 1792 of yacc.c  */
#line 1432 "yacc.y"
    {l.a("constructor_initializer_opt",0);}
    break;

  case 488:
/* Line 1792 of yacc.c  */
#line 1433 "yacc.y"
    {l.a("constructor_initializer_opt",1);}
    break;

  case 489:
/* Line 1792 of yacc.c  */
#line 1436 "yacc.y"
    {l.a("constructor_initializer",1);}
    break;

  case 490:
/* Line 1792 of yacc.c  */
#line 1437 "yacc.y"
    {l.a("constructor_initializer",1);}
    break;

  case 491:
/* Line 1792 of yacc.c  */
#line 1453 "yacc.y"
    {l.a("destructor_declaration",3);}
    break;

  case 492:
/* Line 1792 of yacc.c  */
#line 1456 "yacc.y"
    {l.a("operator_body",1);}
    break;

  case 493:
/* Line 1792 of yacc.c  */
#line 1457 "yacc.y"
    {l.a("operator_body",0);}
    break;

  case 494:
/* Line 1792 of yacc.c  */
#line 1460 "yacc.y"
    {l.a("constructor_body",1);}
    break;

  case 495:
/* Line 1792 of yacc.c  */
#line 1461 "yacc.y"
    {l.a("constructor_body",0);}
    break;

  case 496:
/* Line 1792 of yacc.c  */
#line 1466 "yacc.y"
    {l.a("struct_declaration",5);}
    break;

  case 497:
/* Line 1792 of yacc.c  */
#line 1469 "yacc.y"
    {l.a("struct_interfaces_opt",0);}
    break;

  case 498:
/* Line 1792 of yacc.c  */
#line 1470 "yacc.y"
    {l.a("struct_interfaces_opt",1);}
    break;

  case 499:
/* Line 1792 of yacc.c  */
#line 1473 "yacc.y"
    {l.a("struct_interfaces",1);}
    break;

  case 500:
/* Line 1792 of yacc.c  */
#line 1476 "yacc.y"
    {l.a("struct_body",1);}
    break;

  case 501:
/* Line 1792 of yacc.c  */
#line 1479 "yacc.y"
    {l.a("struct_member_declarations_opt",0);}
    break;

  case 502:
/* Line 1792 of yacc.c  */
#line 1480 "yacc.y"
    {l.a("struct_member_declarations_opt",1);}
    break;

  case 503:
/* Line 1792 of yacc.c  */
#line 1483 "yacc.y"
    {l.a("struct_member_declarations",1);}
    break;

  case 504:
/* Line 1792 of yacc.c  */
#line 1484 "yacc.y"
    {l.a("struct_member_declarations",2);}
    break;

  case 505:
/* Line 1792 of yacc.c  */
#line 1487 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 506:
/* Line 1792 of yacc.c  */
#line 1488 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 507:
/* Line 1792 of yacc.c  */
#line 1489 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 508:
/* Line 1792 of yacc.c  */
#line 1490 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 509:
/* Line 1792 of yacc.c  */
#line 1491 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 510:
/* Line 1792 of yacc.c  */
#line 1492 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 511:
/* Line 1792 of yacc.c  */
#line 1493 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 512:
/* Line 1792 of yacc.c  */
#line 1494 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 513:
/* Line 1792 of yacc.c  */
#line 1496 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 514:
/* Line 1792 of yacc.c  */
#line 1501 "yacc.y"
    {l.a("array_initializer",1);}
    break;

  case 515:
/* Line 1792 of yacc.c  */
#line 1502 "yacc.y"
    {l.a("array_initializer",1);}
    break;

  case 516:
/* Line 1792 of yacc.c  */
#line 1505 "yacc.y"
    {l.a("variable_initializer_list_opt",0);}
    break;

  case 517:
/* Line 1792 of yacc.c  */
#line 1506 "yacc.y"
    {l.a("variable_initializer_list_opt",1);}
    break;

  case 518:
/* Line 1792 of yacc.c  */
#line 1509 "yacc.y"
    {l.a("variable_initializer_list",1);}
    break;

  case 519:
/* Line 1792 of yacc.c  */
#line 1510 "yacc.y"
    {l.a("variable_initializer_list",2);}
    break;

  case 520:
/* Line 1792 of yacc.c  */
#line 1516 "yacc.y"
    {
		SPL->addInterface(*(yyvsp[(2) - (5)].r.modifiers),string((yyvsp[(4) - (5)].r.str)),*(yyvsp[(5) - (5)].r.bases),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no));		
  }
    break;

  case 521:
/* Line 1792 of yacc.c  */
#line 1519 "yacc.y"
    {l.a("interface_declaration",5);SPL->endScope();}
    break;

  case 522:
/* Line 1792 of yacc.c  */
#line 1523 "yacc.y"
    {l.a("interface_base_opt",0);(yyval.r.bases) = new queue<string>();}
    break;

  case 523:
/* Line 1792 of yacc.c  */
#line 1524 "yacc.y"
    {l.a("interface_base_opt",1);(yyval.r.bases) = (yyvsp[(1) - (1)].r.bases);}
    break;

  case 524:
/* Line 1792 of yacc.c  */
#line 1527 "yacc.y"
    {l.a("interface_base",1);(yyval.r.bases) = (yyvsp[(2) - (2)].r.bases);}
    break;

  case 525:
/* Line 1792 of yacc.c  */
#line 1530 "yacc.y"
    {l.a("interface_body",1);}
    break;

  case 526:
/* Line 1792 of yacc.c  */
#line 1533 "yacc.y"
    {l.a("interface_member_declarations_opt",0);}
    break;

  case 527:
/* Line 1792 of yacc.c  */
#line 1534 "yacc.y"
    {l.a("interface_member_declarations_opt",1);}
    break;

  case 528:
/* Line 1792 of yacc.c  */
#line 1537 "yacc.y"
    {l.a("interface_member_declarations",1);}
    break;

  case 529:
/* Line 1792 of yacc.c  */
#line 1538 "yacc.y"
    {l.a("interface_member_declarations",2);}
    break;

  case 530:
/* Line 1792 of yacc.c  */
#line 1541 "yacc.y"
    {l.a("interface_member_declaration",1);}
    break;

  case 531:
/* Line 1792 of yacc.c  */
#line 1542 "yacc.y"
    {l.a("interface_member_declaration",1);}
    break;

  case 532:
/* Line 1792 of yacc.c  */
#line 1543 "yacc.y"
    {l.a("interface_member_declaration",1);}
    break;

  case 533:
/* Line 1792 of yacc.c  */
#line 1544 "yacc.y"
    {l.a("interface_member_declaration",1);}
    break;

  case 534:
/* Line 1792 of yacc.c  */
#line 1549 "yacc.y"
    {
     l.a("interface_method_declaration",5);
	 SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),*(yyvsp[(3) - (8)].r.base),string((yyvsp[(4) - (8)].r.str)),*(yyvsp[(6) - (8)].r.types_ids),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),(yyvsp[(3) - (8)].r.known_type),0);
	 SPL->endScope();
    }
    break;

  case 535:
/* Line 1792 of yacc.c  */
#line 1555 "yacc.y"
    {
	  l.a("interface_method_declaration",4);
	  SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),"VOID",string((yyvsp[(4) - (8)].r.str)),*(yyvsp[(6) - (8)].r.types_ids),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),1,0);
	  SPL->endScope();
    }
    break;

  case 536:
/* Line 1792 of yacc.c  */
#line 1562 "yacc.y"
    {l.a("new_opt",0); (yyval.r.modifiers) = new queue<string>();}
    break;

  case 537:
/* Line 1792 of yacc.c  */
#line 1563 "yacc.y"
    {l.a("new_opt",0);(yyval.r.modifiers) = new queue<string>() ; (yyval.r.modifiers)->push("NEW");}
    break;

  case 538:
/* Line 1792 of yacc.c  */
#line 1569 "yacc.y"
    {l.a("interface_property_declaration",1);}
    break;

  case 539:
/* Line 1792 of yacc.c  */
#line 1569 "yacc.y"
    {l.a("interface_property_declaration",1);}
    break;

  case 540:
/* Line 1792 of yacc.c  */
#line 1576 "yacc.y"
    {l.a("interface_indexer_declaration",7);}
    break;

  case 541:
/* Line 1792 of yacc.c  */
#line 1576 "yacc.y"
    {l.a("interface_indexer_declaration",7);}
    break;

  case 542:
/* Line 1792 of yacc.c  */
#line 1580 "yacc.y"
    {l.a("interface_accessors",2);}
    break;

  case 543:
/* Line 1792 of yacc.c  */
#line 1581 "yacc.y"
    {l.a("interface_accessors",2);}
    break;

  case 544:
/* Line 1792 of yacc.c  */
#line 1582 "yacc.y"
    {l.a("interface_accessors",4);}
    break;

  case 545:
/* Line 1792 of yacc.c  */
#line 1583 "yacc.y"
    {l.a("interface_accessors",4);}
    break;

  case 546:
/* Line 1792 of yacc.c  */
#line 1586 "yacc.y"
    {l.a("interface_event_declaration",4);}
    break;

  case 547:
/* Line 1792 of yacc.c  */
#line 1591 "yacc.y"
    {l.a("interface_empty_body",0);}
    break;

  case 548:
/* Line 1792 of yacc.c  */
#line 1592 "yacc.y"
    {l.a("interface_empty_body",0);}
    break;

  case 549:
/* Line 1792 of yacc.c  */
#line 1597 "yacc.y"
    {l.a("enum_declaration",5);}
    break;

  case 550:
/* Line 1792 of yacc.c  */
#line 1600 "yacc.y"
    {l.a("enum_base_opt",0);}
    break;

  case 551:
/* Line 1792 of yacc.c  */
#line 1601 "yacc.y"
    {l.a("enum_base_opt",1);}
    break;

  case 552:
/* Line 1792 of yacc.c  */
#line 1604 "yacc.y"
    {l.a("enum_base",1);}
    break;

  case 553:
/* Line 1792 of yacc.c  */
#line 1607 "yacc.y"
    {l.a("enum_body",1);}
    break;

  case 554:
/* Line 1792 of yacc.c  */
#line 1608 "yacc.y"
    {l.a("enum_body",1);}
    break;

  case 555:
/* Line 1792 of yacc.c  */
#line 1611 "yacc.y"
    {l.a("enum_member_declarations_opt",0);}
    break;

  case 556:
/* Line 1792 of yacc.c  */
#line 1612 "yacc.y"
    {l.a("enum_member_declarations_opt",1);}
    break;

  case 557:
/* Line 1792 of yacc.c  */
#line 1615 "yacc.y"
    {l.a("enum_member_declarations",1);}
    break;

  case 558:
/* Line 1792 of yacc.c  */
#line 1616 "yacc.y"
    {l.a("enum_member_declarations",2);}
    break;

  case 559:
/* Line 1792 of yacc.c  */
#line 1619 "yacc.y"
    {l.a("enum_member_declaration",1);}
    break;

  case 560:
/* Line 1792 of yacc.c  */
#line 1620 "yacc.y"
    {l.a("enum_member_declaration",2);}
    break;

  case 561:
/* Line 1792 of yacc.c  */
#line 1625 "yacc.y"
    {l.a("enum_member_declaration",4);}
    break;

  case 562:
/* Line 1792 of yacc.c  */
#line 1626 "yacc.y"
    {l.a("enum_member_declaration",4,1);}
    break;

  case 563:
/* Line 1792 of yacc.c  */
#line 1631 "yacc.y"
    {l.a("attributes",1);}
    break;

  case 564:
/* Line 1792 of yacc.c  */
#line 1634 "yacc.y"
    {l.a("attribute_sections",1);}
    break;

  case 565:
/* Line 1792 of yacc.c  */
#line 1635 "yacc.y"
    {l.a("attribute_sections",2);}
    break;

  case 566:
/* Line 1792 of yacc.c  */
#line 1638 "yacc.y"
    {l.a("attribute_section",4);}
    break;

  case 567:
/* Line 1792 of yacc.c  */
#line 1639 "yacc.y"
    {l.a("attribute_section",4);}
    break;

  case 568:
/* Line 1792 of yacc.c  */
#line 1642 "yacc.y"
    {l.a("attribute_target_specifier_opt",0);}
    break;

  case 569:
/* Line 1792 of yacc.c  */
#line 1643 "yacc.y"
    {l.a("attribute_target_specifier_opt",1);}
    break;

  case 570:
/* Line 1792 of yacc.c  */
#line 1646 "yacc.y"
    {l.a("attribute_target_specifier",1);}
    break;

  case 571:
/* Line 1792 of yacc.c  */
#line 1649 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 572:
/* Line 1792 of yacc.c  */
#line 1650 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 573:
/* Line 1792 of yacc.c  */
#line 1651 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 574:
/* Line 1792 of yacc.c  */
#line 1652 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 575:
/* Line 1792 of yacc.c  */
#line 1653 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 576:
/* Line 1792 of yacc.c  */
#line 1654 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 577:
/* Line 1792 of yacc.c  */
#line 1655 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 578:
/* Line 1792 of yacc.c  */
#line 1656 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 579:
/* Line 1792 of yacc.c  */
#line 1657 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 580:
/* Line 1792 of yacc.c  */
#line 1660 "yacc.y"
    {l.a("attribute_list",1);}
    break;

  case 581:
/* Line 1792 of yacc.c  */
#line 1661 "yacc.y"
    {l.a("attribute_list",2);}
    break;

  case 582:
/* Line 1792 of yacc.c  */
#line 1664 "yacc.y"
    {l.a("attribute",2);}
    break;

  case 583:
/* Line 1792 of yacc.c  */
#line 1667 "yacc.y"
    {l.a("attribute_arguments_opt",0);}
    break;

  case 584:
/* Line 1792 of yacc.c  */
#line 1668 "yacc.y"
    {l.a("attribute_arguments_opt",1);}
    break;

  case 585:
/* Line 1792 of yacc.c  */
#line 1671 "yacc.y"
    {l.a("attribute_name",1);}
    break;

  case 586:
/* Line 1792 of yacc.c  */
#line 1674 "yacc.y"
    {l.a("attribute_arguments",1);}
    break;

  case 587:
/* Line 1792 of yacc.c  */
#line 1681 "yacc.y"
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
    break;

  case 588:
/* Line 1792 of yacc.c  */
#line 1684 "yacc.y"
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
    break;

  case 589:
/* Line 1792 of yacc.c  */
#line 1687 "yacc.y"
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
    break;

  case 590:
/* Line 1792 of yacc.c  */
#line 1690 "yacc.y"
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
    break;

  case 591:
/* Line 1792 of yacc.c  */
#line 1693 "yacc.y"
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
    break;

  case 592:
/* Line 1792 of yacc.c  */
#line 1696 "yacc.y"
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
    break;

  case 593:
/* Line 1792 of yacc.c  */
#line 1704 "yacc.y"
    {l.a("CLASS",0);}
    break;

  case 594:
/* Line 1792 of yacc.c  */
#line 1705 "yacc.y"
    {l.a("CLASS",0,1);yyclearin;}
    break;

  case 595:
/* Line 1792 of yacc.c  */
#line 1708 "yacc.y"
    {l.a("left_bracket_circle",0);}
    break;

  case 596:
/* Line 1792 of yacc.c  */
#line 1709 "yacc.y"
    {l.a("left_bracket_circle",0,1);yyclearin;}
    break;

  case 597:
/* Line 1792 of yacc.c  */
#line 1712 "yacc.y"
    {l.a("right_bracket_circle",0);}
    break;

  case 598:
/* Line 1792 of yacc.c  */
#line 1713 "yacc.y"
    {l.a("right_bracket_circle",0,1);yyclearin;}
    break;

  case 599:
/* Line 1792 of yacc.c  */
#line 1716 "yacc.y"
    { l.a("semicolon",0);}
    break;

  case 600:
/* Line 1792 of yacc.c  */
#line 1717 "yacc.y"
    { l.a("semicolon",0,1);}
    break;

  case 601:
/* Line 1792 of yacc.c  */
#line 1720 "yacc.y"
    {l.a("in",0);}
    break;

  case 602:
/* Line 1792 of yacc.c  */
#line 1721 "yacc.y"
    {l.a("in",0,1);}
    break;


/* Line 1792 of yacc.c  */
#line 6929 "yacc.tab.cpp"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 1726 "yacc.y"


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




