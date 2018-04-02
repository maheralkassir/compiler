/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 8 "yacc.y" /* yacc.c:339  */

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

	extern symbolParser* SPL;

	using namespace std;
	

	extern int yylex();
	extern int yyparse();
	extern FILE* yyin;
	extern Procedure* AST;

	Logger l("logs/parser.log");
	void yyerror(const char *);
		


#line 97 "yacc.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 39 "yacc.y" /* yacc.c:355  */

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

		bool known_type;
        
		}r;
	

#line 305 "yacc.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 322 "yacc.tab.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
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
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1004

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   397

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   126,   126,   127,   128,   129,   130,   131,   134,   135,
     141,   145,   150,   151,   155,   156,   160,   161,   162,   166,
     167,   171,   172,   173,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   188,   189,   192,   193,   196,   197,   200,
     201,   202,   205,   206,   209,   213,   217,   218,   221,   222,
     223,   226,   227,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   244,   247,   248,   249,   252,
     253,   256,   257,   260,   261,   264,   265,   268,   269,   272,
     275,   276,   279,   282,   285,   288,   291,   292,   295,   296,
     299,   300,   303,   306,   309,   312,   315,   318,   319,   320,
     321,   322,   325,   326,   327,   328,   331,   334,   337,   338,
     339,   340,   341,   342,   343,   351,   352,   353,   354,   355,
     356,   359,   360,   363,   364,   367,   368,   371,   372,   373,
     374,   377,   378,   379,   382,   383,   384,   387,   388,   389,
     390,   391,   392,   393,   396,   397,   398,   401,   402,   405,
     406,   409,   410,   413,   414,   417,   418,   421,   422,   425,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   441,   442,   445,   448,   452,   453,   454,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   472,   472,   473,   476,   477,   481,   482,   485,   488,
     491,   492,   493,   494,   497,   505,   510,   517,   521,   527,
     528,   529,   532,   535,   542,   548,   556,   565,   566,   567,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   581,   582,   583,   584,   585,   586,   587,   590,   591,
     594,   595,   598,   601,   604,   605,   608,   609,   612,   615,
     616,   619,   620,   623,   624,   625,   626,   629,   632,   633,
     634,   634,   634,   637,   638,   642,   647,   648,   651,   652,
     655,   656,   659,   660,   663,   666,   669,   670,   673,   676,
     677,   678,   679,   680,   683,   684,   687,   688,   691,   692,
     693,   694,   695,   696,   699,   700,   703,   704,   707,   708,
     711,   712,   713,   716,   717,   720,   721,   722,   725,   726,
     729,   732,   735,   738,   741,   744,   745,   749,   752,   753,
     756,   759,   760,   763,   764,   767,   768,   771,   772,   775,
     775,   779,   780,   784,   788,   795,   796,   800,   803,   804,
     807,   808,   811,   812,   815,   816,   819,   820,   823,   824,
     827,   828,   829,   830,   831,   843,   847,   854,   860,   868,
     869,   870,   871,   872,   873,   874,   875,   876,   877,   878,
     879,   880,   881,   892,   891,   897,   896,   905,   906,   909,
     910,   911,   923,   929,   938,   942,   943,   946,   947,   950,
     951,   952,   953,   954,   955,   956,   957,   958,   959,   962,
     967,   975,   980,   988,   993,   992,  1000,   999,  1006,  1005,
    1012,  1010,  1021,  1025,  1029,  1033,  1041,  1044,  1048,  1052,
    1061,  1062,  1074,  1079,  1086,  1091,  1098,  1106,  1116,  1127,
    1135,  1146,  1147,  1148,  1151,  1162,  1168,  1169,  1172,  1173,
    1176,  1177,  1180,  1186,  1192,  1193,  1196,  1197,  1203,  1204,
    1207,  1213,  1219,  1225,  1227,  1230,  1234,  1237,  1238,  1241,
    1242,  1245,  1246,  1247,  1248,  1249,  1250,  1251,  1252,  1253,
    1254,  1255,  1256,  1257,  1258,  1259,  1260,  1261,  1262,  1263,
    1264,  1265,  1266,  1269,  1270,  1274,  1273,  1280,  1281,  1284,
    1285,  1301,  1304,  1305,  1308,  1309,  1314,  1317,  1318,  1321,
    1324,  1327,  1328,  1331,  1332,  1335,  1336,  1337,  1338,  1339,
    1340,  1341,  1342,  1344,  1349,  1350,  1353,  1354,  1357,  1358,
    1364,  1363,  1371,  1372,  1375,  1378,  1381,  1382,  1385,  1386,
    1389,  1390,  1391,  1392,  1396,  1402,  1410,  1411,  1417,  1414,
    1424,  1420,  1428,  1429,  1430,  1431,  1434,  1439,  1440,  1445,
    1448,  1449,  1452,  1455,  1456,  1459,  1460,  1463,  1464,  1467,
    1468,  1473,  1474,  1479,  1482,  1483,  1486,  1487,  1490,  1491,
    1494,  1497,  1498,  1499,  1500,  1501,  1502,  1503,  1504,  1505,
    1508,  1509,  1512,  1515,  1516,  1519,  1522,  1529,  1532,  1535,
    1538,  1541,  1544,  1552,  1553,  1556,  1557,  1560,  1561,  1564,
    1565,  1568,  1569
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
  "left_bracket_circle", "right_bracket_circle", "semicolon", "in", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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

