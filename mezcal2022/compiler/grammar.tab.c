/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "compiler/grammar.y"

	#include <math.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <iostream>
	#include <memory>
	#include <string>
	using namespace std;
	extern char *yytext;
	std::string result;
	int yylex(void);	
	void yyerror(char const *);

#line 85 "grammar.tab.c"

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

#include "grammar.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NAME = 3,                       /* NAME  */
  YYSYMBOL_COLON = 4,                      /* COLON  */
  YYSYMBOL_RIGHT_ARROW = 5,                /* RIGHT_ARROW  */
  YYSYMBOL_LEFT_CURLY_BRACE = 6,           /* LEFT_CURLY_BRACE  */
  YYSYMBOL_RIGHT_CURLY_BRACE = 7,          /* RIGHT_CURLY_BRACE  */
  YYSYMBOL_SEMICOLON = 8,                  /* SEMICOLON  */
  YYSYMBOL_LEFT_PARENTHESIS = 9,           /* LEFT_PARENTHESIS  */
  YYSYMBOL_RIGHT_PARENTHESIS = 10,         /* RIGHT_PARENTHESIS  */
  YYSYMBOL_SINGLECOMMENT = 11,             /* SINGLECOMMENT  */
  YYSYMBOL_MULTILINECOMMENTS = 12,         /* MULTILINECOMMENTS  */
  YYSYMBOL_SHOW = 13,                      /* SHOW  */
  YYSYMBOL_QUOTES = 14,                    /* QUOTES  */
  YYSYMBOL_CHARACTERS_BLOCK = 15,          /* CHARACTERS_BLOCK  */
  YYSYMBOL_INT = 16,                       /* INT  */
  YYSYMBOL_INTEGER_VALUE = 17,             /* INTEGER_VALUE  */
  YYSYMBOL_DECIMAL_VALUE = 18,             /* DECIMAL_VALUE  */
  YYSYMBOL_LOAD = 19,                      /* LOAD  */
  YYSYMBOL_STDIN = 20,                     /* STDIN  */
  YYSYMBOL_PESOS_SIGN = 21,                /* PESOS_SIGN  */
  YYSYMBOL_INC = 22,                       /* INC  */
  YYSYMBOL_DECR = 23,                      /* DECR  */
  YYSYMBOL_DEC = 24,                       /* DEC  */
  YYSYMBOL_BLN = 25,                       /* BLN  */
  YYSYMBOL_SET = 26,                       /* SET  */
  YYSYMBOL_TRU = 27,                       /* TRU  */
  YYSYMBOL_FLS = 28,                       /* FLS  */
  YYSYMBOL_ITOB = 29,                      /* ITOB  */
  YYSYMBOL_QUESTION_SIGN = 30,             /* QUESTION_SIGN  */
  YYSYMBOL_LEFT_BRACKET = 31,              /* LEFT_BRACKET  */
  YYSYMBOL_RIGHT_BRACKET = 32,             /* RIGHT_BRACKET  */
  YYSYMBOL_EQUAL = 33,                     /* EQUAL  */
  YYSYMBOL_LESS_EQUAL = 34,                /* LESS_EQUAL  */
  YYSYMBOL_LESS_THAN = 35,                 /* LESS_THAN  */
  YYSYMBOL_GREATHER_THAN = 36,             /* GREATHER_THAN  */
  YYSYMBOL_GREATHER_EQUAL = 37,            /* GREATHER_EQUAL  */
  YYSYMBOL_NOT_EQUAL = 38,                 /* NOT_EQUAL  */
  YYSYMBOL_PIPE = 39,                      /* PIPE  */
  YYSYMBOL_COMMA = 40,                     /* COMMA  */
  YYSYMBOL_STR = 41,                       /* STR  */
  YYSYMBOL_DOUBLE_COLON = 42,              /* DOUBLE_COLON  */
  YYSYMBOL_AT = 43,                        /* AT  */
  YYSYMBOL_ANSWER = 44,                    /* ANSWER  */
  YYSYMBOL_PLUS = 45,                      /* PLUS  */
  YYSYMBOL_BSLASH = 46,                    /* BSLASH  */
  YYSYMBOL_MINUS = 47,                     /* MINUS  */
  YYSYMBOL_SLASH = 48,                     /* SLASH  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_input = 50,                     /* input  */
  YYSYMBOL_function_list = 51,             /* function_list  */
  YYSYMBOL_function = 52,                  /* function  */
  YYSYMBOL_statements = 53,                /* statements  */
  YYSYMBOL_statement = 54,                 /* statement  */
  YYSYMBOL_bifurcation = 55,               /* bifurcation  */
  YYSYMBOL_loop = 56,                      /* loop  */
  YYSYMBOL_logical_eval = 57,              /* logical_eval  */
  YYSYMBOL_comp_operator = 58,             /* comp_operator  */
  YYSYMBOL_assignment = 59,                /* assignment  */
  YYSYMBOL_integer_value = 60,             /* integer_value  */
  YYSYMBOL_decimal_value = 61,             /* decimal_value  */
  YYSYMBOL_unitaryOperations = 62,         /* unitaryOperations  */
  YYSYMBOL_std_input = 63,                 /* std_input  */
  YYSYMBOL_definition = 64,                /* definition  */
  YYSYMBOL_identifiers = 65,               /* identifiers  */
  YYSYMBOL_ids = 66,                       /* ids  */
  YYSYMBOL_std_output = 67,                /* std_output  */
  YYSYMBOL_expression = 68,                /* expression  */
  YYSYMBOL_characters_block = 69,          /* characters_block  */
  YYSYMBOL_name = 70                       /* name  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int16 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   389

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  264

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      45,    46,    47,    48
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    29,    29,    33,    35,    39,    48,    52,    56,    60,
      62,    64,    66,    68,    70,    72,    74,    76,    78,    83,
      85,    87,    89,    94,    96,    99,   102,   105,   108,   113,
     116,   119,   121,   123,   127,   129,   131,   133,   135,   137,
     141,   143,   145,   147,   149,   151,   153,   155,   158,   161,
     164,   167,   170,   172,   174,   176,   178,   180,   182,   184,
     186,   188,   192,   196,   200,   202,   206,   210,   215,   221,
     223,   225,   227,   229,   233,   235,   239,   243,   245,   247,
     249,   251,   253,   255,   259,   263,   267
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NAME", "COLON",
  "RIGHT_ARROW", "LEFT_CURLY_BRACE", "RIGHT_CURLY_BRACE", "SEMICOLON",
  "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "SINGLECOMMENT",
  "MULTILINECOMMENTS", "SHOW", "QUOTES", "CHARACTERS_BLOCK", "INT",
  "INTEGER_VALUE", "DECIMAL_VALUE", "LOAD", "STDIN", "PESOS_SIGN", "INC",
  "DECR", "DEC", "BLN", "SET", "TRU", "FLS", "ITOB", "QUESTION_SIGN",
  "LEFT_BRACKET", "RIGHT_BRACKET", "EQUAL", "LESS_EQUAL", "LESS_THAN",
  "GREATHER_THAN", "GREATHER_EQUAL", "NOT_EQUAL", "PIPE", "COMMA", "STR",
  "DOUBLE_COLON", "AT", "ANSWER", "PLUS", "BSLASH", "MINUS", "SLASH",
  "$accept", "input", "function_list", "function", "statements",
  "statement", "bifurcation", "loop", "logical_eval", "comp_operator",
  "assignment", "integer_value", "decimal_value", "unitaryOperations",
  "std_input", "definition", "identifiers", "ids", "std_output",
  "expression", "characters_block", "name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-70)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-80)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,   -70,    19,    10,     9,   -70,   -70,    10,    14,   -70,
      28,    45,    36,    59,    30,    79,    92,   -70,    -1,   -70,
     -70,    97,    99,   -70,   -70,    31,   103,   105,   -70,   -70,
     -70,   106,   128,   136,   137,    86,   140,   145,    24,     8,
      10,    10,    10,   -70,    10,   110,   152,   131,   -70,   -70,
     -70,   -70,   -70,   -70,    10,   -70,   -70,   349,   144,     3,
     138,   139,   -10,   -70,    10,   142,   117,   -70,   -70,   -70,
     134,    88,   -70,   -70,   -70,   -70,   -70,   -70,   138,    15,
      46,   119,   143,   -70,    10,   -70,   -70,    18,   -70,   -70,
     -70,   -70,    10,   -70,   -70,    10,   -70,   -70,   -70,   -70,
     121,   168,    10,   159,   160,    61,    68,   153,   176,   -70,
      10,   146,   -70,    10,    72,    25,    10,   151,   162,   163,
      87,   -70,    10,    10,    10,   -70,   -70,   -70,   188,   -70,
     155,   178,   198,    10,   171,    94,   138,   138,   186,   166,
     108,   191,     4,    10,   -70,   169,   181,   -70,   127,   -70,
     228,   194,    10,   200,   195,   -70,    10,   196,   -70,   -70,
     -70,   111,    10,   197,    10,   120,   138,   -70,   211,   152,
     -70,   249,   -70,    10,   152,   -70,   -70,   201,   -70,    10,
     202,   204,   -70,   205,    10,   -70,   -70,   -70,   209,   -70,
     152,   130,   -70,   210,   -70,   -70,   -70,   212,    10,   138,
      10,   199,   -70,   223,   215,   203,   217,    10,    10,   227,
      10,    10,   253,   232,    10,   261,   265,   252,   -70,   245,
     257,   260,    10,   -70,    10,    10,    16,   244,    41,   138,
     138,   138,   138,   138,   258,   266,   267,   268,   269,   250,
     262,   270,   273,   278,   286,   298,   302,   305,   306,   -70,
     -70,   -70,   -70,   -70,   263,   284,   307,   321,   350,   -70,
     -70,   -70,   -70,   -70
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,    86,     0,     4,     0,     1,     2,     4,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     8,     0,    17,
      16,     0,     0,    75,    75,     0,     0,     0,     7,     9,
      10,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,    64,    65,    62,     0,     0,     0,     0,     8,     5,
      11,    12,    13,    14,     0,    15,    18,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    78,    66,    74,    76,
       0,     0,    34,    35,    36,    37,    38,    39,     0,     0,
       0,     0,     0,    63,     0,    53,    52,     0,    54,    55,
      56,    84,     0,    57,    58,     0,    70,    73,    69,    72,
       0,    76,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,    21,     0,     0,    59,     0,     0,     0,     0,
       0,    77,     0,     0,     0,    31,     8,    19,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,    80,     0,    33,     0,     8,
       0,     0,     0,     0,     0,    67,     0,     0,    60,    61,
      40,     0,     0,     0,     0,     0,     0,    83,     0,     0,
      20,     0,    23,     0,     0,    71,    68,     0,    45,     0,
       0,     0,    41,     0,     0,    49,    50,    81,     0,    22,
       0,     0,    46,     0,    44,    43,    51,    48,     0,     0,
       0,     0,    42,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
       0,     0,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       8,     8,     8,     8,     0,     0,     0,     0,     0,    24,
      25,    28,    26,    27
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,   -70,   315,   325,   -32,   221,   -70,   -70,   -70,   -69,
     -70,   118,   193,   -70,   -70,   -70,   311,   -37,   -70,   -70,
     -48,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     6,     7,    18,    28,    29,    30,    45,    78,
      31,    46,    89,    32,    33,    34,    41,    35,    36,    37,
      66,    38
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       4,   105,     1,     4,    68,    68,    96,     4,   165,    90,
      19,    20,    21,     1,    97,    98,    80,    81,    22,     5,
      43,    23,    24,    63,    92,    47,   166,   100,    57,    64,
      25,    99,    43,    58,     1,    43,   110,    65,    26,   116,
      67,    69,    69,    27,    70,    10,    59,    60,    43,     1,
      12,     8,    44,   112,    69,    61,   135,    19,    20,    21,
      11,   229,    15,   230,   101,    22,    62,    13,    23,    24,
     136,     1,   137,   138,   126,    14,   132,    25,    43,    19,
      20,    21,   124,    16,   115,    26,   232,    22,   233,    43,
      23,    24,   118,   133,   148,   119,   154,   150,    17,    25,
     188,    39,   121,    40,    43,   191,   167,    26,   143,    48,
     130,    43,    49,    69,    50,   156,   139,   171,   106,   177,
     187,   199,   145,   146,   147,    43,    54,   107,    43,   162,
       1,   108,   179,    69,   170,    79,    51,    43,    19,    20,
      21,   184,    71,    69,    52,    53,    22,    43,    55,    23,
      24,   200,   174,    56,    91,    43,    69,   103,    25,   113,
      95,   120,   181,   102,   183,   104,    26,    72,    73,    74,
      75,    76,    77,   190,   114,    88,   -79,    93,    94,   193,
     122,   123,   129,   128,   197,    72,    73,    74,    75,    76,
      77,   140,   131,   141,   149,   142,   109,   111,   204,   152,
     206,   151,   153,   155,    83,   117,   161,   212,   213,   168,
     215,   216,   164,   169,   219,   173,   175,   254,   255,   256,
     257,   258,   226,   125,   227,   228,    63,   176,   178,   182,
     198,     1,   134,   192,   194,   172,   195,   196,   144,    19,
      20,    21,   202,   203,   208,   207,   209,    22,   214,   210,
      23,    24,     1,   157,   158,   159,   189,   217,   163,    25,
      19,    20,    21,   211,   218,   220,     1,    26,    22,   221,
     259,    23,    24,   222,    19,    20,    21,   223,   224,   180,
      25,   225,    22,   185,   186,    23,    24,     1,    26,   231,
     239,   260,   249,   244,    25,    19,    20,    21,   240,   241,
     242,   243,    26,    22,   250,   245,    23,    24,   251,   201,
       1,   252,   253,   246,   261,    25,   247,   205,    19,    20,
      21,   248,     9,    26,     1,     3,    22,   127,   262,    23,
      24,   160,    19,    20,    21,    42,     0,     0,    25,     0,
      22,     0,     0,    23,    24,     0,    26,   234,   235,   236,
     237,   238,    25,     1,     0,     0,     0,   263,     0,     0,
      26,    19,    20,    21,    63,    82,    43,    83,     0,    22,
      84,     0,    23,    24,     0,     0,    85,    86,     0,     0,
      87,    25,     0,     0,     0,     0,     0,     0,     0,    26
};

static const yytype_int16 yycheck[] =
{
       0,    70,     3,     3,    41,    42,    16,     7,     4,    57,
      11,    12,    13,     3,    24,    25,    48,    54,    19,     0,
      17,    22,    23,    15,    21,    25,    22,    64,     4,    21,
      31,    41,    17,     9,     3,    17,    21,    29,    39,    21,
      40,    41,    42,    44,    44,    31,    22,    23,    17,     3,
       5,    42,    21,     7,    54,    31,    31,    11,    12,    13,
      32,    45,    32,    47,    64,    19,    42,    31,    22,    23,
      45,     3,    47,    48,     6,    16,   113,    31,    17,    11,
      12,    13,    21,     4,    84,    39,    45,    19,    47,    17,
      22,    23,    92,    21,   126,    95,   133,   129,     6,    31,
     169,     4,   102,     4,    17,   174,   143,    39,    21,     6,
     110,    17,     7,   113,     8,    21,   116,   149,    30,   156,
     168,   190,   122,   123,   124,    17,    40,    39,    17,    21,
       3,    43,    21,   133,     7,     4,     8,    17,    11,    12,
      13,    21,    32,   143,     8,     8,    19,    17,     8,    22,
      23,    21,   152,     8,    10,    17,   156,    40,    31,    40,
      21,    40,   162,    21,   164,    31,    39,    33,    34,    35,
      36,    37,    38,   173,    31,    57,     8,    59,    60,   179,
      21,    21,     6,    30,   184,    33,    34,    35,    36,    37,
      38,    40,    46,    31,     6,    32,    78,    79,   198,    21,
     200,    46,     4,    32,    18,    87,    40,   207,   208,    40,
     210,   211,    21,    32,   214,    21,    16,   249,   250,   251,
     252,   253,   222,   105,   224,   225,    15,    32,    32,    32,
      21,     3,   114,    32,    32,     7,    32,    32,   120,    11,
      12,    13,    32,    31,    21,    46,    31,    19,    21,    46,
      22,    23,     3,   135,   136,   137,     7,     4,   140,    31,
      11,    12,    13,    46,    32,     4,     3,    39,    19,     4,
       7,    22,    23,    21,    11,    12,    13,    32,    21,   161,
      31,    21,    19,   165,   166,    22,    23,     3,    39,    45,
      32,     7,     6,    43,    31,    11,    12,    13,    32,    32,
      32,    32,    39,    19,     6,    43,    22,    23,     6,   191,
       3,     6,     6,    43,     7,    31,    43,   199,    11,    12,
      13,    43,     7,    39,     3,     0,    19,   106,     7,    22,
      23,   138,    11,    12,    13,    24,    -1,    -1,    31,    -1,
      19,    -1,    -1,    22,    23,    -1,    39,   229,   230,   231,
     232,   233,    31,     3,    -1,    -1,    -1,     7,    -1,    -1,
      39,    11,    12,    13,    15,    16,    17,    18,    -1,    19,
      21,    -1,    22,    23,    -1,    -1,    27,    28,    -1,    -1,
      31,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    50,    52,    70,     0,    51,    52,    42,    51,
      31,    32,     5,    31,    16,    32,     4,     6,    53,    11,
      12,    13,    19,    22,    23,    31,    39,    44,    54,    55,
      56,    59,    62,    63,    64,    66,    67,    68,    70,     4,
       4,    65,    65,    17,    21,    57,    60,    70,     6,     7,
       8,     8,     8,     8,    40,     8,     8,     4,     9,    22,
      23,    31,    42,    15,    21,    29,    69,    70,    66,    70,
      70,    32,    33,    34,    35,    36,    37,    38,    58,     4,
      53,    66,    16,    18,    21,    27,    28,    31,    60,    61,
      69,    10,    21,    60,    60,    21,    16,    24,    25,    41,
      66,    70,    21,    40,    31,    58,    30,    39,    43,    60,
      21,    60,     7,    40,    31,    70,    21,    60,    70,    70,
      40,    70,    21,    21,    21,    60,     6,    54,    30,     6,
      70,    46,    66,    21,    60,    31,    45,    47,    48,    70,
      40,    31,    32,    21,    60,    70,    70,    70,    53,     6,
      53,    46,    21,     4,    66,    32,    21,    60,    60,    60,
      61,    40,    21,    60,    21,     4,    22,    66,    40,    32,
       7,    53,     7,    21,    70,    16,    32,    66,    32,    21,
      60,    70,    32,    70,    21,    60,    60,    69,    58,     7,
      70,    58,    32,    70,    32,    32,    32,    70,    21,    58,
      21,    60,    32,    31,    70,    60,    70,    46,    21,    31,
      46,    46,    70,    70,    21,    70,    70,     4,    32,    70,
       4,     4,    21,    32,    21,    21,    70,    70,    70,    45,
      47,    45,    45,    47,    60,    60,    60,    60,    60,    32,
      32,    32,    32,    32,    43,    43,    43,    43,    43,     6,
       6,     6,     6,     6,    53,    53,    53,    53,    53,     7,
       7,     7,     7,     7
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    55,
      55,    55,    55,    56,    56,    56,    56,    56,    56,    57,
      57,    57,    57,    57,    58,    58,    58,    58,    58,    58,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    60,    61,    62,    62,    63,    64,    64,    64,
      64,    64,    64,    64,    65,    65,    66,    67,    67,    67,
      67,    67,    67,    67,    68,    69,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,    13,     0,     2,     0,     1,
       1,     2,     2,     2,     2,     2,     1,     1,     2,     5,
       7,     4,     8,     7,    21,    21,    22,    22,    22,     9,
      13,     4,     3,     5,     1,     1,     1,     1,     1,     1,
       6,     7,     9,     8,     8,     7,     8,    12,     8,     7,
       7,     8,     3,     3,     3,     3,     3,     3,     3,     4,
       6,     6,     1,     1,     2,     2,     3,     6,     7,     3,
       3,     7,     3,     3,     2,     0,     1,     5,     3,     4,
       6,     8,     6,     7,     3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* input: function function_list  */
