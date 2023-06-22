/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     TYPE_IDENTIFIER = 259,
     FLOAT_CONSTANT = 260,
     INTEGER_CONSTANT = 261,
     CHARACTER_CONSTANT = 262,
     STRING_LITERAL = 263,
     PLUS = 264,
     MINUS = 265,
     PLUSPLUS = 266,
     MINUSMINUS = 267,
     BAR = 268,
     AMP = 269,
     BARBAR = 270,
     AMPAMP = 271,
     ARROW = 272,
     SEMICOLON = 273,
     LSS = 274,
     GTR = 275,
     LEQ = 276,
     GEQ = 277,
     EQL = 278,
     NEQ = 279,
     DOTDOTDOT = 280,
     LP = 281,
     RP = 282,
     LB = 283,
     RB = 284,
     LR = 285,
     RR = 286,
     PERIOD = 287,
     COMMA = 288,
     EXCL = 289,
     STAR = 290,
     SLASH = 291,
     PERCENT = 292,
     ASSIGN = 293,
     COLON = 294,
     AUTO_SYM = 295,
     STATIC_SYM = 296,
     TYPEDEF_SYM = 297,
     STRUCT_SYM = 298,
     ENUM_SYM = 299,
     SIZEOF_SYM = 300,
     UNION_SYM = 301,
     IF_SYM = 302,
     ELSE_SYM = 303,
     WHILE_SYM = 304,
     DO_SYM = 305,
     FOR_SYM = 306,
     CONTINUE_SYM = 307,
     BREAK_SYM = 308,
     RETURN_SYM = 309,
     SWITCH_SYM = 310,
     CASE_SYM = 311,
     DEFAULT_SYM = 312
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define FLOAT_CONSTANT 260
#define INTEGER_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define STRING_LITERAL 263
#define PLUS 264
#define MINUS 265
#define PLUSPLUS 266
#define MINUSMINUS 267
#define BAR 268
#define AMP 269
#define BARBAR 270
#define AMPAMP 271
#define ARROW 272
#define SEMICOLON 273
#define LSS 274
#define GTR 275
#define LEQ 276
#define GEQ 277
#define EQL 278
#define NEQ 279
#define DOTDOTDOT 280
#define LP 281
#define RP 282
#define LB 283
#define RB 284
#define LR 285
#define RR 286
#define PERIOD 287
#define COMMA 288
#define EXCL 289
#define STAR 290
#define SLASH 291
#define PERCENT 292
#define ASSIGN 293
#define COLON 294
#define AUTO_SYM 295
#define STATIC_SYM 296
#define TYPEDEF_SYM 297
#define STRUCT_SYM 298
#define ENUM_SYM 299
#define SIZEOF_SYM 300
#define UNION_SYM 301
#define IF_SYM 302
#define ELSE_SYM 303
#define WHILE_SYM 304
#define DO_SYM 305
#define FOR_SYM 306
#define CONTINUE_SYM 307
#define BREAK_SYM 308
#define RETURN_SYM 309
#define SWITCH_SYM 310
#define CASE_SYM 311
#define DEFAULT_SYM 312