#define YYPACT_NINF -819

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-819)))

#define YYTABLE_NINF -588

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 126 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_literal",1);}
#line 2710 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 127 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2716 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 128 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2722 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 129 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2728 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 130 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2734 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 131 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2740 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 134 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2746 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 135 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2752 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 141 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2758 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 145 "yacc.y" /* yacc.c:1646  */
    {l.a("type_name",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2764 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 150 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[0].r.known_type);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2770 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 151 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[0].r.known_type);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2776 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 155 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);(yyval.r.known_type) = true;(yyval.r.base) = (yyvsp[0].r.base);}
#line 2782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 156 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[0].r.base);}
#line 2788 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 160 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2794 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 161 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2800 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 162 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2806 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 166 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2812 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 167 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);(yyval.r.base) = new string("bool");}
#line 2818 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 171 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2824 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 172 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2830 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 173 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);(yyval.r.base) = new string("decimal");}
#line 2836 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 177 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("sbyte");}
#line 2842 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 178 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("byte");}
#line 2848 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 179 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("short");}
#line 2854 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 180 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("ushort");}
#line 2860 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 181 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("int");}
#line 2866 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 182 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("uint");}
#line 2872 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 183 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("long");}
#line 2878 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 184 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("ulong");}
#line 2884 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 185 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("char");}
#line 2890 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 188 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);(yyval.r.base) = new string("float");}
#line 2896 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 189 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);(yyval.r.base) = new string("double");}
#line 2902 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 192 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);(yyval.r.base) = new string("object");}
#line 2908 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 193 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);(yyval.r.base) = new string("string");}
#line 2914 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 196 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2920 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 197 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2926 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 200 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = (yyvsp[-1].r.known_type);(yyval.r.base) = (yyvsp[-1].r.base);}
#line 2932 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 201 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = true;(yyval.r.base) = new string("");}
#line 2938 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 202 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[-1].r.base);}
#line 2944 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 205 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2950 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 206 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 2956 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 209 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 2962 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 213 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 2968 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 217 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 2974 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 218 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 2980 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 221 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 222 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 223 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 226 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 3004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 227 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 3010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 230 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 231 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3022 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 232 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3028 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 233 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3034 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 234 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3040 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 235 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3046 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 236 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3052 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 237 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3058 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 238 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3064 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 239 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3070 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 240 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3076 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 241 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3082 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 244 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 3088 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 247 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3094 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 248 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3100 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 249 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3106 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 252 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3112 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 253 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3118 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 256 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 3124 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 257 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 3130 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 260 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3136 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 261 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3142 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 264 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 3148 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 265 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 3154 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 268 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3160 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 269 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3166 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 272 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3172 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 275 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3178 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 276 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3184 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 279 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3190 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 282 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3196 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 285 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3202 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 288 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3208 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 291 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3214 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 292 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3220 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 295 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3226 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 296 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3232 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 299 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3238 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 300 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3244 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 303 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3250 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 306 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3256 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 309 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3262 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 312 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3268 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 315 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3274 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 318 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3280 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 319 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3286 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 320 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3292 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 321 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3298 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 322 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3304 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 325 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3310 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 326 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3316 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 327 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3322 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 328 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3328 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 331 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3334 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 334 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3340 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 337 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3346 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 338 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3352 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 339 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3358 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 340 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3364 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 341 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3370 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 342 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3376 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 343 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3382 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 351 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3388 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 352 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3394 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 353 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3400 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 354 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3406 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 355 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3412 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 356 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3418 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 359 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3424 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 360 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3430 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 363 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3436 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 364 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3442 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 367 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3448 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 368 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3454 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 372 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3460 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 373 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3466 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 374 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3472 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 377 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3478 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 378 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3484 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 379 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3490 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 382 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3496 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 383 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3502 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 384 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3508 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 387 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3514 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 388 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3520 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 389 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3526 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 390 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3532 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 391 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3538 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 392 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3544 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 393 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3550 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 396 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3556 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 397 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3562 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 398 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3568 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 401 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3574 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 402 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3580 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 405 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3586 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 406 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3592 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 409 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3598 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 410 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3604 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 413 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3610 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 414 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3616 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 417 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3622 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3628 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 421 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3634 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 422 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3640 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 425 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3646 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 428 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3652 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 429 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3658 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 430 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3664 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 431 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3670 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 432 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3676 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 433 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3682 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 434 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3688 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 435 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3694 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 436 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3700 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 437 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3706 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 438 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3712 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 441 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3718 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 442 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3724 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 445 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3730 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 448 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3736 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 452 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3742 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 453 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3748 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 454 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3754 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 457 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3760 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 458 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3766 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 459 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3772 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 460 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3778 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 461 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3784 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 462 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3790 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 463 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3796 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 464 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3802 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 465 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3808 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 466 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3814 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 467 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3820 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 468 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3826 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 469 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3832 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 472 "yacc.y" /* yacc.c:1646  */
    { SPL->add_scope(); }
