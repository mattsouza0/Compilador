/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 149 "Bison.h"

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
