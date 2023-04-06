/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 2
#define YYMINOR 0
#define YYPATCH 20230219

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#undef YYBTYACC
#define YYBTYACC 0
#define YYDEBUGSTR YYPREFIX "debug"
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "yacc.y"
     #include <stdio.h>
     #include <stdlib.h>
     int line_no = 1;
#line 28 "y.tab.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

#if !(defined(yylex) || defined(YYSTATE))
int YYLEX_DECL();
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define IDENTIFIER 257
#define TYPE_IDENTIFIER 258
#define FLOAT_CONSTANT 259
#define INTEGER_CONSTANT 260
#define CHARACTER_CONSTANT 261
#define STRING_LITERAL 262
#define PLUS 263
#define MINUS 264
#define PLUSPLUS 265
#define MINUSMINUS 266
#define BAR 267
#define AMP 268
#define BARBAR 269
#define AMPAMP 270
#define ARROW 271
#define SEMICOLON 272
#define LSS 273
#define GTR 274
#define LEQ 275
#define GEQ 276
#define EQL 277
#define NEQ 278
#define DOTDOTDOT 279
#define LP 280
#define RP 281
#define LB 282
#define RB 283
#define LR 284
#define RR 285
#define PERIOD 286
#define COMMA 287
#define EXCL 288
#define STAR 289
#define SLASH 290
#define PERCENT 291
#define ASSIGN 292
#define COLON 293
#define AUTO_SYM 294
#define STATIC_SYM 295
#define TYPEDEF_SYM 296
#define STRUCT_SYM 297
#define ENUM_SYM 298
#define SIZEOF_SYM 299
#define UNION_SYM 300
#define IF_SYM 301
#define ELSE_SYM 302
#define WHILE_SYM 303
#define DO_SYM 304
#define FOR_SYM 305
#define CONTINUE_SYM 306
#define BREAK_SYM 307
#define RETURN_SYM 308
#define SWITCH_SYM 309
#define CASE_SYM 310
#define DEFAULT_SYM 311
#define YYERRCODE 256
typedef int YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    2,    2,    3,    3,    4,    4,    5,
    5,    5,    5,   10,   10,   10,    8,    8,   11,   11,
    9,    9,    9,   13,   13,   13,   15,   15,   16,   16,
   17,   18,   18,   19,   14,   14,   14,   20,   20,   21,
   21,    6,    6,   23,   23,   24,   24,   24,   24,   25,
   25,   26,   26,   27,   27,   28,   28,   29,   29,   29,
   30,   30,   30,   31,   31,   31,   31,   31,   12,   12,
   32,   32,   33,   33,   33,   33,   33,   33,   34,   34,
   34,    7,   39,   39,   40,   40,   35,   35,   36,   36,
   36,   37,   37,   37,   42,   42,   38,   38,   38,   43,
   43,   43,   43,   43,   43,   44,   44,   44,   44,   44,
   44,   44,   45,   45,   46,   46,   48,   48,   48,   48,
   48,   48,   48,   48,   48,   48,   49,   49,   50,   50,
   51,   51,   51,   51,   52,   52,   52,   53,   53,   53,
   53,   53,   54,   54,   54,   55,   55,   56,   56,   47,
   47,   22,   41,
};
static const YYINT yylen[] = {                            2,
    1,    1,    2,    1,    1,    3,    2,    2,    3,    1,
    1,    2,    2,    1,    1,    1,    1,    3,    1,    3,
    1,    1,    1,    5,    4,    2,    1,    1,    1,    2,
    3,    1,    3,    1,    5,    4,    2,    1,    3,    1,
    4,    2,    1,    1,    2,    1,    3,    4,    4,    0,
    1,    0,    1,    1,    3,    1,    3,    2,    2,    1,
    1,    1,    2,    3,    3,    3,    4,    4,    1,    3,
    1,    3,    1,    1,    1,    1,    1,    1,    4,    3,
    3,    4,    0,    2,    0,    2,    1,    2,    5,    7,
    5,    5,    7,    9,    0,    1,    3,    2,    2,    1,
    1,    1,    1,    1,    3,    1,    4,    4,    3,    3,
    2,    2,    0,    1,    1,    3,    1,    2,    2,    2,
    2,    2,    2,    2,    2,    4,    1,    4,    1,    2,
    1,    3,    3,    3,    1,    3,    3,    1,    3,    3,
    3,    3,    1,    3,    3,    1,    3,    1,    3,    1,
    3,    1,    1,
};
static const YYINT yydefred[] = {                         0,
   46,   23,    0,    0,   14,   15,   16,   27,    0,   28,
    0,    0,    2,    4,    5,    0,    0,    0,    0,   21,
   22,    0,    0,    0,    0,   45,    0,    0,    3,    8,
    0,    0,   17,   83,    7,   12,   13,    0,    0,    0,
    0,    0,   47,    0,    0,    0,   38,    0,    6,    9,
    0,    0,    0,    0,    0,   29,    0,    0,   53,    0,
   56,  100,  102,  101,  103,  104,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   51,    0,  152,  106,    0,
  153,    0,  131,    0,    0,    0,    0,    0,    0,    0,
    0,   36,    0,    0,   20,   69,    0,   18,   84,    0,
    0,    0,   34,    0,   32,   25,   30,    0,    0,   58,
    0,   59,    0,   49,    0,  127,  124,  123,    0,  118,
  119,  120,    0,    0,    0,  122,  121,    0,  125,   48,
  111,  112,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   35,    0,   39,   71,    0,    0,   87,   82,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   74,   86,
   73,   75,   76,   77,   78,    0,   24,   31,    0,    0,
    0,    0,    0,    0,    0,   55,   57,    0,    0,  130,
  105,    0,    0,  110,    0,    0,  115,    0,  109,  151,
  132,  133,  134,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   41,   70,    0,    0,    0,    0,    0,
    0,   98,   99,   96,    0,    0,    0,    0,   88,   33,
   66,   64,   65,    0,    0,  128,  126,  108,    0,  107,
   72,   81,    0,    0,    0,    0,   97,    0,    0,   80,
   68,   67,  116,    0,    0,    0,    0,    0,   79,    0,
   92,    0,    0,   91,    0,    0,    0,   90,   93,    0,
    0,   94,
};
#if defined(YYDESTRUCT_CALL) || defined(YYSTYPE_TOSTRING)
static const YYINT yystos[] = {                           0,
  257,  258,  280,  289,  294,  295,  296,  297,  298,  300,
  313,  314,  315,  316,  317,  318,  319,  322,  323,  326,
  327,  328,  336,  337,  319,  336,  257,  284,  315,  272,
  319,  321,  324,  284,  320,  318,  318,  257,  284,  337,
  280,  282,  281,  284,  257,  333,  334,  292,  320,  272,
  287,  352,  284,  322,  329,  330,  318,  339,  340,  341,
  342,  257,  259,  260,  261,  262,  263,  264,  265,  266,
  268,  280,  288,  289,  299,  335,  338,  354,  356,  357,
  360,  361,  362,  364,  365,  366,  367,  368,  369,  333,
  292,  285,  287,  284,  325,  335,  319,  324,  317,  318,
  353,  329,  319,  331,  332,  285,  330,  280,  282,  319,
  336,  343,  344,  281,  287,  361,  362,  362,  280,  361,
  361,  362,  318,  354,  363,  362,  362,  280,  361,  283,
  265,  266,  271,  280,  282,  286,  292,  289,  290,  291,
  263,  264,  273,  274,  275,  276,  277,  278,  270,  269,
  285,  335,  334,  325,  345,  257,  272,  285,  301,  303,
  304,  305,  306,  307,  308,  309,  310,  311,  320,  346,
  347,  348,  349,  350,  351,  354,  285,  272,  287,  339,
  343,  338,  344,  280,  282,  279,  342,  280,  336,  343,
  281,  281,  363,  257,  358,  359,  360,  354,  257,  360,
  362,  362,  362,  364,  364,  365,  365,  365,  365,  366,
  366,  367,  368,  272,  285,  287,  293,  280,  280,  346,
  280,  272,  272,  354,  355,  280,  335,  293,  272,  332,
  281,  281,  283,  339,  338,  362,  281,  281,  287,  283,
  325,  346,  354,  354,  303,  355,  272,  354,  293,  346,
  281,  283,  360,  281,  281,  280,  272,  281,  346,  346,
  346,  354,  355,  346,  302,  281,  272,  346,  272,  355,
  281,  346,
};
#endif /* YYDESTRUCT_CALL || YYSTYPE_TOSTRING */
static const YYINT yydgoto[] = {                         11,
   12,   13,   14,   15,   57,   17,  169,   32,   18,   19,
   33,   95,   20,   21,   22,   55,   56,  104,  105,   46,
   47,   76,   23,   24,   77,  180,   59,   60,   61,  181,
  113,  155,  170,  171,  172,  173,  174,  175,   52,  101,
  176,  225,   79,   80,  195,  196,   81,   82,   83,  125,
   84,   85,   86,   87,   88,   89,
};
static const YYINT yysindex[] = {                       245,
    0,    0, -185, -257,    0,    0,    0,    0, -239,    0,
    0,  245,    0,    0,    0, -215, -221,  -87,  -87,    0,
    0, -229, -151, -253, -208,    0, -174, -120,    0,    0,
 -184, -252,    0,    0,    0,    0,    0, -169, -236, -253,
  -87,  308,    0, -120,  -65,  -84,    0,  267,    0,    0,
 -185,  -87, -236, -185, -164,    0, -214, -131,    0,  -85,
    0,    0,    0,    0,    0,    0,  308,  308,  321,  321,
  308,  152,  308,  308,  362,    0,  -78,    0,    0,   -2,
    0,  -31,    0, -108, -166,   43, -159,  -36,  -24,  -57,
  308,    0, -120,  267,    0,    0,  -10,    0,    0, -215,
  -68, -110,    0, -251,    0,    0,    0,  219,  308,    0,
 -243,    0,  -26,    0, -128,    0,    0,    0,  308,    0,
    0,    0, -211,  -11,   19,    0,    0,  152,    0,    0,
    0,    0,   55,  308,  308,   56,  308,  308,  308,  308,
  308,  308,  308,  308,  308,  308,  308,  308,  308,  308,
    0,   52,    0,    0,  -25,   22,    0,    0,   45,   53,
   97,   57,   63,   67,  308,   60,  308,   49,    0,    0,
    0,    0,    0,    0,    0,   83,    0,    0, -185,   86,
   87,   81,  -26,  -87,  308,    0,    0,  139,    5,    0,
    0,  308,   93,    0,   98,   79,    0,   99,    0,    0,
    0,    0,    0, -108, -108, -166, -166, -166, -166,   43,
   43, -159,  -36,    0,    0,  267,   97,  308,  308,   89,
  308,    0,    0,    0,  108,  308,   95,   97,    0,    0,
    0,    0,    0,  109,  111,    0,    0,    0,  308,    0,
    0,    0,  114,  141,  143,  153,    0,  145,   97,    0,
    0,    0,    0,   97,   97,  308,  308,   97,    0,  122,
    0,  146,  157,    0,   97,  166,  308,    0,    0,  161,
   97,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,  -58,    0,    0,    0,    0,    0,    0,
    0,  443,    0,    0,    0,    0,    0, -140,  357,    0,
    0,    0,    0,  319,    0,    0,  173,    0,    0,    0,
 -249,    0,    0,    0,    0,    0,    0,  200,    0,  672,
  163,  176,    0,    0,   24,    0,    0,    0,    0,    0,
    0,  -13,    0,    0,    0,    0, -178,    0,    0,  175,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  390,
    0,  421,    0,  452,  551,   -4,  658,  420,  265,    0,
    0,    0,    0,    0,    0,    0, -249,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  163,  176,    0,
 -142,    0, -101,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  180,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  182,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  527,    0,    0,    0,    0,
    0,    0,    0,    0,  192,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -55,  163,  176,    0,    0,  163,  184,    0,
    0,    0,    0,    0,    0, -131,    0,    0,    0,    0,
    0,    0,    0,  477,  502,  573,  595,  617,  639,   51,
  106,  665,  451,    0,    0,    0,    0,    0,    0,    0,
  192,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  192,    0,    0,   42,
    0,    0,    0,    0,    0,    0,  185,    0,    0,    0,
    0,    0,
};
#if YYBTYACC
static const YYINT yycindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,
};
#endif
static const YYINT yygindex[] = {                         0,
    0,  462,    0,  423,    7,   -1,   85,    0,  -22,    0,
  427,  -90,    0,    0,    0,  426,  -44,    0,  304,  440,
  392,  -43,   -3,  -15,  -93,  -38,    0,    0,  371,  -47,
  -98,    0, -127,    0,    0,    0,    0,    0,    0,    0,
  -42, -197,    0,    0,    0,    0, -125,   14,  -27,  360,
   77,  227,  110,  341,  342,    0,
};
#define YYTABLESIZE 964
static const YYINT yytable[] = {                         78,
   26,   25,   58,  154,   96,   78,   16,   40,  197,  112,
  107,  200,  183,    1,   31,  182,   54,   27,   16,   50,
  178,    2,   19,  246,   36,   37,   41,   38,   42,  124,
   54,    4,   54,  220,   51,  179,  108,   19,  109,  117,
  118,    1,    1,  122,   28,  126,  127,  152,   78,   97,
   96,   78,  103,  111,   39,  110,   30,  107,  100,  263,
    8,    9,   34,   10,    3,  108,   78,  109,  188,  270,
  109,    1,   43,    4,    4,  190,  124,    4,  123,   54,
  116,  116,  120,  121,  116,  124,  116,  116,  129,  242,
  183,  235,  198,    2,    3,   40,  141,  142,   97,   34,
  250,   35,   60,    4,  111,    1,   25,   48,   60,   44,
  201,  202,  203,  253,   53,   49,   10,  147,  148,  189,
  106,  259,  224,  227,   78,  241,  260,  261,    3,    2,
  264,   10,    8,    9,  123,   10,   45,  268,   61,   10,
   10,   10,   78,  272,   61,  234,   10,    2,   10,  114,
  186,  116,  116,  116,  116,  116,  116,  116,  116,  116,
  116,  116,  116,  116,  236,    5,    6,    7,    8,    9,
    2,   10,   96,   78,  177,  243,  244,  103,  224,   62,
  138,  139,  140,  248,  189,   62,    8,    9,  156,   10,
   63,   64,   65,   66,   67,   68,   69,   70,   44,   71,
   92,  115,   93,  157,  130,  116,    5,    6,    7,    8,
    9,   72,   10,  262,  224,   34,  158,  204,  205,   73,
   74,   44,   44,   44,  224,   63,   91,  151,   44,   93,
   75,   63,  159,  149,  160,  161,  162,  163,  164,  165,
  166,  167,  168,   85,  150,   85,   85,   85,   85,   85,
   85,   85,   85,  184,   85,  185,  210,  211,   85,  215,
  137,  216,  131,  132,  143,  143,   85,  143,  133,  191,
   85,   85,  143,  143,   85,   85,  143,  134,  143,  135,
  143,   48,  143,  136,  188,   85,  109,   85,  143,   85,
   85,   85,   85,   85,   85,   85,   85,   85,   89,  192,
   89,   89,   89,   89,   89,   89,   89,   89,   40,   89,
   40,  194,  199,   89,  217,  143,  144,  145,  146,  144,
  144,   89,  144,  214,  218,   89,   89,  144,  144,   89,
   89,  144,  219,  144,  222,  144,  221,  144,  223,  226,
   89,  228,   89,  144,   89,   89,   89,   89,   89,   89,
   89,   89,   89,  156,  229,   63,   64,   65,   66,   67,
   68,   69,   70,  233,   71,  239,  231,  232,  157,  206,
  207,  208,  209,  237,  145,  145,   72,  145,  238,  247,
   34,  240,  145,  145,   73,   74,  145,  249,  145,  251,
  145,  245,  145,  252,  254,   75,    2,  159,  145,  160,
  161,  162,  163,  164,  165,  166,  167,  168,   62,    2,
   63,   64,   65,   66,   67,   68,   69,   70,  188,   71,
  109,  255,  256,  265,  257,  258,  266,    4,  267,   37,
   37,   72,    5,    6,    7,    8,    9,  269,   10,   73,
   74,  271,    1,   52,   37,    5,    6,    7,    8,    9,
   75,   10,   37,   37,   37,   54,   26,   26,   50,   37,
  129,   37,  113,   95,   61,   95,   37,   37,   37,   37,
   37,   26,   37,   29,   99,    1,    2,   98,  102,   26,
   26,   26,  230,   90,  153,  187,   26,  193,   26,  212,
    0,  213,    0,   26,   26,   26,   26,   26,  108,   26,
  109,    1,    2,    0,    0,    0,    0,    4,    0,    0,
    0,    0,    5,    6,    7,    8,    9,    0,   10,    0,
    0,    0,    0,   62,    3,   63,   64,   65,   66,   67,
   68,   69,   70,    4,   71,    0,  150,    0,    5,    6,
    7,    8,    9,    0,   10,  150,   72,  150,    0,  150,
   94,  150,    0,    0,   73,   74,    0,  150,    0,    0,
    0,    0,    0,    0,   62,   75,   63,   64,   65,   66,
   67,   68,   69,   70,    0,   71,    0,   62,    0,   63,
   64,   65,   66,   67,   68,   69,   70,   72,   71,    0,
   43,    0,    0,    0,    0,   73,   74,    0,    0,   43,
  119,    0,   43,    0,    0,   43,   75,    0,   73,   74,
   43,    0,    0,   11,    0,    0,    0,    0,   62,   75,
   63,   64,   65,   66,   67,   68,   69,   70,   11,   71,
    0,    0,    0,    0,    0,    0,   11,   11,   11,    0,
    0,  128,    0,   11,    0,   11,    0,    0,    0,   73,
   74,    0,  117,  117,    0,    0,    0,    0,  117,  117,
   75,  117,  117,  117,  117,  117,  117,  117,    0,    0,
  117,    0,  117,    0,  117,    0,  117,    0,  117,  117,
  117,  117,  117,  127,  127,    0,    0,    0,  148,  127,
  127,  148,  127,  127,  127,  127,  127,  127,  127,    0,
  148,  127,  148,  127,  148,  127,  148,  127,    0,  127,
  127,  127,  148,  127,  135,  135,    0,    0,    0,  149,
  135,  135,  149,  135,  135,  135,  135,  135,  135,  135,
    0,  149,  135,  149,  135,  149,  135,  149,  135,  136,
  136,    0,    0,  149,  135,  136,  136,    0,  136,  136,
  136,  136,  136,  136,  136,    0,    0,  136,    0,  136,
    0,  136,    0,  136,  137,  137,    0,    0,    0,  136,
  137,  137,    0,  137,  137,  137,  137,  137,  137,  137,
    0,    0,  137,    0,  137,    0,  137,    0,  137,  100,
  100,  100,  100,    0,  137,  100,  100,  100,  100,  100,
  100,  100,  100,  100,  100,    0,  100,    0,  100,    0,
    0,    0,  100,    0,    0,  100,  100,  100,  100,  138,
  138,    0,  138,  138,  138,  138,  138,  138,  138,    0,
    0,  138,    0,  138,    0,  138,    0,  138,    0,    0,
    0,  139,  139,  138,  139,  139,  139,  139,  139,  139,
  139,    0,    0,  139,    0,  139,    0,  139,    0,  139,
    0,    0,    0,  140,  140,  139,  140,  140,  140,  140,
  140,  140,  140,    0,    0,  140,    0,  140,    0,  140,
    0,  140,    0,    0,    0,  141,  141,  140,  141,  141,
  141,  141,  141,  141,  141,    0,    0,  141,    0,  141,
    0,  141,    0,  141,    0,    0,    0,  142,  142,  141,
  142,  142,  142,  142,  142,  142,  142,    0,    0,  142,
    0,  142,    0,  142,    0,  142,  146,  146,    0,  146,
    0,  142,    0,  147,  147,    0,  147,    0,  146,    0,
  146,    0,  146,   42,  146,  147,    0,  147,    0,  147,
  146,  147,   42,    0,    0,   42,    0,  147,   42,    0,
    0,    0,    0,   42,
};
static const YYINT yycheck[] = {                         42,
    4,    3,   41,   94,   48,   48,    0,   23,  134,   57,
   55,  137,  111,  257,   16,  109,   39,  257,   12,  272,
  272,  258,  272,  221,   18,   19,  280,  257,  282,   72,
   53,  289,   55,  161,  287,  287,  280,  287,  282,   67,
   68,  257,  257,   71,  284,   73,   74,   91,   91,   51,
   94,   94,   54,   57,  284,   57,  272,  102,   52,  257,
  297,  298,  284,  300,  280,  280,  109,  282,  280,  267,
  282,  257,  281,  289,  289,  123,  119,  289,   72,  102,
   67,   68,   69,   70,   71,  128,   73,   74,   75,  217,
  189,  185,  135,  258,  280,  111,  263,  264,  100,  284,
  228,   17,  281,  289,  108,  257,  108,  292,  287,  284,
  138,  139,  140,  239,  284,   31,  257,  277,  278,  123,
  285,  249,  165,  167,  167,  216,  254,  255,  280,  258,
  258,  272,  297,  298,  128,  300,  257,  265,  281,  280,
  281,  282,  185,  271,  287,  184,  287,  258,  289,  281,
  279,  138,  139,  140,  141,  142,  143,  144,  145,  146,
  147,  148,  149,  150,  192,  294,  295,  296,  297,  298,
  258,  300,  216,  216,  285,  218,  219,  179,  221,  281,
  289,  290,  291,  226,  188,  287,  297,  298,  257,  300,
  259,  260,  261,  262,  263,  264,  265,  266,  257,  268,
  285,  287,  287,  272,  283,  192,  294,  295,  296,  297,
  298,  280,  300,  256,  257,  284,  285,  141,  142,  288,
  289,  280,  281,  282,  267,  281,  292,  285,  287,  287,
  299,  287,  301,  270,  303,  304,  305,  306,  307,  308,
  309,  310,  311,  257,  269,  259,  260,  261,  262,  263,
  264,  265,  266,  280,  268,  282,  147,  148,  272,  285,
  292,  287,  265,  266,  269,  270,  280,  272,  271,  281,
  284,  285,  277,  278,  288,  289,  281,  280,  283,  282,
  285,  292,  287,  286,  280,  299,  282,  301,  293,  303,
  304,  305,  306,  307,  308,  309,  310,  311,  257,  281,
  259,  260,  261,  262,  263,  264,  265,  266,  285,  268,
  287,  257,  257,  272,  293,  273,  274,  275,  276,  269,
  270,  280,  272,  272,  280,  284,  285,  277,  278,  288,
  289,  281,  280,  283,  272,  285,  280,  287,  272,  280,
  299,  293,  301,  293,  303,  304,  305,  306,  307,  308,
  309,  310,  311,  257,  272,  259,  260,  261,  262,  263,
  264,  265,  266,  283,  268,  287,  281,  281,  272,  143,
  144,  145,  146,  281,  269,  270,  280,  272,  281,  272,
  284,  283,  277,  278,  288,  289,  281,  293,  283,  281,
  285,  303,  287,  283,  281,  299,  258,  301,  293,  303,
  304,  305,  306,  307,  308,  309,  310,  311,  257,  258,
  259,  260,  261,  262,  263,  264,  265,  266,  280,  268,
  282,  281,  280,  302,  272,  281,  281,  289,  272,  257,
  258,  280,  294,  295,  296,  297,  298,  272,  300,  288,
  289,  281,    0,  281,  272,  294,  295,  296,  297,  298,
  299,  300,  280,  281,  282,  281,  257,  258,  283,  287,
  281,  289,  281,  272,  281,  281,  294,  295,  296,  297,
  298,  272,  300,   12,   52,  257,  258,   51,   53,  280,
  281,  282,  179,   44,   93,  115,  287,  128,  289,  149,
   -1,  150,   -1,  294,  295,  296,  297,  298,  280,  300,
  282,  257,  258,   -1,   -1,   -1,   -1,  289,   -1,   -1,
   -1,   -1,  294,  295,  296,  297,  298,   -1,  300,   -1,
   -1,   -1,   -1,  257,  280,  259,  260,  261,  262,  263,
  264,  265,  266,  289,  268,   -1,  272,   -1,  294,  295,
  296,  297,  298,   -1,  300,  281,  280,  283,   -1,  285,
  284,  287,   -1,   -1,  288,  289,   -1,  293,   -1,   -1,
   -1,   -1,   -1,   -1,  257,  299,  259,  260,  261,  262,
  263,  264,  265,  266,   -1,  268,   -1,  257,   -1,  259,
  260,  261,  262,  263,  264,  265,  266,  280,  268,   -1,
  272,   -1,   -1,   -1,   -1,  288,  289,   -1,   -1,  281,
  280,   -1,  284,   -1,   -1,  287,  299,   -1,  288,  289,
  292,   -1,   -1,  257,   -1,   -1,   -1,   -1,  257,  299,
  259,  260,  261,  262,  263,  264,  265,  266,  272,  268,
   -1,   -1,   -1,   -1,   -1,   -1,  280,  281,  282,   -1,
   -1,  280,   -1,  287,   -1,  289,   -1,   -1,   -1,  288,
  289,   -1,  263,  264,   -1,   -1,   -1,   -1,  269,  270,
  299,  272,  273,  274,  275,  276,  277,  278,   -1,   -1,
  281,   -1,  283,   -1,  285,   -1,  287,   -1,  289,  290,
  291,  292,  293,  263,  264,   -1,   -1,   -1,  269,  269,
  270,  272,  272,  273,  274,  275,  276,  277,  278,   -1,
  281,  281,  283,  283,  285,  285,  287,  287,   -1,  289,
  290,  291,  293,  293,  263,  264,   -1,   -1,   -1,  269,
  269,  270,  272,  272,  273,  274,  275,  276,  277,  278,
   -1,  281,  281,  283,  283,  285,  285,  287,  287,  263,
  264,   -1,   -1,  293,  293,  269,  270,   -1,  272,  273,
  274,  275,  276,  277,  278,   -1,   -1,  281,   -1,  283,
   -1,  285,   -1,  287,  263,  264,   -1,   -1,   -1,  293,
  269,  270,   -1,  272,  273,  274,  275,  276,  277,  278,
   -1,   -1,  281,   -1,  283,   -1,  285,   -1,  287,  263,
  264,  265,  266,   -1,  293,  269,  270,  271,  272,  273,
  274,  275,  276,  277,  278,   -1,  280,   -1,  282,   -1,
   -1,   -1,  286,   -1,   -1,  289,  290,  291,  292,  269,
  270,   -1,  272,  273,  274,  275,  276,  277,  278,   -1,
   -1,  281,   -1,  283,   -1,  285,   -1,  287,   -1,   -1,
   -1,  269,  270,  293,  272,  273,  274,  275,  276,  277,
  278,   -1,   -1,  281,   -1,  283,   -1,  285,   -1,  287,
   -1,   -1,   -1,  269,  270,  293,  272,  273,  274,  275,
  276,  277,  278,   -1,   -1,  281,   -1,  283,   -1,  285,
   -1,  287,   -1,   -1,   -1,  269,  270,  293,  272,  273,
  274,  275,  276,  277,  278,   -1,   -1,  281,   -1,  283,
   -1,  285,   -1,  287,   -1,   -1,   -1,  269,  270,  293,
  272,  273,  274,  275,  276,  277,  278,   -1,   -1,  281,
   -1,  283,   -1,  285,   -1,  287,  269,  270,   -1,  272,
   -1,  293,   -1,  269,  270,   -1,  272,   -1,  281,   -1,
  283,   -1,  285,  272,  287,  281,   -1,  283,   -1,  285,
  293,  287,  281,   -1,   -1,  284,   -1,  293,  287,   -1,
   -1,   -1,   -1,  292,
};
#if YYBTYACC
static const YYINT yyctable[] = {                        -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,
};
#endif
#define YYFINAL 11
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 311
#define YYUNDFTOKEN 370
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"$end",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"error","IDENTIFIER","TYPE_IDENTIFIER",
"FLOAT_CONSTANT","INTEGER_CONSTANT","CHARACTER_CONSTANT","STRING_LITERAL",
"PLUS","MINUS","PLUSPLUS","MINUSMINUS","BAR","AMP","BARBAR","AMPAMP","ARROW",
"SEMICOLON","LSS","GTR","LEQ","GEQ","EQL","NEQ","DOTDOTDOT","LP","RP","LB","RB",
"LR","RR","PERIOD","COMMA","EXCL","STAR","SLASH","PERCENT","ASSIGN","COLON",
"AUTO_SYM","STATIC_SYM","TYPEDEF_SYM","STRUCT_SYM","ENUM_SYM","SIZEOF_SYM",
"UNION_SYM","IF_SYM","ELSE_SYM","WHILE_SYM","DO_SYM","FOR_SYM","CONTINUE_SYM",
"BREAK_SYM","RETURN_SYM","SWITCH_SYM","CASE_SYM","DEFAULT_SYM","$accept",
"program","translate_unit","external_declaration","function_definition",
"declaration","declaration_specifiers","declarator","compound_statement",
"init_declarator_list","type_specifier","storage_class_specifier",
"init_declarator","initializer","struct_specifier","enum_specifier",
"struct_or_union","struct_declaration_list","struct_declaration",
"struct_declarator_list","struct_declarator","enumerator_list","enumerator",
"constant_expression","pointer","direct_declarator","constant_expression_opt",
"parameter_type_list_opt","parameter_type_list","parameter_list",
"parameter_declaration","abstract_declarator","direct_abstract_declarator",
"initializer_list","statement","labeled_statement","expression_statement",
"selection_statement","iteration_statement","jump_statement","declaration_list",
"statement_list","expression","expression_opt","primary_expression",
"postfix_expression","arg_expression_list_opt","arg_expression_list",
"assignment_expression","unary_expression","cast_expression","type_name",
"multiplicative_expression","additive_expression","relational_expression",
"equality_expression","logical_and_expression","logical_or_expression",
"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : translate_unit",
"translate_unit : external_declaration",
"translate_unit : translate_unit external_declaration",
"external_declaration : function_definition",
"external_declaration : declaration",
"function_definition : declaration_specifiers declarator compound_statement",
"function_definition : declarator compound_statement",
"declaration : declaration_specifiers SEMICOLON",
"declaration : declaration_specifiers init_declarator_list SEMICOLON",
"declaration_specifiers : type_specifier",
"declaration_specifiers : storage_class_specifier",
"declaration_specifiers : type_specifier declaration_specifiers",
"declaration_specifiers : storage_class_specifier declaration_specifiers",
"storage_class_specifier : AUTO_SYM",
"storage_class_specifier : STATIC_SYM",
"storage_class_specifier : TYPEDEF_SYM",
"init_declarator_list : init_declarator",
"init_declarator_list : init_declarator_list COMMA init_declarator",
"init_declarator : declarator",
"init_declarator : declarator ASSIGN initializer",
"type_specifier : struct_specifier",
"type_specifier : enum_specifier",
"type_specifier : TYPE_IDENTIFIER",
"struct_specifier : struct_or_union IDENTIFIER LR struct_declaration_list RR",
"struct_specifier : struct_or_union LR struct_declaration_list RR",
"struct_specifier : struct_or_union IDENTIFIER",
"struct_or_union : STRUCT_SYM",
"struct_or_union : UNION_SYM",
"struct_declaration_list : struct_declaration",
"struct_declaration_list : struct_declaration_list struct_declaration",
"struct_declaration : type_specifier struct_declarator_list SEMICOLON",
"struct_declarator_list : struct_declarator",
"struct_declarator_list : struct_declarator_list COMMA struct_declarator",
"struct_declarator : declarator",
"enum_specifier : ENUM_SYM IDENTIFIER LR enumerator_list RR",
"enum_specifier : ENUM_SYM LR enumerator_list RR",
"enum_specifier : ENUM_SYM IDENTIFIER",
"enumerator_list : enumerator",
"enumerator_list : enumerator_list COMMA enumerator",
"enumerator : IDENTIFIER",
"enumerator : IDENTIFIER ASSIGN constant_expression SEMICOLON",
"declarator : pointer direct_declarator",
"declarator : direct_declarator",
"pointer : STAR",
"pointer : STAR pointer",
"direct_declarator : IDENTIFIER",
"direct_declarator : LP declarator RP",
"direct_declarator : direct_declarator LB constant_expression_opt RB",
"direct_declarator : direct_declarator LP parameter_type_list_opt RP",
"constant_expression_opt :",
"constant_expression_opt : constant_expression",
"parameter_type_list_opt :",
"parameter_type_list_opt : parameter_type_list",
"parameter_type_list : parameter_list",
"parameter_type_list : parameter_list COMMA DOTDOTDOT",
"parameter_list : parameter_declaration",
"parameter_list : parameter_list COMMA parameter_declaration",
"parameter_declaration : declaration_specifiers declarator",
"parameter_declaration : declaration_specifiers abstract_declarator",
"parameter_declaration : declaration_specifiers",
"abstract_declarator : pointer",
"abstract_declarator : direct_abstract_declarator",
"abstract_declarator : pointer direct_abstract_declarator",
"direct_abstract_declarator : LP abstract_declarator RP",
"direct_abstract_declarator : LB constant_expression_opt RB",
"direct_abstract_declarator : LP parameter_type_list_opt RP",
"direct_abstract_declarator : direct_abstract_declarator LB constant_expression_opt RB",
"direct_abstract_declarator : direct_abstract_declarator LP parameter_type_list_opt RP",
"initializer : constant_expression",
"initializer : LR initializer_list RR",
"initializer_list : initializer",
"initializer_list : initializer_list COMMA initializer",
"statement : labeled_statement",
"statement : compound_statement",
"statement : expression_statement",
"statement : selection_statement",
"statement : iteration_statement",
"statement : jump_statement",
"labeled_statement : CASE_SYM constant_expression COLON statement",
"labeled_statement : DEFAULT_SYM COLON statement",
"labeled_statement : IDENTIFIER COLON statement",
"compound_statement : LR declaration_list statement_list RR",
"declaration_list :",
"declaration_list : declaration_list declaration",
"statement_list :",
"statement_list : statement_list statement",
"expression_statement : SEMICOLON",
"expression_statement : expression SEMICOLON",
"selection_statement : IF_SYM LP expression RP statement",
"selection_statement : IF_SYM LP expression RP statement ELSE_SYM statement",
"selection_statement : SWITCH_SYM LP expression RP statement",
"iteration_statement : WHILE_SYM LP expression RP statement",
"iteration_statement : DO_SYM statement WHILE_SYM LP expression RP SEMICOLON",
"iteration_statement : FOR_SYM LP expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RP statement",
"expression_opt :",
"expression_opt : expression",
"jump_statement : RETURN_SYM expression_opt SEMICOLON",
"jump_statement : CONTINUE_SYM SEMICOLON",
"jump_statement : BREAK_SYM SEMICOLON",
"primary_expression : IDENTIFIER",
"primary_expression : INTEGER_CONSTANT",
"primary_expression : FLOAT_CONSTANT",
"primary_expression : CHARACTER_CONSTANT",
"primary_expression : STRING_LITERAL",
"primary_expression : LP expression RP",
"postfix_expression : primary_expression",
"postfix_expression : postfix_expression LB expression RB",
"postfix_expression : postfix_expression LP arg_expression_list_opt RP",
"postfix_expression : postfix_expression PERIOD IDENTIFIER",
"postfix_expression : postfix_expression ARROW IDENTIFIER",
"postfix_expression : postfix_expression PLUSPLUS",
"postfix_expression : postfix_expression MINUSMINUS",
"arg_expression_list_opt :",
"arg_expression_list_opt : arg_expression_list",
"arg_expression_list : assignment_expression",
"arg_expression_list : arg_expression_list COMMA assignment_expression",
"unary_expression : postfix_expression",
"unary_expression : PLUSPLUS unary_expression",
"unary_expression : MINUSMINUS unary_expression",
"unary_expression : AMP cast_expression",
"unary_expression : STAR cast_expression",
"unary_expression : EXCL cast_expression",
"unary_expression : MINUS cast_expression",
"unary_expression : PLUS cast_expression",
"unary_expression : SIZEOF_SYM unary_expression",
"unary_expression : SIZEOF_SYM LP type_name RP",
"cast_expression : unary_expression",
"cast_expression : LP type_name RP cast_expression",
"type_name : declaration_specifiers",
"type_name : declaration_specifiers abstract_declarator",
"multiplicative_expression : cast_expression",
"multiplicative_expression : multiplicative_expression STAR cast_expression",
"multiplicative_expression : multiplicative_expression SLASH cast_expression",
"multiplicative_expression : multiplicative_expression PERCENT cast_expression",
"additive_expression : multiplicative_expression",
"additive_expression : additive_expression PLUS multiplicative_expression",
"additive_expression : additive_expression MINUS multiplicative_expression",
"relational_expression : additive_expression",
"relational_expression : relational_expression LSS additive_expression",
"relational_expression : relational_expression GTR additive_expression",
"relational_expression : relational_expression LEQ additive_expression",
"relational_expression : relational_expression GEQ additive_expression",
"equality_expression : relational_expression",
"equality_expression : equality_expression EQL relational_expression",
"equality_expression : equality_expression NEQ relational_expression",
"logical_and_expression : equality_expression",
"logical_and_expression : logical_and_expression AMPAMP equality_expression",
"logical_or_expression : logical_and_expression",
"logical_or_expression : logical_or_expression BARBAR logical_and_expression",
"assignment_expression : logical_or_expression",
"assignment_expression : unary_expression ASSIGN assignment_expression",
"constant_expression : expression",
"expression : assignment_expression",

};
#endif