#line 29 "compiler/grammar.y"
                                { result = std::string("#include <cstdio>\n #include <iostream>\n using namespace std;\n") + yyvsp[-1] + yyvsp[0]; }
#line 1327 "grammar.tab.c"
    break;

  case 3: /* function_list: function function_list  */
#line 33 "compiler/grammar.y"
                                                { yyval = yyvsp[-1] + yyvsp[0]; }
#line 1333 "grammar.tab.c"
    break;

  case 4: /* function_list: %empty  */
#line 35 "compiler/grammar.y"
                                                { yyval = ""; }
#line 1339 "grammar.tab.c"
    break;

  case 5: /* function: name DOUBLE_COLON LEFT_BRACKET RIGHT_BRACKET RIGHT_ARROW LEFT_BRACKET INT RIGHT_BRACKET COLON LEFT_CURLY_BRACE statements ANSWER RIGHT_CURLY_BRACE  */
#line 40 "compiler/grammar.y"
        { 
		if(yyvsp[-12] == "main"){
			yyval = "int main(int argc, char *argv[]){\n" + yyvsp[-2] + "\n}\n";
		}else{
			yyval = std::string("\n void ") + "_" + yyvsp[-12] + "()" + "{\n" + yyvsp[-2] + "\n}\n";
		} 
	}
