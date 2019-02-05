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
#define YYLAST   507

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  202

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
      66,    68,    68,    69,    70,    71,    72,    73,    73,    74,
      75,    75,    75,    75,    77,    78,    79,    80,    81,    81,
      82,    82,    83,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    95,    99,   103,   107,   111,   114,
     117,   120,   123,   124,   125,   126,   126,   127,   128,   129,
     131,   135,   139,   150,   154,   166,   180,   185,   196,   200,
     204,   208,   214,   220,   232,   237,   238,   239,   240,   245,
     246,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   273,   283,
     285,   286,   288,   289,   290,   292,   293,   294,   296,   297,
     298,   300,   306,   312
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
  "Cabecera_subprograma", "$@5", "$@6", "$@7", "argumentos", "argumento",
  "$@8", "Sentencias", "$@9", "$@10", "Sentencia", "sentencia_contador",
  "sentencia_asignacion", "sentencia_if", "sentencia_while",
  "sentencia_entrada", "sentencia_salida", "sentencia_return", "@11",
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

#define YYPACT_NINF -141

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-141)))

#define YYTABLE_NINF -27

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   -28,    26,    24,    13,  -141,  -141,  -141,  -141,    16,
    -141,    21,  -141,     2,    38,  -141,  -141,    80,  -141,  -141,
      84,  -141,  -141,  -141,    15,  -141,    22,  -141,    34,  -141,
    -141,  -141,  -141,   103,    86,    68,  -141,  -141,    20,    24,
      86,  -141,    49,    96,   107,   233,   117,    17,    19,   233,
     233,   233,   233,   233,   233,   233,  -141,  -141,  -141,  -141,
      -5,   233,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,   348,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,   120,  -141,  -141,  -141,  -141,  -141,  -141,
      76,   106,   112,   129,   233,   233,   118,   365,   138,  -141,
     365,   131,  -141,    20,   135,    48,    48,    48,    48,   297,
     314,   207,   233,   114,   146,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   164,   182,  -141,   233,  -141,  -141,
     121,  -141,   122,  -141,   123,  -141,   125,  -141,   136,   263,
     280,   233,   233,   176,    65,  -141,    17,   145,  -141,  -141,
    -141,   331,  -141,   365,    23,  -141,   398,   413,   427,   440,
     452,   463,    48,    48,    48,  -141,    48,  -141,   382,   144,
    -141,  -141,  -141,  -141,  -141,  -141,   179,    86,  -141,   174,
    -141,  -141,  -141,  -141,   233,   215,   148,    86,  -141,    65,
     365,   233,    13,   180,   184,   144,    33,    86,    24,  -141,
    -141,  -141
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     3,     2,    27,     0,
      97,     0,    25,     0,    13,    98,    14,     0,    28,    11,
       0,     8,    24,    29,     0,     4,    32,    19,     0,    16,
      17,     7,     9,    30,     0,     0,    12,    15,     0,     0,
       0,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    88,    90,    89,
      75,     0,    34,    33,    35,    36,    37,    38,    39,    40,
      41,    42,    43,     0,    77,    76,    91,    92,    93,    94,
      20,   113,   112,     0,    10,    31,   101,   104,   107,   110,
       0,     0,     0,     0,     0,     0,    75,    55,     0,    86,
      85,     0,    84,     0,     0,    63,    60,    61,    62,     0,
       0,    59,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,     0,    21,    18,
       0,    99,     0,   102,     0,   105,     0,   108,     0,     0,
       0,     0,     0,     0,     0,    54,     0,     0,    53,    45,
      44,     0,    82,    96,     0,    79,    69,    68,    70,    72,
      71,    64,    65,    66,    67,    47,    74,    46,     0,    73,
      22,   111,   100,   103,   106,   109,     0,     0,    56,     0,
      83,    52,    48,    81,     0,     0,     0,     0,    51,     0,
      95,     0,     0,    49,     0,    78,     0,     0,     0,    23,
      50,    57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,    -3,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,   168,  -141,  -141,  -141,  -141,  -141,     7,   183,
    -141,  -141,  -141,  -141,   -39,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,   -42,  -141,  -141,    59,  -140,
    -141,     6,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
     -46
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    62,    14,    20,    26,    31,    39,    21,    24,
       3,    28,    29,    38,    32,   128,   170,   186,    11,    12,
      23,    33,    40,    34,    63,    64,    65,    66,    67,    68,
      69,    70,   143,    71,    72,    73,    74,   101,   102,    75,
     154,    13,    76,    90,    77,    91,    78,    92,    79,    93,
      83
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    85,   104,    97,   179,   100,   112,   105,   106,   107,
     108,   109,   110,   111,     8,     1,    27,   -26,    41,   114,
      81,    81,     4,   -26,    42,    16,     5,   183,    -6,     6,
      30,    17,    35,   184,    30,    27,    84,   199,     9,    10,
       9,    10,    15,    17,    99,   113,   103,     9,    10,   194,
      49,    18,   139,   140,    50,    51,    52,   147,    36,     9,
      10,    19,    56,    57,    58,    59,    96,    61,    82,    82,
     151,   153,    42,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   166,   168,   131,   169,   132,    41,   141,   142,
      25,     6,   127,    42,    86,    87,    88,    89,    43,   166,
     168,    44,    45,    46,   100,     9,    10,    47,    48,    -5,
      56,    57,    58,    59,   133,    41,   134,    80,   152,    49,
     135,    42,   136,    50,    51,    52,    53,    54,    55,   129,
     130,    56,    57,    58,    59,    60,    61,   137,   188,   138,
     145,   146,   190,   169,   148,   130,    94,    49,   193,   195,
     155,    50,    51,    52,   181,   130,   144,    95,   200,    56,
      57,    58,    59,    96,    61,    41,    98,   172,   113,   173,
     171,    42,   174,   165,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    41,   175,   178,   141,   142,   127,    42,
     127,   167,   187,   189,   197,   201,    37,    49,   192,   196,
      22,    50,    51,    52,   198,   180,     0,     0,     0,    56,
      57,    58,    59,    96,    61,    49,    41,     0,     0,    50,
      51,    52,    42,     0,     0,     0,     0,    56,    57,    58,
      59,    96,    61,     0,    41,   115,   116,   117,   118,   119,
      42,   121,   122,   123,     0,     0,     0,     0,    49,     0,
       0,   127,    50,    51,    52,     0,     0,     0,     0,   191,
      56,    57,    58,    59,    96,    61,    49,   176,     0,     0,
      50,    51,    52,     0,     0,     0,     0,     0,    56,    57,
      58,    59,    96,    61,   177,     0,     0,     0,     0,     0,
       0,   115,   116,   117,   118,   119,   120,   121,   122,   123,
       0,     0,     0,   141,   142,     0,   149,   127,   115,   116,
     117,   118,   119,   120,   121,   122,   123,     0,     0,     0,
     141,   142,     0,   150,   127,   115,   116,   117,   118,   119,
     120,   121,   122,   123,     0,     0,     0,   141,   142,     0,
     182,   127,   115,   116,   117,   118,   119,   120,   121,   122,
     123,     0,     0,     0,   141,   142,     0,     0,   127,   115,
     116,   117,   118,   119,   120,   121,   122,   123,     0,     0,
       0,   141,   142,     0,     0,   127,   115,   116,   117,   118,
     119,   120,   121,   122,   123,     0,     0,     0,   124,   125,
       0,   126,   127,   115,   116,   117,   118,   119,   120,   121,
     122,   123,     0,     0,     0,   141,   142,     0,     0,   127,
     115,   116,   117,   118,   119,   120,   121,   122,   123,     0,
       0,     0,   141,   142,     0,     0,   185,   116,   117,   118,
     119,   120,   121,   122,   123,     0,     0,     0,   141,   142,
       0,     0,   127,   117,   118,   119,   120,   121,   122,   123,
       0,     0,     0,   141,   142,     0,     0,   127,   118,   119,
     120,   121,   122,   123,     0,     0,     0,   141,   142,     0,
       0,   127,   119,   120,   121,   122,   123,     0,     0,     0,
     141,   142,     0,     0,   127,   120,   121,   122,   123,     0,
       0,     0,   141,   142,     0,     0,   127,   121,   122,   123,
       0,     0,     0,   141,   142,     0,     0,   127
};