#if YYDEBUG
int      yydebug;
#endif

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;
int      yynerrs;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
YYLTYPE  yyloc; /* position returned by actions */
YYLTYPE  yylloc; /* position from the lexer */
#endif

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
#ifndef YYLLOC_DEFAULT
#define YYLLOC_DEFAULT(loc, rhs, n) \
do \
{ \
    if (n == 0) \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 0).last_line; \
        (loc).first_column = YYRHSLOC(rhs, 0).last_column; \
        (loc).last_line    = YYRHSLOC(rhs, 0).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, 0).last_column; \
    } \
    else \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 1).first_line; \
        (loc).first_column = YYRHSLOC(rhs, 1).first_column; \
        (loc).last_line    = YYRHSLOC(rhs, n).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, n).last_column; \
    } \
} while (0)
#endif /* YYLLOC_DEFAULT */
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#if YYBTYACC

#ifndef YYLVQUEUEGROWTH
#define YYLVQUEUEGROWTH 32
#endif
#endif /* YYBTYACC */

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#ifndef YYINITSTACKSIZE
#define YYINITSTACKSIZE 200
#endif

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  *p_base;
    YYLTYPE  *p_mark;
#endif
} YYSTACKDATA;
#if YYBTYACC

struct YYParseState_s
{
    struct YYParseState_s *save;    /* Previously saved parser state */
    YYSTACKDATA            yystack; /* saved parser stack */
    int                    state;   /* saved parser state */
    int                    errflag; /* saved error recovery status */
    int                    lexeme;  /* saved index of the conflict lexeme in the lexical queue */
    YYINT                  ctry;    /* saved index in yyctable[] for this conflict */
};
typedef struct YYParseState_s YYParseState;
#endif /* YYBTYACC */
/* variables for the parser stack */
static YYSTACKDATA yystack;
#if YYBTYACC