#line 1351 "grammar.tab.c"
    break;

  case 6: /* function: %empty  */
#line 48 "compiler/grammar.y"
                                                { yyval = ""; }
#line 1357 "grammar.tab.c"
    break;

  case 7: /* statements: statements statement  */
#line 52 "compiler/grammar.y"
                             { 
				yyval = yyvsp[-1] + yyvsp[0];
				}
#line 1365 "grammar.tab.c"
    break;

  case 8: /* statements: %empty  */
#line 56 "compiler/grammar.y"
                                                { yyval = ""; }
#line 1371 "grammar.tab.c"
    break;

  case 9: /* statement: bifurcation  */
#line 60 "compiler/grammar.y"
                    { yyval = yyvsp[0]; }
#line 1377 "grammar.tab.c"
    break;

  case 10: /* statement: loop  */
#line 62 "compiler/grammar.y"
             { yyval = yyvsp[0]; }
#line 1383 "grammar.tab.c"
    break;

  case 11: /* statement: assignment SEMICOLON  */
#line 64 "compiler/grammar.y"
                             { yyval = yyvsp[-1]; }
#line 1389 "grammar.tab.c"
    break;

  case 12: /* statement: unitaryOperations SEMICOLON  */
#line 66 "compiler/grammar.y"
                                    { yyval = yyvsp[-1]; }
