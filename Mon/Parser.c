/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         semantico_parse
#define yylex           semantico_lex
#define yyerror         semantico_error
#define yydebug         semantico_debug
#define yynerrs         semantico_nerrs

/* First part of user prologue.  */
#line 20 "semantico.y"

/* Begin C preamble code */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Absyn.h"

#define YYMAXDEPTH 10000000

/* The type yyscan_t is defined by flex, but we need it in the parser already. */
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern YY_BUFFER_STATE semantico__scan_string(const char *str, yyscan_t scanner);
extern void semantico__delete_buffer(YY_BUFFER_STATE buf, yyscan_t scanner);

extern void semantico_lex_destroy(yyscan_t scanner);
extern char* semantico_get_text(yyscan_t scanner);

extern yyscan_t semantico__initialize_lexer(FILE * inp);

/* List reversal functions. */

/* End C preamble code */

#line 105 "Parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_SEMANTICO_BISON_H_INCLUDED
# define YY_SEMANTICO_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int semantico_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _ERROR_ = 258,
    _LPAREN = 259,
    _RPAREN = 260,
    _STAR = 261,
    _PLUS = 262,
    _MINUS = 263,
    _DOT = 264,
    _SLASH = 265,
    _COLON = 266,
    _COLONEQ = 267,
    _SEMI = 268,
    _LT = 269,
    _LDARROW = 270,
    _LTGT = 271,
    _EQ = 272,
    _GT = 273,
    _GTEQ = 274,
    _KW_AND = 275,
    _KW_BEGIN = 276,
    _KW_CASE = 277,
    _KW_CHAR = 278,
    _KW_CONST = 279,
    _KW_DE = 280,
    _KW_DO = 281,
    _KW_ELSE = 282,
    _KW_ELSIF = 283,
    _KW_END = 284,
    _KW_FOR = 285,
    _KW_IF = 286,
    _KW_INTEGER = 287,
    _KW_MODULE = 288,
    _KW_NOT = 289,
    _KW_OF = 290,
    _KW_OR = 291,
    _KW_REAL = 292,
    _KW_REGISTRO = 293,
    _KW_STRING = 294,
    _KW_THEN = 295,
    _KW_TO = 296,
    _KW_TYPE = 297,
    _KW_VAR = 298,
    _KW_VETOR = 299,
    _KW_WHILE = 300,
    _LBRACK = 301,
    _RBRACK = 302,
    _STRING_ = 303,
    _CHAR_ = 304,
    _INTEGER_ = 305,
    _DOUBLE_ = 306,
    _IDENT_ = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 51 "semantico.y"

  int    _int;
  char   _char;
  double _double;
  char*  _string;
  Progr progr_;
  BlocoDec blocodec_;
  BlocoConstante blococonstante_;
  RegraConstante regraconstante_;
  RegraDec regradec_;
  BlocoVar blocovar_;
  RegraDecVar regradecvar_;
  BlocoType blocotype_;
  RegraType regratype_;
  RegraDecVetor regradecvetor_;
  RegraDecStruct regradecstruct_;
  BlocoStmt blocostmt_;
  RegraStmt regrastmt_;
  Stmt stmt_;
  Atribuicao atribuicao_;
  AtribuicaoVetor atribuicaovetor_;
  AtribuicaoStruct atribuicaostruct_;
  Valor valor_;
  RExpr rexpr_;
  Opa opa_;
  ExpressaoLogica expressaologica_;
  If if_;
  IfStmt ifstmt_;
  ElseStmt elsestmt_;
  ElsIfStmt elsifstmt_;
  While while_;
  For for_;
  Case case_;
  CaseStmt casestmt_;
  Type type_;
  OperadoresLogicos operadoreslogicos_;
  ConectivosLogicos conectivoslogicos_;

#line 249 "Parser.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int semantico_parse (yyscan_t scanner, YYSTYPE *result);

#endif /* !YY_SEMANTICO_BISON_H_INCLUDED  */

/* Second part of user prologue.  */
#line 90 "semantico.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, semantico_get_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 290 "Parser.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   164

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  164

#define YYUNDEFTOK  2
#define YYMAXUTOK   307


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   192,   192,   194,   195,   196,   197,   199,   201,   202,
     204,   205,   207,   209,   210,   212,   214,   215,   216,   217,
     219,   221,   222,   224,   226,   227,   228,   230,   231,   232,
     233,   234,   235,   237,   238,   239,   241,   242,   244,   245,
     247,   248,   249,   250,   252,   253,   254,   256,   257,   258,
     260,   261,   262,   264,   265,   266,   267,   269,   270,   272,
     273,   274,   275,   277,   279,   281,   283,   285,   287,   289,
     290,   292,   293,   294,   295,   297,   298,   299,   300,   301,
     302,   304,   305,   306
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_ERROR_", "_LPAREN", "_RPAREN", "_STAR",
  "_PLUS", "_MINUS", "_DOT", "_SLASH", "_COLON", "_COLONEQ", "_SEMI",
  "_LT", "_LDARROW", "_LTGT", "_EQ", "_GT", "_GTEQ", "_KW_AND",
  "_KW_BEGIN", "_KW_CASE", "_KW_CHAR", "_KW_CONST", "_KW_DE", "_KW_DO",
  "_KW_ELSE", "_KW_ELSIF", "_KW_END", "_KW_FOR", "_KW_IF", "_KW_INTEGER",
  "_KW_MODULE", "_KW_NOT", "_KW_OF", "_KW_OR", "_KW_REAL", "_KW_REGISTRO",
  "_KW_STRING", "_KW_THEN", "_KW_TO", "_KW_TYPE", "_KW_VAR", "_KW_VETOR",
  "_KW_WHILE", "_LBRACK", "_RBRACK", "_STRING_", "_CHAR_", "_INTEGER_",
  "_DOUBLE_", "_IDENT_", "$accept", "Progr", "BlocoDec", "BlocoConstante",
  "RegraConstante", "RegraDec", "BlocoVar", "RegraDecVar", "BlocoType",
  "RegraType", "RegraDecVetor", "RegraDecStruct", "BlocoStmt", "RegraStmt",
  "Stmt", "Atribuicao", "AtribuicaoVetor", "AtribuicaoStruct", "Valor",
  "RExpr", "Opa", "Opa1", "Opa2", "ExpressaoLogica", "If", "IfStmt",
  "ElseStmt", "ElsIfStmt", "While", "For", "Case", "CaseStmt", "Type",
  "OperadoresLogicos", "ConectivosLogicos", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