/* Current parser state */
static YYParseState *yyps = 0;

/* yypath != NULL: do the full parse, starting at *yypath parser state. */
static YYParseState *yypath = 0;

/* Base of the lexical value queue */
static YYSTYPE *yylvals = 0;

/* Current position at lexical value queue */
static YYSTYPE *yylvp = 0;

/* End position of lexical value queue */
static YYSTYPE *yylve = 0;

/* The last allocated position at the lexical value queue */
static YYSTYPE *yylvlim = 0;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
/* Base of the lexical position queue */
static YYLTYPE *yylpsns = 0;

/* Current position at lexical position queue */
static YYLTYPE *yylpp = 0;

/* End position of lexical position queue */
static YYLTYPE *yylpe = 0;

/* The last allocated position at the lexical position queue */
static YYLTYPE *yylplim = 0;
#endif

/* Current position at lexical token queue */
static YYINT  *yylexp = 0;

static YYINT  *yylexemes = 0;
#endif /* YYBTYACC */
#line 345 "yacc.y"
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
#line 981 "y.tab.c"

/* For use in generated program */
#define yydepth (int)(yystack.s_mark - yystack.s_base)
#if YYBTYACC
#define yytrial (yyps->save)
#endif /* YYBTYACC */

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE *newps;
#endif

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    newps = (YYLTYPE *)realloc(data->p_base, newsize * sizeof(*newps));
    if (newps == 0)
        return YYENOMEM;

    data->p_base = newps;
    data->p_mark = newps + i;