#line 1395 "grammar.tab.c"
    break;

  case 13: /* statement: std_input SEMICOLON  */
#line 68 "compiler/grammar.y"
                            { yyval = yyvsp[-1]; }
#line 1401 "grammar.tab.c"
    break;

  case 14: /* statement: definition SEMICOLON  */
#line 70 "compiler/grammar.y"
                             { yyval = yyvsp[-1]; }
#line 1407 "grammar.tab.c"
    break;

  case 15: /* statement: std_output SEMICOLON  */
#line 72 "compiler/grammar.y"
                             { yyval = yyvsp[-1]; }
#line 1413 "grammar.tab.c"
    break;

  case 16: /* statement: MULTILINECOMMENTS  */
#line 74 "compiler/grammar.y"
                                { yyval = ""; }
#line 1419 "grammar.tab.c"
    break;

  case 17: /* statement: SINGLECOMMENT  */
#line 76 "compiler/grammar.y"
                        { yyval = ""; }
#line 1425 "grammar.tab.c"
    break;

  case 18: /* statement: expression SEMICOLON  */
#line 78 "compiler/grammar.y"
                             { yyval = yyvsp[-1]; }
#line 1431 "grammar.tab.c"
    break;

  case 19: /* bifurcation: LEFT_BRACKET logical_eval RIGHT_BRACKET QUESTION_SIGN statement  */