/* Copy the first part of user declarations.  */
#line 1 "yacc.y"

     #include <stdio.h>
     #include <stdlib.h>
     int line_no = 1;
     int yyerror(char *s);
     int yylex();


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 228 "y.tab.c"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   503

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  154
/* YYNRULES -- Number of states.  */
#define YYNSTATES  274

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

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
      55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    18,    21,
      24,    28,    30,    32,    35,    38,    40,    42,    44,    46,
      50,    52,    56,    58,    60,    62,    68,    73,    76,    78,
      80,    82,    85,    89,    91,    95,    97,   103,   108,   111,
     113,   117,   119,   124,   127,   129,   131,   134,   136,   140,
     145,   150,   151,   153,   154,   156,   158,   162,   164,   168,
     171,   174,   176,   178,   180,   183,   187,   191,   195,   200,
     205,   207,   211,   213,   217,   219,   221,   223,   225,   227,
     229,   234,   238,   242,   247,   248,   251,   252,   255,   257,
     260,   266,   274,   280,   286,   294,   304,   305,   307,   311,
     314,   317,   319,   321,   323,   325,   327,   331,   333,   338,
     343,   347,   351,   354,   357,   358,   360,   362,   366,   368,
     371,   374,   377,   380,   383,   386,   389,   392,   397,   399,
     404,   406,   409,   411,   415,   419,   423,   425,   429,   433,
     435,   439,   443,   447,   451,   453,   457,   461,   463,   467,
     469,   473,   475,   479,   481
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    61,    -1,    60,    61,    -1,
      62,    -1,    63,    -1,    64,    78,    92,    -1,    78,    92,
      -1,    64,    18,    -1,    64,    66,    18,    -1,    68,    -1,
      65,    -1,    68,    64,    -1,    65,    64,    -1,    40,    -1,
      41,    -1,    42,    -1,    67,    -1,    66,    33,    67,    -1,
      78,    -1,    78,    38,    88,    -1,    69,    -1,    75,    -1,
       4,    -1,    70,     3,    30,    71,    31,    -1,    70,    30,
      71,    31,    -1,    70,     3,    -1,    43,    -1,    46,    -1,
      72,    -1,    71,    72,    -1,    68,    73,    18,    -1,    74,
      -1,    73,    33,    74,    -1,    78,    -1,    44,     3,    30,
      76,    31,    -1,    44,    30,    76,    31,    -1,    44,     3,
      -1,    77,    -1,    76,    33,    77,    -1,     3,    -1,     3,
      38,   114,    18,    -1,    79,    80,    -1,    80,    -1,    35,
      -1,    35,    79,    -1,     3,    -1,    26,    78,    27,    -1,
      80,    28,    81,    29,    -1,    80,    26,    82,    27,    -1,
      -1,   114,    -1,    -1,    83,    -1,    84,    -1,    84,    33,
      25,    -1,    85,    -1,    84,    33,    85,    -1,    64,    78,
      -1,    64,    86,    -1,    64,    -1,    79,    -1,    87,    -1,
      79,    87,    -1,    26,    86,    27,    -1,    28,    81,    29,
      -1,    26,    82,    27,    -1,    87,    28,    81,    29,    -1,
      87,    26,    82,    27,    -1,   114,    -1,    30,    89,    31,
      -1,    88,    -1,    89,    33,    88,    -1,    91,    -1,    92,
      -1,    95,    -1,    96,    -1,    97,    -1,    99,    -1,    56,
     114,    39,    90,    -1,    57,    39,    90,    -1,     3,    39,
      90,    -1,    30,    93,    94,    31,    -1,    -1,    93,    63,
      -1,    -1,    94,    90,    -1,    18,    -1,   115,    18,    -1,
      47,    26,   115,    27,    90,    -1,    47,    26,   115,    27,
      90,    48,    90,    -1,    55,    26,   115,    27,    90,    -1,
      49,    26,   115,    27,    90,    -1,    50,    90,    49,    26,
     115,    27,    18,    -1,    51,    26,    98,    18,    98,    18,
      98,    27,    90,    -1,    -1,   115,    -1,    54,    98,    18,
      -1,    52,    18,    -1,    53,    18,    -1,     3,    -1,     6,
      -1,     5,    -1,     7,    -1,     8,    -1,    26,   115,    27,
      -1,   100,    -1,   101,    28,   115,    29,    -1,   101,    26,
     102,    27,    -1,   101,    32,     3,    -1,   101,    17,     3,
      -1,   101,    11,    -1,   101,    12,    -1,    -1,   103,    -1,
     113,    -1,   103,    33,   113,    -1,   101,    -1,    11,   104,
      -1,    12,   104,    -1,    14,   105,    -1,    35,   105,    -1,
      34,   105,    -1,    10,   105,    -1,     9,   105,    -1,    45,
     104,    -1,    45,    26,   106,    27,    -1,   104,    -1,    26,
     106,    27,   105,    -1,    64,    -1,    64,    86,    -1,   105,
      -1,   107,    35,   105,    -1,   107,    36,   105,    -1,   107,
      37,   105,    -1,   107,    -1,   108,     9,   107,    -1,   108,
      10,   107,    -1,   108,    -1,   109,    19,   108,    -1,   109,
      20,   108,    -1,   109,    21,   108,    -1,   109,    22,   108,
      -1,   109,    -1,   110,    23,   109,    -1,   110,    24,   109,
      -1,   110,    -1,   111,    16,   110,    -1,   111,    -1,   112,
      15,   111,    -1,   112,    -1,   104,    38,   113,    -1,   115,
      -1,   113,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    23,    23,    27,    28,    32,    33,    37,    38,    42,
      43,    47,    48,    49,    50,    54,    55,    56,    60,    61,
      65,    66,    70,    71,    72,    76,    77,    78,    82,    83,
      87,    88,    92,    96,    97,   101,   105,   106,   107,   111,
     112,   116,   117,   121,   122,   126,   127,   131,   132,   133,
     134,   137,   139,   142,   144,   148,   149,   153,   154,   158,
     159,   160,   164,   165,   166,   170,   171,   172,   173,   174,
     178,   179,   183,   184,   188,   189,   190,   191,   192,   193,
     197,   198,   199,   203,   206,   208,   211,   213,   217,   218,
     222,   223,   224,   228,   229,   230,   233,   235,   239,   240,
     241,   245,   246,   247,   248,   249,   250,   254,   255,   256,
     257,   258,   259,   260,   263,   265,   269,   270,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   287,   288,
     292,   293,   297,   298,   299,   300,   304,   305,   306,   310,
     311,   312,   313,   314,   318,   319,   320,   324,   325,   329,
     330,   334,   335,   339,   343
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPE_IDENTIFIER",
  "FLOAT_CONSTANT", "INTEGER_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "PLUS", "MINUS", "PLUSPLUS", "MINUSMINUS", "BAR",
  "AMP", "BARBAR", "AMPAMP", "ARROW", "SEMICOLON", "LSS", "GTR", "LEQ",
  "GEQ", "EQL", "NEQ", "DOTDOTDOT", "LP", "RP", "LB", "RB", "LR", "RR",
  "PERIOD", "COMMA", "EXCL", "STAR", "SLASH", "PERCENT", "ASSIGN", "COLON",
  "AUTO_SYM", "STATIC_SYM", "TYPEDEF_SYM", "STRUCT_SYM", "ENUM_SYM",
  "SIZEOF_SYM", "UNION_SYM", "IF_SYM", "ELSE_SYM", "WHILE_SYM", "DO_SYM",
  "FOR_SYM", "CONTINUE_SYM", "BREAK_SYM", "RETURN_SYM", "SWITCH_SYM",
  "CASE_SYM", "DEFAULT_SYM", "$accept", "program", "translate_unit",
  "external_declaration", "function_definition", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list", "init_declarator", "type_specifier",
  "struct_specifier", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "enum_specifier", "enumerator_list", "enumerator", "declarator",
  "pointer", "direct_declarator", "constant_expression_opt",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "expression_opt",
  "jump_statement", "primary_expression", "postfix_expression",
  "arg_expression_list_opt", "arg_expression_list", "unary_expression",
  "cast_expression", "type_name", "multiplicative_expression",
  "additive_expression", "relational_expression", "equality_expression",
  "logical_and_expression", "logical_or_expression",
  "assignment_expression", "constant_expression", "expression", 0
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
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    64,    64,    65,    65,    65,    66,    66,
      67,    67,    68,    68,    68,    69,    69,    69,    70,    70,
      71,    71,    72,    73,    73,    74,    75,    75,    75,    76,
      76,    77,    77,    78,    78,    79,    79,    80,    80,    80,
      80,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      85,    85,    86,    86,    86,    87,    87,    87,    87,    87,
      88,    88,    89,    89,    90,    90,    90,    90,    90,    90,
      91,    91,    91,    92,    93,    93,    94,    94,    95,    95,
      96,    96,    96,    97,    97,    97,    98,    98,    99,    99,
      99,   100,   100,   100,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   101,   102,   102,   103,   103,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   105,   105,
     106,   106,   107,   107,   107,   107,   108,   108,   108,   109,
     109,   109,   109,   109,   110,   110,   110,   111,   111,   112,
     112,   113,   113,   114,   115
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     2,
       3,     1,     1,     2,     2,     1,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     1,     3,     1,     5,     4,     2,     1,
       3,     1,     4,     2,     1,     1,     2,     1,     3,     4,
       4,     0,     1,     0,     1,     1,     3,     1,     3,     2,
       2,     1,     1,     1,     2,     3,     3,     3,     4,     4,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       4,     3,     3,     4,     0,     2,     0,     2,     1,     2,
       5,     7,     5,     5,     7,     9,     0,     1,     3,     2,
       2,     1,     1,     1,     1,     1,     3,     1,     4,     4,
       3,     3,     2,     2,     0,     1,     1,     3,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     4,     1,     4,
       1,     2,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    47,    24,     0,    45,    15,    16,    17,    28,     0,
      29,     0,     2,     3,     5,     6,     0,    12,    11,    22,
       0,    23,     0,     0,    44,     0,    46,    38,     0,     1,
       4,     9,     0,    18,    20,    14,    13,    27,     0,    84,
       8,    43,    53,    51,    48,     0,    41,     0,    39,    10,
       0,     0,     7,     0,     0,     0,    30,    86,    61,     0,
      54,    55,    57,   101,   103,   102,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,   118,
     128,   132,   136,   139,   144,   147,   149,   151,   154,    52,
     153,     0,     0,    37,     0,    19,    20,     0,    21,    70,
       0,     0,    33,    35,    26,    31,    85,     0,     0,    53,
      51,    59,    62,    60,    63,    50,     0,   128,   125,   124,
       0,   119,   120,   121,   130,     0,     0,   123,   122,     0,
     126,    49,   112,   113,     0,   114,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,     0,    40,    72,     0,    25,    32,     0,
     101,    88,    83,     0,     0,     0,     0,     0,     0,    96,
       0,     0,     0,    87,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,    64,    53,    51,    56,    58,    53,
      62,   131,     0,   106,     0,   111,     0,   115,   116,     0,
     110,   152,   133,   134,   135,   137,   138,   140,   141,   142,
     143,   145,   146,   148,   150,    42,    71,     0,    34,     0,
       0,     0,     0,    96,    99,   100,     0,    97,     0,     0,
       0,    89,    67,    65,    66,     0,     0,   129,   127,   109,
       0,   108,    73,    82,     0,     0,     0,     0,    98,     0,
       0,    81,    69,    68,   117,     0,     0,     0,    96,     0,
      80,    90,    93,     0,     0,    92,     0,     0,    96,    91,
      94,     0,     0,    95
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    15,    58,    17,    32,    33,
      18,    19,    20,    55,    56,   101,   102,    21,    47,    48,
      22,    23,    24,    77,   181,    60,    61,    62,   182,   114,
      98,   156,   173,   174,   175,    57,   108,   176,   177,   178,
     226,   179,    78,    79,   196,   197,    80,    81,   125,    82,
      83,    84,    85,    86,    87,    88,    89,   180
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -201
static const yytype_int16 yypact[] =
{
     162,  -201,  -201,    31,    34,  -201,  -201,  -201,  -201,    35,
    -201,    32,   162,  -201,  -201,  -201,    24,   177,   177,  -201,
      67,  -201,    49,    25,    19,    61,  -201,    62,   102,  -201,
    -201,  -201,    11,  -201,    60,  -201,  -201,    97,    29,  -201,
    -201,    19,   177,   404,  -201,   102,    23,    92,  -201,  -201,
      31,   391,  -201,    29,    31,    58,  -201,   177,    50,   121,
    -201,   134,  -201,  -201,  -201,  -201,  -201,  -201,   404,   404,
     445,   445,   404,   347,   404,   404,   458,   150,  -201,   181,
     138,  -201,   147,    26,   120,    17,   174,   176,  -201,  -201,
    -201,   114,   404,  -201,   102,  -201,   157,   391,  -201,  -201,
     265,    13,  -201,  -201,  -201,  -201,  -201,    24,   237,   109,
     404,  -201,   104,  -201,   161,  -201,   129,  -201,  -201,  -201,
     404,  -201,  -201,  -201,   103,   183,   184,  -201,  -201,   347,
    -201,  -201,  -201,  -201,   197,   404,   404,   209,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,  -201,   198,  -201,  -201,   163,  -201,  -201,    31,
     185,  -201,  -201,   196,   200,   292,   215,   232,   234,   404,
     227,   404,   221,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
     236,   235,   238,   241,   161,   177,   404,  -201,  -201,   334,
     173,  -201,   404,  -201,   239,  -201,   246,   228,  -201,   245,
    -201,  -201,  -201,  -201,  -201,   147,   147,    26,    26,    26,
      26,   120,   120,    17,   174,  -201,  -201,   391,  -201,   292,
     404,   404,   226,   404,  -201,  -201,   258,  -201,   404,   225,
     292,  -201,  -201,  -201,  -201,   250,   249,  -201,  -201,  -201,
     404,  -201,  -201,  -201,   252,   254,   257,   267,  -201,   278,
     292,  -201,  -201,  -201,  -201,   292,   292,   404,   404,   292,
    -201,   259,  -201,   285,   295,  -201,   292,   296,   404,  -201,
    -201,   288,   292,  -201
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -201,  -201,  -201,   304,  -201,   260,     7,  -201,  -201,   269,
     -16,  -201,  -201,   268,   -29,  -201,   164,  -201,   275,   230,
       2,    -3,   -17,   -90,   -39,  -201,  -201,   212,   -37,   -99,
     -93,  -201,  -156,  -201,    86,  -201,  -201,  -201,  -201,  -201,
    -200,  -201,  -201,  -201,  -201,  -201,    88,   -58,   201,   -28,
     112,   -30,   175,   178,  -201,  -123,   -49,   -43
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      90,    26,    99,    59,   155,    25,    41,    16,    90,   222,
     118,   119,   198,   184,   123,   201,   127,   128,    34,    16,
     183,   113,    54,   247,    35,    36,   105,     1,     1,    49,
     126,   158,    29,     2,     1,   142,   143,    54,    27,    54,
     148,   149,    31,   153,    50,    42,   159,    43,    99,    90,
       3,     3,    96,     1,    90,   112,   103,     3,   264,     4,
     111,    92,     2,   243,   107,    28,     4,    90,   271,     4,
      37,   105,     8,     9,   251,    10,   109,   126,   110,    39,
     124,   202,   203,   204,    54,     4,   126,   191,    44,   104,
      39,   184,    45,   199,   260,    41,   236,    38,    51,   261,
     262,     8,     9,   265,    10,    46,   112,     1,    40,    96,
     269,    25,     1,     2,   205,   206,   273,   254,   211,   212,
      52,   190,   229,    93,   242,    94,   227,    53,    90,   189,
     109,   110,   110,     2,   237,   109,   124,   110,     4,   144,
     145,   146,   147,    90,     4,   152,   235,    94,   115,     5,
       6,     7,     8,     9,   187,    10,   117,   117,   121,   122,
     117,   103,   117,   117,   130,     1,     2,   116,    99,     5,
       6,     7,     8,     9,    90,    10,   138,   244,   245,   131,
     227,     2,   139,   140,   141,   249,   190,   185,     3,   186,
     150,   151,   132,   133,   216,    51,   217,     4,   134,   189,
     195,   110,     5,     6,     7,     8,     9,   135,    10,   136,
     192,   193,   200,   137,   263,   227,   215,     5,     6,     7,
       8,     9,   220,    10,   219,   227,   221,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     160,   223,    64,    65,    66,    67,    68,    69,    70,    71,
     224,    72,   225,   228,   231,   161,   207,   208,   209,   210,
     230,   240,   232,    73,   250,   233,   238,    39,   162,     2,
     234,    74,    75,   239,   241,   246,   248,   252,   253,   255,
     117,   256,    76,   257,   163,   258,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   160,   157,    64,    65,    66,
      67,    68,    69,    70,    71,   259,    72,   266,     8,     9,
     161,    10,   267,   268,   270,   272,    30,   106,    73,    95,
      91,   100,    39,   218,   154,   213,    74,    75,   188,   214,
     194,     0,     0,     0,     0,     0,     0,    76,     2,   163,
       0,   164,   165,   166,   167,   168,   169,   170,   171,   172,
      63,     2,    64,    65,    66,    67,    68,    69,    70,    71,
     189,    72,   110,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,    73,     5,     6,     7,     8,     9,     0,
      10,    74,    75,     0,     0,     0,     0,     5,     6,     7,
       8,     9,    76,    10,    63,     0,    64,    65,    66,    67,
      68,    69,    70,    71,     0,    72,     0,    63,     0,    64,
      65,    66,    67,    68,    69,    70,    71,    73,    72,     0,
       0,    97,     0,     0,     0,    74,    75,     0,     0,     0,
      73,     0,     0,     0,     0,     0,    76,     0,    74,    75,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    76,
      64,    65,    66,    67,    68,    69,    70,    71,     0,    72,
       0,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,   120,    72,     0,     0,     0,     0,     0,     0,    74,
      75,     0,     0,     0,   129,     0,     0,     0,     0,     0,
      76,     0,    74,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76
};