#endif

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;

#if YYDEBUG
    if (yydebug)
        fprintf(stderr, "%sdebug: stack size increased to %d\n", YYPREFIX, newsize);
#endif
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    free(data->p_base);
#endif
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif /* YYPURE || defined(YY_NO_LEAKS) */
#if YYBTYACC

static YYParseState *
yyNewState(unsigned size)
{
    YYParseState *p = (YYParseState *) malloc(sizeof(YYParseState));
    if (p == NULL) return NULL;

    p->yystack.stacksize = size;
    if (size == 0)
    {
        p->yystack.s_base = NULL;
        p->yystack.l_base = NULL;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        p->yystack.p_base = NULL;
#endif
        return p;
    }
    p->yystack.s_base    = (YYINT *) malloc(size * sizeof(YYINT));
    if (p->yystack.s_base == NULL) return NULL;
    p->yystack.l_base    = (YYSTYPE *) malloc(size * sizeof(YYSTYPE));
    if (p->yystack.l_base == NULL) return NULL;
    memset(p->yystack.l_base, 0, size * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    p->yystack.p_base    = (YYLTYPE *) malloc(size * sizeof(YYLTYPE));
    if (p->yystack.p_base == NULL) return NULL;
    memset(p->yystack.p_base, 0, size * sizeof(YYLTYPE));
#endif

    return p;
}

static void
yyFreeState(YYParseState *p)
{
    yyfreestack(&p->yystack);
    free(p);
}
#endif /* YYBTYACC */

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab
#if YYBTYACC
#define YYVALID        do { if (yyps->save)            goto yyvalid; } while(0)
#define YYVALID_NESTED do { if (yyps->save && \
                                yyps->save->save == 0) goto yyvalid; } while(0)