#line 83 "compiler/grammar.y"
                                                                        { yyval = "if(" + yyvsp[-3] + "){\n\t" + yyvsp[0] + "}\n"; }
#line 1437 "grammar.tab.c"
    break;

  case 20: /* bifurcation: LEFT_BRACKET logical_eval RIGHT_BRACKET QUESTION_SIGN LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE  */
#line 85 "compiler/grammar.y"
                                                                                                            { yyval = "if(" + yyvsp[-5] + "){\n\t" + yyvsp[-1] + "}\n"; }
#line 1443 "grammar.tab.c"
    break;

  case 21: /* bifurcation: PIPE LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE  */
#line 87 "compiler/grammar.y"
                                                           { yyval = "else{\n\t" + yyvsp[-1] + "\n}\n";}
#line 1449 "grammar.tab.c"
    break;

  case 22: /* bifurcation: LEFT_BRACKET logical_eval RIGHT_BRACKET PIPE QUESTION_SIGN LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE  */
#line 89 "compiler/grammar.y"
                                                                                                                 { yyval = "else if(" + yyvsp[-6] + "){\n\t" + yyvsp[-1] + "}\n"; }
#line 1455 "grammar.tab.c"
    break;

  case 23: /* loop: LEFT_BRACKET logical_eval RIGHT_BRACKET AT LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE  */
#line 94 "compiler/grammar.y"
                                                                                                 { yyval = "while(" + yyvsp[-5] + "){\n" + yyvsp[-1] +"}\n"; }
#line 1461 "grammar.tab.c"
    break;

  case 24: /* loop: LEFT_BRACKET name COLON integer_value BSLASH PESOS_SIGN name comp_operator integer_value BSLASH name COLON PESOS_SIGN name PLUS integer_value RIGHT_BRACKET AT LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE  */
#line 97 "compiler/grammar.y"
        { yyval = "for(int " + yyvsp[-19] + "=" + yyvsp[-17] +  ";" + yyvsp[-14] + yyvsp[-13] + yyvsp[-12] +";" + yyvsp[-10] + "=" + yyvsp[-7] + "+" + yyvsp[-5] + "){\n\t" + yyvsp[-1] + "}\n"; }
#line 1467 "grammar.tab.c"
    break;

  case 25: /* loop: LEFT_BRACKET name COLON integer_value BSLASH PESOS_SIGN name comp_operator integer_value BSLASH name COLON PESOS_SIGN name MINUS integer_value RIGHT_BRACKET AT LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE  */
#line 100 "compiler/grammar.y"
        { yyval = "for(int " + yyvsp[-19] + "=" + yyvsp[-17] +  ";" + yyvsp[-14] + yyvsp[-13] + yyvsp[-12] +";" + yyvsp[-10] + "=" + yyvsp[-7] + "-" + yyvsp[-5] + "){\n\t" + yyvsp[-1] + "}\n"; }
#line 1473 "grammar.tab.c"
    break;

  case 26: /* loop: LEFT_BRACKET name COLON integer_value BSLASH PESOS_SIGN name comp_operator PESOS_SIGN name BSLASH name COLON PESOS_SIGN name PLUS integer_value RIGHT_BRACKET AT LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE  */
#line 103 "compiler/grammar.y"
        { yyval = "for(int " + yyvsp[-20] + "=" + yyvsp[-18] +  ";" + yyvsp[-15] + yyvsp[-14] + yyvsp[-12] +";" + yyvsp[-10] + "=" + yyvsp[-7] + "+" + yyvsp[-5] + "){\n\t" + yyvsp[-1] + "}\n"; }
#line 1479 "grammar.tab.c"
    break;

  case 27: /* loop: LEFT_BRACKET name COLON integer_value BSLASH PESOS_SIGN name comp_operator PESOS_SIGN name BSLASH name COLON PESOS_SIGN name MINUS integer_value RIGHT_BRACKET AT LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE  */
