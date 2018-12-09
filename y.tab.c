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
#line 9 "semant.y" /* yacc.c:339  */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "semant.h"

/** La siguiente declaracion permite que ’yyerror’ se pueda invocar desde el
*** fuente de lex (tokens.l)
**/

void yyerror(const char *msg);
int yylex();


#line 82 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif


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
    MAIN = 258,
    RIGHT_PARENTHESIS = 259,
    LEFT_KEY = 260,
    RIGHT_KEY = 261,
    LEFT_BRACKET = 262,
    RIGHT_BRACKET = 263,
    SEMICOLON = 264,
    COMA = 265,
    ASSIGN = 266,
    IF = 267,
    THEN = 268,
    ELSE = 269,
    WHILE = 270,
    RETURN = 271,
    FOR = 272,
    ASSIGN_FOR = 273,
    TO = 274,
    DO = 275,
    OUT = 276,
    IN = 277,
    INITVAR = 278,
    ENDVAR = 279,
    LIST_OF = 280,
    BASIC_TYPES = 281,
    CADENA = 282,
    OR_OP = 283,
    AND_OP = 284,
    XOR_OP = 285,
    EQUALS_OP = 286,
    RELATION_OP = 287,
    SYMBOL_OP = 288,
    BINARY_OP = 289,
    BINARY_LIST_OP_I = 290,
    BINARY_LIST_OP_L = 291,
    NEG = 292,
    COUNT = 293,
    QUEST = 294,
    MINUSMINUS = 295,
    PLUSPLUS = 296,
    DOLLAR = 297,
    LIST_OP = 298,
    AT = 299,
    CONST_INT = 300,
    CONST_DOUBLE = 301,
    CONST_BOOLEAN = 302,
    CONST_CHAR = 303,
    ID = 304,
    LEFT_PARENTHESIS = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 181 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   490

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  200

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    60,    60,    62,    63,    64,    65,    66,
      66,    67,    67,    68,    69,    70,    71,    72,    72,    73,
      74,    74,    74,    74,    76,    77,    78,    79,    80,    80,
      81,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    93,    97,   101,   105,   109,   112,   115,   118,
     121,   122,   123,   124,   124,   125,   126,   127,   129,   133,
     137,   148,   152,   165,   178,   183,   194,   198,   202,   206,
     212,   218,   230,   235,   236,   237,   238,   243,   244,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   271,   280,   281,   282,
     284,   285,   286,   288,   289,   290,   292,   293,   294,   296,
     297,   298
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN", "RIGHT_PARENTHESIS", "LEFT_KEY",
  "RIGHT_KEY", "LEFT_BRACKET", "RIGHT_BRACKET", "SEMICOLON", "COMA",
  "ASSIGN", "IF", "THEN", "ELSE", "WHILE", "RETURN", "FOR", "ASSIGN_FOR",
  "TO", "DO", "OUT", "IN", "INITVAR", "ENDVAR", "LIST_OF", "BASIC_TYPES",
  "CADENA", "OR_OP", "AND_OP", "XOR_OP", "EQUALS_OP", "RELATION_OP",
  "SYMBOL_OP", "BINARY_OP", "BINARY_LIST_OP_I", "BINARY_LIST_OP_L", "NEG",
  "COUNT", "QUEST", "MINUSMINUS", "PLUSPLUS", "DOLLAR", "LIST_OP", "AT",
  "CONST_INT", "CONST_DOUBLE", "CONST_BOOLEAN", "CONST_CHAR", "ID",
  "LEFT_PARENTHESIS", "$accept", "Programa", "bloque", "$@1", "inbloque",
  "Declar_de_subprogs", "Declar_subprog", "$@2",
  "Declar_de_variables_locales", "$@3", "Cabecera_programa",
  "Variables_locales", "Cuerpo_declar_variables", "$@4",
  "Cabecera_subprograma", "@5", "$@6", "$@7", "argumentos", "argumento",
  "Sentencias", "$@8", "$@9", "Sentencia", "sentencia_contador",
  "sentencia_asignacion", "sentencia_if", "sentencia_while",
  "sentencia_entrada", "sentencia_salida", "sentencia_return", "@10",
  "sentencia_for", "sentencia_list", "expresion", "funcion",
  "list_expresiones_o_cadena", "exp_cad", "constante", "list_expresiones",
  "tipo", "const_list_int", "list_int", "const_list_double", "list_double",
  "const_list_boolean", "list_boolean", "const_list_char", "list_char",
  "list_id", YY_NULLPTR
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
     305
};
# endif