#line 3838 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 472 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);  SPL->endScope();}
#line 3844 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 473 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1,1);}
#line 3850 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 476 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3856 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 477 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3862 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 481 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3868 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 482 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3874 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 485 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3880 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 488 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3886 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 491 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3892 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 492 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3898 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 493 "yacc.y" /* yacc.c:1646  */
    { l.a("declaration_statement",1,1);}
#line 3904 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 494 "yacc.y" /* yacc.c:1646  */
    { l.a("declaration_statement",1,1);}
#line 3910 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 498 "yacc.y" /* yacc.c:1646  */
    {
		l.a("local_variable_declaration",2);

		SPL->addLocalVariable(*(yyvsp[-1].r.base),*(yyvsp[0].r.identifiers),(yyvsp[-1].r.known_type),false,(yyvsp[0].r.line_no),(yyvsp[0].r.col_no)) ;
	}
#line 3920 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 506 "yacc.y" /* yacc.c:1646  */
    {	 l.a("variable_declarators",1); 
				 (yyval.r.identifiers) = new queue<string>();
				 (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
		   }
#line 3929 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 511 "yacc.y" /* yacc.c:1646  */
    {      l.a("variable_declarators",2);
				  (yyval.r.identifiers) = (yyvsp[-2].r.identifiers);
				  (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
		   }
#line 3938 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 518 "yacc.y" /* yacc.c:1646  */
    {		 l.a("variable_declarator",0); 
				 (yyval.r.identifier) = new string ((yyvsp[0].r.str)) ; 
		  }
#line 3946 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 522 "yacc.y" /* yacc.c:1646  */
    {		l.a("variable_declarator",1); 
					(yyval.r.identifier) = new string ((yyvsp[-2].r.str));
		   }
#line 3954 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 527 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3960 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 528 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3966 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 529 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3972 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 532 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 3978 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 536 "yacc.y" /* yacc.c:1646  */
    {
		l.a("local_constant_declaration",2);
		SPL->addLocalVariable(*(yyvsp[-1].r.base),*(yyvsp[0].r.identifiers),(yyvsp[-1].r.known_type),true,(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no)) ;
  }
#line 3987 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 543 "yacc.y" /* yacc.c:1646  */
    {
		l.a("constant_declarators",1);
  		(yyval.r.identifiers) = new queue<string>();
		(yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
  }
#line 3997 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 549 "yacc.y" /* yacc.c:1646  */
    {
		l.a("constant_declarators",2);
	  	(yyval.r.identifiers) = (yyvsp[-2].r.identifiers);
		(yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));	
  }
#line 4007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 556 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);(yyval.r.identifier) = new string((yyvsp[-2].r.str));}
#line 4013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 565 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4019 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 566 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4025 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 567 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4031 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 568 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4037 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 569 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4043 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 570 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4049 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 571 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4055 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 572 "yacc.y" /* yacc.c:1646  */
    { l.a("expression_statement",1,1);}
#line 4061 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 573 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4067 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 574 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4073 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 575 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4079 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 576 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4085 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 577 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4091 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 578 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4097 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 581 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4103 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 582 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4109 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 583 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4115 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 584 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4121 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 585 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4127 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 586 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4133 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 587 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4139 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 590 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4145 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 591 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4151 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 594 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 4157 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 595 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 4163 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 598 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 4169 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 601 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 4175 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 604 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 4181 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 605 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 4187 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 608 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 4193 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 609 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 4199 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 612 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 4205 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 615 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 4211 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 616 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 4217 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 619 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 4223 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 620 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 4229 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 623 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4235 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 624 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4241 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 625 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4247 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 626 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4253 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 629 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4259 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 632 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4265 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 633 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4271 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 634 "yacc.y" /* yacc.c:1646  */
    {yyclearin;}
#line 4277 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 634 "yacc.y" /* yacc.c:1646  */
    {  }
#line 4283 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 634 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4289 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 637 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4295 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 638 "yacc.y" /* yacc.c:1646  */
    { l.a("do_statement",2,1);}
#line 4301 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 642 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",8);}
#line 4307 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 647 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4313 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 648 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4319 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 651 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4325 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 652 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4331 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 655 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4337 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 656 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4343 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 659 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4349 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 660 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4355 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 663 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4361 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 666 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4367 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 669 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4373 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 670 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4379 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 673 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",7);}
#line 4385 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 676 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4391 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 677 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4397 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 678 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4403 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 679 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4409 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 680 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4415 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 683 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4421 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 684 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0,1);}
#line 4427 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 687 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4433 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 688 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0,1);}
#line 4439 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 691 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4445 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 692 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4451 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 693 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4457 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 694 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4463 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 695 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1,1);}
#line 4469 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 696 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4475 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 699 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4481 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 700 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1,1);}
#line 4487 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 703 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4493 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 704 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4499 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 707 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4505 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 708 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4511 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 711 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4517 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 712 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4523 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 713 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4529 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 716 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4535 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 717 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4541 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 720 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4547 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 721 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4553 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 725 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4559 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 726 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4565 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 729 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4571 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 732 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4577 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 735 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4583 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 738 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4589 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 741 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4595 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 744 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4601 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 745 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4607 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 749 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4613 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 752 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4619 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 753 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4625 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 756 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4631 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 759 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4637 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 760 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4643 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 763 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4649 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 764 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4655 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 767 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4661 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 768 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4667 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 771 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4673 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 772 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4679 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 775 "yacc.y" /* yacc.c:1646  */
    {SPL->addNamespace(*(yyvsp[0].r.base),(yyvsp[0].r.line_no),(yyvsp[0].r.col_no));}
#line 4685 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 776 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);SPL->endScope();}
#line 4691 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 779 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4697 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 780 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4703 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 785 "yacc.y" /* yacc.c:1646  */
    {		l.a("qualified_identifier",0);
				(yyval.r.base) = new string((yyvsp[0].r.str));
		  }
#line 4711 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 789 "yacc.y" /* yacc.c:1646  */
    {	l.a("qualified_identifier",1);
			(yyval.r.base) = new string(string(*(yyvsp[-1].r.base)) + string((yyvsp[0].r.str)));
		}
#line 4719 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 795 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);(yyval.r.base) = new string(string((yyvsp[-1].r.str)) + ".");}
#line 4725 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 796 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);(yyval.r.base) = new string(*(yyvsp[-2].r.base) + string((yyvsp[-1].r.str)) + ".");}
#line 4731 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 800 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 803 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4743 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 804 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 807 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4755 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 808 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4761 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 811 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4767 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 812 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1,1);}
#line 4773 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 815 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);  SPL->add_using(*(yyvsp[-1].r.base),(yyvsp[-2].r.line_no),(yyvsp[-2].r.col_no));}
#line 4779 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 816 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1,1);SPL->add_using(*(yyvsp[-1].r.base),(yyvsp[-2].r.line_no),(yyvsp[-2].r.col_no));}
#line 4785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 819 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 820 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 823 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 824 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 827 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 828 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 829 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 830 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 831 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 843 "yacc.y" /* yacc.c:1646  */
    {		
		l.a("modifiers_opt",0);
		(yyval.r.modifiers) = new queue<string>();
  }
#line 4848 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 848 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers_opt",1);
		(yyval.r.modifiers) = (yyvsp[0].r.modifiers);
  }
#line 4857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 855 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers",1);
		(yyval.r.modifiers) = new queue<string>();
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4867 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 861 "yacc.y" /* yacc.c:1646  */
    {
		l.a("modifiers",2);
		(yyval.r.modifiers) = (yyvsp[-1].r.modifiers);
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4877 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 868 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("ABSTRACT"); }
#line 4883 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 869 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("EXTERN");	  }
#line 4889 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 870 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("INTERNAL"); }
#line 4895 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 871 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("NEW");      }
#line 4901 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 872 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("OVERRIDE"); }
#line 4907 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 873 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PRIVATE");  }
#line 4913 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 874 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PROTECTED");}
#line 4919 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 875 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PUBLIC");   }
#line 4925 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 876 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("READONLY"); }
#line 4931 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 877 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("SEALED");   }
#line 4937 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 878 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("STATIC");   }
#line 4943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 879 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("UNSAFE");   }
#line 4949 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 880 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VIRTUAL");  }
#line 4955 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 881 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VOLATILE"); }
#line 4961 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 892 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addClass(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));
  }