#line 106 "compiler/grammar.y"
        { yyval = "for(int " + yyvsp[-20] + "=" + yyvsp[-18] +  ";" + yyvsp[-15] + yyvsp[-14] + yyvsp[-12] +";" + yyvsp[-10] + "=" + yyvsp[-7] + "-" + yyvsp[-5] + "){\n\t" + yyvsp[-1] + "}\n"; }
#line 1485 "grammar.tab.c"
    break;

  case 28: /* loop: LEFT_BRACKET name COLON PESOS_SIGN name BSLASH PESOS_SIGN name comp_operator integer_value BSLASH name COLON PESOS_SIGN name PLUS integer_value RIGHT_BRACKET AT LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE  */
#line 109 "compiler/grammar.y"
        { yyval = "for(int " + yyvsp[-20] + "=" + yyvsp[-17] +  ";" + yyvsp[-14] + yyvsp[-13] + yyvsp[-12] + ";" + yyvsp[-10] + "=" + yyvsp[-7] + "+" + yyvsp[-5] + "){\n\t" + yyvsp[-1] + "}\n"; }
#line 1491 "grammar.tab.c"
    break;

  case 29: /* logical_eval: PESOS_SIGN name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET comp_operator PESOS_SIGN name  */
#line 114 "compiler/grammar.y"
        { yyval = yyvsp[-7] + "[" + yyvsp[-4] + "]" + yyvsp[-2] + yyvsp[0]; }
#line 1497 "grammar.tab.c"
    break;

  case 30: /* logical_eval: PESOS_SIGN name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET comp_operator PESOS_SIGN name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET  */
#line 117 "compiler/grammar.y"
        { yyval = yyvsp[-11] + "[" + yyvsp[-8] + "]" + yyvsp[-6] + yyvsp[-4] + "[" + yyvsp[-1] + "]"; }
#line 1503 "grammar.tab.c"
    break;

  case 31: /* logical_eval: PESOS_SIGN name comp_operator integer_value  */
#line 119 "compiler/grammar.y"
                                                    { yyval = yyvsp[-2] + yyvsp[-1] + yyvsp[0]; }
#line 1509 "grammar.tab.c"
    break;

  case 32: /* logical_eval: integer_value comp_operator integer_value  */
#line 121 "compiler/grammar.y"
                                                  { yyval = yyvsp[-2] + yyvsp[-1] + yyvsp[0]; }
#line 1515 "grammar.tab.c"
    break;

  case 33: /* logical_eval: PESOS_SIGN name comp_operator PESOS_SIGN name  */
#line 123 "compiler/grammar.y"
                                                      { yyval = yyvsp[-3] + yyvsp[-2] + yyvsp[0]; }
#line 1521 "grammar.tab.c"
    break;

  case 34: /* comp_operator: EQUAL  */
#line 127 "compiler/grammar.y"
                { yyval = "=="; }
#line 1527 "grammar.tab.c"
    break;

  case 35: /* comp_operator: LESS_EQUAL  */
#line 129 "compiler/grammar.y"
                        { yyval = "<="; }
#line 1533 "grammar.tab.c"
    break;

  case 36: /* comp_operator: LESS_THAN  */
#line 131 "compiler/grammar.y"
                 { yyval = "<"; }
#line 1539 "grammar.tab.c"
    break;

  case 37: /* comp_operator: GREATHER_THAN  */
#line 133 "compiler/grammar.y"
                        { yyval = ">"; }
#line 1545 "grammar.tab.c"
    break;

  case 38: /* comp_operator: GREATHER_EQUAL  */
#line 135 "compiler/grammar.y"
                        { yyval = ">="; }
#line 1551 "grammar.tab.c"
    break;

  case 39: /* comp_operator: NOT_EQUAL  */
#line 137 "compiler/grammar.y"
                        { yyval = "!="; }
#line 1557 "grammar.tab.c"
    break;

  case 40: /* assignment: name COLON PESOS_SIGN name SLASH decimal_value  */
#line 141 "compiler/grammar.y"
                                                       { yyval = yyvsp[-5] + "=" + "(float)" + yyvsp[-2] + "/" + yyvsp[0] + ";\n"; }
#line 1563 "grammar.tab.c"
    break;

  case 41: /* assignment: name COLON LEFT_BRACKET integer_value COMMA integer_value RIGHT_BRACKET  */
#line 143 "compiler/grammar.y"
                                                                                { yyval = yyvsp[-6] + "[" + yyvsp[-3] + "]" + "=" + yyvsp[-1] + ";\n"; }
#line 1569 "grammar.tab.c"
    break;

  case 42: /* assignment: name COLON LEFT_BRACKET PESOS_SIGN name COMMA PESOS_SIGN name RIGHT_BRACKET  */
#line 145 "compiler/grammar.y"
                                                                                    { yyval = yyvsp[-8] + "[" + yyvsp[-4] + "]" + "=" + yyvsp[-1] + ";\n"; }
#line 1575 "grammar.tab.c"
    break;

  case 43: /* assignment: name COLON LEFT_BRACKET integer_value COMMA PESOS_SIGN name RIGHT_BRACKET  */
#line 147 "compiler/grammar.y"
                                                                                  { yyval = yyvsp[-7] + "[" + yyvsp[-4] + "]" + "=" + yyvsp[-1] + ";\n"; }
#line 1581 "grammar.tab.c"
    break;

  case 44: /* assignment: name COLON LEFT_BRACKET PESOS_SIGN name COMMA integer_value RIGHT_BRACKET  */
#line 149 "compiler/grammar.y"
                                                                                  { yyval = yyvsp[-7] + "[" + yyvsp[-3] + "]" + "=" + yyvsp[-1] + ";\n"; }
#line 1587 "grammar.tab.c"
    break;

  case 45: /* assignment: name COLON PESOS_SIGN name LEFT_BRACKET integer_value RIGHT_BRACKET  */