static const yytype_int16 yycheck[] =
{
       3,    40,    48,    45,   144,    47,    11,    49,    50,    51,
      52,    53,    54,    55,     1,     3,     1,     4,     1,    61,
       1,     1,    50,    10,     7,     4,     0,     4,     6,     5,
      24,    10,    26,    10,    28,     1,    39,     4,    25,    26,
      25,    26,    26,    10,    27,    50,    27,    25,    26,   189,
      33,    49,    94,    95,    37,    38,    39,   103,    24,    25,
      26,    23,    45,    46,    47,    48,    49,    50,    49,    49,
     112,   113,     7,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,     8,   127,    10,     1,    40,    41,
       6,     5,    44,     7,    45,    46,    47,    48,    12,   141,
     142,    15,    16,    17,   146,    25,    26,    21,    22,     6,
      45,    46,    47,    48,     8,     1,    10,    49,     4,    33,
       8,     7,    10,    37,    38,    39,    40,    41,    42,     9,
      10,    45,    46,    47,    48,    49,    50,     8,   177,    10,
       9,    10,   184,   185,     9,    10,    50,    33,   187,   191,
       4,    37,    38,    39,     9,    10,    18,    50,   197,    45,
      46,    47,    48,    49,    50,     1,    49,    45,    50,    46,
      49,     7,    47,     9,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     1,    48,     9,    40,    41,    44,     7,
      44,     9,    13,    19,    14,   198,    28,    33,    50,   192,
      17,    37,    38,    39,    20,   146,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    33,     1,    -1,    -1,    37,
      38,    39,     7,    -1,    -1,    -1,    -1,    45,    46,    47,
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
       9,    44,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    40,    41,    -1,    -1,    44,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    40,    41,    -1,    -1,    44,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    40,    41,
      -1,    -1,    44,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    40,    41,    -1,    -1,    44,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    40,    41,    -1,
      -1,    44,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      40,    41,    -1,    -1,    44,    33,    34,    35,    36,    -1,
      -1,    -1,    40,    41,    -1,    -1,    44,    34,    35,    36,
      -1,    -1,    -1,    40,    41,    -1,    -1,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    52,    61,    50,     0,     5,    53,     1,    25,
      26,    69,    70,    92,    54,    26,     4,    10,    49,    23,
      55,    59,    70,    71,    60,     6,    56,     1,    62,    63,
      92,    57,    65,    72,    74,    92,    24,    63,    64,    58,
      73,     1,     7,    12,    15,    16,    17,    21,    22,    33,
      37,    38,    39,    40,    41,    42,    45,    46,    47,    48,
      49,    50,    53,    75,    76,    77,    78,    79,    80,    81,
      82,    84,    85,    86,    87,    90,    93,    95,    97,    99,
      49,     1,    49,   101,    53,    75,    45,    46,    47,    48,
      94,    96,    98,   100,    50,    50,    49,    86,    49,    27,
      86,    88,    89,    27,   101,    86,    86,    86,    86,    86,
      86,    86,    11,    50,    86,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    40,    41,    43,    44,    66,     9,
      10,     8,    10,     8,    10,     8,    10,     8,    10,    86,
      86,    40,    41,    83,    18,     9,    10,   101,     9,     9,
       9,    86,     4,    86,    91,     4,    86,    86,    86,    86,
      86,    86,    86,    86,    86,     9,    86,     9,    86,    86,
      67,    49,    45,    46,    47,    48,     4,     4,     9,    90,
      89,     9,     9,     4,    10,    44,    68,    13,    75,    19,
      86,    44,    50,    75,    90,    86,    69,    14,    20,     4,
      75,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    54,    53,    55,    55,    56,    56,    58,
      57,    60,    59,    59,    61,    62,    62,    64,    63,    63,
      66,    67,    68,    65,    69,    69,    69,    69,    71,    70,
      73,    72,    74,    72,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    76,    76,    76,    77,    78,
      78,    79,    80,    80,    81,    83,    82,    84,    85,    85,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    87,    87,    88,    88,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    91,    91,    92,    92,    93,
      94,    94,    95,    96,    96,    97,    98,    98,    99,   100,
     100,   101,   101,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     4,     3,     2,     2,     0,     0,
       3,     0,     4,     0,     4,     2,     1,     0,     4,     1,
       0,     0,     0,     8,     3,     1,     0,     1,     0,     3,
       0,     3,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     4,     6,
       8,     5,     4,     3,     3,     0,     4,     8,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     6,     3,
       1,     4,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     2,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     1,     1
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
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 61 "semant.y" /* yacc.c:1646  */
    {TS_CleanBlock();}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 66 "semant.y" /* yacc.c:1646  */
    {esFunc = 1;}
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 66 "semant.y" /* yacc.c:1646  */
    {esFunc = 0;}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 68 "semant.y" /* yacc.c:1646  */
    {decVar = 1;}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 68 "semant.y" /* yacc.c:1646  */
    { decVar = 0;}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 73 "semant.y" /* yacc.c:1646  */
    {getType((yyvsp[0]));}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 75 "semant.y" /* yacc.c:1646  */
    {getType((yyvsp[-1]));}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 75 "semant.y" /* yacc.c:1646  */
    {decParam = 1;}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 75 "semant.y" /* yacc.c:1646  */
    {TS_AddFunction((yyvsp[-2]));}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 76 "semant.y" /* yacc.c:1646  */
    {decParam = 0;}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 77 "semant.y" /* yacc.c:1646  */
    {TS_UpdateNParams();}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 78 "semant.y" /* yacc.c:1646  */
    {TS_UpdateNParams();}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 81 "semant.y" /* yacc.c:1646  */
    {getType((yyvsp[-1]));}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 81 "semant.y" /* yacc.c:1646  */
    {TS_AddParam((yyvsp[-1]));}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 82 "semant.y" /* yacc.c:1646  */
    {decVar = 2;}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 83 "semant.y" /* yacc.c:1646  */
    {decVar = 2;}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 96 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-1]).type == BOOLEAN || (yyvsp[-1]).type == CHAR  || (yyvsp[-1]).type == LIST_INT || (yyvsp[-1]).type == LIST_DOUBLE || (yyvsp[-1]).type == LIST_CHAR || (yyvsp[-1]).type == LIST_BOOLEAN)
                        printf("Semantic Error(%d): Type not increaseable.\n", line);
                    (yyval).type = (yyvsp[-1]).type;}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 100 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-1]).type == BOOLEAN || (yyvsp[-1]).type == CHAR || (yyvsp[-1]).type == LIST_INT || (yyvsp[-1]).type == LIST_DOUBLE || (yyvsp[-1]).type == LIST_CHAR || (yyvsp[-1]).type == LIST_BOOLEAN)
                        printf("Semantic Error(%d): Type not decrementacle.\n", line);
                    (yyval).type = (yyvsp[-1]).type;}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 104 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type == BOOLEAN || (yyvsp[-2]).type == CHAR || (yyvsp[-2]).type == LIST_INT || (yyvsp[-1]).type == LIST_DOUBLE || (yyvsp[-1]).type == LIST_CHAR || (yyvsp[-1]).type == LIST_BOOLEAN)
                        printf("Semantic Error(%d): Type not increaseable.\n", line);
                    (yyval).type = (yyvsp[-2]).type;}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 108 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type == BOOLEAN || (yyvsp[-2]).type == CHAR || (yyvsp[-2]).type == LIST_INT || (yyvsp[-1]).type == LIST_DOUBLE || (yyvsp[-1]).type == LIST_CHAR || (yyvsp[-1]).type == LIST_BOOLEAN)
                        printf("Semantic Error(%d): Type not decrementable.\n", line);
                    (yyval).type = (yyvsp[-2]).type;}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 112 "semant.y" /* yacc.c:1646  */
    {if (TSGetId((yyvsp[-3])) != (yyvsp[-1]).type)
		      						printf("Semantic Error(%d): Types are not equal.\n",line);}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 115 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-3]).type != BOOLEAN)
                  printf("Semantic Error(%d): Expression are not logic.\n", line);}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 118 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-5]).type != BOOLEAN)
                  printf("Semantic Error(%d): Expression are not logic.\n", line);}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 121 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type != BOOLEAN)
                    printf("Semantic Error(%d): Expression are not logic.\n", line);}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 126 "semant.y" /* yacc.c:1646  */
    {TS_CheckReturn((yyvsp[0]),&(yyval));}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 132 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[0]).type != BOOLEAN)
              printf("Semantic Error(%d): Expression are not logic.\n", line);
          (yyval).type = (yyvsp[0]).type;}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 136 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[0]).type != LIST_INT && (yyvsp[0]).type != LIST_DOUBLE && (yyvsp[0]).type != LIST_BOOLEAN && (yyvsp[0]).type != LIST_CHAR)
              printf("Semantic Error(%d): Expression is not a list.\n", line);
          (yyval).type = INT;}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 140 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[0]).type != LIST_INT && (yyvsp[0]).type != LIST_DOUBLE && (yyvsp[0]).type != LIST_BOOLEAN && (yyvsp[0]).type != LIST_CHAR)
              printf("Semantic Error(%d): Types not operable.\n", line);
          if ((yyvsp[0]).type == LIST_INT)
              (yyval).type = INT;
          else if ((yyvsp[0]).type == LIST_DOUBLE)
              (yyval).type = DOUBLE;
          else if ((yyvsp[0]).type == LIST_BOOLEAN)
              (yyval).type = BOOLEAN;
          else if ((yyvsp[0]).type == LIST_CHAR)
              (yyval).type = CHAR;}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 151 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[0]).type == BOOLEAN || (yyvsp[0]).type == CHAR || (yyvsp[0]).type == LIST_INT || (yyvsp[0]).type == LIST_DOUBLE || (yyvsp[0]).type == LIST_CHAR || (yyvsp[0]).type == LIST_BOOLEAN)
              printf("Semantic Error(%d): Type not signable.\n", line);
          (yyval).type = (yyvsp[0]).type;}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 155 "semant.y" /* yacc.c:1646  */
    {int res = INT;
					if ((yyvsp[-2]).type == BOOLEAN || (yyvsp[-2]).type == CHAR || (yyvsp[0]).type == BOOLEAN || (yyvsp[0]).type == CHAR)
              printf("Semantic Error(%d): Types not operable.\n", line);
          if ((yyvsp[0]).type == LIST_INT || (yyvsp[0]).type == LIST_DOUBLE || (yyvsp[0]).type == LIST_BOOLEAN || (yyvsp[0]).type == LIST_CHAR)
              printf("Semantic Error(%d): Types not operable.\n", line);
          if ((yyvsp[-2]).type == DOUBLE || (yyvsp[0]).type == DOUBLE)
            res = DOUBLE;
          if (((yyvsp[-2]).type == LIST_INT || (yyvsp[-2]).type == LIST_DOUBLE || (yyvsp[-2]).type == LIST_BOOLEAN || (yyvsp[-2]).type == LIST_CHAR) &&
					((yyvsp[0]).type != LIST_INT && (yyvsp[0]).type != LIST_DOUBLE && (yyvsp[0]).type != LIST_BOOLEAN && (yyvsp[0]).type != LIST_CHAR))
            res = (yyvsp[-2]).type;
					(yyval).type = res;}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 167 "semant.y" /* yacc.c:1646  */
    {int res = INT;
					if ((yyvsp[-2]).type == BOOLEAN || (yyvsp[-2]).type == CHAR || (yyvsp[0]).type == BOOLEAN || (yyvsp[0]).type == CHAR)
              printf("Semantic Error(%d): Types not operable.\n", line);
           if (((yyvsp[-2]).type == LIST_INT || (yyvsp[-2]).type == LIST_DOUBLE || (yyvsp[-2]).type == LIST_BOOLEAN || (yyvsp[-2]).type == LIST_CHAR)
              && ((yyvsp[0]).type == LIST_INT || (yyvsp[0]).type == LIST_DOUBLE || (yyvsp[0]).type == LIST_BOOLEAN || (yyvsp[0]).type == LIST_CHAR))
              printf("Semantic Error(%d): Types not operable.\n", line);
          if ((yyvsp[-2]).type == DOUBLE || (yyvsp[0]).type == DOUBLE)
            res = DOUBLE;
          if ((yyvsp[-2]).type == LIST_INT || (yyvsp[-2]).type == LIST_DOUBLE || (yyvsp[-2]).type == LIST_BOOLEAN || (yyvsp[-2]).type == LIST_CHAR)
            res == (yyvsp[-2]).type;
          if ((yyvsp[0]).type == LIST_INT || (yyvsp[0]).type == LIST_DOUBLE || (yyvsp[0]).type == LIST_BOOLEAN || (yyvsp[0]).type == LIST_CHAR)
            res == (yyvsp[0]).type;
					(yyval).type = res;}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 181 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type != LIST_INT && (yyvsp[-2]).type != LIST_DOUBLE && (yyvsp[-2]).type != LIST_BOOLEAN && (yyvsp[-2]).type != LIST_CHAR
              || (yyvsp[0]).type != INT)
              printf("Semantic Error(%d): Types not operable.\n", line);
          (yyval).type = (yyvsp[-2]).type;}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 186 "semant.y" /* yacc.c:1646  */
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
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 197 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type != BOOLEAN && (yyvsp[0]).type != BOOLEAN)
              printf("Semantic Error(%d): Expression are not logic.\n", line);
          (yyval).type = BOOLEAN;}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 201 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type != BOOLEAN && (yyvsp[0]).type != BOOLEAN)
              printf("Semantic Error(%d): Expression are not logic.\n", line);
          (yyval).type = BOOLEAN;}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 205 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type != BOOLEAN && (yyvsp[0]).type != BOOLEAN)
              printf("Semantic Error(%d): Expression are not logic.\n", line);
          (yyval).type = BOOLEAN;}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 209 "semant.y" /* yacc.c:1646  */
    {if (TSGetId((yyvsp[-2])) == BOOLEAN || TSGetId((yyvsp[0])) == BOOLEAN || TSGetId((yyvsp[-2])) == CHAR || TSGetId((yyvsp[0])) == CHAR
              || TSGetId((yyvsp[-2])) == LIST_INT || TSGetId((yyvsp[-2])) == LIST_DOUBLE || TSGetId((yyvsp[-2])) == LIST_BOOLEAN || TSGetId((yyvsp[-2]))== LIST_CHAR
              || TSGetId((yyvsp[0])) == LIST_INT || TSGetId((yyvsp[0])) == LIST_DOUBLE || TSGetId((yyvsp[0])) == LIST_BOOLEAN || TSGetId((yyvsp[0]))== LIST_CHAR)
              printf("Semantic Error(%d): Types not comparable, izquierda: %d, derecha %d.\n",line, (yyvsp[-2]).type, (yyvsp[0]).type);
          (yyval).type = BOOLEAN;}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 215 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type != (yyvsp[0]).type)
              if ((yyvsp[-2]).type == INT || (yyvsp[0]).type == INT || (yyvsp[-2]).type == DOUBLE || (yyvsp[0]).type == DOUBLE){
              } else
                  printf("Semantic Error(%d): Types not comparable.\n", line);
          (yyval).type = BOOLEAN;}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 221 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type != LIST_INT && (yyvsp[-2]).type != LIST_DOUBLE && (yyvsp[-2]).type != LIST_BOOLEAN && (yyvsp[-2]).type != LIST_CHAR
              && (yyvsp[0]).type != INT)
              printf("Semantic Error(%d): Types not operable.\n", line);
          if ((yyvsp[-2]).type == INT)
              (yyval).type = INT;
          else if ((yyvsp[-2]).type == DOUBLE)
              (yyval).type = DOUBLE;
          else if ((yyvsp[-2]).type == BOOLEAN)
              (yyval).type = BOOLEAN;
          else if ((yyvsp[-2]).type == CHAR)
              (yyval).type = CHAR;}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 233 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-2]).type != LIST_INT && (yyvsp[-2]).type != LIST_DOUBLE && (yyvsp[-2]).type != LIST_BOOLEAN && (yyvsp[-2]).type != LIST_CHAR
              && (yyvsp[0]).type != INT)
              printf("Semantic Error(%d): Types not operable.\n", line);
          (yyval).type = (yyvsp[-2]).type;}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 237 "semant.y" /* yacc.c:1646  */
    {(yyval).type = TSGetId((yyvsp[0]));}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 238 "semant.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 239 "semant.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type;}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 241 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[-5]).type != LIST_INT && (yyvsp[-5]).type != LIST_DOUBLE && (yyvsp[-5]).type != LIST_BOOLEAN && (yyvsp[-5]).type != LIST_CHAR
                && (yyvsp[-3]).type != INT && (yyvsp[0]).type != INT)
              printf("Semantic Error(%d): Types not operable.\n", line);
          (yyval).type = (yyvsp[-5]).type;}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 245 "semant.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[-1]).type;}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 250 "semant.y" /* yacc.c:1646  */
    {nParams++; TS_CheckParam((yyvsp[-2]), nParams);}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 251 "semant.y" /* yacc.c:1646  */
    {nParams = 1; TS_CheckParam((yyvsp[0]), nParams);}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 254 "semant.y" /* yacc.c:1646  */
    {(yyval).type = INT;}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 255 "semant.y" /* yacc.c:1646  */
    {(yyval).type = DOUBLE;}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 256 "semant.y" /* yacc.c:1646  */
    {(yyval).type = CHAR;}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 257 "semant.y" /* yacc.c:1646  */
    {(yyval).type = BOOLEAN;}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 265 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[0]).type == INT)
															(yyval).type = INT;
													else if ((yyvsp[0]).type == DOUBLE)
															(yyval).type = DOUBLE;
													else if ((yyvsp[0]).type == CHAR)
															(yyval).type = CHAR;
													else if ((yyvsp[0]).type == BOOLEAN)
															(yyval).type = BOOLEAN;}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 274 "semant.y" /* yacc.c:1646  */
    {if ((yyvsp[0]).type == INT)
															(yyval).type = LIST_INT;
													else if ((yyvsp[0]).type == DOUBLE)
															(yyval).type = LIST_DOUBLE;
													else if ((yyvsp[0]).type == CHAR)
															(yyval).type = LIST_CHAR;
													else if ((yyvsp[0]).type == BOOLEAN)
															(yyval).type = LIST_BOOLEAN;}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 283 "semant.y" /* yacc.c:1646  */
    {(yyval).type = LIST_INT;}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 288 "semant.y" /* yacc.c:1646  */
    {(yyval).type = LIST_DOUBLE;}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 292 "semant.y" /* yacc.c:1646  */
    {(yyval).type = LIST_BOOLEAN;}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 296 "semant.y" /* yacc.c:1646  */
    {(yyval).type = LIST_CHAR;}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 301 "semant.y" /* yacc.c:1646  */
    {if (decVar == 1)
						TS_AddVar((yyvsp[0]));
					else
						if (decParam == 0)
							TS_GetId((yyvsp[0]), &(yyval));}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 307 "semant.y" /* yacc.c:1646  */
    {if (decVar == 1)
						TS_AddVar((yyvsp[0]));
					else
						if (decParam == 0)
							TS_GetId((yyvsp[0]), &(yyval));}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1949 "y.tab.c" /* yacc.c:1646  */
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
#line 315 "semant.y" /* yacc.c:1906  */



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