#endif /* YYBTYACC */

int
YYPARSE_DECL()
{
    int yym, yyn, yystate, yyresult;
#if YYBTYACC
    int yynewerrflag;
    YYParseState *yyerrctx = NULL;
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  yyerror_loc_range[3]; /* position of error start/end (0 unused) */
#endif
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
    if (yydebug)
        fprintf(stderr, "%sdebug[<# of symbols on state stack>]\n", YYPREFIX);
#endif
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    memset(yyerror_loc_range, 0, sizeof(yyerror_loc_range));
#endif

#if YYBTYACC
    yyps = yyNewState(0); if (yyps == 0) goto yyenomem;
    yyps->save = 0;
#endif /* YYBTYACC */
    yym = 0;
    /* yyn is set below */
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark = yystack.p_base;
#endif
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
#if YYBTYACC
        do {
        if (yylvp < yylve)
        {
            /* we're currently re-reading tokens */
            yylval = *yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylloc = *yylpp++;
#endif
            yychar = *yylexp++;
            break;
        }
        if (yyps->save)
        {
            /* in trial mode; save scanner results for future parse attempts */
            if (yylvp == yylvlim)
            {   /* Enlarge lexical value queue */
                size_t p = (size_t) (yylvp - yylvals);
                size_t s = (size_t) (yylvlim - yylvals);

                s += YYLVQUEUEGROWTH;
                if ((yylexemes = (YYINT *)realloc(yylexemes, s * sizeof(YYINT))) == NULL) goto yyenomem;
                if ((yylvals   = (YYSTYPE *)realloc(yylvals, s * sizeof(YYSTYPE))) == NULL) goto yyenomem;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                if ((yylpsns   = (YYLTYPE *)realloc(yylpsns, s * sizeof(YYLTYPE))) == NULL) goto yyenomem;
#endif
                yylvp   = yylve = yylvals + p;
                yylvlim = yylvals + s;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp   = yylpe = yylpsns + p;
                yylplim = yylpsns + s;
#endif
                yylexp  = yylexemes + p;
            }
            *yylexp = (YYINT) YYLEX;
            *yylvp++ = yylval;
            yylve++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            *yylpp++ = yylloc;
            yylpe++;
#endif
            yychar = *yylexp++;
            break;
        }
        /* normal operation, no conflict encountered */
#endif /* YYBTYACC */
        yychar = YYLEX;
#if YYBTYACC
        } while (0);
#endif /* YYBTYACC */
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
            if (!yytrial)
#endif /* YYBTYACC */
                fprintf(stderr, " <%s>", YYSTYPE_TOSTRING(yychar, yylval));
#endif
            fputc('\n', stderr);
        }