#line 151 "compiler/grammar.y"
                                                                            { yyval = yyvsp[-6] + "=" + yyvsp[-3] + "[" + yyvsp[-1] + "]" + ";\n"; }
#line 1593 "grammar.tab.c"
    break;

  case 46: /* assignment: name COLON PESOS_SIGN name LEFT_BRACKET PESOS_SIGN ids RIGHT_BRACKET  */
#line 153 "compiler/grammar.y"
                                                                             { yyval = yyvsp[-7] + "=" + yyvsp[-4] + "[" + yyvsp[-1] + "]" + ";\n"; }
#line 1599 "grammar.tab.c"
    break;

  case 47: /* assignment: name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET COLON PESOS_SIGN name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET  */
#line 156 "compiler/grammar.y"
        { yyval = yyvsp[-11] + "[" + yyvsp[-8] + "]" + "=" + yyvsp[-4] + "[" + yyvsp[-1] + "]" + ";\n"; }
#line 1605 "grammar.tab.c"
    break;

  case 48: /* assignment: name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET COLON PESOS_SIGN name  */
#line 159 "compiler/grammar.y"
        { yyval = yyvsp[-7] + "[" + yyvsp[-4] + "]" + "=" + yyvsp[0] + ";\n"; }
#line 1611 "grammar.tab.c"
    break;

  case 49: /* assignment: name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET COLON integer_value  */
#line 162 "compiler/grammar.y"
        { yyval = yyvsp[-6] + "[" + yyvsp[-3] + "]" + "=" + yyvsp[0] + ";\n"; }
#line 1617 "grammar.tab.c"
    break;

  case 50: /* assignment: name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET INC integer_value  */
#line 165 "compiler/grammar.y"
        { yyval = yyvsp[-6] + "[" + yyvsp[-3] + "]" + "+=" + yyvsp[0] + ";\n"; }
#line 1623 "grammar.tab.c"
    break;

  case 51: /* assignment: name INC PESOS_SIGN name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET  */
#line 168 "compiler/grammar.y"
        { yyval = yyvsp[-7] + "+=" + yyvsp[-4] + "[" + yyvsp[-1] + "]" + ";\n"; }
#line 1629 "grammar.tab.c"
    break;

  case 52: /* assignment: name COLON FLS  */
#line 170 "compiler/grammar.y"
                        { yyval = yyvsp[-2] + "= false; \n"; }
#line 1635 "grammar.tab.c"
    break;

  case 53: /* assignment: name COLON TRU  */
#line 172 "compiler/grammar.y"
                        { yyval = yyvsp[-2] + "= true; \n"; }
#line 1641 "grammar.tab.c"
    break;

  case 54: /* assignment: name COLON integer_value  */
#line 174 "compiler/grammar.y"
                                 { yyval = yyvsp[-2] + "=" + yyvsp[0] + ";\n";}
#line 1647 "grammar.tab.c"
    break;

  case 55: /* assignment: name COLON decimal_value  */
#line 176 "compiler/grammar.y"
                                 { yyval = yyvsp[-2] + "=" + yyvsp[0] + ";\n";}
#line 1653 "grammar.tab.c"
    break;

  case 56: /* assignment: name COLON characters_block  */
#line 178 "compiler/grammar.y"
                                    {yyval = yyvsp[-2] + "=" + yyvsp[0] + ";\n";}
#line 1659 "grammar.tab.c"
    break;

  case 57: /* assignment: name INC integer_value  */
#line 180 "compiler/grammar.y"
                               { yyval = yyvsp[-2] + "+=" + yyvsp[0] + ";\n";}
#line 1665 "grammar.tab.c"
    break;

  case 58: /* assignment: name DECR integer_value  */
#line 182 "compiler/grammar.y"
                                { yyval = yyvsp[-2] + "-=" + yyvsp[0] + ";\n";}
#line 1671 "grammar.tab.c"
    break;

  case 59: /* assignment: name COLON PESOS_SIGN name  */
#line 184 "compiler/grammar.y"
                                   { yyval = yyvsp[-3] + "=" + yyvsp[0] + ";\n";}
#line 1677 "grammar.tab.c"
    break;

  case 60: /* assignment: name COLON PESOS_SIGN name PLUS integer_value  */
#line 186 "compiler/grammar.y"
                                                      { yyval = yyvsp[-5] + "=" + yyvsp[-2] + "+" + yyvsp[0] + ";\n";}
#line 1683 "grammar.tab.c"
    break;

  case 61: /* assignment: name COLON PESOS_SIGN name MINUS integer_value  */
#line 188 "compiler/grammar.y"
                                                       { yyval = yyvsp[-5] + "=" + yyvsp[-2] + "-" + yyvsp[0] + ";\n";}
#line 1689 "grammar.tab.c"
    break;

  case 62: /* integer_value: INTEGER_VALUE  */
#line 192 "compiler/grammar.y"
                      { yyval = std::string(yytext); }
#line 1695 "grammar.tab.c"
    break;

  case 63: /* decimal_value: DECIMAL_VALUE  */
#line 196 "compiler/grammar.y"
                      { yyval = std::string(yytext); }
#line 1701 "grammar.tab.c"
    break;

  case 64: /* unitaryOperations: INC identifiers  */
#line 200 "compiler/grammar.y"
                        { yyval = yyvsp[0] + "++;\n";}
#line 1707 "grammar.tab.c"
    break;

  case 65: /* unitaryOperations: DECR identifiers  */
#line 202 "compiler/grammar.y"
                         { yyval = yyvsp[0] + "--;\n";}
#line 1713 "grammar.tab.c"
    break;

  case 66: /* std_input: LOAD COLON name  */