#define YYPACT_NINF (-98)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-63)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -20,   -18,    47,    37,   -98,    -6,     0,    32,    42,    86,
      -6,    -6,    -6,   110,   -98,   105,   -98,    32,    32,   112,
     111,   -98,     8,   -98,   -98,   -98,     9,   -33,   -98,   -98,
       9,    42,    16,    73,   106,    74,    13,    13,   -98,   -98,
      -2,    99,     8,   116,   -98,   -98,    15,    39,   -98,   117,
     -12,   118,   119,   120,   -98,   -98,   -98,   -98,   -98,   121,
     109,    87,    42,   -98,   -98,    94,   100,     8,   -98,    -2,
      95,   -98,   -98,    85,    90,    98,   -98,    56,    19,   101,
     113,    88,    13,    92,    91,   -98,   -98,    16,    16,   -98,
      16,    16,   -98,   106,    13,   -98,   122,   -98,   -98,   -98,
      61,    42,   123,   -98,   -98,   106,   115,    13,   -98,   -98,
     -98,   -98,   -98,   -98,    13,   106,   106,   133,   -98,   103,
     137,    39,    39,   -98,   -98,   -98,   107,   -98,   -98,   -98,
     138,   124,     9,   -98,   -98,   126,    49,   -98,   -98,    28,
     142,   -98,   106,     0,   108,   143,   106,   -98,   -98,   -98,
      13,   -98,   -98,    38,   -98,   -98,   140,   -98,   -98,   -98,
     -98,   -98,   -98,   125
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     6,     0,     0,     0,     0,
       6,     6,     6,     0,     7,     0,    15,    16,    18,     0,
       0,    12,    26,     3,     4,     5,     0,     0,    17,    19,
       0,    13,     0,     0,     0,     0,     0,     0,    53,    54,
      55,     0,    24,     0,    34,    35,     0,    49,    52,     0,
      59,     0,     0,     0,    68,    73,    71,    72,    74,     0,
       0,     0,    10,    14,    55,     0,     0,    26,    70,     0,
       0,    40,    41,    43,    42,    45,    44,     0,    46,     0,
       0,     0,     0,     0,     0,    25,    27,     0,     0,    28,
       0,     0,    29,     0,     0,    60,     0,    30,    31,    32,
       0,     0,     0,    11,    56,     0,     0,     0,    76,    78,
      80,    79,    75,    77,     0,     0,     0,     0,    33,     0,
       0,    47,    48,    50,    51,    64,     0,    61,    43,    42,
       0,     0,     0,    69,    23,     0,    57,    63,    66,     0,
       0,     2,     0,     8,    21,     0,     0,    81,    83,    82,
       0,    39,    38,     0,    65,     9,     0,    22,    20,    67,
      58,    37,    36,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -98,   104,   -98,    12,   -58,   -98,   127,   -98,    64,
     -98,    17,   -91,   -36,   -98,   129,   -98,   -98,   -97,   -74,
     -13,    30,    29,   -37,   -98,   -98,    63,   -98,   -98,   -98,
     -98,   -98,   -29,   -98,   -98
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    14,    20,    11,    21,    12,    16,
      17,    18,    68,    41,    42,    43,    44,    45,    76,    77,
      78,    47,    48,    79,    49,    50,    95,    96,    51,    52,
      53,    54,    59,   114,   150
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,    62,   125,   130,   103,    60,    85,    81,   118,    46,
      82,    61,    32,     1,   133,    93,    94,    32,     6,    65,
      32,   -62,    87,    88,   137,   138,    87,    88,    89,    46,
      33,   106,    55,   135,     3,    34,     7,     8,    35,    36,
     136,    56,   152,   131,    83,    90,    57,     4,    58,    91,
       5,   154,    13,    37,    46,   159,   162,   126,    38,    39,
      40,    71,    72,    73,    74,    75,    38,    39,    64,   147,
     108,   109,   110,   111,   112,   113,    71,    72,   128,   129,
     151,    28,    29,   148,    15,   149,    71,    72,   128,   129,
     161,   -53,   -53,   -53,    19,   -53,   -54,   -54,   -54,   104,
     -54,    87,    88,   145,   -55,   -55,   -55,    22,   -55,    71,
      72,   128,   129,   160,    23,    24,    25,   121,   122,   123,
     124,    26,    27,    30,    31,    66,    69,    67,    84,    86,
      92,    97,    98,    99,   101,   105,   107,   102,   100,   116,
     117,   115,   119,   120,   134,   139,   141,   142,   132,    93,
     140,   143,   146,   144,   153,   155,   158,   163,    63,   127,
     156,   157,     0,    60,    70
};