#define YYPACT_NINF -139

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-139)))

#define YYTABLE_NINF -7

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      26,    39,   106,   109,   -11,  -139,  -139,  -139,    83,  -139,
      13,  -139,    68,   123,  -139,  -139,   -11,  -139,  -139,   162,
    -139,  -139,   104,  -139,   131,  -139,   115,  -139,  -139,  -139,
    -139,   163,    86,  -139,  -139,  -139,    20,   109,    86,  -139,
      49,   120,   122,   233,   136,    17,    19,   233,   233,   233,
     233,   233,   233,   233,  -139,  -139,  -139,  -139,    -5,   233,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,   331,  -139,  -139,  -139,  -139,  -139,  -139,   139,  -139,
    -139,    23,  -139,  -139,  -139,  -139,  -139,  -139,    50,    51,
      82,   112,   233,   233,   134,   348,   174,  -139,   348,   135,
    -139,    20,   145,   -14,   -14,   -14,   -14,     7,   297,   207,
     233,   114,   146,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   164,   182,  -139,   233,  -139,  -139,   147,  -139,
     149,  -139,   152,  -139,   148,  -139,   151,   263,   280,   233,
     233,   191,    65,  -139,    17,   157,  -139,  -139,  -139,   314,
    -139,   348,    18,  -139,   381,   396,   410,   423,   435,   446,
     -14,   -14,   -14,  -139,   -14,  -139,   365,   160,  -139,  -139,
    -139,  -139,  -139,  -139,   192,    86,  -139,   187,  -139,  -139,
    -139,  -139,   233,   215,   158,    86,  -139,    65,   348,   233,
     -11,   193,   197,   160,    21,    86,   109,  -139,  -139,  -139
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    26,     1,     3,     2,     0,    95,
       0,    25,     0,    13,    96,    14,     0,    27,    11,     0,
       8,    24,     0,     4,    30,    19,     0,    16,    17,     7,
       9,    28,     0,    20,    12,    15,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    86,    88,    87,    73,     0,
      32,    31,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     0,    75,    74,    89,    90,    91,    92,     0,   111,
     110,     0,    10,    29,    99,   102,   105,   108,     0,     0,
       0,     0,     0,     0,    73,    53,     0,    84,    83,     0,
      82,     0,     0,    61,    58,    59,    60,     0,     0,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,     0,    21,    18,     0,    97,
       0,   100,     0,   103,     0,   106,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,    51,    43,    42,     0,
      80,    94,     0,    77,    67,    66,    68,    70,    69,    62,
      63,    64,    65,    45,    72,    44,     0,    71,    22,   109,
      98,   101,   104,   107,     0,     0,    54,     0,    81,    50,
      46,    79,     0,     0,     0,     0,    49,     0,    93,     0,
      26,    47,     0,    76,     0,     0,     0,    23,    48,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,    -3,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,   198,  -139,  -139,  -139,  -139,  -139,    28,   209,
    -139,  -139,  -139,   -37,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,   -40,  -139,  -139,    79,  -138,  -139,
      62,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,   -44
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    60,    13,    19,    24,    29,    37,    20,    22,
       3,    26,    27,    36,    30,    78,   168,   184,    10,    11,
      31,    38,    32,    61,    62,    63,    64,    65,    66,    67,
      68,   141,    69,    70,    71,    72,    99,   100,    73,   152,
      12,    74,    88,    75,    89,    76,    90,    77,    91,    81
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    83,   102,    95,   177,    98,   110,   103,   104,   105,
     106,   107,   108,   109,     8,     9,   147,    15,    39,   112,
      79,    79,   181,    16,    40,   197,   139,   140,   182,     1,
     125,    16,   127,   128,    82,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    97,   111,   101,   139,   140,   192,
      47,   125,   137,   138,    48,    49,    50,   145,   129,   131,
     130,   132,    54,    55,    56,    57,    94,    59,    80,    80,
     149,   151,    40,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   164,   166,    28,   167,    33,    39,    28,     4,
     133,     6,   134,    40,    84,    85,    86,    87,    41,   164,
     166,    42,    43,    44,    98,    25,     5,    45,    46,    14,
      54,    55,    56,    57,     6,    39,    25,    17,   150,    47,
     135,    40,   136,    48,    49,    50,    51,    52,    53,     8,
       9,    54,    55,    56,    57,    58,    59,    -6,   186,    34,
       8,     9,   188,   167,   143,   144,    18,    47,   191,   193,
     153,    48,    49,    50,   146,   128,     8,     9,   198,    54,
      55,    56,    57,    94,    59,    39,   179,   128,    23,    -5,
      92,    40,    93,   163,   113,   114,   115,   116,   117,   118,
     119,   120,   121,    39,   111,    96,   139,   140,   126,    40,
     125,   165,   142,   199,   170,   172,   169,    47,   171,   173,
     176,    48,    49,    50,   125,   185,   187,   195,   190,    54,
      55,    56,    57,    94,    59,    47,    39,   196,   194,    48,
      49,    50,    40,   178,    35,    21,     0,    54,    55,    56,
      57,    94,    59,     0,    39,   113,   114,   115,   116,   117,
      40,   119,   120,   121,     0,     0,     0,     0,    47,     0,
       0,   125,    48,    49,    50,     0,     0,     0,     0,   189,
      54,    55,    56,    57,    94,    59,    47,   174,     0,     0,
      48,    49,    50,     0,     0,     0,     0,     0,    54,    55,
      56,    57,    94,    59,   175,     0,     0,     0,     0,     0,
       0,   113,   114,   115,   116,   117,   118,   119,   120,   121,
       0,     0,     0,   139,   140,     0,   148,   125,   113,   114,
     115,   116,   117,   118,   119,   120,   121,     0,     0,     0,
     139,   140,     0,   180,   125,   113,   114,   115,   116,   117,
     118,   119,   120,   121,     0,     0,     0,   139,   140,     0,
       0,   125,   113,   114,   115,   116,   117,   118,   119,   120,
     121,     0,     0,     0,   139,   140,     0,     0,   125,   113,
     114,   115,   116,   117,   118,   119,   120,   121,     0,     0,
       0,   122,   123,     0,   124,   125,   113,   114,   115,   116,
     117,   118,   119,   120,   121,     0,     0,     0,   139,   140,
       0,     0,   125,   113,   114,   115,   116,   117,   118,   119,
     120,   121,     0,     0,     0,   139,   140,     0,     0,   183,
     114,   115,   116,   117,   118,   119,   120,   121,     0,     0,
       0,   139,   140,     0,     0,   125,   115,   116,   117,   118,
     119,   120,   121,     0,     0,     0,   139,   140,     0,     0,
     125,   116,   117,   118,   119,   120,   121,     0,     0,     0,
     139,   140,     0,     0,   125,   117,   118,   119,   120,   121,
       0,     0,     0,   139,   140,     0,     0,   125,   118,   119,
     120,   121,     0,     0,     0,   139,   140,     0,     0,   125,
     119,   120,   121,     0,     0,     0,   139,   140,     0,     0,
     125
};