#line 206 "compiler/grammar.y"
                        { yyval = "\t cin >> " + yyvsp[0] + ";\n"; }
#line 1719 "grammar.tab.c"
    break;

  case 67: /* definition: name COLON INT LEFT_BRACKET integer_value RIGHT_BRACKET  */
#line 210 "compiler/grammar.y"
                                                                {
	
		yyval = "int " + yyvsp[-5] + "[" + yyvsp[-1] + "];\n";
	}
#line 1728 "grammar.tab.c"
    break;

  case 68: /* definition: name COLON INT LEFT_BRACKET PESOS_SIGN ids RIGHT_BRACKET  */
#line 215 "compiler/grammar.y"
                                                                 {
	
		yyval = "int " + yyvsp[-6] + "[" + yyvsp[-1] + "];\n";
	
	}
#line 1738 "grammar.tab.c"
    break;

  case 69: /* definition: name DOUBLE_COLON BLN  */
#line 221 "compiler/grammar.y"
                              { yyval = "\t bool " + yyvsp[-2] + ";\n"; }
#line 1744 "grammar.tab.c"
    break;

  case 70: /* definition: name DOUBLE_COLON INT  */
#line 223 "compiler/grammar.y"
                              { yyval = "\t int " + yyvsp[-2] + ";\n"; }
#line 1750 "grammar.tab.c"
    break;

  case 71: /* definition: ids COMMA ids COMMA ids COLON INT  */
#line 225 "compiler/grammar.y"
                                          { yyval = "\t int " + yyvsp[-6] + "," + yyvsp[-4] + "," + yyvsp[-2] + ";\n"; }
#line 1756 "grammar.tab.c"
    break;

  case 72: /* definition: name DOUBLE_COLON STR  */
#line 227 "compiler/grammar.y"
                              { yyval = "\t string " + yyvsp[-2] + ";\n";}
#line 1762 "grammar.tab.c"
    break;

  case 73: /* definition: name DOUBLE_COLON DEC  */
#line 229 "compiler/grammar.y"
                              { yyval = "\t float " + yyvsp[-2] + ";\n";}
#line 1768 "grammar.tab.c"
    break;

  case 74: /* identifiers: identifiers ids  */
#line 233 "compiler/grammar.y"
                        { yyval = yyvsp[-1] + yyvsp[0]; }
#line 1774 "grammar.tab.c"
    break;

  case 75: /* identifiers: %empty  */
#line 235 "compiler/grammar.y"
                { yyval = ""; }
#line 1780 "grammar.tab.c"
    break;

  case 76: /* ids: name  */
#line 239 "compiler/grammar.y"
                { yyval = yyvsp[0]; }
#line 1786 "grammar.tab.c"
    break;

  case 77: /* std_output: SHOW COLON ITOB PESOS_SIGN name  */
#line 243 "compiler/grammar.y"
                                        { yyval = "\t cout << ((" + yyvsp[0] + "==1) ? \"true\" : \"false\") << endl;"; }
#line 1792 "grammar.tab.c"
    break;

  case 78: /* std_output: SHOW COLON characters_block  */
#line 245 "compiler/grammar.y"
                                        { yyval = "\t cout << " + yyvsp[0] + " << endl;\n"; }
#line 1798 "grammar.tab.c"
    break;

  case 79: /* std_output: SHOW COLON PESOS_SIGN name  */
#line 247 "compiler/grammar.y"
                                        { yyval = "\t cout << " + yyvsp[0] + " << endl;\n"; }
#line 1804 "grammar.tab.c"
    break;

  case 80: /* std_output: SHOW COLON characters_block COMMA PESOS_SIGN name  */
#line 249 "compiler/grammar.y"
                                                          { yyval = "\t cout << " + yyvsp[-3] + " << " + yyvsp[0] + " << endl;\n"; }
#line 1810 "grammar.tab.c"
    break;

  case 81: /* std_output: SHOW COLON characters_block COMMA PESOS_SIGN name COMMA characters_block  */
#line 251 "compiler/grammar.y"
                                                                                { yyval = "\t cout << " + yyvsp[-5] + " << " + yyvsp[-2] + " << " + yyvsp[0] + " << endl;\n"; }
#line 1816 "grammar.tab.c"
    break;

  case 82: /* std_output: SHOW COLON PESOS_SIGN ids COMMA integer_value  */
#line 253 "compiler/grammar.y"
                                                      { yyval = "\t cout << " + yyvsp[-2] + "[" + yyvsp[0] + "]  << endl;\n"; }
#line 1822 "grammar.tab.c"
    break;

  case 83: /* std_output: SHOW COLON PESOS_SIGN ids COMMA PESOS_SIGN ids  */
#line 255 "compiler/grammar.y"
                                                       { yyval = "cout << " + yyvsp[-3] + "[" + yyvsp[0] + "]  << endl;\n"; }
#line 1828 "grammar.tab.c"
    break;

  case 84: /* expression: name LEFT_PARENTHESIS RIGHT_PARENTHESIS  */
#line 259 "compiler/grammar.y"
                                                { yyval = std::string("\t _") + yyvsp[-2] + "();\n"; }
#line 1834 "grammar.tab.c"
    break;

  case 85: /* characters_block: CHARACTERS_BLOCK  */
#line 263 "compiler/grammar.y"
                         { yyval = std::string(yytext); }
#line 1840 "grammar.tab.c"
    break;

  case 86: /* name: NAME  */
#line 267 "compiler/grammar.y"
                {  
			yyval = std::string(yytext);
		}
#line 1848 "grammar.tab.c"
    break;


#line 1852 "grammar.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 272 "compiler/grammar.y"


void yyerror (char const *x){
	printf ("Error %s \n", x);
	exit(1);
}