#line 4969 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 895 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",6);SPL->endScope();}
#line 4975 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 897 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addClass(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));
  }
#line 4983 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 900 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);SPL->endScope();}
#line 4989 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 905 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 4995 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 906 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5001 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 909 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = new queue<string>();(yyval.r.bases)->push(*(yyvsp[0].r.base));}
#line 5007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 910 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 912 "yacc.y" /* yacc.c:1646  */
    {
		l.a("class_base",2);(yyval.r.bases) = new queue<string>();
		(yyval.r.bases)->push(*(yyvsp[-2].r.base));
		while(!(yyvsp[0].r.bases)->empty())
		{
			(yyval.r.bases)->push((yyvsp[0].r.bases)->front());
			(yyvsp[0].r.bases)->pop();
		}
  }
#line 5027 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 924 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",1);
		(yyval.r.bases) = new queue<string>();
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 5037 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 930 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",2);
		(yyval.r.bases) = (yyvsp[-2].r.bases);
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 5047 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 938 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 5053 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 942 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 5059 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 943 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 5065 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 946 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 5071 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 947 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 5077 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 950 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5083 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 951 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5089 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 952 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5095 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 953 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5101 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 954 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5107 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 955 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5113 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 956 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5119 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 957 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5125 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 958 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5131 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 959 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5137 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 963 "yacc.y" /* yacc.c:1646  */
    {		
		         l.a("constant_declaration",4);
	          SPL->addFieldConst(*(yyvsp[-4].r.modifiers),string("CONST"),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
		  }
#line 5146 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 968 "yacc.y" /* yacc.c:1646  */
    {
		    l.a("constant_declaration",4,1);
         SPL->addFieldConst(*(yyvsp[-4].r.modifiers),string("CONST"),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));

		 }