static const yytype_int16 yycheck[] =
{
      37,    30,    93,   100,    62,    38,    42,     9,    82,    22,
      12,    44,     4,    33,   105,    27,    28,     4,    24,    32,
       4,    13,     7,     8,   115,   116,     7,     8,    13,    42,
      22,    67,    23,   107,    52,    27,    42,    43,    30,    31,
     114,    32,   139,   101,    46,     6,    37,     0,    39,    10,
      13,   142,    52,    45,    67,   146,   153,    94,    50,    51,
      52,    48,    49,    50,    51,    52,    50,    51,    52,    20,
      14,    15,    16,    17,    18,    19,    48,    49,    50,    51,
      52,    17,    18,    34,    52,    36,    48,    49,    50,    51,
      52,     6,     7,     8,    52,    10,     6,     7,     8,     5,
      10,     7,     8,   132,     6,     7,     8,    21,    10,    48,
      49,    50,    51,   150,    10,    11,    12,    87,    88,    90,
      91,    11,    17,    11,    13,    52,    52,    21,    29,    13,
      13,    13,    13,    13,    25,    35,    41,    50,    17,    26,
      52,    40,    50,    52,    29,    12,     9,    40,    25,    27,
      47,    13,    26,    29,    12,   143,    13,    17,    31,    96,
      52,   144,    -1,    38,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    54,    52,     0,    13,    24,    42,    43,    55,
      56,    59,    61,    52,    57,    52,    62,    63,    64,    52,
      58,    60,    21,    55,    55,    55,    11,    17,    62,    62,
      11,    13,     4,    22,    27,    30,    31,    45,    50,    51,
      52,    66,    67,    68,    69,    70,    73,    74,    75,    77,
      78,    81,    82,    83,    84,    23,    32,    37,    39,    85,
      38,    44,    85,    60,    52,    73,    52,    21,    65,    52,
      68,    48,    49,    50,    51,    52,    71,    72,    73,    76,
      76,     9,    12,    46,    29,    66,    13,     7,     8,    13,
       6,    10,    13,    27,    28,    79,    80,    13,    13,    13,
      17,    25,    50,    58,     5,    35,    66,    41,    14,    15,
      16,    17,    18,    19,    86,    40,    26,    52,    72,    50,
      52,    74,    74,    75,    75,    65,    76,    79,    50,    51,
      71,    58,    25,    65,    29,    72,    72,    65,    65,    12,
      47,     9,    40,    13,    29,    85,    26,    20,    34,    36,
      87,    52,    71,    12,    65,    57,    52,    64,    13,    65,
      76,    52,    71,    17
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    55,    55,    55,    56,    57,    57,
      58,    58,    59,    60,    60,    61,    62,    62,    62,    62,
      63,    64,    64,    65,    66,    66,    66,    67,    67,    67,
      67,    67,    67,    68,    68,    68,    69,    69,    70,    70,
      71,    71,    71,    71,    72,    72,    72,    73,    73,    73,
      74,    74,    74,    75,    75,    75,    75,    76,    76,    77,
      77,    77,    77,    78,    79,    80,    81,    82,    83,    84,
      84,    85,    85,    85,    85,    86,    86,    86,    86,    86,
      86,    87,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     9,     2,     2,     2,     0,     2,     6,     7,
       3,     4,     2,     2,     3,     2,     1,     2,     1,     2,
       7,     6,     7,     3,     1,     2,     0,     2,     2,     2,
       2,     2,     2,     3,     1,     1,     6,     6,     5,     5,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     3,     1,     1,     1,     1,     3,     3,     5,     1,
       2,     3,     0,     4,     2,     4,     4,     6,     1,     4,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (&yylloc, scanner, result, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, scanner, result); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (result);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, scanner, result);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t scanner, YYSTYPE *result)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , scanner, result);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, result); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (result);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, YYSTYPE *result)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 192 "semantico.y"
                                                                                   { (yyval.progr_) = make_Program((yyvsp[-7]._string), (yyvsp[-5].blocodec_), (yyvsp[-3].regrastmt_), (yyvsp[-1]._string)); result->progr_ = (yyval.progr_); }
#line 1679 "Parser.c"
    break;

  case 3:
#line 194 "semantico.y"
                                   { (yyval.blocodec_) = make_BlocoDec1((yyvsp[-1].blococonstante_), (yyvsp[0].blocodec_)); result->blocodec_ = (yyval.blocodec_); }
#line 1685 "Parser.c"
    break;

  case 4:
#line 195 "semantico.y"
                      { (yyval.blocodec_) = make_BlocoDec2((yyvsp[-1].blocovar_), (yyvsp[0].blocodec_)); result->blocodec_ = (yyval.blocodec_); }
#line 1691 "Parser.c"
    break;

  case 5:
#line 196 "semantico.y"
                       { (yyval.blocodec_) = make_BlocoDec3((yyvsp[-1].blocotype_), (yyvsp[0].blocodec_)); result->blocodec_ = (yyval.blocodec_); }
#line 1697 "Parser.c"
    break;

  case 6:
#line 197 "semantico.y"
                { (yyval.blocodec_) = make_BlocoDec_(); result->blocodec_ = (yyval.blocodec_); }
#line 1703 "Parser.c"
    break;

  case 7:
#line 199 "semantico.y"
                                          { (yyval.blococonstante_) = make_BlocoConstante1((yyvsp[0].regraconstante_)); result->blococonstante_ = (yyval.blococonstante_); }
#line 1709 "Parser.c"
    break;

  case 8:
#line 201 "semantico.y"
                                                     { (yyval.regraconstante_) = make_RegraConstante1((yyvsp[-5]._string), (yyvsp[-3].type_), (yyvsp[-1].valor_)); result->regraconstante_ = (yyval.regraconstante_); }