static const yytype_int16 yycheck[] =
{
      43,     4,    51,    42,    97,     3,    23,     0,    51,   165,
      68,    69,   135,   112,    72,   138,    74,    75,    16,    12,
     110,    58,    38,   223,    17,    18,    55,     3,     3,    18,
      73,    18,     0,     4,     3,     9,    10,    53,     3,    55,
      23,    24,    18,    92,    33,    26,    33,    28,    97,    92,
      26,    26,    50,     3,    97,    58,    54,    26,   258,    35,
      58,    38,     4,   219,    57,    30,    35,   110,   268,    35,
       3,   100,    43,    44,   230,    46,    26,   120,    28,    30,
      73,   139,   140,   141,   100,    35,   129,   124,    27,    31,
      30,   190,    30,   136,   250,   112,   186,    30,    38,   255,
     256,    43,    44,   259,    46,     3,   109,     3,    22,   107,
     266,   109,     3,     4,   142,   143,   272,   240,   148,   149,
      34,   124,   171,    31,   217,    33,   169,    30,   171,    26,
      26,    28,    28,     4,   192,    26,   129,    28,    35,    19,
      20,    21,    22,   186,    35,    31,   185,    33,    27,    40,
      41,    42,    43,    44,    25,    46,    68,    69,    70,    71,
      72,   159,    74,    75,    76,     3,     4,    33,   217,    40,
      41,    42,    43,    44,   217,    46,    38,   220,   221,    29,
     223,     4,    35,    36,    37,   228,   189,    26,    26,    28,
      16,    15,    11,    12,    31,    38,    33,    35,    17,    26,
       3,    28,    40,    41,    42,    43,    44,    26,    46,    28,
      27,    27,     3,    32,   257,   258,    18,    40,    41,    42,
      43,    44,    26,    46,    39,   268,    26,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
       3,    26,     5,     6,     7,     8,     9,    10,    11,    12,
      18,    14,    18,    26,    18,    18,   144,   145,   146,   147,
      39,    33,    27,    26,    39,    27,    27,    30,    31,     4,
      29,    34,    35,    27,    29,    49,    18,    27,    29,    27,
     192,    27,    45,    26,    47,    18,    49,    50,    51,    52,
      53,    54,    55,    56,    57,     3,    31,     5,     6,     7,
       8,     9,    10,    11,    12,    27,    14,    48,    43,    44,
      18,    46,    27,    18,    18,    27,    12,    57,    26,    50,
      45,    53,    30,   159,    94,   150,    34,    35,   116,   151,
     129,    -1,    -1,    -1,    -1,    -1,    -1,    45,     4,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      26,    14,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    26,    40,    41,    42,    43,    44,    -1,
      46,    34,    35,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,     3,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    14,    -1,     3,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    26,    14,    -1,
      -1,    30,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    45,    -1,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    45,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    14,
      -1,     3,    -1,     5,     6,     7,     8,     9,    10,    11,
      12,    26,    14,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    26,    35,    40,    41,    42,    43,    44,
      46,    59,    60,    61,    62,    63,    64,    65,    68,    69,
      70,    75,    78,    79,    80,    78,    79,     3,    30,     0,
      61,    18,    66,    67,    78,    64,    64,     3,    30,    30,
      92,    80,    26,    28,    27,    30,     3,    76,    77,    18,
      33,    38,    92,    30,    68,    71,    72,    93,    64,    82,
      83,    84,    85,     3,     5,     6,     7,     8,     9,    10,
      11,    12,    14,    26,    34,    35,    45,    81,   100,   101,
     104,   105,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    76,    38,    31,    33,    67,    78,    30,    88,   114,
      71,    73,    74,    78,    31,    72,    63,    64,    94,    26,
      28,    78,    79,    86,    87,    27,    33,   104,   105,   105,
      26,   104,   104,   105,    64,   106,   115,   105,   105,    26,
     104,    29,    11,    12,    17,    26,    28,    32,    38,    35,
      36,    37,     9,    10,    19,    20,    21,    22,    23,    24,
      16,    15,    31,   114,    77,    88,    89,    31,    18,    33,
       3,    18,    31,    47,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    90,    91,    92,    95,    96,    97,    99,
     115,    82,    86,    81,    87,    26,    28,    25,    85,    26,
      79,    86,    27,    27,   106,     3,   102,   103,   113,   115,
       3,   113,   105,   105,   105,   107,   107,   108,   108,   108,
     108,   109,   109,   110,   111,    18,    31,    33,    74,    39,
      26,    26,    90,    26,    18,    18,    98,   115,    26,   114,
      39,    18,    27,    27,    29,    82,    81,   105,    27,    27,
      33,    29,    88,    90,   115,   115,    49,    98,    18,   115,
      39,    90,    27,    29,   113,    27,    27,    26,    18,    27,
      90,    90,    90,   115,    98,    90,    48,    27,    18,    90,
      18,    98,    27,    90
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

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

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
      
/* Line 1267 of yacc.c.  */
#line 1744 "y.tab.c"
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
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
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

  if (yyn == YYFINAL)
    YYACCEPT;

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


#line 346 "yacc.y"

extern char *yytext;

int yyerror(char *s) 
{
     printf("line %d: %s near %s \n", line_no, s, yytext);
     exit(1);
}

int main()
{
     yyparse();
     printf("검사 완료\n");
}

int yywrap()
{
     return(1);
}