#line 5156 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 976 "yacc.y" /* yacc.c:1646  */
    {
		        SPL->addField(*(yyvsp[-3].r.modifiers),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
  		      l.a("field_declaration",4);
	      }
#line 5165 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 981 "yacc.y" /* yacc.c:1646  */
    {
            l.a("field_declaration",4,1);
	          SPL->addField(*(yyvsp[-3].r.modifiers),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
        }
#line 5174 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 988 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2);SPL->check_function(); SPL->endScope();}
#line 5180 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 993 "yacc.y" /* yacc.c:1646  */
    {    l.a("method_header",5); 
          SPL->addMethod(*(yyvsp[-5].r.modifiers),*(yyvsp[-4].r.base),string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),(yyvsp[-4].r.known_type),1);
      }
#line 5188 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 1000 "yacc.y" /* yacc.c:1646  */
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[-5].r.modifiers),"VOID",string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),1,1);
      }
#line 5196 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 1006 "yacc.y" /* yacc.c:1646  */
    {    l.a("method_header",5); 
               SPL->addMethod(*(yyvsp[-5].r.modifiers),*(yyvsp[-4].r.base),string(*(yyvsp[-3].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),(yyvsp[-4].r.known_type),1);
         }
#line 5204 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 1012 "yacc.y" /* yacc.c:1646  */
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[-5].r.modifiers),"VOID",string(*(yyvsp[-3].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),1,1);
         }