#line 1715 "Parser.c"
    break;

  case 9:
#line 202 "semantico.y"
                                                       { (yyval.regraconstante_) = make_RegraConstante2((yyvsp[-6]._string), (yyvsp[-4].type_), (yyvsp[-2].valor_), (yyvsp[0].regraconstante_)); result->regraconstante_ = (yyval.regraconstante_); }
#line 1721 "Parser.c"
    break;

  case 10:
#line 204 "semantico.y"
                               { (yyval.regradec_) = make_RegraDec1((yyvsp[-2]._string), (yyvsp[0].type_)); result->regradec_ = (yyval.regradec_); }
#line 1727 "Parser.c"
    break;

  case 11:
#line 205 "semantico.y"
                                 { (yyval.regradec_) = make_RegraDec2((yyvsp[-3]._string), (yyvsp[-1].type_), (yyvsp[0].regradec_)); result->regradec_ = (yyval.regradec_); }
#line 1733 "Parser.c"
    break;

  case 12:
#line 207 "semantico.y"
                               { (yyval.blocovar_) = make_BlocoVar1((yyvsp[0].regradecvar_)); result->blocovar_ = (yyval.blocovar_); }
#line 1739 "Parser.c"
    break;

  case 13:
#line 209 "semantico.y"
                             { (yyval.regradecvar_) = make_RegraDecVar1((yyvsp[-1].regradec_)); result->regradecvar_ = (yyval.regradecvar_); }
#line 1745 "Parser.c"
    break;

  case 14:
#line 210 "semantico.y"
                               { (yyval.regradecvar_) = make_RegraDecVar2((yyvsp[-2].regradec_), (yyvsp[0].regradecvar_)); result->regradecvar_ = (yyval.regradecvar_); }
#line 1751 "Parser.c"
    break;

  case 15:
#line 212 "semantico.y"
                               { (yyval.blocotype_) = make_BlocoType1((yyvsp[0].regratype_)); result->blocotype_ = (yyval.blocotype_); }
#line 1757 "Parser.c"
    break;

  case 16:
#line 214 "semantico.y"
                          { (yyval.regratype_) = make_RegraTypeRegraDecVetor((yyvsp[0].regradecvetor_)); result->regratype_ = (yyval.regratype_); }
#line 1763 "Parser.c"
    break;

  case 17:
#line 215 "semantico.y"
                            { (yyval.regratype_) = make_RegraType1((yyvsp[-1].regradecvetor_), (yyvsp[0].regratype_)); result->regratype_ = (yyval.regratype_); }
#line 1769 "Parser.c"
    break;

  case 18:
#line 216 "semantico.y"
                   { (yyval.regratype_) = make_RegraTypeRegraDecStruct((yyvsp[0].regradecstruct_)); result->regratype_ = (yyval.regratype_); }
#line 1775 "Parser.c"
    break;

  case 19:
#line 217 "semantico.y"
                             { (yyval.regratype_) = make_RegraType2((yyvsp[-1].regradecstruct_), (yyvsp[0].regratype_)); result->regratype_ = (yyval.regratype_); }
#line 1781 "Parser.c"
    break;

  case 20:
#line 219 "semantico.y"
                                                                  { (yyval.regradecvetor_) = make_RegraDecVetor1((yyvsp[-6]._string), (yyvsp[-3]._int), (yyvsp[-1].type_)); result->regradecvetor_ = (yyval.regradecvetor_); }
#line 1787 "Parser.c"
    break;

  case 21:
#line 221 "semantico.y"
                                                                  { (yyval.regradecstruct_) = make_RegraDecStruct1((yyvsp[-5]._string), (yyvsp[-1].regradec_)); result->regradecstruct_ = (yyval.regradecstruct_); }
#line 1793 "Parser.c"
    break;

  case 22:
#line 222 "semantico.y"
                                                                    { (yyval.regradecstruct_) = make_RegraDecStruct2((yyvsp[-6]._string), (yyvsp[-2].regradec_), (yyvsp[0].regradecstruct_)); result->regradecstruct_ = (yyval.regradecstruct_); }
#line 1799 "Parser.c"
    break;

  case 23:
#line 224 "semantico.y"
                                        { (yyval.blocostmt_) = make_BlocoStmt1((yyvsp[-1].regrastmt_)); result->blocostmt_ = (yyval.blocostmt_); }
#line 1805 "Parser.c"
    break;

  case 24:
#line 226 "semantico.y"
                 { (yyval.regrastmt_) = make_RegraStmtStmt((yyvsp[0].stmt_)); result->regrastmt_ = (yyval.regrastmt_); }
#line 1811 "Parser.c"
    break;

  case 25:
#line 227 "semantico.y"
                   { (yyval.regrastmt_) = make_RegraStmt1((yyvsp[-1].stmt_), (yyvsp[0].regrastmt_)); result->regrastmt_ = (yyval.regrastmt_); }
#line 1817 "Parser.c"
    break;

  case 26:
#line 228 "semantico.y"
                { (yyval.regrastmt_) = make_RegraStmt_(); result->regrastmt_ = (yyval.regrastmt_); }
#line 1823 "Parser.c"
    break;

  case 27:
#line 230 "semantico.y"
                        { (yyval.stmt_) = make_Stmt1((yyvsp[-1].atribuicao_)); result->stmt_ = (yyval.stmt_); }
#line 1829 "Parser.c"
    break;

  case 28:
#line 231 "semantico.y"
              { (yyval.stmt_) = make_Stmt2((yyvsp[-1].opa_)); result->stmt_ = (yyval.stmt_); }
