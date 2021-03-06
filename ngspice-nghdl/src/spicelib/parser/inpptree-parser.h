/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_PT_INPPTREE_PARSER_H_INCLUDED
# define YY_PT_INPPTREE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int PTdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_NUM = 258,
    TOK_STR = 259,
    TOK_pnode = 260,
    TOK_LE = 261,
    TOK_LT = 262,
    TOK_GE = 263,
    TOK_GT = 264,
    TOK_EQ = 265,
    TOK_NE = 266,
    TOK_OR = 267,
    TOK_AND = 268,
    NEG = 269
  };
#endif
/* Tokens.  */
#define TOK_NUM 258
#define TOK_STR 259
#define TOK_pnode 260
#define TOK_LE 261
#define TOK_LT 262
#define TOK_GE 263
#define TOK_GT 264
#define TOK_EQ 265
#define TOK_NE 266
#define TOK_OR 267
#define TOK_AND 268
#define NEG 269

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 43 "../../../../src/spicelib/parser/inpptree-parser.y" /* yacc.c:1909  */

  double num;
  const char  *str;
  struct INPparseNode *pnode;

#line 88 "inpptree-parser.h" /* yacc.c:1909  */
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



int PTparse (char **line, struct INPparseNode **retval, CKTcircuit *ckt);

#endif /* !YY_PT_INPPTREE_PARSER_H_INCLUDED  */