#line 5212 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 1022 "yacc.y" /* yacc.c:1646  */
    {    l.a("method_header",5); 
          SPL->addMethod(*(yyvsp[-6].r.modifiers),*(yyvsp[-5].r.base),string(*(yyvsp[-4].r.base)),*(yyvsp[-2].r.types_ids),(yyvsp[-4].r.line_no),(yyvsp[-4].r.col_no),(yyvsp[-5].r.known_type),0);
      }
#line 5220 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 1026 "yacc.y" /* yacc.c:1646  */
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[-6].r.modifiers),"VOID",string(*(yyvsp[-4].r.base)),*(yyvsp[-2].r.types_ids),(yyvsp[-4].r.line_no),(yyvsp[-4].r.col_no),1,0);
      }
#line 5228 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 1030 "yacc.y" /* yacc.c:1646  */
    {    l.a("method_header",5); 
               SPL->addMethod(*(yyvsp[-6].r.modifiers),*(yyvsp[-5].r.base),string(*(yyvsp[-4].r.base)),queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>(),(yyvsp[-4].r.line_no),(yyvsp[-4].r.col_no),(yyvsp[-5].r.known_type),0);
         }
#line 5236 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 1034 "yacc.y" /* yacc.c:1646  */
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[-6].r.modifiers),"VOID",string(*(yyvsp[-4].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[-4].r.line_no),(yyvsp[-4].r.col_no),1,0);
         }
#line 5244 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 1041 "yacc.y" /* yacc.c:1646  */
    {	   l.a("formal_parameter_list_opt",0);
               (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
        }
#line 5252 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 1045 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[0].r.types_ids) ;
        }
#line 5260 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 1049 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[0].r.types_ids) ;
        }
#line 5268 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 1053 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",2);
            //merge queues
            (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >();
            while(!((yyvsp[-2].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[-2].r.types_ids))->front()); ((yyvsp[-2].r.types_ids))->pop();}
            while(!((yyvsp[0].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[0].r.types_ids))->front()); ((yyvsp[0].r.types_ids))->pop();}
        }
#line 5279 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 1061 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5285 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 1062 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 5291 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 1075 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type)));
      }