#endif
    }
#if YYBTYACC

    /* Do we have a conflict? */
    if (((yyn = yycindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
        yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        YYINT ctry;

        if (yypath)
        {
            YYParseState *save;
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%s[%d]: CONFLICT in state %d: following successful trial parse\n",
                                YYDEBUGSTR, yydepth, yystate);
#endif
            /* Switch to the next conflict context */
            save = yypath;
            yypath = save->save;
            save->save = NULL;
            ctry = save->ctry;
            if (save->state != yystate) YYABORT;
            yyFreeState(save);

        }
        else
        {

            /* Unresolved conflict - start/continue trial parse */
            YYParseState *save;
#if YYDEBUG
            if (yydebug)
            {
                fprintf(stderr, "%s[%d]: CONFLICT in state %d. ", YYDEBUGSTR, yydepth, yystate);
                if (yyps->save)
                    fputs("ALREADY in conflict, continuing trial parse.\n", stderr);
                else
                    fputs("Starting trial parse.\n", stderr);
            }
#endif
            save                  = yyNewState((unsigned)(yystack.s_mark - yystack.s_base + 1));
            if (save == NULL) goto yyenomem;
            save->save            = yyps->save;
            save->state           = yystate;
            save->errflag         = yyerrflag;
            save->yystack.s_mark  = save->yystack.s_base + (yystack.s_mark - yystack.s_base);
            memcpy (save->yystack.s_base, yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            save->yystack.l_mark  = save->yystack.l_base + (yystack.l_mark - yystack.l_base);
            memcpy (save->yystack.l_base, yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            save->yystack.p_mark  = save->yystack.p_base + (yystack.p_mark - yystack.p_base);
            memcpy (save->yystack.p_base, yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            ctry                  = yytable[yyn];
            if (yyctable[ctry] == -1)
            {
#if YYDEBUG
                if (yydebug && yychar >= YYEOF)
                    fprintf(stderr, "%s[%d]: backtracking 1 token\n", YYDEBUGSTR, yydepth);
#endif
                ctry++;
            }
            save->ctry = ctry;
            if (yyps->save == NULL)
            {
                /* If this is a first conflict in the stack, start saving lexemes */
                if (!yylexemes)
                {
                    yylexemes = (YYINT *) malloc((YYLVQUEUEGROWTH) * sizeof(YYINT));
                    if (yylexemes == NULL) goto yyenomem;
                    yylvals   = (YYSTYPE *) malloc((YYLVQUEUEGROWTH) * sizeof(YYSTYPE));
                    if (yylvals == NULL) goto yyenomem;
                    yylvlim   = yylvals + YYLVQUEUEGROWTH;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpsns   = (YYLTYPE *) malloc((YYLVQUEUEGROWTH) * sizeof(YYLTYPE));
                    if (yylpsns == NULL) goto yyenomem;
                    yylplim   = yylpsns + YYLVQUEUEGROWTH;
#endif
                }
                if (yylvp == yylve)
                {
                    yylvp  = yylve = yylvals;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpp  = yylpe = yylpsns;
#endif
                    yylexp = yylexemes;
                    if (yychar >= YYEOF)
                    {
                        *yylve++ = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                        *yylpe++ = yylloc;
#endif
                        *yylexp  = (YYINT) yychar;
                        yychar   = YYEMPTY;
                    }
                }
            }
            if (yychar >= YYEOF)
            {
                yylvp--;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp--;
#endif
                yylexp--;
                yychar = YYEMPTY;
            }
            save->lexeme = (int) (yylvp - yylvals);
            yyps->save   = save;
        }
        if (yytable[yyn] == ctry)
        {
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%s[%d]: state %d, shifting to state %d\n",
                                YYDEBUGSTR, yydepth, yystate, yyctable[ctry]);
#endif
            if (yychar < 0)
            {
                yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp++;
#endif
                yylexp++;
            }
            if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                goto yyoverflow;
            yystate = yyctable[ctry];
            *++yystack.s_mark = (YYINT) yystate;
            *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            *++yystack.p_mark = yylloc;
#endif
            yychar  = YYEMPTY;
            if (yyerrflag > 0) --yyerrflag;
            goto yyloop;
        }
        else
        {
            yyn = yyctable[ctry];
            goto yyreduce;
        }
    } /* End of code dealing with conflicts */
#endif /* YYBTYACC */
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            fprintf(stderr, "%s[%d]: state %d, shifting to state %d\n",
                            YYDEBUGSTR, yydepth, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yylloc;
#endif
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;
#if YYBTYACC

    yynewerrflag = 1;
    goto yyerrhandler;
    goto yyerrlab; /* redundant goto avoids 'unused label' warning */

yyerrlab:
    /* explicit YYERROR from an action -- pop the rhs of the rule reduced
     * before looking for error recovery */
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark -= yym;
#endif

    yynewerrflag = 0;
yyerrhandler:
    while (yyps->save)
    {
        int ctry;
        YYParseState *save = yyps->save;
#if YYDEBUG
        if (yydebug)
            fprintf(stderr, "%s[%d]: ERROR in state %d, CONFLICT BACKTRACKING to state %d, %d tokens\n",
                            YYDEBUGSTR, yydepth, yystate, yyps->save->state,
                    (int)(yylvp - yylvals - yyps->save->lexeme));
#endif
        /* Memorize most forward-looking error state in case it's really an error. */
        if (yyerrctx == NULL || yyerrctx->lexeme < yylvp - yylvals)
        {
            /* Free old saved error context state */
            if (yyerrctx) yyFreeState(yyerrctx);
            /* Create and fill out new saved error context state */
            yyerrctx                 = yyNewState((unsigned)(yystack.s_mark - yystack.s_base + 1));
            if (yyerrctx == NULL) goto yyenomem;
            yyerrctx->save           = yyps->save;
            yyerrctx->state          = yystate;
            yyerrctx->errflag        = yyerrflag;
            yyerrctx->yystack.s_mark = yyerrctx->yystack.s_base + (yystack.s_mark - yystack.s_base);
            memcpy (yyerrctx->yystack.s_base, yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            yyerrctx->yystack.l_mark = yyerrctx->yystack.l_base + (yystack.l_mark - yystack.l_base);
            memcpy (yyerrctx->yystack.l_base, yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yyerrctx->yystack.p_mark = yyerrctx->yystack.p_base + (yystack.p_mark - yystack.p_base);
            memcpy (yyerrctx->yystack.p_base, yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            yyerrctx->lexeme         = (int) (yylvp - yylvals);
        }
        yylvp          = yylvals   + save->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        yylpp          = yylpsns   + save->lexeme;
#endif
        yylexp         = yylexemes + save->lexeme;
        yychar         = YYEMPTY;
        yystack.s_mark = yystack.s_base + (save->yystack.s_mark - save->yystack.s_base);
        memcpy (yystack.s_base, save->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
        yystack.l_mark = yystack.l_base + (save->yystack.l_mark - save->yystack.l_base);
        memcpy (yystack.l_base, save->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        yystack.p_mark = yystack.p_base + (save->yystack.p_mark - save->yystack.p_base);
        memcpy (yystack.p_base, save->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
        ctry           = ++save->ctry;
        yystate        = save->state;
        /* We tried shift, try reduce now */
        if ((yyn = yyctable[ctry]) >= 0) goto yyreduce;
        yyps->save     = save->save;
        save->save     = NULL;
        yyFreeState(save);

        /* Nothing left on the stack -- error */
        if (!yyps->save)
        {
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%sdebug[%d,trial]: trial parse FAILED, entering ERROR mode\n",
                                YYPREFIX, yydepth);
#endif
            /* Restore state as it was in the most forward-advanced error */
            yylvp          = yylvals   + yyerrctx->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylpp          = yylpsns   + yyerrctx->lexeme;
#endif
            yylexp         = yylexemes + yyerrctx->lexeme;
            yychar         = yylexp[-1];
            yylval         = yylvp[-1];
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylloc         = yylpp[-1];
#endif
            yystack.s_mark = yystack.s_base + (yyerrctx->yystack.s_mark - yyerrctx->yystack.s_base);
            memcpy (yystack.s_base, yyerrctx->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            yystack.l_mark = yystack.l_base + (yyerrctx->yystack.l_mark - yyerrctx->yystack.l_base);
            memcpy (yystack.l_base, yyerrctx->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yystack.p_mark = yystack.p_base + (yyerrctx->yystack.p_mark - yyerrctx->yystack.p_base);
            memcpy (yystack.p_base, yyerrctx->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            yystate        = yyerrctx->state;
            yyFreeState(yyerrctx);
            yyerrctx       = NULL;
        }
        yynewerrflag = 1;
    }
    if (yynewerrflag == 0) goto yyinrecovery;
#endif /* YYBTYACC */

    YYERROR_CALL("syntax error");
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yyerror_loc_range[1] = yylloc; /* lookahead position is error start position */
#endif

#if !YYBTYACC
    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
#endif
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: state %d, error recovery shifting to state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* lookahead position is error end position */
                yyerror_loc_range[2] = yylloc;
                YYLLOC_DEFAULT(yyloc, yyerror_loc_range, 2); /* position of error span */
                *++yystack.p_mark = yyloc;
#endif
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: error recovery discarding state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* the current TOS position is the error start position */
                yyerror_loc_range[1] = *yystack.p_mark;
#endif
#if defined(YYDESTRUCT_CALL)
#if YYBTYACC
                if (!yytrial)
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark, yystack.p_mark);
#else
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
                --yystack.s_mark;
                --yystack.l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                --yystack.p_mark;
#endif
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, error recovery discarding token %d (%s)\n",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
        }
#endif
#if defined(YYDESTRUCT_CALL)
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval, &yylloc);
#else
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
    yym = yylen[yyn];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: state %d, reducing by rule %d (%s)",
                        YYDEBUGSTR, yydepth, yystate, yyn, yyrule[yyn]);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
            if (yym > 0)
            {
                int i;
                fputc('<', stderr);
                for (i = yym; i > 0; i--)
                {
                    if (i != yym) fputs(", ", stderr);
                    fputs(YYSTYPE_TOSTRING(yystos[yystack.s_mark[1-i]],
                                           yystack.l_mark[1-i]), stderr);
                }
                fputc('>', stderr);
            }
#endif
        fputc('\n', stderr);
    }
#endif
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)

    /* Perform position reduction */
    memset(&yyloc, 0, sizeof(yyloc));
#if YYBTYACC
    if (!yytrial)
#endif /* YYBTYACC */
    {
        YYLLOC_DEFAULT(yyloc, &yystack.p_mark[-yym], yym);
        /* just in case YYERROR is invoked within the action, save
           the start of the rhs as the error start position */
        yyerror_loc_range[1] = yystack.p_mark[1-yym];
    }
#endif

    switch (yyn)
    {
    default:
        break;
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark -= yym;
#endif
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
        {
            fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
            if (!yytrial)
#endif /* YYBTYACC */
                fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[YYFINAL], yyval));
#endif
            fprintf(stderr, "shifting from state 0 to final state %d\n", YYFINAL);
        }
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yyloc;
#endif
        if (yychar < 0)
        {
#if YYBTYACC
            do {
            if (yylvp < yylve)
            {
                /* we're currently re-reading tokens */
                yylval = *yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylloc = *yylpp++;
#endif
                yychar = *yylexp++;
                break;
            }
            if (yyps->save)
            {
                /* in trial mode; save scanner results for future parse attempts */
                if (yylvp == yylvlim)
                {   /* Enlarge lexical value queue */
                    size_t p = (size_t) (yylvp - yylvals);
                    size_t s = (size_t) (yylvlim - yylvals);

                    s += YYLVQUEUEGROWTH;
                    if ((yylexemes = (YYINT *)realloc(yylexemes, s * sizeof(YYINT))) == NULL)
                        goto yyenomem;
                    if ((yylvals   = (YYSTYPE *)realloc(yylvals, s * sizeof(YYSTYPE))) == NULL)
                        goto yyenomem;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    if ((yylpsns   = (YYLTYPE *)realloc(yylpsns, s * sizeof(YYLTYPE))) == NULL)
                        goto yyenomem;
#endif
                    yylvp   = yylve = yylvals + p;
                    yylvlim = yylvals + s;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpp   = yylpe = yylpsns + p;
                    yylplim = yylpsns + s;
#endif
                    yylexp  = yylexemes + p;
                }
                *yylexp = (YYINT) YYLEX;
                *yylvp++ = yylval;
                yylve++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                *yylpp++ = yylloc;
                yylpe++;
#endif
                yychar = *yylexp++;
                break;
            }
            /* normal operation, no conflict encountered */
#endif /* YYBTYACC */
            yychar = YYLEX;
#if YYBTYACC
            } while (0);
#endif /* YYBTYACC */
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)\n",
                                YYDEBUGSTR, yydepth, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
            fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[yystate], yyval));
#endif
        fprintf(stderr, "shifting from state %d to state %d\n", *yystack.s_mark, yystate);
    }
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    *++yystack.p_mark = yyloc;
#endif
    goto yyloop;
#if YYBTYACC

    /* Reduction declares that this path is valid. Set yypath and do a full parse */
yyvalid:
    if (yypath) YYABORT;
    while (yyps->save)
    {
        YYParseState *save = yyps->save;
        yyps->save = save->save;
        save->save = yypath;
        yypath = save;
    }
#if YYDEBUG
    if (yydebug)
        fprintf(stderr, "%s[%d]: state %d, CONFLICT trial successful, backtracking to state %d, %d tokens\n",
                        YYDEBUGSTR, yydepth, yystate, yypath->state, (int)(yylvp - yylvals - yypath->lexeme));
#endif
    if (yyerrctx)
    {
        yyFreeState(yyerrctx);
        yyerrctx = NULL;
    }
    yylvp          = yylvals + yypath->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yylpp          = yylpsns + yypath->lexeme;
#endif
    yylexp         = yylexemes + yypath->lexeme;
    yychar         = YYEMPTY;
    yystack.s_mark = yystack.s_base + (yypath->yystack.s_mark - yypath->yystack.s_base);
    memcpy (yystack.s_base, yypath->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
    yystack.l_mark = yystack.l_base + (yypath->yystack.l_mark - yypath->yystack.l_base);
    memcpy (yystack.l_base, yypath->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark = yystack.p_base + (yypath->yystack.p_mark - yypath->yystack.p_base);
    memcpy (yystack.p_base, yypath->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
    yystate        = yypath->state;
    goto yyloop;
#endif /* YYBTYACC */

yyoverflow:
    YYERROR_CALL("yacc stack overflow");
#if YYBTYACC
    goto yyabort_nomem;
yyenomem:
    YYERROR_CALL("memory exhausted");
yyabort_nomem:
#endif /* YYBTYACC */
    yyresult = 2;
    goto yyreturn;

yyabort:
    yyresult = 1;
    goto yyreturn;

yyaccept:
#if YYBTYACC
    if (yyps->save) goto yyvalid;
#endif /* YYBTYACC */
    yyresult = 0;

yyreturn:
#if defined(YYDESTRUCT_CALL)
    if (yychar != YYEOF && yychar != YYEMPTY)
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval, &yylloc);
#else
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */

    {
        YYSTYPE *pv;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYLTYPE *pp;

        for (pv = yystack.l_base, pp = yystack.p_base; pv <= yystack.l_mark; ++pv, ++pp)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv, pp);
#else
        for (pv = yystack.l_base; pv <= yystack.l_mark; ++pv)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
    }
#endif /* defined(YYDESTRUCT_CALL) */

#if YYBTYACC
    if (yyerrctx)
    {
        yyFreeState(yyerrctx);
        yyerrctx = NULL;
    }
    while (yyps)
    {
        YYParseState *save = yyps;
        yyps = save->save;
        save->save = NULL;
        yyFreeState(save);
    }
    while (yypath)
    {
        YYParseState *save = yypath;
        yypath = save->save;
        save->save = NULL;
        yyFreeState(save);
    }
#endif /* YYBTYACC */
    yyfreestack(&yystack);
    return (yyresult);
}