#line 1835 "Parser.c"
    break;

  case 29:
#line 232 "semantico.y"
             { (yyval.stmt_) = make_Stmt3((yyvsp[-1].if_)); result->stmt_ = (yyval.stmt_); }
#line 1841 "Parser.c"
    break;

  case 30:
#line 233 "semantico.y"
                { (yyval.stmt_) = make_Stmt4((yyvsp[-1].while_)); result->stmt_ = (yyval.stmt_); }
#line 1847 "Parser.c"
    break;

  case 31:
#line 234 "semantico.y"
              { (yyval.stmt_) = make_Stmt5((yyvsp[-1].for_)); result->stmt_ = (yyval.stmt_); }
#line 1853 "Parser.c"
    break;

  case 32:
#line 235 "semantico.y"
               { (yyval.stmt_) = make_Stmt6((yyvsp[-1].case_)); result->stmt_ = (yyval.stmt_); }
#line 1859 "Parser.c"
    break;

  case 33:
#line 237 "semantico.y"
                                    { (yyval.atribuicao_) = make_Atribuicao1((yyvsp[-2]._string), (yyvsp[0].rexpr_)); result->atribuicao_ = (yyval.atribuicao_); }
#line 1865 "Parser.c"
    break;

  case 34:
#line 238 "semantico.y"
                    { (yyval.atribuicao_) = make_AtribuicaoAtribuicaoVetor((yyvsp[0].atribuicaovetor_)); result->atribuicao_ = (yyval.atribuicao_); }
#line 1871 "Parser.c"
    break;

  case 35:
#line 239 "semantico.y"
                     { (yyval.atribuicao_) = make_AtribuicaoAtribuicaoStruct((yyvsp[0].atribuicaostruct_)); result->atribuicao_ = (yyval.atribuicao_); }
#line 1877 "Parser.c"
    break;

  case 36:
#line 241 "semantico.y"
                                                                   { (yyval.atribuicaovetor_) = make_AtribuicaoVetor1((yyvsp[-5]._string), (yyvsp[-3]._int), (yyvsp[0].valor_)); result->atribuicaovetor_ = (yyval.atribuicaovetor_); }
#line 1883 "Parser.c"
    break;

  case 37:
#line 242 "semantico.y"
                                                       { (yyval.atribuicaovetor_) = make_AtribuicaoVetor2((yyvsp[-5]._string), (yyvsp[-3]._int), (yyvsp[0]._string)); result->atribuicaovetor_ = (yyval.atribuicaovetor_); }
#line 1889 "Parser.c"
    break;

  case 38:
#line 244 "semantico.y"
                                                       { (yyval.atribuicaostruct_) = make_AtribuicaoStruct1((yyvsp[-4]._string), (yyvsp[-2]._string), (yyvsp[0].valor_)); result->atribuicaostruct_ = (yyval.atribuicaostruct_); }
#line 1895 "Parser.c"
    break;

  case 39:
#line 245 "semantico.y"
                                          { (yyval.atribuicaostruct_) = make_AtribuicaoStruct2((yyvsp[-4]._string), (yyvsp[-2]._string), (yyvsp[0]._string)); result->atribuicaostruct_ = (yyval.atribuicaostruct_); }
#line 1901 "Parser.c"
    break;

  case 40:
#line 247 "semantico.y"
                 { (yyval.valor_) = make_ValorString((yyvsp[0]._string)); result->valor_ = (yyval.valor_); }
#line 1907 "Parser.c"
    break;

  case 41:
#line 248 "semantico.y"
           { (yyval.valor_) = make_ValorChar((yyvsp[0]._char)); result->valor_ = (yyval.valor_); }
#line 1913 "Parser.c"
    break;

  case 42:
#line 249 "semantico.y"
             { (yyval.valor_) = make_ValorDouble((yyvsp[0]._double)); result->valor_ = (yyval.valor_); }
#line 1919 "Parser.c"
    break;

  case 43:
#line 250 "semantico.y"
              { (yyval.valor_) = make_ValorInteger((yyvsp[0]._int)); result->valor_ = (yyval.valor_); }
#line 1925 "Parser.c"
    break;

  case 44:
#line 252 "semantico.y"
              { (yyval.rexpr_) = make_RExprValor((yyvsp[0].valor_)); result->rexpr_ = (yyval.rexpr_); }
#line 1931 "Parser.c"
    break;

  case 45:
#line 253 "semantico.y"
            { (yyval.rexpr_) = make_RExprIdent((yyvsp[0]._string)); result->rexpr_ = (yyval.rexpr_); }
#line 1937 "Parser.c"
    break;

  case 46:
#line 254 "semantico.y"
        { (yyval.rexpr_) = make_RExprOpa((yyvsp[0].opa_)); result->rexpr_ = (yyval.rexpr_); }
#line 1943 "Parser.c"
    break;

  case 47:
#line 256 "semantico.y"
                     { (yyval.opa_) = make_LSom((yyvsp[-2].opa_), (yyvsp[0].opa_)); result->opa_ = (yyval.opa_); }
#line 1949 "Parser.c"
    break;

  case 48:
#line 257 "semantico.y"
                    { (yyval.opa_) = make_LSub((yyvsp[-2].opa_), (yyvsp[0].opa_)); result->opa_ = (yyval.opa_); }
#line 1955 "Parser.c"
    break;

  case 49:
#line 258 "semantico.y"
         { (yyval.opa_) = (yyvsp[0].opa_); result->opa_ = (yyval.opa_); }
#line 1961 "Parser.c"
    break;

  case 50:
#line 260 "semantico.y"
                       { (yyval.opa_) = make_LMul((yyvsp[-2].opa_), (yyvsp[0].opa_)); result->opa_ = (yyval.opa_); }
#line 1967 "Parser.c"
    break;

  case 51:
#line 261 "semantico.y"
                     { (yyval.opa_) = make_LDiv((yyvsp[-2].opa_), (yyvsp[0].opa_)); result->opa_ = (yyval.opa_); }
#line 1973 "Parser.c"
    break;

  case 52:
#line 262 "semantico.y"
         { (yyval.opa_) = (yyvsp[0].opa_); result->opa_ = (yyval.opa_); }
#line 1979 "Parser.c"
    break;

  case 53:
#line 264 "semantico.y"
                 { (yyval.opa_) = make_Opa2Integer((yyvsp[0]._int)); result->opa_ = (yyval.opa_); }
#line 1985 "Parser.c"
    break;

  case 54:
#line 265 "semantico.y"
             { (yyval.opa_) = make_Opa2Double((yyvsp[0]._double)); result->opa_ = (yyval.opa_); }
#line 1991 "Parser.c"
    break;

  case 55:
#line 266 "semantico.y"
            { (yyval.opa_) = make_Opa2Ident((yyvsp[0]._string)); result->opa_ = (yyval.opa_); }
#line 1997 "Parser.c"
    break;

  case 56:
#line 267 "semantico.y"
                        { (yyval.opa_) = (yyvsp[-1].opa_); result->opa_ = (yyval.opa_); }
#line 2003 "Parser.c"
    break;

  case 57:
#line 269 "semantico.y"
                                                { (yyval.expressaologica_) = make_ExpressaoLogica1((yyvsp[-2].rexpr_), (yyvsp[-1].operadoreslogicos_), (yyvsp[0].rexpr_)); result->expressaologica_ = (yyval.expressaologica_); }
#line 2009 "Parser.c"
    break;

  case 58:
#line 270 "semantico.y"
                                                                    { (yyval.expressaologica_) = make_ExpressaoLogica2((yyvsp[-4].rexpr_), (yyvsp[-3].operadoreslogicos_), (yyvsp[-2].rexpr_), (yyvsp[-1].conectivoslogicos_), (yyvsp[0].expressaologica_)); result->expressaologica_ = (yyval.expressaologica_); }
#line 2015 "Parser.c"
    break;

  case 59:
#line 272 "semantico.y"
            { (yyval.if_) = make_IfIfStmt((yyvsp[0].ifstmt_)); result->if_ = (yyval.if_); }
#line 2021 "Parser.c"
    break;

  case 60:
#line 273 "semantico.y"
                    { (yyval.if_) = make_If1((yyvsp[-1].ifstmt_), (yyvsp[0].elsestmt_)); result->if_ = (yyval.if_); }
#line 2027 "Parser.c"
    break;

  case 61:
#line 274 "semantico.y"
                              { (yyval.if_) = make_If2((yyvsp[-2].ifstmt_), (yyvsp[-1].elsifstmt_), (yyvsp[0].elsestmt_)); result->if_ = (yyval.if_); }
#line 2033 "Parser.c"
    break;

  case 62:
#line 275 "semantico.y"
                { (yyval.if_) = make_If_(); result->if_ = (yyval.if_); }
#line 2039 "Parser.c"
    break;

  case 63:
#line 277 "semantico.y"
                                                   { (yyval.ifstmt_) = make_IfStmt1((yyvsp[-2].expressaologica_), (yyvsp[0].blocostmt_)); result->ifstmt_ = (yyval.ifstmt_); }
#line 2045 "Parser.c"
    break;

  case 64:
#line 279 "semantico.y"
                              { (yyval.elsestmt_) = make_ElseStmt1((yyvsp[0].blocostmt_)); result->elsestmt_ = (yyval.elsestmt_); }
#line 2051 "Parser.c"
    break;

  case 65:
#line 281 "semantico.y"
                                                         { (yyval.elsifstmt_) = make_ElsIfStmt1((yyvsp[-2].expressaologica_), (yyvsp[0].blocostmt_)); result->elsifstmt_ = (yyval.elsifstmt_); }
#line 2057 "Parser.c"
    break;

  case 66:
#line 283 "semantico.y"
                                                   { (yyval.while_) = make_While1((yyvsp[-2].expressaologica_), (yyvsp[0].blocostmt_)); result->while_ = (yyval.while_); }
#line 2063 "Parser.c"
    break;

  case 67:
#line 285 "semantico.y"
                                                       { (yyval.for_) = make_For1((yyvsp[-4].atribuicao_), (yyvsp[-2].rexpr_), (yyvsp[0].blocostmt_)); result->for_ = (yyval.for_); }
#line 2069 "Parser.c"
    break;

  case 68:
#line 287 "semantico.y"
                { (yyval.case_) = make_CaseCaseStmt((yyvsp[0].casestmt_)); result->case_ = (yyval.case_); }
#line 2075 "Parser.c"
    break;

  case 69:
#line 289 "semantico.y"
                                             { (yyval.casestmt_) = make_CaseStmt1((yyvsp[-2]._string), (yyvsp[0].blocostmt_)); result->casestmt_ = (yyval.casestmt_); }
#line 2081 "Parser.c"
    break;

  case 70:
#line 290 "semantico.y"
                       { (yyval.casestmt_) = make_CaseStmt2((yyvsp[0].blocostmt_)); result->casestmt_ = (yyval.casestmt_); }
#line 2087 "Parser.c"
    break;

  case 71:
#line 292 "semantico.y"
                   { (yyval.type_) = make_Type_INTEGER(); result->type_ = (yyval.type_); }