#line 5300 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 1080 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list",2);
      		(yyval.r.types_ids) = (yyvsp[-2].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type))); 
      }
#line 5309 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 1087 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_default_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type)));
      }
#line 5318 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 1092 "yacc.y" /* yacc.c:1646  */
    {  l.a("formal_parameter_default_list",2);
          (yyval.r.types_ids) = (yyvsp[-2].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type))); 
       }
#line 5327 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 1099 "yacc.y" /* yacc.c:1646  */
    {	l.a("formal_parameter",1); 
        (yyval.r.base) = (yyvsp[0].r.base) ;
        (yyval.r.identifier) = (yyvsp[0].r.identifier);
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[0].r.known_type);
      }
#line 5339 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 1107 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter",1);
        (yyval.r.base) = (yyvsp[0].r.base);
        (yyval.r.identifier) = (yyvsp[0].r.identifier);
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[0].r.known_type);
      }
#line 5351 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 1117 "yacc.y" /* yacc.c:1646  */
    { l.a("fixed_parameter",3);
        (yyval.r.base) = (yyvsp[-1].r.base);
        (yyval.r.identifier) = new string ((yyvsp[0].r.str));  
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no); 
        (yyval.r.known_type) = (yyvsp[-1].r.known_type);
      }
#line 5363 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 1128 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[-2].r.base) ;
        (yyval.r.identifier) = (yyvsp[-2].r.identifier);
        (yyval.r.line_no) = (yyvsp[-2].r.line_no);
        (yyval.r.col_no) = (yyvsp[-2].r.col_no);
        (yyval.r.known_type) = (yyvsp[-2].r.known_type);
      }
#line 5375 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 1136 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[-2].r.base);
        (yyval.r.identifier) = (yyvsp[-2].r.identifier);
        (yyval.r.line_no) = (yyvsp[-2].r.line_no);
        (yyval.r.col_no) = (yyvsp[-2].r.col_no);
        (yyval.r.known_type) = (yyvsp[-2].r.known_type);
      }
#line 5387 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 1146 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5393 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 1147 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5399 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 1148 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5405 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 1152 "yacc.y" /* yacc.c:1646  */
    { l.a("parameter_array",2);
        (yyval.r.base) = (yyvsp[-1].r.base);
        (yyval.r.identifier) = new string ((yyvsp[0].r.str));
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[-1].r.known_type);
      }
#line 5417 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 1165 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5423 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 1168 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5429 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 1169 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5435 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 1172 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5441 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 1173 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5447 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 1176 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5453 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 1177 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5459 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 1183 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5465 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 1189 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5471 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 1192 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5477 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 1193 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5483 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 1196 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5489 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 1200 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5495 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 1203 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5501 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 1204 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5507 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 1210 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5513 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 1216 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5519 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 1222 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5525 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 1225 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5531 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 1227 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5537 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 1230 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5543 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 1234 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5549 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 1237 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5555 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 1238 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5561 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 1241 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5567 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 1242 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5573 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 1245 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5579 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 1246 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5585 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 1247 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5591 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 1248 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5597 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1249 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5603 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1250 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5609 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1251 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5615 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1252 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5621 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1253 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5627 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1254 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5633 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1255 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5639 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1256 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5645 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1257 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5651 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1258 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5657 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1259 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5663 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1260 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5669 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1261 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5675 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1262 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5681 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1263 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5687 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1264 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5693 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1265 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5699 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1266 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5705 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1269 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5711 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1270 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5717 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1274 "yacc.y" /* yacc.c:1646  */
    {
  SPL->addMethod(*(yyvsp[-4].r.modifiers),"",string((yyvsp[-3].r.str)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),1,1);
  }
#line 5725 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1277 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);SPL->endScope();}
#line 5731 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1280 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1281 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5743 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1284 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1285 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5755 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1301 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5761 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1304 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5767 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1305 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5773 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1308 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5779 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1309 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1314 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1317 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1318 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1321 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1324 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1327 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1328 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1331 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1332 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1335 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5845 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1336 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5851 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1337 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1338 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5863 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1339 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1340 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1341 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1342 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1344 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1349 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1350 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5905 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1353 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 5911 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1354 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 5917 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1357 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 5923 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1358 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 5929 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1364 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addInterface(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));		
  }