static const yytype_int16 yycheck[] =
{
       3,    38,    46,    43,   142,    45,    11,    47,    48,    49,
      50,    51,    52,    53,    25,    26,     9,     4,     1,    59,
       1,     1,     4,    10,     7,     4,    40,    41,    10,     3,
      44,    10,     9,    10,    37,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    27,    50,    27,    40,    41,   187,
      33,    44,    92,    93,    37,    38,    39,   101,     8,     8,
      10,    10,    45,    46,    47,    48,    49,    50,    49,    49,
     110,   111,     7,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    22,   125,    24,     1,    26,    50,
       8,     5,    10,     7,    45,    46,    47,    48,    12,   139,
     140,    15,    16,    17,   144,     1,     0,    21,    22,    26,
      45,    46,    47,    48,     5,     1,     1,    49,     4,    33,
       8,     7,    10,    37,    38,    39,    40,    41,    42,    25,
      26,    45,    46,    47,    48,    49,    50,     6,   175,    24,
      25,    26,   182,   183,     9,    10,    23,    33,   185,   189,
       4,    37,    38,    39,     9,    10,    25,    26,   195,    45,
      46,    47,    48,    49,    50,     1,     9,    10,     6,     6,
      50,     7,    50,     9,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     1,    50,    49,    40,    41,    49,     7,
      44,     9,    18,   196,    45,    47,    49,    33,    46,    48,
       9,    37,    38,    39,    44,    13,    19,    14,    50,    45,
      46,    47,    48,    49,    50,    33,     1,    20,   190,    37,
      38,    39,     7,   144,    26,    16,    -1,    45,    46,    47,
      48,    49,    50,    -1,     1,    28,    29,    30,    31,    32,
       7,    34,    35,    36,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    44,    37,    38,    39,    -1,    -1,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    33,     4,    -1,    -1,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    40,    41,    -1,     9,    44,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      40,    41,    -1,     9,    44,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    40,    41,    -1,
      -1,    44,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    40,    41,
      -1,    -1,    44,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    40,    41,    -1,    -1,    44,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    40,    41,    -1,    -1,
      44,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      40,    41,    -1,    -1,    44,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    40,    41,    -1,    -1,    44,    33,    34,
      35,    36,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,
      34,    35,    36,    -1,    -1,    -1,    40,    41,    -1,    -1,
      44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    52,    61,    50,     0,     5,    53,    25,    26,
      69,    70,    91,    54,    26,     4,    10,    49,    23,    55,
      59,    70,    60,     6,    56,     1,    62,    63,    91,    57,
      65,    71,    73,    91,    24,    63,    64,    58,    72,     1,
       7,    12,    15,    16,    17,    21,    22,    33,    37,    38,
      39,    40,    41,    42,    45,    46,    47,    48,    49,    50,
      53,    74,    75,    76,    77,    78,    79,    80,    81,    83,
      84,    85,    86,    89,    92,    94,    96,    98,    66,     1,
      49,   100,    53,    74,    45,    46,    47,    48,    93,    95,
      97,    99,    50,    50,    49,    85,    49,    27,    85,    87,
      88,    27,   100,    85,    85,    85,    85,    85,    85,    85,
      11,    50,    85,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    40,    41,    43,    44,    49,     9,    10,     8,
      10,     8,    10,     8,    10,     8,    10,    85,    85,    40,
      41,    82,    18,     9,    10,   100,     9,     9,     9,    85,
       4,    85,    90,     4,    85,    85,    85,    85,    85,    85,
      85,    85,    85,     9,    85,     9,    85,    85,    67,    49,
      45,    46,    47,    48,     4,     4,     9,    89,    88,     9,
       9,     4,    10,    44,    68,    13,    74,    19,    85,    44,
      50,    74,    89,    85,    69,    14,    20,     4,    74,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    54,    53,    55,    55,    56,    56,    58,
      57,    60,    59,    59,    61,    62,    62,    64,    63,    63,
      66,    67,    68,    65,    69,    69,    69,    70,    72,    71,
      73,    71,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    75,    75,    75,    75,    76,    77,    77,    78,
      79,    79,    80,    82,    81,    83,    84,    84,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    86,
      86,    87,    87,    88,    88,    89,    89,    89,    89,    89,
      89,    89,    89,    90,    90,    91,    91,    92,    93,    93,
      94,    95,    95,    96,    97,    97,    98,    99,    99,   100,
     100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     4,     3,     2,     2,     0,     0,
       3,     0,     4,     0,     4,     2,     1,     0,     4,     1,
       0,     0,     0,     8,     3,     1,     0,     2,     0,     3,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     4,     6,     8,     5,
       4,     3,     3,     0,     4,     8,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     6,     3,     1,     4,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     2,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       1,     1
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
        case 3:
#line 60 "semant.y" /* yacc.c:1646  */
    {TS_AddMark();}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 61 "semant.y" /* yacc.c:1646  */
    {TS_CleanBlock();}
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 66 "semant.y" /* yacc.c:1646  */
    {esFunc = 1;}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 66 "semant.y" /* yacc.c:1646  */
    {esFunc = 0;}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 67 "semant.y" /* yacc.c:1646  */
    {decVar = 1;}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 67 "semant.y" /* yacc.c:1646  */
    { decVar = 0;}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 72 "semant.y" /* yacc.c:1646  */
    {getType((yyvsp[0]));}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 74 "semant.y" /* yacc.c:1646  */
    {getType((yyvsp[0]));}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 74 "semant.y" /* yacc.c:1646  */
    {decParam = 1;}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 74 "semant.y" /* yacc.c:1646  */
    {TS_AddFunction((yyvsp[-2]));}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 75 "semant.y" /* yacc.c:1646  */
    {decParam = 0;}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 79 "semant.y" /* yacc.c:1646  */
    {TS_AddParam((yyvsp[0]));}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 80 "semant.y" /* yacc.c:1646  */
    {decVar = 2;}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 81 "semant.y" /* yacc.c:1646  */
    {decVar = 2;}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 94 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-1]).type == BOOLEAN || (yyvsp[-1]).type == CHAR  || (yyvsp[-1]).type == LIST_INT || (yyvsp[-1]).type == LIST_DOUBLE || (yyvsp[-1]).type == LIST_CHAR || (yyvsp[-1]).type == LIST_BOOLEAN)
                        printf("Semantic Error(%d): Type not increaseable.\n", line);
                    (yyval).type = (yyvsp[-1]).type;}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 98 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-1]).type == BOOLEAN || (yyvsp[-1]).type == CHAR || (yyvsp[-1]).type == LIST_INT || (yyvsp[-1]).type == LIST_DOUBLE || (yyvsp[-1]).type == LIST_CHAR || (yyvsp[-1]).type == LIST_BOOLEAN)
                        printf("Semantic Error(%d): Type not decrementacle.\n", line);
                    (yyval).type = (yyvsp[-1]).type;}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 102 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type == BOOLEAN || (yyvsp[-2]).type == CHAR || (yyvsp[-2]).type == LIST_INT || (yyvsp[-1]).type == LIST_DOUBLE || (yyvsp[-1]).type == LIST_CHAR || (yyvsp[-1]).type == LIST_BOOLEAN)
                        printf("Semantic Error(%d): Type not increaseable.\n", line);
                    (yyval).type = (yyvsp[-2]).type;}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 106 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type == BOOLEAN || (yyvsp[-2]).type == CHAR || (yyvsp[-2]).type == LIST_INT || (yyvsp[-1]).type == LIST_DOUBLE || (yyvsp[-1]).type == LIST_CHAR || (yyvsp[-1]).type == LIST_BOOLEAN)
                        printf("Semantic Error(%d): Type not decrementable.\n", line);
                    (yyval).type = (yyvsp[-2]).type;}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 110 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-3]).type != (yyvsp[-1]).type)
		      printf("Semantic Error(%d): Types are not equal.\n",line);}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 113 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-3]).type != BOOLEAN)
                  printf("Semantic Error(%d): Expression are not logic.\n", line);}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 116 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-5]).type != BOOLEAN)
                  printf("Semantic Error(%d): Expression are not logic.\n", line);}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 119 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type != BOOLEAN)
                    printf("Semantic Error(%d): Expression are not logic.\n", line);}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 124 "semant.y" /* yacc.c:1646  */
    {TS_CheckReturn((yyvsp[0]),&(yyval));}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 130 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[0]).type != BOOLEAN)
              printf("Semantic Error(%d): Expression are not logic.\n", line);
          (yyval).type = (yyvsp[0]).type;}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 134 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[0]).type != LIST_INT || (yyvsp[0]).type != LIST_DOUBLE || (yyvsp[0]).type != LIST_BOOLEAN || (yyvsp[0]).type != LIST_CHAR)
              printf("Semantic Error(%d): Expression are not logic.\n", line);
          (yyval).type = INT;}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 138 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-1]).type != LIST_INT || (yyvsp[-1]).type != LIST_DOUBLE || (yyvsp[-1]).type != LIST_BOOLEAN || (yyvsp[-1]).type != LIST_CHAR)
              printf("Semantic Error(%d): Types not operable.\n", line);
          if ((yyvsp[-1]).type == INT)
              (yyval).type = INT;
          else if ((yyvsp[-1]).type == DOUBLE)
              (yyval).type = DOUBLE;
          else if ((yyvsp[-1]).type == BOOLEAN)
              (yyval).type = BOOLEAN;
          else if ((yyvsp[-1]).type == CHAR)
              (yyval).type = CHAR;}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 149 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[0]).type == BOOLEAN || (yyvsp[0]).type == CHAR || (yyvsp[0]).type == LIST_INT || (yyvsp[0]).type == LIST_DOUBLE || (yyvsp[0]).type == LIST_CHAR || (yyvsp[0]).type == LIST_BOOLEAN)
              printf("Semantic Error(%d): Type not signable.\n", line);
          (yyval).type = (yyvsp[0]).type;}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 153 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type == BOOLEAN || (yyvsp[-2]).type == CHAR || (yyvsp[0]).type == BOOLEAN || (yyvsp[0]).type == CHAR)
              printf("Semantic Error(%d): Types not operable.\n", line);
           if (((yyvsp[-2]).type == LIST_INT || (yyvsp[-2]).type == LIST_DOUBLE || (yyvsp[-2]).type == LIST_BOOLEAN || (yyvsp[-2]).type == LIST_CHAR)
              && ((yyvsp[0]).type == LIST_INT || (yyvsp[0]).type == LIST_DOUBLE || (yyvsp[0]).type == LIST_BOOLEAN || (yyvsp[0]).type == LIST_CHAR))
              printf("Semantic Error(%d): Types not operable.\n", line);
          (yyval).type = INT;
          if ((yyvsp[-2]).type == DOUBLE || (yyvsp[0]).type == DOUBLE)
            (yyval).type = DOUBLE;
          if ((yyvsp[-2]).type == LIST_INT || (yyvsp[-2]).type == LIST_DOUBLE || (yyvsp[-2]).type == LIST_BOOLEAN || (yyvsp[-2]).type == LIST_CHAR)
            (yyval).type == (yyvsp[-2]).type;
          if ((yyvsp[0]).type == LIST_INT || (yyvsp[0]).type == LIST_DOUBLE || (yyvsp[0]).type == LIST_BOOLEAN || (yyvsp[0]).type == LIST_CHAR)
            (yyval).type == (yyvsp[0]).type;}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 166 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type == BOOLEAN || (yyvsp[-2]).type == CHAR || (yyvsp[0]).type == BOOLEAN || (yyvsp[0]).type == CHAR)
              printf("Semantic Error(%d): Types not operable.\n", line);
           if (((yyvsp[-2]).type == LIST_INT || (yyvsp[-2]).type == LIST_DOUBLE || (yyvsp[-2]).type == LIST_BOOLEAN || (yyvsp[-2]).type == LIST_CHAR)
              && ((yyvsp[0]).type == LIST_INT || (yyvsp[0]).type == LIST_DOUBLE || (yyvsp[0]).type == LIST_BOOLEAN || (yyvsp[0]).type == LIST_CHAR))
              printf("Semantic Error(%d): Types not operable.\n", line);
          (yyval).type = INT;
          if ((yyvsp[-2]).type == DOUBLE || (yyvsp[0]).type == DOUBLE)
            (yyval).type = DOUBLE;
          if ((yyvsp[-2]).type == LIST_INT || (yyvsp[-2]).type == LIST_DOUBLE || (yyvsp[-2]).type == LIST_BOOLEAN || (yyvsp[-2]).type == LIST_CHAR)
            (yyval).type == (yyvsp[-2]).type;
          if ((yyvsp[0]).type == LIST_INT || (yyvsp[0]).type == LIST_DOUBLE || (yyvsp[0]).type == LIST_BOOLEAN || (yyvsp[0]).type == LIST_CHAR)
            (yyval).type == (yyvsp[0]).type;}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 179 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type != LIST_INT || (yyvsp[-2]).type != LIST_DOUBLE || (yyvsp[-2]).type != LIST_BOOLEAN || (yyvsp[-2]).type != LIST_CHAR
              || (yyvsp[0]).type != INT)
              printf("Semantic Error(%d): Types not operable.\n", line);
          (yyval).type = (yyvsp[-2]).type;}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 184 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type == (yyvsp[0]).type){
							//printf("%d\n", $1.type);
              if ((yyvsp[-2]).type == LIST_INT || (yyvsp[-2]).type == LIST_DOUBLE || (yyvsp[-2]).type == LIST_BOOLEAN || (yyvsp[-2]).type == LIST_CHAR) {
                (yyval).type = (yyvsp[-2]).type;
								}
              else
                printf("Semantic Error(%d): Types not operable.\n", line);
                }
          else
            printf("Semantic Error(%d): Types not operable.\n", line);}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 195 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type != BOOLEAN || (yyvsp[0]).type != BOOLEAN)
              printf("Semantic Error(%d): Expression are not logic.\n", line);
          (yyval).type = BOOLEAN;}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 199 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type != BOOLEAN || (yyvsp[0]).type != BOOLEAN)
              printf("Semantic Error(%d): Expression are not logic.\n", line);
          (yyval).type = BOOLEAN;}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 203 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type != BOOLEAN || (yyvsp[0]).type != BOOLEAN)
              printf("Semantic Error(%d): Expression are not logic.\n", line);
          (yyval).type = BOOLEAN;}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 207 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type == BOOLEAN || (yyvsp[0]).type == BOOLEAN || (yyvsp[-2]).type == CHAR || (yyvsp[0]).type == CHAR
              || (yyvsp[-2]).type == LIST_INT || (yyvsp[-2]).type == LIST_DOUBLE || (yyvsp[-2]).type == LIST_BOOLEAN || (yyvsp[-2]).type == LIST_CHAR
              || (yyvsp[0]).type == LIST_INT || (yyvsp[0]).type == LIST_DOUBLE || (yyvsp[0]).type == LIST_BOOLEAN || (yyvsp[0]).type == LIST_CHAR)
              printf("Semantic Error(%d): Types not comparable.\n", line);
          (yyval).type = BOOLEAN;}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 213 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type != (yyvsp[0]).type)
              if ((yyvsp[-2]).type == INT || (yyvsp[0]).type == INT || (yyvsp[-2]).type == DOUBLE || (yyvsp[0]).type == DOUBLE){
              } else
                  printf("Semantic Error(%d): Types not comparable.\n", line);
          (yyval).type = BOOLEAN;}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 219 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type != LIST_INT || (yyvsp[-2]).type != LIST_DOUBLE || (yyvsp[-2]).type != LIST_BOOLEAN || (yyvsp[-2]).type != LIST_CHAR
              || (yyvsp[0]).type != INT)
              printf("Semantic Error(%d): Types not operable.\n", line);
          if ((yyvsp[-2]).type == INT)
              (yyval).type = INT;
          else if ((yyvsp[-2]).type == DOUBLE)
              (yyval).type = DOUBLE;
          else if ((yyvsp[-2]).type == BOOLEAN)
              (yyval).type = BOOLEAN;
          else if ((yyvsp[-2]).type == CHAR)
              (yyval).type = CHAR;}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 231 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type != LIST_INT || (yyvsp[-2]).type != LIST_DOUBLE || (yyvsp[-2]).type != LIST_BOOLEAN || (yyvsp[-2]).type != LIST_CHAR
              || (yyvsp[0]).type != INT)
              printf("Semantic Error(%d): Types not operable.\n", line);
          (yyval).type = (yyvsp[-2]).type;}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 235 "semant.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 236 "semant.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 237 "semant.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 239 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-5]).type != LIST_INT || (yyvsp[-5]).type != LIST_DOUBLE || (yyvsp[-5]).type != LIST_BOOLEAN || (yyvsp[-5]).type != LIST_CHAR
                || (yyvsp[-3]).type != INT || (yyvsp[0]).type != INT)
              printf("Semantic Error(%d): Types not operable.\n", line);
          (yyval).type = (yyvsp[-5]).type;}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 243 "semant.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[-1]).type;}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 248 "semant.y" /* yacc.c:1646  */
    {nParams++; TS_CheckParam((yyvsp[-2]), nParams);}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 249 "semant.y" /* yacc.c:1646  */
    {nParams = 1; TS_CheckParam((yyvsp[0]), nParams);}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 252 "semant.y" /* yacc.c:1646  */
    {(yyval).type = INT;}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 253 "semant.y" /* yacc.c:1646  */
    {(yyval).type = DOUBLE;}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 254 "semant.y" /* yacc.c:1646  */
    {(yyval).type = CHAR;}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 255 "semant.y" /* yacc.c:1646  */
    {(yyval).type = BOOLEAN;}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 256 "semant.y" /* yacc.c:1646  */
    {(yyval).type = LIST_INT;}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 257 "semant.y" /* yacc.c:1646  */
    {(yyval).type = LIST_DOUBLE;}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 258 "semant.y" /* yacc.c:1646  */
    {(yyval).type = LIST_BOOLEAN;}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 259 "semant.y" /* yacc.c:1646  */
    {(yyval).type = LIST_CHAR;}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 263 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[0]).type == INT)
															(yyval).type = INT;
													else if ((yyvsp[0]).type == DOUBLE)
															(yyval).type = DOUBLE;
													else if ((yyvsp[0]).type == CHAR)
															(yyval).type = CHAR;
													else if ((yyvsp[0]).type == BOOLEAN)
															(yyval).type = BOOLEAN;}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 272 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[0]).type == INT)
															(yyval).type = LIST_INT;
													else if ((yyvsp[0]).type == DOUBLE)
															(yyval).type = LIST_DOUBLE;
													else if ((yyvsp[0]).type == CHAR)
															(yyval).type = LIST_CHAR;
													else if ((yyvsp[0]).type == BOOLEAN)
															(yyval).type = LIST_BOOLEAN;}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 296 "semant.y" /* yacc.c:1646  */
    {TS_AddVar((yyvsp[0]));}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 297 "semant.y" /* yacc.c:1646  */
    {TS_AddVar((yyvsp[0]));}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1916 "y.tab.c" /* yacc.c:1646  */
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
#line 300 "semant.y" /* yacc.c:1906  */



#ifdef DOSWINDOWS
#include "lexyy.c"
#else
#include "lex.yy.c"
#endif

/** Implementamos la función yyerror. En este caso
*** simplemente escribimos el mensaje de error en pantalla
**/

/** Utilizamos la variable ’yylineno’ que nos muestra la línea actual. Para ello es necesario
*** invocar a lex con la opción ’-l’.
**/

void yyerror (const char *msg)
{
  fprintf(stderr,"GRAMMAR ERR[Line %d]: %s\n", yylineno, msg);
}