#line 2093 "Parser.c"
    break;

  case 72:
#line 293 "semantico.y"
             { (yyval.type_) = make_Type_REAL(); result->type_ = (yyval.type_); }
#line 2099 "Parser.c"
    break;

  case 73:
#line 294 "semantico.y"
             { (yyval.type_) = make_Type_CHAR(); result->type_ = (yyval.type_); }
#line 2105 "Parser.c"
    break;

  case 74:
#line 295 "semantico.y"
               { (yyval.type_) = make_Type_STRING(); result->type_ = (yyval.type_); }
#line 2111 "Parser.c"
    break;

  case 75:
#line 297 "semantico.y"
                        { (yyval.operadoreslogicos_) = make_OperadoresLogicos1(); result->operadoreslogicos_ = (yyval.operadoreslogicos_); }
#line 2117 "Parser.c"
    break;

  case 76:
#line 298 "semantico.y"
        { (yyval.operadoreslogicos_) = make_OperadoresLogicos2(); result->operadoreslogicos_ = (yyval.operadoreslogicos_); }
#line 2123 "Parser.c"
    break;

  case 77:
#line 299 "semantico.y"
          { (yyval.operadoreslogicos_) = make_OperadoresLogicos3(); result->operadoreslogicos_ = (yyval.operadoreslogicos_); }
#line 2129 "Parser.c"
    break;

  case 78:
#line 300 "semantico.y"
             { (yyval.operadoreslogicos_) = make_OperadoresLogicos4(); result->operadoreslogicos_ = (yyval.operadoreslogicos_); }
#line 2135 "Parser.c"
    break;

  case 79:
#line 301 "semantico.y"
        { (yyval.operadoreslogicos_) = make_OperadoresLogicos5(); result->operadoreslogicos_ = (yyval.operadoreslogicos_); }
#line 2141 "Parser.c"
    break;

  case 80:
#line 302 "semantico.y"
          { (yyval.operadoreslogicos_) = make_OperadoresLogicos6(); result->operadoreslogicos_ = (yyval.operadoreslogicos_); }
#line 2147 "Parser.c"
    break;

  case 81:
#line 304 "semantico.y"
                            { (yyval.conectivoslogicos_) = make_ConectivosLogicos_AND(); result->conectivoslogicos_ = (yyval.conectivoslogicos_); }
#line 2153 "Parser.c"
    break;

  case 82:
#line 305 "semantico.y"
           { (yyval.conectivoslogicos_) = make_ConectivosLogicos_OR(); result->conectivoslogicos_ = (yyval.conectivoslogicos_); }
#line 2159 "Parser.c"
    break;

  case 83:
#line 306 "semantico.y"
            { (yyval.conectivoslogicos_) = make_ConectivosLogicos_NOT(); result->conectivoslogicos_ = (yyval.conectivoslogicos_); }
#line 2165 "Parser.c"
    break;


#line 2169 "Parser.c"

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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
      yyerror (&yylloc, scanner, result, YY_("syntax error"));
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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
        yyerror (&yylloc, scanner, result, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, scanner, result);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, scanner, result, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, result);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp, scanner, result);
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
#line 309 "semantico.y"



/* Entrypoint: parse Progr from file. */
Progr pProgr(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.progr_;
  }
}

/* Entrypoint: parse Progr from string. */
Progr psProgr(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.progr_;
  }
}

/* Entrypoint: parse BlocoDec from file. */
BlocoDec pBlocoDec(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blocodec_;
  }
}

/* Entrypoint: parse BlocoDec from string. */
BlocoDec psBlocoDec(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blocodec_;
  }
}

/* Entrypoint: parse BlocoConstante from file. */
BlocoConstante pBlocoConstante(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blococonstante_;
  }
}

/* Entrypoint: parse BlocoConstante from string. */
BlocoConstante psBlocoConstante(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blococonstante_;
  }
}

/* Entrypoint: parse RegraConstante from file. */
RegraConstante pRegraConstante(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regraconstante_;
  }
}

/* Entrypoint: parse RegraConstante from string. */
RegraConstante psRegraConstante(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regraconstante_;
  }
}

/* Entrypoint: parse RegraDec from file. */
RegraDec pRegraDec(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regradec_;
  }
}

/* Entrypoint: parse RegraDec from string. */
RegraDec psRegraDec(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regradec_;
  }
}

/* Entrypoint: parse BlocoVar from file. */
BlocoVar pBlocoVar(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blocovar_;
  }
}

/* Entrypoint: parse BlocoVar from string. */
BlocoVar psBlocoVar(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blocovar_;
  }
}

/* Entrypoint: parse RegraDecVar from file. */
RegraDecVar pRegraDecVar(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regradecvar_;
  }
}

/* Entrypoint: parse RegraDecVar from string. */
RegraDecVar psRegraDecVar(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regradecvar_;
  }
}

/* Entrypoint: parse BlocoType from file. */
BlocoType pBlocoType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blocotype_;
  }
}

/* Entrypoint: parse BlocoType from string. */
BlocoType psBlocoType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blocotype_;
  }
}

/* Entrypoint: parse RegraType from file. */
RegraType pRegraType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regratype_;
  }
}

/* Entrypoint: parse RegraType from string. */
RegraType psRegraType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regratype_;
  }
}

/* Entrypoint: parse RegraDecVetor from file. */
RegraDecVetor pRegraDecVetor(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regradecvetor_;
  }
}

/* Entrypoint: parse RegraDecVetor from string. */
RegraDecVetor psRegraDecVetor(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regradecvetor_;
  }
}

/* Entrypoint: parse RegraDecStruct from file. */
RegraDecStruct pRegraDecStruct(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regradecstruct_;
  }
}