#line 5937 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1367 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);SPL->endScope();}
#line 5943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1371 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 5949 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1372 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5955 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1375 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5961 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1378 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 5967 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1381 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 5973 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1382 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 5979 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1385 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 5985 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1386 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 5991 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1389 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5997 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1390 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6003 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1391 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6009 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1392 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6015 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1397 "yacc.y" /* yacc.c:1646  */
    {
     l.a("interface_method_declaration",5);
	 SPL->addMethod(*(yyvsp[-6].r.modifiers),*(yyvsp[-5].r.base),string((yyvsp[-4].r.str)),*(yyvsp[-2].r.types_ids),(yyvsp[-4].r.line_no),(yyvsp[-4].r.col_no),(yyvsp[-5].r.known_type),0);
	 SPL->endScope();
    }
#line 6025 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1403 "yacc.y" /* yacc.c:1646  */
    {
	  l.a("interface_method_declaration",4);
	  SPL->addMethod(*(yyvsp[-6].r.modifiers),"VOID",string((yyvsp[-4].r.str)),*(yyvsp[-2].r.types_ids),(yyvsp[-4].r.line_no),(yyvsp[-4].r.col_no),1,0);
	  SPL->endScope();
    }
#line 6035 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1410 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0); (yyval.r.modifiers) = new queue<string>();}
#line 6041 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1411 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);(yyval.r.modifiers) = new queue<string>() ; (yyval.r.modifiers)->push("NEW");}
#line 6047 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1417 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 6053 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1417 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 6059 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1424 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 6065 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1424 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 6071 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1428 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 6077 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1429 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 6083 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1430 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 6089 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1431 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 6095 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1434 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 6101 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1439 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 6107 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1440 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 6113 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1445 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 6119 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1448 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 6125 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1449 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 6131 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1452 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 6137 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1455 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6143 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1456 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6149 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1459 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 6155 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1460 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 6161 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1463 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 6167 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1464 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 6173 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1467 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 6179 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 1468 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 6185 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 1473 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 6191 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 1474 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4,1);}
#line 6197 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 1479 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 6203 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 1482 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 6209 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 1483 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 6215 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 1486 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6221 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 1487 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6227 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 1490 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 6233 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 1491 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 6239 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 1494 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 6245 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 1497 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6251 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 1498 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6257 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 1499 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6263 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 1500 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6269 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 1501 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6275 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 1502 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6281 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 1503 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6287 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 578:
#line 1504 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6293 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 579:
#line 1505 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6299 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 580:
#line 1508 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 6305 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 581:
#line 1509 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 6311 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 582:
#line 1512 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 6317 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 583:
#line 1515 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 6323 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 584:
#line 1516 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 6329 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 585:
#line 1519 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 6335 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 586:
#line 1522 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 6341 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 587:
#line 1529 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 6347 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 588:
#line 1532 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 6353 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 589:
#line 1535 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 6359 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 590:
#line 1538 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 6365 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 591:
#line 1541 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 6371 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 592:
#line 1544 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 6377 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 593:
#line 1552 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0);}
#line 6383 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 594:
#line 1553 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0,1);yyclearin;}
#line 6389 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 595:
#line 1556 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0);}
#line 6395 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 596:
#line 1557 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0,1);yyclearin;}
#line 6401 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 597:
#line 1560 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0);}
#line 6407 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 598:
#line 1561 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0,1);yyclearin;}
#line 6413 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 599:
#line 1564 "yacc.y" /* yacc.c:1646  */
    { l.a("semicolon",0);}
#line 6419 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 600:
#line 1565 "yacc.y" /* yacc.c:1646  */
    { l.a("semicolon",0,1);}
#line 6425 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 601:
#line 1568 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0);}
#line 6431 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 602:
#line 1569 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0,1);}
#line 6437 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 6441 "yacc.tab.cpp" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 1574 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