/* Entrypoint: parse RegraDecStruct from string. */
RegraDecStruct psRegraDecStruct(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regradecstruct_;
  }
}

/* Entrypoint: parse BlocoStmt from file. */
BlocoStmt pBlocoStmt(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blocostmt_;
  }
}

/* Entrypoint: parse BlocoStmt from string. */
BlocoStmt psBlocoStmt(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blocostmt_;
  }
}

/* Entrypoint: parse RegraStmt from file. */
RegraStmt pRegraStmt(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regrastmt_;
  }
}

/* Entrypoint: parse RegraStmt from string. */
RegraStmt psRegraStmt(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regrastmt_;
  }
}

/* Entrypoint: parse Stmt from file. */
Stmt pStmt(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.stmt_;
  }
}

/* Entrypoint: parse Stmt from string. */
Stmt psStmt(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.stmt_;
  }
}

/* Entrypoint: parse Atribuicao from file. */
Atribuicao pAtribuicao(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.atribuicao_;
  }
}

/* Entrypoint: parse Atribuicao from string. */
Atribuicao psAtribuicao(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.atribuicao_;
  }
}

/* Entrypoint: parse AtribuicaoVetor from file. */
AtribuicaoVetor pAtribuicaoVetor(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.atribuicaovetor_;
  }
}

/* Entrypoint: parse AtribuicaoVetor from string. */
AtribuicaoVetor psAtribuicaoVetor(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.atribuicaovetor_;
  }
}

/* Entrypoint: parse AtribuicaoStruct from file. */
AtribuicaoStruct pAtribuicaoStruct(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.atribuicaostruct_;
  }
}

/* Entrypoint: parse AtribuicaoStruct from string. */
AtribuicaoStruct psAtribuicaoStruct(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.atribuicaostruct_;
  }
}

/* Entrypoint: parse Valor from file. */
Valor pValor(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.valor_;
  }
}

/* Entrypoint: parse Valor from string. */
Valor psValor(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.valor_;
  }
}

/* Entrypoint: parse RExpr from file. */
RExpr pRExpr(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.rexpr_;
  }
}

/* Entrypoint: parse RExpr from string. */
RExpr psRExpr(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.rexpr_;
  }
}

/* Entrypoint: parse Opa from file. */
Opa pOpa(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.opa_;
  }
}

/* Entrypoint: parse Opa from string. */
Opa psOpa(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.opa_;
  }
}

/* Entrypoint: parse Opa from file. */
Opa pOpa1(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.opa_;
  }
}

/* Entrypoint: parse Opa from string. */
Opa psOpa1(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.opa_;
  }
}

/* Entrypoint: parse Opa from file. */
Opa pOpa2(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.opa_;
  }
}

/* Entrypoint: parse Opa from string. */
Opa psOpa2(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.opa_;
  }
}

/* Entrypoint: parse ExpressaoLogica from file. */
ExpressaoLogica pExpressaoLogica(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expressaologica_;
  }
}

/* Entrypoint: parse ExpressaoLogica from string. */
ExpressaoLogica psExpressaoLogica(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expressaologica_;
  }
}

/* Entrypoint: parse If from file. */
If pIf(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.if_;
  }
}

/* Entrypoint: parse If from string. */
If psIf(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.if_;
  }
}

/* Entrypoint: parse IfStmt from file. */
IfStmt pIfStmt(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.ifstmt_;
  }
}

/* Entrypoint: parse IfStmt from string. */
IfStmt psIfStmt(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.ifstmt_;
  }
}

/* Entrypoint: parse ElseStmt from file. */
ElseStmt pElseStmt(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.elsestmt_;
  }
}

/* Entrypoint: parse ElseStmt from string. */
ElseStmt psElseStmt(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.elsestmt_;
  }
}

/* Entrypoint: parse ElsIfStmt from file. */
ElsIfStmt pElsIfStmt(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.elsifstmt_;
  }
}

/* Entrypoint: parse ElsIfStmt from string. */
ElsIfStmt psElsIfStmt(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.elsifstmt_;
  }
}

/* Entrypoint: parse While from file. */
While pWhile(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.while_;
  }
}

/* Entrypoint: parse While from string. */
While psWhile(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.while_;
  }
}

/* Entrypoint: parse For from file. */
For pFor(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.for_;
  }
}

/* Entrypoint: parse For from string. */
For psFor(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.for_;
  }
}

/* Entrypoint: parse Case from file. */
Case pCase(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.case_;
  }
}

/* Entrypoint: parse Case from string. */
Case psCase(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.case_;
  }
}

/* Entrypoint: parse CaseStmt from file. */
CaseStmt pCaseStmt(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.casestmt_;
  }
}

/* Entrypoint: parse CaseStmt from string. */
CaseStmt psCaseStmt(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.casestmt_;
  }
}

/* Entrypoint: parse Type from file. */
Type pType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type from string. */
Type psType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse OperadoresLogicos from file. */
OperadoresLogicos pOperadoresLogicos(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.operadoreslogicos_;
  }
}

/* Entrypoint: parse OperadoresLogicos from string. */
OperadoresLogicos psOperadoresLogicos(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.operadoreslogicos_;
  }
}

/* Entrypoint: parse ConectivosLogicos from file. */
ConectivosLogicos pConectivosLogicos(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.conectivoslogicos_;
  }
}

/* Entrypoint: parse ConectivosLogicos from string. */
ConectivosLogicos psConectivosLogicos(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = semantico__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = semantico__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  semantico__delete_buffer(buf, scanner);
  semantico_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.conectivoslogicos_;
  }
}



