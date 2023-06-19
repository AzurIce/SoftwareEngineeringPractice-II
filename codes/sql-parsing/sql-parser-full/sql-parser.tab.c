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
#line 5 "sql-parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void yyerror(char *s, ...);
void emit(char *s, ...);

#line 81 "sql-parser.tab.c"

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

#include "sql-parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NAME = 3,                       /* NAME  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_INTNUM = 5,                     /* INTNUM  */
  YYSYMBOL_BOOL = 6,                       /* BOOL  */
  YYSYMBOL_APPROXNUM = 7,                  /* APPROXNUM  */
  YYSYMBOL_USERVAR = 8,                    /* USERVAR  */
  YYSYMBOL_ASSIGN = 9,                     /* ASSIGN  */
  YYSYMBOL_OR = 10,                        /* OR  */
  YYSYMBOL_XOR = 11,                       /* XOR  */
  YYSYMBOL_ANDOP = 12,                     /* ANDOP  */
  YYSYMBOL_IN = 13,                        /* IN  */
  YYSYMBOL_IS = 14,                        /* IS  */
  YYSYMBOL_LIKE = 15,                      /* LIKE  */
  YYSYMBOL_REGEXP = 16,                    /* REGEXP  */
  YYSYMBOL_NOT = 17,                       /* NOT  */
  YYSYMBOL_18_ = 18,                       /* '!'  */
  YYSYMBOL_BETWEEN = 19,                   /* BETWEEN  */
  YYSYMBOL_COMPARISON = 20,                /* COMPARISON  */
  YYSYMBOL_21_ = 21,                       /* '|'  */
  YYSYMBOL_22_ = 22,                       /* '&'  */
  YYSYMBOL_SHIFT = 23,                     /* SHIFT  */
  YYSYMBOL_24_ = 24,                       /* '+'  */
  YYSYMBOL_25_ = 25,                       /* '-'  */
  YYSYMBOL_26_ = 26,                       /* '*'  */
  YYSYMBOL_27_ = 27,                       /* '/'  */
  YYSYMBOL_28_ = 28,                       /* '%'  */
  YYSYMBOL_MOD = 29,                       /* MOD  */
  YYSYMBOL_30_ = 30,                       /* '^'  */
  YYSYMBOL_UMINUS = 31,                    /* UMINUS  */
  YYSYMBOL_ADD = 32,                       /* ADD  */
  YYSYMBOL_ALL = 33,                       /* ALL  */
  YYSYMBOL_ALTER = 34,                     /* ALTER  */
  YYSYMBOL_ANALYZE = 35,                   /* ANALYZE  */
  YYSYMBOL_AND = 36,                       /* AND  */
  YYSYMBOL_ANY = 37,                       /* ANY  */
  YYSYMBOL_AS = 38,                        /* AS  */
  YYSYMBOL_ASC = 39,                       /* ASC  */
  YYSYMBOL_AUTO_INCREMENT = 40,            /* AUTO_INCREMENT  */
  YYSYMBOL_BEFORE = 41,                    /* BEFORE  */
  YYSYMBOL_BIGINT = 42,                    /* BIGINT  */
  YYSYMBOL_BINARY = 43,                    /* BINARY  */
  YYSYMBOL_BIT = 44,                       /* BIT  */
  YYSYMBOL_BLOB = 45,                      /* BLOB  */
  YYSYMBOL_BOTH = 46,                      /* BOTH  */
  YYSYMBOL_BY = 47,                        /* BY  */
  YYSYMBOL_CALL = 48,                      /* CALL  */
  YYSYMBOL_CASCADE = 49,                   /* CASCADE  */
  YYSYMBOL_CASE = 50,                      /* CASE  */
  YYSYMBOL_CHANGE = 51,                    /* CHANGE  */
  YYSYMBOL_CHAR = 52,                      /* CHAR  */
  YYSYMBOL_CHECK = 53,                     /* CHECK  */
  YYSYMBOL_COLLATE = 54,                   /* COLLATE  */
  YYSYMBOL_COLUMN = 55,                    /* COLUMN  */
  YYSYMBOL_COMMENT = 56,                   /* COMMENT  */
  YYSYMBOL_CONDITION = 57,                 /* CONDITION  */
  YYSYMBOL_CONSTRAINT = 58,                /* CONSTRAINT  */
  YYSYMBOL_CONTINUE = 59,                  /* CONTINUE  */
  YYSYMBOL_CONVERT = 60,                   /* CONVERT  */
  YYSYMBOL_CREATE = 61,                    /* CREATE  */
  YYSYMBOL_CROSS = 62,                     /* CROSS  */
  YYSYMBOL_CURRENT_DATE = 63,              /* CURRENT_DATE  */
  YYSYMBOL_CURRENT_TIME = 64,              /* CURRENT_TIME  */
  YYSYMBOL_CURRENT_TIMESTAMP = 65,         /* CURRENT_TIMESTAMP  */
  YYSYMBOL_CURRENT_USER = 66,              /* CURRENT_USER  */
  YYSYMBOL_CURSOR = 67,                    /* CURSOR  */
  YYSYMBOL_DATABASE = 68,                  /* DATABASE  */
  YYSYMBOL_DATABASES = 69,                 /* DATABASES  */
  YYSYMBOL_DATE = 70,                      /* DATE  */
  YYSYMBOL_DATETIME = 71,                  /* DATETIME  */
  YYSYMBOL_DAY_HOUR = 72,                  /* DAY_HOUR  */
  YYSYMBOL_DAY_MICROSECOND = 73,           /* DAY_MICROSECOND  */
  YYSYMBOL_DAY_MINUTE = 74,                /* DAY_MINUTE  */
  YYSYMBOL_DAY_SECOND = 75,                /* DAY_SECOND  */
  YYSYMBOL_DECIMAL = 76,                   /* DECIMAL  */
  YYSYMBOL_DECLARE = 77,                   /* DECLARE  */
  YYSYMBOL_DEFAULT = 78,                   /* DEFAULT  */
  YYSYMBOL_DELAYED = 79,                   /* DELAYED  */
  YYSYMBOL_DELETE = 80,                    /* DELETE  */
  YYSYMBOL_DESC = 81,                      /* DESC  */
  YYSYMBOL_DESCRIBE = 82,                  /* DESCRIBE  */
  YYSYMBOL_DETERMINISTIC = 83,             /* DETERMINISTIC  */
  YYSYMBOL_DISTINCT = 84,                  /* DISTINCT  */
  YYSYMBOL_DISTINCTROW = 85,               /* DISTINCTROW  */
  YYSYMBOL_DIV = 86,                       /* DIV  */
  YYSYMBOL_DOUBLE = 87,                    /* DOUBLE  */
  YYSYMBOL_DROP = 88,                      /* DROP  */
  YYSYMBOL_DUAL = 89,                      /* DUAL  */
  YYSYMBOL_EACH = 90,                      /* EACH  */
  YYSYMBOL_ELSE = 91,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 92,                    /* ELSEIF  */
  YYSYMBOL_END = 93,                       /* END  */
  YYSYMBOL_ENUM = 94,                      /* ENUM  */
  YYSYMBOL_EXIT = 95,                      /* EXIT  */
  YYSYMBOL_EXPLAIN = 96,                   /* EXPLAIN  */
  YYSYMBOL_FETCH = 97,                     /* FETCH  */
  YYSYMBOL_FLOAT = 98,                     /* FLOAT  */
  YYSYMBOL_FOR = 99,                       /* FOR  */
  YYSYMBOL_FORCE = 100,                    /* FORCE  */
  YYSYMBOL_FOREIGN = 101,                  /* FOREIGN  */
  YYSYMBOL_FROM = 102,                     /* FROM  */
  YYSYMBOL_FULLTEXT = 103,                 /* FULLTEXT  */
  YYSYMBOL_GRANT = 104,                    /* GRANT  */
  YYSYMBOL_GROUP = 105,                    /* GROUP  */
  YYSYMBOL_HAVING = 106,                   /* HAVING  */
  YYSYMBOL_HIGH_PRIORITY = 107,            /* HIGH_PRIORITY  */
  YYSYMBOL_HOUR_MICROSECOND = 108,         /* HOUR_MICROSECOND  */
  YYSYMBOL_HOUR_MINUTE = 109,              /* HOUR_MINUTE  */
  YYSYMBOL_HOUR_SECOND = 110,              /* HOUR_SECOND  */
  YYSYMBOL_IF = 111,                       /* IF  */
  YYSYMBOL_IGNORE = 112,                   /* IGNORE  */
  YYSYMBOL_INFILE = 113,                   /* INFILE  */
  YYSYMBOL_INDEX = 114,                    /* INDEX  */
  YYSYMBOL_INNER = 115,                    /* INNER  */
  YYSYMBOL_INOUT = 116,                    /* INOUT  */
  YYSYMBOL_INSENSITIVE = 117,              /* INSENSITIVE  */
  YYSYMBOL_INSERT = 118,                   /* INSERT  */
  YYSYMBOL_INT = 119,                      /* INT  */
  YYSYMBOL_INTEGER = 120,                  /* INTEGER  */
  YYSYMBOL_INTERVAL = 121,                 /* INTERVAL  */
  YYSYMBOL_INTO = 122,                     /* INTO  */
  YYSYMBOL_ITERATE = 123,                  /* ITERATE  */
  YYSYMBOL_JOIN = 124,                     /* JOIN  */
  YYSYMBOL_KEY = 125,                      /* KEY  */
  YYSYMBOL_KEYS = 126,                     /* KEYS  */
  YYSYMBOL_KILL = 127,                     /* KILL  */
  YYSYMBOL_LEADING = 128,                  /* LEADING  */
  YYSYMBOL_LEAVE = 129,                    /* LEAVE  */
  YYSYMBOL_LEFT = 130,                     /* LEFT  */
  YYSYMBOL_LIMIT = 131,                    /* LIMIT  */
  YYSYMBOL_LINES = 132,                    /* LINES  */
  YYSYMBOL_LOAD = 133,                     /* LOAD  */
  YYSYMBOL_LOCALTIME = 134,                /* LOCALTIME  */
  YYSYMBOL_LOCALTIMESTAMP = 135,           /* LOCALTIMESTAMP  */
  YYSYMBOL_LOCK = 136,                     /* LOCK  */
  YYSYMBOL_LONG = 137,                     /* LONG  */
  YYSYMBOL_LONGBLOB = 138,                 /* LONGBLOB  */
  YYSYMBOL_LONGTEXT = 139,                 /* LONGTEXT  */
  YYSYMBOL_LOOP = 140,                     /* LOOP  */
  YYSYMBOL_LOW_PRIORITY = 141,             /* LOW_PRIORITY  */
  YYSYMBOL_MATCH = 142,                    /* MATCH  */
  YYSYMBOL_MEDIUMBLOB = 143,               /* MEDIUMBLOB  */
  YYSYMBOL_MEDIUMINT = 144,                /* MEDIUMINT  */
  YYSYMBOL_MEDIUMTEXT = 145,               /* MEDIUMTEXT  */
  YYSYMBOL_MINUTE_MICROSECOND = 146,       /* MINUTE_MICROSECOND  */
  YYSYMBOL_MINUTE_SECOND = 147,            /* MINUTE_SECOND  */
  YYSYMBOL_MODIFIES = 148,                 /* MODIFIES  */
  YYSYMBOL_NATURAL = 149,                  /* NATURAL  */
  YYSYMBOL_NO_WRITE_TO_BINLOG = 150,       /* NO_WRITE_TO_BINLOG  */
  YYSYMBOL_NULLX = 151,                    /* NULLX  */
  YYSYMBOL_NUMBER = 152,                   /* NUMBER  */
  YYSYMBOL_ON = 153,                       /* ON  */
  YYSYMBOL_ONDUPLICATE = 154,              /* ONDUPLICATE  */
  YYSYMBOL_OPTIMIZE = 155,                 /* OPTIMIZE  */
  YYSYMBOL_OPTION = 156,                   /* OPTION  */
  YYSYMBOL_OPTIONALLY = 157,               /* OPTIONALLY  */
  YYSYMBOL_ORDER = 158,                    /* ORDER  */
  YYSYMBOL_OUT = 159,                      /* OUT  */
  YYSYMBOL_OUTER = 160,                    /* OUTER  */
  YYSYMBOL_OUTFILE = 161,                  /* OUTFILE  */
  YYSYMBOL_PRECISION = 162,                /* PRECISION  */
  YYSYMBOL_PRIMARY = 163,                  /* PRIMARY  */
  YYSYMBOL_PROCEDURE = 164,                /* PROCEDURE  */
  YYSYMBOL_PURGE = 165,                    /* PURGE  */
  YYSYMBOL_QUICK = 166,                    /* QUICK  */
  YYSYMBOL_READ = 167,                     /* READ  */
  YYSYMBOL_READS = 168,                    /* READS  */
  YYSYMBOL_REAL = 169,                     /* REAL  */
  YYSYMBOL_REFERENCES = 170,               /* REFERENCES  */
  YYSYMBOL_RELEASE = 171,                  /* RELEASE  */
  YYSYMBOL_RENAME = 172,                   /* RENAME  */
  YYSYMBOL_REPEAT = 173,                   /* REPEAT  */
  YYSYMBOL_REPLACE = 174,                  /* REPLACE  */
  YYSYMBOL_REQUIRE = 175,                  /* REQUIRE  */
  YYSYMBOL_RESTRICT = 176,                 /* RESTRICT  */
  YYSYMBOL_RETURN = 177,                   /* RETURN  */
  YYSYMBOL_REVOKE = 178,                   /* REVOKE  */
  YYSYMBOL_RIGHT = 179,                    /* RIGHT  */
  YYSYMBOL_ROLLUP = 180,                   /* ROLLUP  */
  YYSYMBOL_SCHEMA = 181,                   /* SCHEMA  */
  YYSYMBOL_SCHEMAS = 182,                  /* SCHEMAS  */
  YYSYMBOL_SECOND_MICROSECOND = 183,       /* SECOND_MICROSECOND  */
  YYSYMBOL_SELECT = 184,                   /* SELECT  */
  YYSYMBOL_SENSITIVE = 185,                /* SENSITIVE  */
  YYSYMBOL_SEPARATOR = 186,                /* SEPARATOR  */
  YYSYMBOL_SET = 187,                      /* SET  */
  YYSYMBOL_SHOW = 188,                     /* SHOW  */
  YYSYMBOL_SMALLINT = 189,                 /* SMALLINT  */
  YYSYMBOL_SOME = 190,                     /* SOME  */
  YYSYMBOL_SONAME = 191,                   /* SONAME  */
  YYSYMBOL_SPATIAL = 192,                  /* SPATIAL  */
  YYSYMBOL_SPECIFIC = 193,                 /* SPECIFIC  */
  YYSYMBOL_SQL = 194,                      /* SQL  */
  YYSYMBOL_SQLEXCEPTION = 195,             /* SQLEXCEPTION  */
  YYSYMBOL_SQLSTATE = 196,                 /* SQLSTATE  */
  YYSYMBOL_SQLWARNING = 197,               /* SQLWARNING  */
  YYSYMBOL_SQL_BIG_RESULT = 198,           /* SQL_BIG_RESULT  */
  YYSYMBOL_SQL_CALC_FOUND_ROWS = 199,      /* SQL_CALC_FOUND_ROWS  */
  YYSYMBOL_SQL_SMALL_RESULT = 200,         /* SQL_SMALL_RESULT  */
  YYSYMBOL_SSL = 201,                      /* SSL  */
  YYSYMBOL_STARTING = 202,                 /* STARTING  */
  YYSYMBOL_STRAIGHT_JOIN = 203,            /* STRAIGHT_JOIN  */
  YYSYMBOL_TABLE = 204,                    /* TABLE  */
  YYSYMBOL_TEMPORARY = 205,                /* TEMPORARY  */
  YYSYMBOL_TERMINATED = 206,               /* TERMINATED  */
  YYSYMBOL_TEXT = 207,                     /* TEXT  */
  YYSYMBOL_THEN = 208,                     /* THEN  */
  YYSYMBOL_TIME = 209,                     /* TIME  */
  YYSYMBOL_TIMESTAMP = 210,                /* TIMESTAMP  */
  YYSYMBOL_TINYBLOB = 211,                 /* TINYBLOB  */
  YYSYMBOL_TINYINT = 212,                  /* TINYINT  */
  YYSYMBOL_TINYTEXT = 213,                 /* TINYTEXT  */
  YYSYMBOL_TO = 214,                       /* TO  */
  YYSYMBOL_TRAILING = 215,                 /* TRAILING  */
  YYSYMBOL_TRIGGER = 216,                  /* TRIGGER  */
  YYSYMBOL_UNDO = 217,                     /* UNDO  */
  YYSYMBOL_UNION = 218,                    /* UNION  */
  YYSYMBOL_UNIQUE = 219,                   /* UNIQUE  */
  YYSYMBOL_UNLOCK = 220,                   /* UNLOCK  */
  YYSYMBOL_UNSIGNED = 221,                 /* UNSIGNED  */
  YYSYMBOL_UPDATE = 222,                   /* UPDATE  */
  YYSYMBOL_USAGE = 223,                    /* USAGE  */
  YYSYMBOL_USE = 224,                      /* USE  */
  YYSYMBOL_USING = 225,                    /* USING  */
  YYSYMBOL_UTC_DATE = 226,                 /* UTC_DATE  */
  YYSYMBOL_UTC_TIME = 227,                 /* UTC_TIME  */
  YYSYMBOL_UTC_TIMESTAMP = 228,            /* UTC_TIMESTAMP  */
  YYSYMBOL_VALUES = 229,                   /* VALUES  */
  YYSYMBOL_VARBINARY = 230,                /* VARBINARY  */
  YYSYMBOL_VARCHAR = 231,                  /* VARCHAR  */
  YYSYMBOL_VARYING = 232,                  /* VARYING  */
  YYSYMBOL_WHEN = 233,                     /* WHEN  */
  YYSYMBOL_WHERE = 234,                    /* WHERE  */
  YYSYMBOL_WHILE = 235,                    /* WHILE  */
  YYSYMBOL_WITH = 236,                     /* WITH  */
  YYSYMBOL_WRITE = 237,                    /* WRITE  */
  YYSYMBOL_YEAR = 238,                     /* YEAR  */
  YYSYMBOL_YEAR_MONTH = 239,               /* YEAR_MONTH  */
  YYSYMBOL_ZEROFILL = 240,                 /* ZEROFILL  */
  YYSYMBOL_ESCAPED = 241,                  /* ESCAPED  */
  YYSYMBOL_EXISTS = 242,                   /* EXISTS  */
  YYSYMBOL_FSUBSTRING = 243,               /* FSUBSTRING  */
  YYSYMBOL_FTRIM = 244,                    /* FTRIM  */
  YYSYMBOL_FDATE_ADD = 245,                /* FDATE_ADD  */
  YYSYMBOL_FDATE_SUB = 246,                /* FDATE_SUB  */
  YYSYMBOL_FCOUNT = 247,                   /* FCOUNT  */
  YYSYMBOL_248_ = 248,                     /* ';'  */
  YYSYMBOL_249_ = 249,                     /* '.'  */
  YYSYMBOL_250_ = 250,                     /* '('  */
  YYSYMBOL_251_ = 251,                     /* ')'  */
  YYSYMBOL_252_ = 252,                     /* ','  */
  YYSYMBOL_YYACCEPT = 253,                 /* $accept  */
  YYSYMBOL_stmt_list = 254,                /* stmt_list  */
  YYSYMBOL_expr = 255,                     /* expr  */
  YYSYMBOL_val_list = 256,                 /* val_list  */
  YYSYMBOL_opt_val_list = 257,             /* opt_val_list  */
  YYSYMBOL_trim_ltb = 258,                 /* trim_ltb  */
  YYSYMBOL_interval_exp = 259,             /* interval_exp  */
  YYSYMBOL_case_list = 260,                /* case_list  */
  YYSYMBOL_stmt = 261,                     /* stmt  */
  YYSYMBOL_select_stmt = 262,              /* select_stmt  */
  YYSYMBOL_opt_where = 263,                /* opt_where  */
  YYSYMBOL_opt_groupby = 264,              /* opt_groupby  */
  YYSYMBOL_groupby_list = 265,             /* groupby_list  */
  YYSYMBOL_opt_asc_desc = 266,             /* opt_asc_desc  */
  YYSYMBOL_opt_with_rollup = 267,          /* opt_with_rollup  */
  YYSYMBOL_opt_having = 268,               /* opt_having  */
  YYSYMBOL_opt_orderby = 269,              /* opt_orderby  */
  YYSYMBOL_opt_limit = 270,                /* opt_limit  */
  YYSYMBOL_opt_into_list = 271,            /* opt_into_list  */
  YYSYMBOL_column_list = 272,              /* column_list  */
  YYSYMBOL_select_opts = 273,              /* select_opts  */
  YYSYMBOL_select_expr_list = 274,         /* select_expr_list  */
  YYSYMBOL_select_expr = 275,              /* select_expr  */
  YYSYMBOL_opt_as_alias = 276,             /* opt_as_alias  */
  YYSYMBOL_table_references = 277,         /* table_references  */
  YYSYMBOL_table_reference = 278,          /* table_reference  */
  YYSYMBOL_table_factor = 279,             /* table_factor  */
  YYSYMBOL_opt_as = 280,                   /* opt_as  */
  YYSYMBOL_join_table = 281,               /* join_table  */
  YYSYMBOL_opt_inner_cross = 282,          /* opt_inner_cross  */
  YYSYMBOL_opt_outer = 283,                /* opt_outer  */
  YYSYMBOL_left_or_right = 284,            /* left_or_right  */
  YYSYMBOL_opt_left_or_right_outer = 285,  /* opt_left_or_right_outer  */
  YYSYMBOL_opt_join_condition = 286,       /* opt_join_condition  */
  YYSYMBOL_join_condition = 287,           /* join_condition  */
  YYSYMBOL_index_hint = 288,               /* index_hint  */
  YYSYMBOL_opt_for_join = 289,             /* opt_for_join  */
  YYSYMBOL_index_list = 290,               /* index_list  */
  YYSYMBOL_table_subquery = 291,           /* table_subquery  */
  YYSYMBOL_delete_stmt = 292,              /* delete_stmt  */
  YYSYMBOL_delete_opts = 293,              /* delete_opts  */
  YYSYMBOL_delete_list = 294,              /* delete_list  */
  YYSYMBOL_opt_dot_star = 295,             /* opt_dot_star  */
  YYSYMBOL_insert_stmt = 296,              /* insert_stmt  */
  YYSYMBOL_opt_ondupupdate = 297,          /* opt_ondupupdate  */
  YYSYMBOL_insert_opts = 298,              /* insert_opts  */
  YYSYMBOL_opt_into = 299,                 /* opt_into  */
  YYSYMBOL_opt_col_names = 300,            /* opt_col_names  */
  YYSYMBOL_insert_vals_list = 301,         /* insert_vals_list  */
  YYSYMBOL_insert_vals = 302,              /* insert_vals  */
  YYSYMBOL_insert_asgn_list = 303,         /* insert_asgn_list  */
  YYSYMBOL_replace_stmt = 304,             /* replace_stmt  */
  YYSYMBOL_update_stmt = 305,              /* update_stmt  */
  YYSYMBOL_update_opts = 306,              /* update_opts  */
  YYSYMBOL_update_asgn_list = 307,         /* update_asgn_list  */
  YYSYMBOL_create_database_stmt = 308,     /* create_database_stmt  */
  YYSYMBOL_opt_if_not_exists = 309,        /* opt_if_not_exists  */
  YYSYMBOL_create_table_stmt = 310,        /* create_table_stmt  */
  YYSYMBOL_opt_temporary = 311,            /* opt_temporary  */
  YYSYMBOL_create_col_list = 312,          /* create_col_list  */
  YYSYMBOL_create_definition = 313,        /* create_definition  */
  YYSYMBOL_314_1 = 314,                    /* $@1  */
  YYSYMBOL_column_atts = 315,              /* column_atts  */
  YYSYMBOL_opt_length = 316,               /* opt_length  */
  YYSYMBOL_opt_binary = 317,               /* opt_binary  */
  YYSYMBOL_opt_uz = 318,                   /* opt_uz  */
  YYSYMBOL_opt_csc = 319,                  /* opt_csc  */
  YYSYMBOL_data_type = 320,                /* data_type  */
  YYSYMBOL_enum_list = 321,                /* enum_list  */
  YYSYMBOL_create_select_statement = 322,  /* create_select_statement  */
  YYSYMBOL_opt_ignore_replace = 323,       /* opt_ignore_replace  */
  YYSYMBOL_set_stmt = 324,                 /* set_stmt  */
  YYSYMBOL_set_list = 325,                 /* set_list  */
  YYSYMBOL_set_expr = 326                  /* set_expr  */
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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1627

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  253
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  302
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  627

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   493


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,     2,     2,     2,    28,    22,     2,
     250,   251,    26,    24,   252,    25,   249,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   248,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    21,     2,     2,     2,     2,     2,
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
      15,    16,    17,    19,    20,    23,    29,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   288,   288,   289,   294,   295,   296,   297,   298,   299,
     300,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   323,
     324,   325,   326,   329,   330,   331,   332,   334,   337,   340,
     341,   344,   345,   348,   349,   350,   351,   352,   356,   360,
     361,   363,   364,   365,   367,   368,   371,   372,   373,   376,
     377,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     390,   391,   392,   393,   396,   397,   400,   401,   404,   405,
     408,   409,   410,   413,   418,   421,   424,   430,   431,   433,
     434,   438,   440,   444,   445,   446,   449,   450,   453,   454,
     456,   457,   460,   460,   461,   464,   465,   468,   469,   472,
     473,   475,   477,   479,   481,   483,   485,   487,   492,   493,
     494,   495,   498,   500,   501,   502,   505,   506,   509,   510,
     514,   515,   517,   518,   521,   522,   526,   528,   530,   532,
     534,   538,   539,   540,   543,   544,   547,   548,   551,   552,
     553,   556,   557,   560,   561,   565,   567,   569,   571,   574,
     575,   578,   579,   582,   587,   591,   596,   597,   598,   599,
     603,   608,   609,   613,   613,   616,   624,   627,   633,   634,
     637,   638,   639,   640,   641,   644,   644,   647,   648,   651,
     652,   655,   656,   657,   658,   660,   667,   670,   673,   676,
     681,   687,   690,   696,   702,   708,   711,   718,   719,   720,
     724,   727,   730,   733,   741,   745,   747,   751,   752,   758,
     761,   765,   770,   775,   779,   785,   790,   791,   794,   795,
     798,   799,   800,   801,   802,   805,   805,   808,   809,   810,
     811,   813,   815,   817,   819,   821,   823,   824,   825,   826,
     830,   831,   832,   835,   836,   839,   840,   841,   844,   845,
     846,   850,   851,   852,   853,   854,   855,   856,   857,   858,
     859,   860,   861,   862,   863,   864,   865,   866,   867,   868,
     869,   870,   871,   872,   873,   874,   875,   876,   877,   878,
     879,   882,   883,   886,   888,   889,   890,   895,   898,   900,
     900,   903,   905
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
  "\"end of file\"", "error", "\"invalid token\"", "NAME", "STRING",
  "INTNUM", "BOOL", "APPROXNUM", "USERVAR", "ASSIGN", "OR", "XOR", "ANDOP",
  "IN", "IS", "LIKE", "REGEXP", "NOT", "'!'", "BETWEEN", "COMPARISON",
  "'|'", "'&'", "SHIFT", "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'",
  "UMINUS", "ADD", "ALL", "ALTER", "ANALYZE", "AND", "ANY", "AS", "ASC",
  "AUTO_INCREMENT", "BEFORE", "BIGINT", "BINARY", "BIT", "BLOB", "BOTH",
  "BY", "CALL", "CASCADE", "CASE", "CHANGE", "CHAR", "CHECK", "COLLATE",
  "COLUMN", "COMMENT", "CONDITION", "CONSTRAINT", "CONTINUE", "CONVERT",
  "CREATE", "CROSS", "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP",
  "CURRENT_USER", "CURSOR", "DATABASE", "DATABASES", "DATE", "DATETIME",
  "DAY_HOUR", "DAY_MICROSECOND", "DAY_MINUTE", "DAY_SECOND", "DECIMAL",
  "DECLARE", "DEFAULT", "DELAYED", "DELETE", "DESC", "DESCRIBE",
  "DETERMINISTIC", "DISTINCT", "DISTINCTROW", "DIV", "DOUBLE", "DROP",
  "DUAL", "EACH", "ELSE", "ELSEIF", "END", "ENUM", "EXIT", "EXPLAIN",
  "FETCH", "FLOAT", "FOR", "FORCE", "FOREIGN", "FROM", "FULLTEXT", "GRANT",
  "GROUP", "HAVING", "HIGH_PRIORITY", "HOUR_MICROSECOND", "HOUR_MINUTE",
  "HOUR_SECOND", "IF", "IGNORE", "INFILE", "INDEX", "INNER", "INOUT",
  "INSENSITIVE", "INSERT", "INT", "INTEGER", "INTERVAL", "INTO", "ITERATE",
  "JOIN", "KEY", "KEYS", "KILL", "LEADING", "LEAVE", "LEFT", "LIMIT",
  "LINES", "LOAD", "LOCALTIME", "LOCALTIMESTAMP", "LOCK", "LONG",
  "LONGBLOB", "LONGTEXT", "LOOP", "LOW_PRIORITY", "MATCH", "MEDIUMBLOB",
  "MEDIUMINT", "MEDIUMTEXT", "MINUTE_MICROSECOND", "MINUTE_SECOND",
  "MODIFIES", "NATURAL", "NO_WRITE_TO_BINLOG", "NULLX", "NUMBER", "ON",
  "ONDUPLICATE", "OPTIMIZE", "OPTION", "OPTIONALLY", "ORDER", "OUT",
  "OUTER", "OUTFILE", "PRECISION", "PRIMARY", "PROCEDURE", "PURGE",
  "QUICK", "READ", "READS", "REAL", "REFERENCES", "RELEASE", "RENAME",
  "REPEAT", "REPLACE", "REQUIRE", "RESTRICT", "RETURN", "REVOKE", "RIGHT",
  "ROLLUP", "SCHEMA", "SCHEMAS", "SECOND_MICROSECOND", "SELECT",
  "SENSITIVE", "SEPARATOR", "SET", "SHOW", "SMALLINT", "SOME", "SONAME",
  "SPATIAL", "SPECIFIC", "SQL", "SQLEXCEPTION", "SQLSTATE", "SQLWARNING",
  "SQL_BIG_RESULT", "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SSL",
  "STARTING", "STRAIGHT_JOIN", "TABLE", "TEMPORARY", "TERMINATED", "TEXT",
  "THEN", "TIME", "TIMESTAMP", "TINYBLOB", "TINYINT", "TINYTEXT", "TO",
  "TRAILING", "TRIGGER", "UNDO", "UNION", "UNIQUE", "UNLOCK", "UNSIGNED",
  "UPDATE", "USAGE", "USE", "USING", "UTC_DATE", "UTC_TIME",
  "UTC_TIMESTAMP", "VALUES", "VARBINARY", "VARCHAR", "VARYING", "WHEN",
  "WHERE", "WHILE", "WITH", "WRITE", "YEAR", "YEAR_MONTH", "ZEROFILL",
  "ESCAPED", "EXISTS", "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB",
  "FCOUNT", "';'", "'.'", "'('", "')'", "','", "$accept", "stmt_list",
  "expr", "val_list", "opt_val_list", "trim_ltb", "interval_exp",
  "case_list", "stmt", "select_stmt", "opt_where", "opt_groupby",
  "groupby_list", "opt_asc_desc", "opt_with_rollup", "opt_having",
  "opt_orderby", "opt_limit", "opt_into_list", "column_list",
  "select_opts", "select_expr_list", "select_expr", "opt_as_alias",
  "table_references", "table_reference", "table_factor", "opt_as",
  "join_table", "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_into",
  "opt_col_names", "insert_vals_list", "insert_vals", "insert_asgn_list",
  "replace_stmt", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_table_stmt",
  "opt_temporary", "create_col_list", "create_definition", "$@1",
  "column_atts", "opt_length", "opt_binary", "opt_uz", "opt_csc",
  "data_type", "enum_list", "create_select_statement",
  "opt_ignore_replace", "set_stmt", "set_list", "set_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-345)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-222)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     256,   -21,  -345,  -345,  -345,  -345,    42,     0,   179,  -196,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,   -57,   -57,
    -345,  -146,    32,   306,   306,   125,   196,  -170,  -345,   201,
       3,  -345,  -110,  -345,  -140,   152,   200,   -57,   -56,   205,
    -345,  -345,  -345,   -66,  -345,  -345,  -345,  -345,  -345,   210,
     214,    70,  -345,  -345,  -345,  -345,   233,   735,   735,   735,
    -345,  -345,   735,   268,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,    19,    48,    71,    77,    87,    98,
     374,  1484,   -61,  -345,   735,   735,    42,     4,     5,     2,
      -1,   -86,   296,  -345,  -345,   312,  -345,  -345,  -345,  -345,
     349,   333,  -345,   182,   -40,     3,   370,   -30,    -6,   373,
     735,   735,   735,   782,   782,  -345,  -345,   735,    51,    -2,
     206,   735,   218,   735,   735,   466,     1,   104,  -345,   735,
     735,   735,   146,    78,   735,   735,   473,   735,   297,   735,
     735,   735,   735,   735,   735,   735,   735,   735,   735,   405,
    -345,     3,   735,  1542,  1542,  -345,   412,    36,   171,   113,
     424,     3,  -345,  -345,  -345,   -42,  -345,     3,   301,   269,
    -345,   429,    41,  -345,   735,   288,     3,   -88,   -56,   452,
     454,   -22,   452,   128,  -345,   863,  -345,   226,  1542,  1018,
    1118,    33,   735,  -345,   735,   231,   818,   234,  -345,  -345,
    -345,   239,   735,   913,   934,   249,  1039,  -345,  -345,  1294,
    1561,  1579,   545,  -345,    45,  -345,  1597,  1597,   267,   735,
     735,  1515,   337,   341,   342,   545,   577,   497,   531,   478,
     422,   422,   502,   502,   502,   502,  -345,  -345,   -88,  -345,
     138,   471,   486,   498,  -345,  -345,  -345,   -11,    11,   296,
     269,   269,   490,   479,     3,  -345,   507,  -345,  -345,  -345,
     630,   281,  -345,   312,  1542,   587,   512,   -88,  -345,  -345,
     618,   -46,  -345,   142,   398,   500,   -46,   398,   500,   735,
    -345,   735,   735,  -345,  1409,  1168,  -345,   735,  -345,  -345,
    1388,   535,   535,  -345,  -345,   401,   406,  -345,  -345,   545,
    1597,  1597,   735,   206,   206,   206,   407,   561,    36,   568,
     568,   568,   735,   665,   666,   288,  -345,  -345,     3,   735,
     -28,     3,    -9,   164,   420,   421,   557,   151,  -345,   680,
     206,   735,   735,  -345,  -345,   572,   559,   685,  -345,  -345,
     688,   622,   -15,  -345,  -345,   -15,  -345,  -345,  1542,  1430,
    -345,   735,   997,   735,   735,   441,   442,  -345,  -345,   443,
     444,   829,   445,   447,   450,  -345,   655,   597,  -345,   580,
     455,   457,   464,  1542,   697,   -10,   512,  -345,  1542,   735,
     468,  -345,  -345,   -28,   281,  -345,   474,   475,   454,   454,
     476,   -29,   281,  1159,  -345,  1452,   480,   976,  -345,  1542,
     501,   707,  -345,  -345,  1542,   184,   481,  -345,  -345,  -345,
    1542,   735,  -345,   477,  1097,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,   735,   735,   288,  -345,   727,   727,   727,   735,
     735,   730,  -345,  1542,   454,  -345,   190,   454,   454,   215,
     229,   454,  -345,  -345,   494,   494,   494,  -345,   494,  -345,
    -345,   494,   494,   495,   494,   494,   494,  -345,   703,  -345,
     494,   703,   494,   506,   494,   703,  -345,  -345,  -345,   494,
     703,   511,   514,  -345,  -345,  -345,  -345,  -345,   735,   735,
     452,   656,  -345,   672,   622,  1061,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,    43,  1542,   512,  -345,
     246,   282,   284,  1542,  1542,   742,   286,    44,   294,   313,
    -345,  -345,   315,   761,  -345,  -345,  -345,  -345,  -345,  -345,
     743,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,   743,
    -345,  -345,  -345,  -345,   763,   764,    29,  1452,  1542,   518,
    -345,  1542,  -345,  1542,   317,  -345,   591,  -345,   651,  -345,
     771,  -345,  -345,   735,  -345,  -345,  -345,  -345,  -345,   320,
     -58,   107,   -58,   -58,  -345,   322,   -58,   -58,   -58,   107,
     -58,   107,   -58,   330,   -58,   107,   -58,   107,   524,   525,
     626,  -345,   775,   489,  -345,  -345,   657,   -72,  -345,  -345,
    -345,   454,  -345,  -345,  1542,  -345,   776,  -345,  -345,   593,
     779,  -345,   780,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,   454,   534,   542,   790,  -345,   107,
    -345,   107,   107,   332,  -345,  -345,  -345
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   226,   169,   180,   180,   109,     0,   180,     0,     0,
      84,   164,   176,   201,   205,   214,   219,   297,   217,   217,
     227,     0,     0,   186,   186,     0,     0,   298,   299,     0,
       0,     1,     0,     2,     0,     0,     0,   217,   173,     0,
     168,   166,   167,     0,   182,   183,   184,   185,   181,     0,
       0,     4,     7,     8,    10,     9,     6,     0,     0,     0,
     120,   110,     0,     0,    81,    82,    80,   111,   112,   113,
     116,   117,   115,   114,     0,     0,     0,     0,     0,     0,
       0,   125,    85,   118,     0,     0,     0,   184,   181,   125,
       0,     0,   126,   128,   129,   135,     3,   218,   215,   216,
       0,     0,   171,    87,     0,     0,     0,   187,   187,     0,
      41,     0,     0,    25,    26,    17,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,     0,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,     0,   302,   301,   300,     0,   158,     0,     0,
       0,     0,   143,   142,   146,   150,   147,     0,     0,   144,
     134,     0,   294,   174,     0,   100,     0,    87,   173,     0,
       0,     0,     0,     0,     5,    39,    42,     0,    37,     0,
       0,     0,     0,    72,     0,     0,    39,     0,    58,    56,
      57,     0,     0,     0,     0,     0,     0,    28,   121,    19,
      20,    18,     0,    35,     0,    33,    76,    78,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    21,    22,    24,
      11,    12,    13,    14,    15,    16,    23,   123,    87,   119,
     125,     0,     0,     0,   130,   163,   133,     0,    87,   127,
     144,   144,     0,   137,     0,   145,     0,   132,   295,   296,
       0,   235,   223,   135,    88,     0,   102,    87,   170,   172,
       0,   178,   107,     0,     0,   178,   178,     0,   178,     0,
      48,     0,     0,    70,     0,     0,    47,     0,    51,    54,
       0,     0,     0,    49,    50,     0,     0,    36,    34,     0,
      77,    79,     0,     0,     0,     0,     0,    89,   158,   160,
     160,   160,     0,     0,     0,   100,   148,   149,     0,     0,
     151,     0,   294,     0,     0,     0,     0,     0,   228,     0,
       0,     0,     0,   165,   175,     0,     0,     0,   195,   188,
       0,     0,   178,   200,   203,   178,   204,    40,    74,     0,
      73,     0,     0,     0,     0,     0,     0,    43,    45,     0,
       0,    38,     0,     0,     0,    29,     0,    98,   131,     0,
       0,     0,     0,   210,     0,     0,   102,   140,   138,     0,
       0,   136,   152,     0,   235,   225,     0,     0,     0,     0,
       0,   294,   235,     0,   293,    93,   101,   103,   197,   196,
       0,     0,   108,   192,   191,     0,     0,   177,   202,    71,
      75,     0,    52,     0,     0,    59,    60,    44,    46,    32,
      30,    31,     0,     0,   100,   159,     0,     0,     0,     0,
       0,     0,   206,   153,     0,   139,     0,     0,     0,     0,
       0,     0,   222,   229,   250,   250,   250,   282,   250,   272,
     275,   250,   250,     0,   250,   250,   250,   284,   253,   283,
     250,   253,   250,     0,   250,   253,   273,   274,   281,   250,
     253,     0,     0,   276,   237,    94,    95,    91,     0,     0,
       0,     0,   189,     0,     0,     0,    55,    61,    62,    63,
      64,    67,    68,    69,    66,    65,    96,    99,   102,   161,
       0,     0,     0,   211,   212,     0,     0,   294,     0,     0,
     232,   231,     0,     0,   255,   279,   261,   258,   255,   255,
       0,   255,   255,   255,   254,   258,   255,   258,   255,     0,
     255,   258,   255,   258,     0,     0,   236,    93,   104,   179,
     199,   198,   194,   193,     0,    53,     0,    90,   105,   157,
       0,   156,   155,     0,   154,   224,   233,   234,   230,     0,
     267,   277,   271,   269,   291,     0,   270,   265,   266,   288,
     264,   287,   268,     0,   263,   286,   262,   285,     0,     0,
       0,   244,     0,     0,   248,   239,     0,     0,    92,   190,
      97,     0,    86,   162,   213,   251,     0,   256,   257,     0,
       0,   258,     0,   258,   280,   258,   238,   249,   240,   241,
     243,   242,   247,   246,     0,   106,     0,     0,   260,   289,
     292,   290,   278,     0,   252,   259,   245
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -345,  -345,   -25,   -65,  -345,  -345,   504,   679,   805,    84,
     -37,  -345,   399,   287,  -345,  -345,  -272,  -327,  -345,  -344,
    -345,   740,   671,   -70,    82,   664,  -119,   563,  -345,  -345,
     335,  -345,  -345,  -345,   453,   519,   283,   185,  -345,  -345,
    -345,   821,   683,  -345,   134,   334,   838,   755,   594,   386,
    -181,  -345,  -345,  -345,  -345,  -345,   209,  -345,  -345,   510,
     503,  -345,  -345,   303,  -126,   123,  -182,  -345,   352,  -280,
    -345,  -345,  -345,   810
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     8,   185,   186,   187,   202,   355,   119,     9,    10,
     175,   367,   396,   477,   547,   424,   266,   333,   592,   273,
      25,    82,    83,   150,    91,    92,    93,   171,    94,   168,
     256,   169,   252,   381,   382,   244,   370,   500,    95,    11,
      22,    43,   102,    12,   338,    23,    49,   181,   342,   405,
     271,    13,    14,    30,   248,    15,    35,    16,    21,   327,
     328,   329,   536,   514,   525,   560,   561,   474,   565,   262,
     263,    17,    27,    28
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      81,   276,    89,  -207,   128,   128,    89,  -209,  -208,   312,
     430,   129,   130,   131,   132,   133,   134,   135,   136,   157,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   113,   114,   115,    38,   105,   116,   118,   149,
     149,   151,   385,   376,   439,   440,   580,    18,   253,   432,
      26,   297,    33,   613,    34,   126,   197,   201,    37,   153,
     154,   129,   130,   131,   132,   133,   134,   135,   136,   581,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,    86,   258,   213,   582,   188,   189,   250,   192,
     506,   193,   190,   508,   509,   214,   196,   512,   203,   204,
     206,   160,    97,   258,   209,   210,   211,   583,   336,   216,
     217,   442,   221,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   282,   379,   283,    81,    51,    52,
      53,    54,    55,    56,    39,   320,   241,   251,    96,   336,
     268,   128,    57,    58,    40,   259,   174,   295,   242,   264,
      59,    60,   498,   258,   584,    98,   258,   179,    61,   599,
      19,   600,     5,   597,   161,   259,   161,   284,    62,   285,
     308,   548,   159,    41,   158,    63,   149,   290,   614,    31,
     585,   182,   598,     5,    20,   176,   106,   177,    64,    65,
      66,   152,   586,   101,   300,   301,   298,   380,    42,   377,
     189,   307,   383,    99,   195,    84,   337,   274,   103,    67,
      68,   315,   106,   107,   347,   259,    85,   108,   259,  -220,
     180,    51,    52,    53,    54,    55,    56,   555,    36,   215,
     334,   194,    69,   238,   359,    57,    58,   406,   313,   431,
       1,   384,   111,    59,   180,   174,   100,   615,   587,    90,
    -207,   156,   207,    90,  -209,  -208,   348,   349,   267,     2,
     243,    62,   352,   314,   198,   275,   194,   278,    63,   120,
     623,    51,    52,    53,    54,    55,    56,   361,   386,   546,
      44,    64,    65,    66,   117,    57,    58,   373,   413,   387,
     260,   261,  -221,    59,   378,   478,   296,     3,   121,   539,
      51,    52,    53,    54,    55,    56,   395,   397,    45,   306,
     399,    62,     5,    87,    57,    58,   404,     1,    63,   109,
     110,   122,    59,    70,    71,    72,   410,   123,    73,   414,
     222,    64,    65,    66,   223,   527,     2,   124,    24,   531,
      62,    29,    88,   569,   533,   571,   199,    63,   125,   575,
     170,   577,   172,     4,   433,   208,   152,   277,   162,   173,
      64,    65,    66,     5,   246,   161,     6,    74,    75,    76,
      77,    78,    79,   178,     3,    80,   184,    51,    52,    53,
      54,    55,    56,   360,   323,    44,   485,   362,   363,   364,
       5,    57,    58,   339,   340,   324,   212,   395,   497,    59,
      60,     7,   391,   392,   503,   504,   325,  -173,   237,   343,
     344,   163,   346,    45,   394,   240,   174,    62,    46,   619,
    -141,   621,   245,   622,    63,   254,   164,   247,    47,   255,
       4,   101,   257,   200,  -173,   482,   483,    64,    65,    66,
       5,   507,   392,     6,   326,   165,   265,    48,   144,   145,
     146,   147,   148,   537,   538,   270,   541,   272,   543,   404,
      74,    75,    76,    77,    78,    79,   510,   340,   112,    51,
      52,    53,    54,    55,    56,   166,   407,   280,     7,   408,
     511,   340,   286,    57,    58,   288,   218,   224,   219,   220,
     289,    59,   205,   608,   609,   610,   611,   549,   550,   167,
     293,   117,   142,   143,   144,   145,   146,   147,   148,    62,
      74,    75,    76,    77,    78,    79,    63,   299,   112,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   594,    64,
      65,    66,   148,   551,   550,   552,   550,   554,   340,    74,
      75,    76,    77,    78,    79,   556,   340,   225,    51,    52,
      53,    54,    55,    56,   141,   142,   143,   144,   145,   146,
     147,   148,    57,    58,   557,   340,   558,   340,   589,   483,
      59,   595,   596,   601,   602,    51,    52,    53,    54,    55,
      56,   603,   602,   626,   340,   316,   317,   303,    62,    57,
      58,   304,   305,   371,   372,    63,   309,    59,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,    64,    65,
      66,   310,   501,   502,   318,    62,    74,    75,    76,    77,
      78,    79,    63,   311,    80,    51,    52,    53,    54,    55,
      56,   321,   319,   322,   331,    64,    65,    66,   335,    57,
      58,   562,   563,   332,   566,   567,   568,    59,   341,   570,
     398,   572,   357,   574,   336,   576,   354,   358,   365,    51,
      52,    53,    54,    55,    56,    62,   366,   369,   374,   375,
     388,   389,    63,    57,    58,    51,    52,    53,    54,    55,
      56,    59,   390,   393,   400,    64,    65,    66,   401,    57,
      58,   402,   415,   416,   417,   418,   419,    59,   420,    62,
     403,   421,   422,   423,   425,   426,    63,   427,    74,    75,
      76,    77,    78,    79,   428,    62,   112,   429,   434,    64,
      65,    66,    63,   480,   437,   438,   441,   481,   486,     5,
     499,   484,   478,   505,   540,    64,    65,    66,    51,    52,
      53,    54,    55,    56,   513,   520,   524,   564,   515,   516,
     542,   517,    57,    58,   518,   519,   529,   521,   522,   523,
      59,   534,   553,   526,   535,   528,   559,   530,   578,   579,
     337,   590,   532,   591,   593,   604,   605,   606,    62,   607,
     617,   616,   612,   618,   620,    63,   340,    74,    75,    76,
      77,    78,    79,   624,   625,   112,   356,   191,    64,    65,
      66,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,    32,    74,    75,    76,    77,    78,    79,
     127,   496,   112,   239,   588,   249,   330,   368,   129,   130,
     131,   132,   133,   134,   135,   136,   435,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     104,   269,    50,   183,    74,    75,    76,    77,    78,    79,
     544,   345,   112,   129,   130,   131,   132,   133,   134,   135,
     136,   573,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   436,   443,   155,     0,    74,    75,
      76,    77,    78,    79,     0,     0,   112,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
     287,     0,   112,   129,   130,   131,   132,   133,   134,   135,
     136,     0,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   129,   130,   131,   132,   133,   134,
     135,   136,     0,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,     0,     0,   112,   129,   130,   131,   132,
     133,   134,   135,   136,     0,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   129,   130,   131,
     132,   133,   134,   135,   136,     0,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   129,   130,
     131,   132,   133,   134,   135,   136,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   129,
     130,   131,   132,   133,   134,   135,   136,     0,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     279,   129,   130,   131,   132,   133,   134,   135,   136,     0,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,     0,     0,     0,   411,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,   131,
     132,   133,   134,   135,   136,   279,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   129,   130,
     131,   132,   133,   134,   135,   136,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   291,     0,     0,     0,   487,
     488,   489,   490,     0,     0,     0,     0,     0,   129,   130,
     131,   132,   133,   134,   135,   136,   292,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,   444,   445,   446,   447,   491,   492,   493,     0,     0,
       0,   448,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   479,   449,
     450,     0,     0,     0,     0,   451,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   452,     0,   412,     0,
       0,     0,     0,   453,     0,     0,     0,   454,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   207,
       0,     0,     0,     0,     0,     0,     0,     0,   455,   456,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     294,     0,     0,     0,     0,     0,     0,   457,   458,     0,
       0,     0,   459,   460,   461,   130,   131,   132,   133,   134,
     135,   136,   545,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,   281,     0,   462,     0,
       0,     0,     0,     0,     0,   494,   495,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   463,     0,   464,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   465,     0,   466,   467,
     468,   469,   470,     0,     0,     0,   351,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   471,
     472,     0,     0,     0,     0,     0,     0,   473,   129,   130,
     131,   132,   133,   134,   135,   136,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   129,
     130,   131,   132,   133,   134,   135,   136,     0,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     129,   130,   131,   132,   133,   134,   135,   136,     0,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,   129,   130,   131,   132,   133,   134,   135,   136,
       0,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,   128,     0,     0,
     353,   475,     0,     0,   129,   130,   131,   132,   133,   134,
     135,   136,   350,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
       0,     0,   149,   409,     0,   129,   130,   131,   132,   133,
     134,   135,   136,   476,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,     0,     0,
       0,   302,   129,   130,   131,   132,   133,   134,   135,   136,
       0,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   131,   132,   133,   134,   135,   136,     0,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   132,   133,   134,   135,   136,     0,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
    -222,  -222,  -222,  -222,   136,     0,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148
};

static const yytype_int16 yycheck[] =
{
      25,   182,     3,     3,     3,     3,     3,     3,     3,    20,
      20,    10,    11,    12,    13,    14,    15,    16,    17,    89,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    57,    58,    59,     3,   102,    62,    63,    38,
      38,   102,   322,   315,   388,   389,    17,    68,   167,   376,
       8,     6,   248,   125,   111,    80,   121,   122,   204,    84,
      85,    10,    11,    12,    13,    14,    15,    16,    17,    40,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   252,   112,     6,    56,   111,   112,   130,    91,
     434,    93,   117,   437,   438,    17,   121,   441,   123,   124,
     125,   187,   242,   112,   129,   130,   131,    78,   154,   134,
     135,   391,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,    91,   153,    93,   152,     3,     4,
       5,     6,     7,     8,   102,   254,   100,   179,   248,   154,
     177,     3,    17,    18,   112,   174,   234,   212,   112,   174,
      25,    26,   424,   112,   125,     3,   112,   187,    33,    52,
     181,    54,   184,   221,   252,   174,   252,   192,    43,   194,
     240,   498,    90,   141,    90,    50,    38,   202,   250,     0,
     151,   187,   240,   184,   205,   225,   252,   105,    63,    64,
      65,   252,   163,   249,   219,   220,   151,   225,   166,   318,
     225,   238,   321,     3,   120,     9,   252,   229,     3,    84,
      85,   248,   252,     3,   279,   174,    20,     3,   174,   248,
     250,     3,     4,     5,     6,     7,     8,   507,    19,   151,
     267,   233,   107,   151,   299,    17,    18,   252,   249,   249,
      61,   250,     9,    25,   250,   234,    37,   591,   219,   250,
     250,   249,   251,   250,   250,   250,   281,   282,   176,    80,
     224,    43,   287,   252,    46,   181,   233,   183,    50,   250,
     614,     3,     4,     5,     6,     7,     8,   302,   114,   236,
      79,    63,    64,    65,   233,    17,    18,   312,   353,   125,
     249,   250,   248,    25,   319,   252,   212,   118,   250,   480,
       3,     4,     5,     6,     7,     8,   331,   332,   107,   225,
     335,    43,   184,   112,    17,    18,   341,    61,    50,   249,
     250,   250,    25,   198,   199,   200,   351,   250,   203,   354,
      33,    63,    64,    65,    37,   461,    80,   250,     4,   465,
      43,     7,   141,   525,   470,   527,   128,    50,   250,   531,
      38,   533,     3,   174,   379,   251,   252,   229,    62,    26,
      63,    64,    65,   184,   251,   252,   187,   242,   243,   244,
     245,   246,   247,     3,   118,   250,     3,     3,     4,     5,
       6,     7,     8,   299,   103,    79,   411,   303,   304,   305,
     184,    17,    18,   251,   252,   114,   250,   422,   423,    25,
      26,   222,   251,   252,   429,   430,   125,   225,     3,   275,
     276,   115,   278,   107,   330,     3,   234,    43,   112,   601,
     124,   603,   251,   605,    50,   124,   130,     3,   122,   160,
     174,   249,     3,   215,   252,   251,   252,    63,    64,    65,
     184,   251,   252,   187,   163,   149,   158,   141,    26,    27,
      28,    29,    30,   478,   479,     3,   481,     3,   483,   484,
     242,   243,   244,   245,   246,   247,   251,   252,   250,     3,
       4,     5,     6,     7,     8,   179,   342,   251,   222,   345,
     251,   252,   251,    17,    18,   251,    13,   190,    15,    16,
     251,    25,    26,     4,     5,     6,     7,   251,   252,   203,
     251,   233,    24,    25,    26,    27,    28,    29,    30,    43,
     242,   243,   244,   245,   246,   247,    50,   250,   250,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   553,    63,
      64,    65,    30,   251,   252,   251,   252,   251,   252,   242,
     243,   244,   245,   246,   247,   251,   252,   250,     3,     4,
       5,     6,     7,     8,    23,    24,    25,    26,    27,    28,
      29,    30,    17,    18,   251,   252,   251,   252,   251,   252,
      25,   251,   252,   251,   252,     3,     4,     5,     6,     7,
       8,   251,   252,   251,   252,   250,   251,   250,    43,    17,
      18,   250,   250,   310,   311,    50,   125,    25,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    63,    64,
      65,   125,   427,   428,   124,    43,   242,   243,   244,   245,
     246,   247,    50,   125,   250,     3,     4,     5,     6,     7,
       8,   124,   153,     3,    47,    63,    64,    65,    20,    17,
      18,   518,   519,   131,   521,   522,   523,    25,   250,   526,
      78,   528,   251,   530,   154,   532,   121,   251,   251,     3,
       4,     5,     6,     7,     8,    43,   105,    99,     3,     3,
     250,   250,    50,    17,    18,     3,     4,     5,     6,     7,
       8,    25,   125,     3,   125,    63,    64,    65,     3,    17,
      18,     3,   251,   251,   251,   251,   251,    25,   251,    43,
      78,   251,    47,   106,   124,   250,    50,   250,   242,   243,
     244,   245,   246,   247,   250,    43,   250,    20,   250,    63,
      64,    65,    50,   222,   250,   250,   250,    20,   251,   184,
       3,   250,   252,     3,    78,    63,    64,    65,     3,     4,
       5,     6,     7,     8,   250,   250,    43,     4,   445,   446,
      78,   448,    17,    18,   451,   452,   250,   454,   455,   456,
      25,   250,    20,   460,   250,   462,     5,   464,     5,     5,
     252,   180,   469,   122,     3,   251,   251,   151,    43,     4,
     187,     5,   125,     4,     4,    50,   252,   242,   243,   244,
     245,   246,   247,   251,     4,   250,   292,   118,    63,    64,
      65,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     8,   242,   243,   244,   245,   246,   247,
      80,   422,   250,   152,   537,   161,   263,   308,    10,    11,
      12,    13,    14,    15,    16,    17,   383,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      39,   178,    24,   108,   242,   243,   244,   245,   246,   247,
     484,   277,   250,    10,    11,    12,    13,    14,    15,    16,
      17,   529,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   384,   392,    86,    -1,   242,   243,
     244,   245,   246,   247,    -1,    -1,   250,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   242,   243,   244,   245,   246,   247,
     102,    -1,   250,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,   243,   244,
     245,   246,   247,    -1,    -1,   250,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     252,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,   252,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,   252,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    42,    43,    44,    45,   108,   109,   110,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   252,    70,
      71,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,   251,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   251,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     251,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,    -1,
      -1,    -1,   143,   144,   145,    11,    12,    13,    14,    15,
      16,    17,   251,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,   208,    -1,   169,    -1,
      -1,    -1,    -1,    -1,    -1,   238,   239,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,   189,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,   209,   210,
     211,   212,   213,    -1,    -1,    -1,   208,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,
     231,    -1,    -1,    -1,    -1,    -1,    -1,   238,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,     3,    -1,    -1,
     102,    39,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    93,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    93,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    81,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    61,    80,   118,   174,   184,   187,   222,   254,   261,
     262,   292,   296,   304,   305,   308,   310,   324,    68,   181,
     205,   311,   293,   298,   298,   273,     8,   325,   326,   298,
     306,     0,   261,   248,   111,   309,   309,   204,     3,   102,
     112,   141,   166,   294,    79,   107,   112,   122,   141,   299,
     299,     3,     4,     5,     6,     7,     8,    17,    18,    25,
      26,    33,    43,    50,    63,    64,    65,    84,    85,   107,
     198,   199,   200,   203,   242,   243,   244,   245,   246,   247,
     250,   255,   274,   275,     9,    20,   252,   112,   141,     3,
     250,   277,   278,   279,   281,   291,   248,   242,     3,     3,
     309,   249,   295,     3,   294,   102,   252,     3,     3,   249,
     250,     9,   250,   255,   255,   255,   255,   233,   255,   260,
     250,   250,   250,   250,   250,   250,   255,   274,     3,    10,
      11,    12,    13,    14,    15,    16,    17,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    38,
     276,   102,   252,   255,   255,   326,   249,   276,   262,   277,
     187,   252,    62,   115,   130,   149,   179,   203,   282,   284,
      38,   280,     3,    26,   234,   263,   225,   277,     3,   187,
     250,   300,   187,   300,     3,   255,   256,   257,   255,   255,
     255,   260,    91,    93,   233,   262,   255,   256,    46,   128,
     215,   256,   258,   255,   255,    26,   255,   251,   251,   255,
     255,   255,   250,     6,    17,   151,   255,   255,    13,    15,
      16,   255,    33,    37,   190,   250,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,     3,   277,   275,
       3,   100,   112,   224,   288,   251,   251,     3,   307,   278,
     130,   179,   285,   279,   124,   160,   283,     3,   112,   174,
     249,   250,   322,   323,   255,   158,   269,   277,   263,   295,
       3,   303,     3,   272,   229,   262,   303,   229,   262,   252,
     251,   208,    91,    93,   255,   255,   251,   102,   251,   251,
     255,   252,   252,   251,   251,   256,   262,     6,   151,   250,
     255,   255,    36,   250,   250,   250,   262,   263,   276,   125,
     125,   125,    20,   249,   252,   263,   283,   283,   124,   153,
     279,   124,     3,   103,   114,   125,   163,   312,   313,   314,
     280,    47,   131,   270,   263,    20,   154,   252,   297,   251,
     252,   250,   301,   297,   297,   301,   297,   256,   255,   255,
      93,   208,   255,   102,   121,   259,   259,   251,   251,   256,
     262,   255,   262,   262,   262,   251,   105,   264,   288,    99,
     289,   289,   289,   255,     3,     3,   269,   279,   255,   153,
     225,   286,   287,   279,   250,   322,   114,   125,   250,   250,
     125,   251,   252,     3,   262,   255,   265,   255,    78,   255,
     125,     3,     3,    78,   255,   302,   252,   297,   297,    93,
     255,    99,   251,   256,   255,   251,   251,   251,   251,   251,
     251,   251,    47,   106,   268,   124,   250,   250,   250,    20,
      20,   249,   270,   255,   250,   287,   312,   250,   250,   272,
     272,   250,   322,   313,    42,    43,    44,    45,    52,    70,
      71,    76,    87,    94,    98,   119,   120,   138,   139,   143,
     144,   145,   169,   187,   189,   207,   209,   210,   211,   212,
     213,   230,   231,   238,   320,    39,    81,   266,   252,   252,
     222,    20,   251,   252,   250,   255,   251,    72,    73,    74,
      75,   108,   109,   110,   238,   239,   265,   255,   269,     3,
     290,   290,   290,   255,   255,     3,   272,   251,   272,   272,
     251,   251,   272,   250,   316,   316,   316,   316,   316,   316,
     250,   316,   316,   316,    43,   317,   316,   317,   316,   250,
     316,   317,   316,   317,   250,   250,   315,   255,   255,   303,
      78,   255,    78,   255,   302,   251,   236,   267,   270,   251,
     252,   251,   251,    20,   251,   322,   251,   251,   251,     5,
     318,   319,   318,   318,     4,   321,   318,   318,   318,   319,
     318,   319,   318,   321,   318,   319,   318,   319,     5,     5,
      17,    40,    56,    78,   125,   151,   163,   219,   266,   251,
     180,   122,   271,     3,   255,   251,   252,   221,   240,    52,
      54,   251,   252,   251,   251,   251,   151,     4,     4,     5,
       6,     7,   125,   125,   250,   272,     5,   187,     4,   319,
       4,   319,   319,   272,   251,     4,   251
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   253,   254,   254,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   256,
     256,   257,   257,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   258,   258,   258,   255,
     255,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     255,   255,   255,   255,   260,   260,   255,   255,   255,   255,
     255,   255,   255,   255,   261,   262,   262,   263,   263,   264,
     264,   265,   265,   266,   266,   266,   267,   267,   268,   268,
     269,   269,   270,   270,   270,   271,   271,   272,   272,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   274,   274,
     274,   274,   275,   276,   276,   276,   277,   277,   278,   278,
     279,   279,   279,   279,   280,   280,   281,   281,   281,   281,
     281,   282,   282,   282,   283,   283,   284,   284,   285,   285,
     285,   286,   286,   287,   287,   288,   288,   288,   288,   289,
     289,   290,   290,   291,   261,   292,   293,   293,   293,   293,
     292,   294,   294,   295,   295,   292,   261,   296,   297,   297,
     298,   298,   298,   298,   298,   299,   299,   300,   300,   301,
     301,   302,   302,   302,   302,   296,   303,   303,   303,   303,
     296,   261,   304,   304,   304,   261,   305,   306,   306,   306,
     307,   307,   307,   307,   261,   308,   308,   309,   309,   261,
     310,   310,   310,   310,   310,   310,   311,   311,   312,   312,
     313,   313,   313,   313,   313,   314,   313,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     316,   316,   316,   317,   317,   318,   318,   318,   319,   319,
     319,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   321,   321,   322,   323,   323,   323,   261,   324,   325,
     325,   326,   326
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     3,     5,
       6,     6,     6,     3,     4,     3,     4,     3,     5,     1,
       3,     0,     1,     5,     6,     5,     6,     4,     4,     4,
       4,     4,     6,     8,     4,     7,     1,     1,     1,     6,
       6,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     6,     3,     5,     4,     5,     3,     4,     3,     4,
       1,     1,     1,     2,     1,     3,    11,     0,     2,     0,
       4,     2,     4,     0,     1,     1,     0,     2,     0,     2,
       0,     3,     0,     2,     4,     0,     2,     1,     3,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     3,
       1,     3,     2,     2,     1,     0,     1,     3,     1,     1,
       3,     5,     3,     3,     1,     0,     5,     3,     5,     6,
       5,     0,     1,     1,     0,     1,     1,     1,     2,     2,
       0,     0,     1,     2,     4,     6,     6,     6,     0,     2,
       0,     1,     3,     3,     1,     7,     2,     2,     2,     0,
       6,     2,     4,     0,     2,     7,     1,     8,     0,     4,
       0,     2,     2,     2,     2,     1,     0,     0,     3,     3,
       5,     1,     1,     3,     3,     7,     3,     3,     5,     5,
       7,     1,     8,     7,     7,     1,     8,     0,     2,     2,
       3,     5,     5,     7,     1,     4,     4,     0,     2,     1,
       8,    10,     9,     6,    11,     8,     0,     1,     1,     3,
       5,     4,     4,     5,     5,     0,     4,     0,     3,     2,
       3,     3,     3,     3,     2,     5,     3,     3,     2,     3,
       0,     3,     5,     0,     1,     0,     2,     2,     0,     4,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     3,     5,     2,
       4,     1,     1,     1,     1,     3,     3,     3,     3,     5,
       5,     1,     3,     3,     0,     1,     1,     1,     2,     1,
       3,     3,     3
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
  case 4: /* expr: NAME  */
#line 294 "sql-parser.y"
                   { emit("NAME %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2073 "sql-parser.tab.c"
    break;

  case 5: /* expr: NAME '.' NAME  */
#line 295 "sql-parser.y"
                   { emit("FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 2079 "sql-parser.tab.c"
    break;

  case 6: /* expr: USERVAR  */
#line 296 "sql-parser.y"
                   { emit("USERVAR %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2085 "sql-parser.tab.c"
    break;

  case 7: /* expr: STRING  */
#line 297 "sql-parser.y"
                   { emit("STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2091 "sql-parser.tab.c"
    break;

  case 8: /* expr: INTNUM  */
#line 298 "sql-parser.y"
                   { emit("NUMBER %d", (yyvsp[0].intval)); }
#line 2097 "sql-parser.tab.c"
    break;

  case 9: /* expr: APPROXNUM  */
#line 299 "sql-parser.y"
                   { emit("FLOAT %g", (yyvsp[0].floatval)); }
#line 2103 "sql-parser.tab.c"
    break;

  case 10: /* expr: BOOL  */
#line 300 "sql-parser.y"
                   { emit("BOOL %d", (yyvsp[0].intval)); }
#line 2109 "sql-parser.tab.c"
    break;

  case 11: /* expr: expr '+' expr  */
#line 303 "sql-parser.y"
                    { emit("ADD"); }
#line 2115 "sql-parser.tab.c"
    break;

  case 12: /* expr: expr '-' expr  */
#line 304 "sql-parser.y"
                   { emit("SUB"); }
#line 2121 "sql-parser.tab.c"
    break;

  case 13: /* expr: expr '*' expr  */
#line 305 "sql-parser.y"
                   { emit("MUL"); }
#line 2127 "sql-parser.tab.c"
    break;

  case 14: /* expr: expr '/' expr  */
#line 306 "sql-parser.y"
                   { emit("DIV"); }
#line 2133 "sql-parser.tab.c"
    break;

  case 15: /* expr: expr '%' expr  */
#line 307 "sql-parser.y"
                   { emit("MOD"); }
#line 2139 "sql-parser.tab.c"
    break;

  case 16: /* expr: expr MOD expr  */
#line 308 "sql-parser.y"
                   { emit("MOD"); }
#line 2145 "sql-parser.tab.c"
    break;

  case 17: /* expr: '-' expr  */
#line 309 "sql-parser.y"
                           { emit("NEG"); }
#line 2151 "sql-parser.tab.c"
    break;

  case 18: /* expr: expr ANDOP expr  */
#line 310 "sql-parser.y"
                     { emit("AND"); }
#line 2157 "sql-parser.tab.c"
    break;

  case 19: /* expr: expr OR expr  */
#line 311 "sql-parser.y"
                  { emit("OR"); }
#line 2163 "sql-parser.tab.c"
    break;

  case 20: /* expr: expr XOR expr  */
#line 312 "sql-parser.y"
                   { emit("XOR"); }
#line 2169 "sql-parser.tab.c"
    break;

  case 21: /* expr: expr '|' expr  */
#line 313 "sql-parser.y"
                   { emit("BITOR"); }
#line 2175 "sql-parser.tab.c"
    break;

  case 22: /* expr: expr '&' expr  */
#line 314 "sql-parser.y"
                   { emit("BITAND"); }
#line 2181 "sql-parser.tab.c"
    break;

  case 23: /* expr: expr '^' expr  */
#line 315 "sql-parser.y"
                   { emit("BITXOR"); }
#line 2187 "sql-parser.tab.c"
    break;

  case 24: /* expr: expr SHIFT expr  */
#line 316 "sql-parser.y"
                     { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); }
#line 2193 "sql-parser.tab.c"
    break;

  case 25: /* expr: NOT expr  */
#line 317 "sql-parser.y"
              { emit("NOT"); }
#line 2199 "sql-parser.tab.c"
    break;

  case 26: /* expr: '!' expr  */
#line 318 "sql-parser.y"
              { emit("NOT"); }
#line 2205 "sql-parser.tab.c"
    break;

  case 27: /* expr: expr COMPARISON expr  */
#line 319 "sql-parser.y"
                          { emit("CMP %d", (yyvsp[-1].subtok)); }
#line 2211 "sql-parser.tab.c"
    break;

  case 29: /* expr: expr COMPARISON '(' select_stmt ')'  */
#line 323 "sql-parser.y"
                                         { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 2217 "sql-parser.tab.c"
    break;

  case 30: /* expr: expr COMPARISON ANY '(' select_stmt ')'  */
#line 324 "sql-parser.y"
                                             { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2223 "sql-parser.tab.c"
    break;

  case 31: /* expr: expr COMPARISON SOME '(' select_stmt ')'  */
#line 325 "sql-parser.y"
                                              { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2229 "sql-parser.tab.c"
    break;

  case 32: /* expr: expr COMPARISON ALL '(' select_stmt ')'  */
#line 326 "sql-parser.y"
                                             { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 2235 "sql-parser.tab.c"
    break;

  case 33: /* expr: expr IS NULLX  */
#line 329 "sql-parser.y"
                         { emit("ISNULL"); }
#line 2241 "sql-parser.tab.c"
    break;

  case 34: /* expr: expr IS NOT NULLX  */
#line 330 "sql-parser.y"
                         { emit("ISNULL"); emit("NOT"); }
#line 2247 "sql-parser.tab.c"
    break;

  case 35: /* expr: expr IS BOOL  */
#line 331 "sql-parser.y"
                         { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 2253 "sql-parser.tab.c"
    break;

  case 36: /* expr: expr IS NOT BOOL  */
#line 332 "sql-parser.y"
                         { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 2259 "sql-parser.tab.c"
    break;

  case 37: /* expr: USERVAR ASSIGN expr  */
#line 334 "sql-parser.y"
                         { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2265 "sql-parser.tab.c"
    break;

  case 38: /* expr: expr BETWEEN expr AND expr  */
#line 337 "sql-parser.y"
                                               { emit("BETWEEN"); }
#line 2271 "sql-parser.tab.c"
    break;

  case 39: /* val_list: expr  */
#line 340 "sql-parser.y"
               { (yyval.intval) = 1; }
#line 2277 "sql-parser.tab.c"
    break;

  case 40: /* val_list: expr ',' val_list  */
#line 341 "sql-parser.y"
                       { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2283 "sql-parser.tab.c"
    break;

  case 41: /* opt_val_list: %empty  */
#line 344 "sql-parser.y"
                        { (yyval.intval) = 0; }
#line 2289 "sql-parser.tab.c"
    break;

  case 43: /* expr: expr IN '(' val_list ')'  */
#line 348 "sql-parser.y"
                                     { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 2295 "sql-parser.tab.c"
    break;

  case 44: /* expr: expr NOT IN '(' val_list ')'  */
#line 349 "sql-parser.y"
                                     { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 2301 "sql-parser.tab.c"
    break;

  case 45: /* expr: expr IN '(' select_stmt ')'  */
#line 350 "sql-parser.y"
                                     { emit("CMPANYSELECT 4"); }
#line 2307 "sql-parser.tab.c"
    break;

  case 46: /* expr: expr NOT IN '(' select_stmt ')'  */
#line 351 "sql-parser.y"
                                     { emit("CMPALLSELECT 3"); }
#line 2313 "sql-parser.tab.c"
    break;

  case 47: /* expr: EXISTS '(' select_stmt ')'  */
#line 352 "sql-parser.y"
                                     { emit("EXISTSSELECT"); if((yyvsp[-3].subtok))emit("NOT"); }
#line 2319 "sql-parser.tab.c"
    break;

  case 48: /* expr: NAME '(' opt_val_list ')'  */
#line 356 "sql-parser.y"
                                {  emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2325 "sql-parser.tab.c"
    break;

  case 49: /* expr: FCOUNT '(' '*' ')'  */
#line 360 "sql-parser.y"
                         { emit("COUNTALL"); }
#line 2331 "sql-parser.tab.c"
    break;

  case 50: /* expr: FCOUNT '(' expr ')'  */
#line 361 "sql-parser.y"
                         { emit(" CALL 1 COUNT"); }
#line 2337 "sql-parser.tab.c"
    break;

  case 51: /* expr: FSUBSTRING '(' val_list ')'  */
#line 363 "sql-parser.y"
                                                {  emit("CALL %d SUBSTR", (yyvsp[-1].intval)); }
#line 2343 "sql-parser.tab.c"
    break;

  case 52: /* expr: FSUBSTRING '(' expr FROM expr ')'  */
#line 364 "sql-parser.y"
                                                {  emit("CALL 2 SUBSTR"); }
#line 2349 "sql-parser.tab.c"
    break;

  case 53: /* expr: FSUBSTRING '(' expr FROM expr FOR expr ')'  */
#line 365 "sql-parser.y"
                                                {  emit("CALL 3 SUBSTR"); }
#line 2355 "sql-parser.tab.c"
    break;

  case 54: /* expr: FTRIM '(' val_list ')'  */
#line 367 "sql-parser.y"
                                                { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 2361 "sql-parser.tab.c"
    break;

  case 55: /* expr: FTRIM '(' trim_ltb expr FROM val_list ')'  */
#line 368 "sql-parser.y"
                                                { emit("CALL 3 TRIM"); }
#line 2367 "sql-parser.tab.c"
    break;

  case 56: /* trim_ltb: LEADING  */
#line 371 "sql-parser.y"
                  { emit("NUMBER 1"); }
#line 2373 "sql-parser.tab.c"
    break;

  case 57: /* trim_ltb: TRAILING  */
#line 372 "sql-parser.y"
                  { emit("NUMBER 2"); }
#line 2379 "sql-parser.tab.c"
    break;

  case 58: /* trim_ltb: BOTH  */
#line 373 "sql-parser.y"
                  { emit("NUMBER 3"); }
#line 2385 "sql-parser.tab.c"
    break;

  case 59: /* expr: FDATE_ADD '(' expr ',' interval_exp ')'  */
#line 376 "sql-parser.y"
                                              { emit("CALL 3 DATE_ADD"); }
#line 2391 "sql-parser.tab.c"
    break;

  case 60: /* expr: FDATE_SUB '(' expr ',' interval_exp ')'  */
#line 377 "sql-parser.y"
                                              { emit("CALL 3 DATE_SUB"); }
#line 2397 "sql-parser.tab.c"
    break;

  case 61: /* interval_exp: INTERVAL expr DAY_HOUR  */
#line 380 "sql-parser.y"
                                     { emit("NUMBER 1"); }
#line 2403 "sql-parser.tab.c"
    break;

  case 62: /* interval_exp: INTERVAL expr DAY_MICROSECOND  */
#line 381 "sql-parser.y"
                                     { emit("NUMBER 2"); }
#line 2409 "sql-parser.tab.c"
    break;

  case 63: /* interval_exp: INTERVAL expr DAY_MINUTE  */
#line 382 "sql-parser.y"
                                     { emit("NUMBER 3"); }
#line 2415 "sql-parser.tab.c"
    break;

  case 64: /* interval_exp: INTERVAL expr DAY_SECOND  */
#line 383 "sql-parser.y"
                                     { emit("NUMBER 4"); }
#line 2421 "sql-parser.tab.c"
    break;

  case 65: /* interval_exp: INTERVAL expr YEAR_MONTH  */
#line 384 "sql-parser.y"
                                     { emit("NUMBER 5"); }
#line 2427 "sql-parser.tab.c"
    break;

  case 66: /* interval_exp: INTERVAL expr YEAR  */
#line 385 "sql-parser.y"
                                     { emit("NUMBER 6"); }
#line 2433 "sql-parser.tab.c"
    break;

  case 67: /* interval_exp: INTERVAL expr HOUR_MICROSECOND  */
#line 386 "sql-parser.y"
                                     { emit("NUMBER 7"); }
#line 2439 "sql-parser.tab.c"
    break;

  case 68: /* interval_exp: INTERVAL expr HOUR_MINUTE  */
#line 387 "sql-parser.y"
                                     { emit("NUMBER 8"); }
#line 2445 "sql-parser.tab.c"
    break;

  case 69: /* interval_exp: INTERVAL expr HOUR_SECOND  */
#line 388 "sql-parser.y"
                                     { emit("NUMBER 9"); }
#line 2451 "sql-parser.tab.c"
    break;

  case 70: /* expr: CASE expr case_list END  */
#line 390 "sql-parser.y"
                                        { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 2457 "sql-parser.tab.c"
    break;

  case 71: /* expr: CASE expr case_list ELSE expr END  */
#line 391 "sql-parser.y"
                                        { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 2463 "sql-parser.tab.c"
    break;

  case 72: /* expr: CASE case_list END  */
#line 392 "sql-parser.y"
                                        { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 2469 "sql-parser.tab.c"
    break;

  case 73: /* expr: CASE case_list ELSE expr END  */
#line 393 "sql-parser.y"
                                        { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 2475 "sql-parser.tab.c"
    break;

  case 74: /* case_list: WHEN expr THEN expr  */
#line 396 "sql-parser.y"
                                   { (yyval.intval) = 1; }
#line 2481 "sql-parser.tab.c"
    break;

  case 75: /* case_list: case_list WHEN expr THEN expr  */
#line 397 "sql-parser.y"
                                         { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 2487 "sql-parser.tab.c"
    break;

  case 76: /* expr: expr LIKE expr  */
#line 400 "sql-parser.y"
                     { emit("LIKE"); }
#line 2493 "sql-parser.tab.c"
    break;

  case 77: /* expr: expr NOT LIKE expr  */
#line 401 "sql-parser.y"
                        { emit("LIKE"); emit("NOT"); }
#line 2499 "sql-parser.tab.c"
    break;

  case 78: /* expr: expr REGEXP expr  */
#line 404 "sql-parser.y"
                       { emit("REGEXP"); }
#line 2505 "sql-parser.tab.c"
    break;

  case 79: /* expr: expr NOT REGEXP expr  */
#line 405 "sql-parser.y"
                          { emit("REGEXP"); emit("NOT"); }
#line 2511 "sql-parser.tab.c"
    break;

  case 80: /* expr: CURRENT_TIMESTAMP  */
#line 408 "sql-parser.y"
                        { emit("NOW"); }
#line 2517 "sql-parser.tab.c"
    break;

  case 81: /* expr: CURRENT_DATE  */
#line 409 "sql-parser.y"
                        { emit("NOW"); }
#line 2523 "sql-parser.tab.c"
    break;

  case 82: /* expr: CURRENT_TIME  */
#line 410 "sql-parser.y"
                        { emit("NOW"); }
#line 2529 "sql-parser.tab.c"
    break;

  case 83: /* expr: BINARY expr  */
#line 413 "sql-parser.y"
                               { emit("STRTOBIN"); }
#line 2535 "sql-parser.tab.c"
    break;

  case 84: /* stmt: select_stmt  */
#line 418 "sql-parser.y"
                  { emit("STMT"); }
#line 2541 "sql-parser.tab.c"
    break;

  case 85: /* select_stmt: SELECT select_opts select_expr_list  */
#line 422 "sql-parser.y"
                        { emit("SELECTNODATA %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2547 "sql-parser.tab.c"
    break;

  case 86: /* select_stmt: SELECT select_opts select_expr_list FROM table_references opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list  */
#line 427 "sql-parser.y"
                   { emit("SELECT %d %d %d", (yyvsp[-9].intval), (yyvsp[-8].intval), (yyvsp[-6].intval)); }
#line 2553 "sql-parser.tab.c"
    break;

  case 88: /* opt_where: WHERE expr  */
#line 431 "sql-parser.y"
                { emit("WHERE"); }
#line 2559 "sql-parser.tab.c"
    break;

  case 90: /* opt_groupby: GROUP BY groupby_list opt_with_rollup  */
#line 435 "sql-parser.y"
                             { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2565 "sql-parser.tab.c"
    break;

  case 91: /* groupby_list: expr opt_asc_desc  */
#line 439 "sql-parser.y"
                             { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2571 "sql-parser.tab.c"
    break;

  case 92: /* groupby_list: groupby_list ',' expr opt_asc_desc  */
#line 441 "sql-parser.y"
                             { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2577 "sql-parser.tab.c"
    break;

  case 93: /* opt_asc_desc: %empty  */
#line 444 "sql-parser.y"
                        { (yyval.intval) = 0; }
#line 2583 "sql-parser.tab.c"
    break;

  case 94: /* opt_asc_desc: ASC  */
#line 445 "sql-parser.y"
                        { (yyval.intval) = 0; }
#line 2589 "sql-parser.tab.c"
    break;

  case 95: /* opt_asc_desc: DESC  */
#line 446 "sql-parser.y"
                        { (yyval.intval) = 1; }
#line 2595 "sql-parser.tab.c"
    break;

  case 96: /* opt_with_rollup: %empty  */
#line 449 "sql-parser.y"
                            { (yyval.intval) = 0; }
#line 2601 "sql-parser.tab.c"
    break;

  case 97: /* opt_with_rollup: WITH ROLLUP  */
#line 450 "sql-parser.y"
                  { (yyval.intval) = 1; }
#line 2607 "sql-parser.tab.c"
    break;

  case 99: /* opt_having: HAVING expr  */
#line 454 "sql-parser.y"
                 { emit("HAVING"); }
#line 2613 "sql-parser.tab.c"
    break;

  case 101: /* opt_orderby: ORDER BY groupby_list  */
#line 457 "sql-parser.y"
                           { emit("ORDERBY %d", (yyvsp[0].intval)); }
#line 2619 "sql-parser.tab.c"
    break;

  case 103: /* opt_limit: LIMIT expr  */
#line 460 "sql-parser.y"
                                  { emit("LIMIT 1"); }
#line 2625 "sql-parser.tab.c"
    break;

  case 104: /* opt_limit: LIMIT expr ',' expr  */
#line 461 "sql-parser.y"
                                    { emit("LIMIT 2"); }
#line 2631 "sql-parser.tab.c"
    break;

  case 106: /* opt_into_list: INTO column_list  */
#line 465 "sql-parser.y"
                      { emit("INTO %d", (yyvsp[0].intval)); }
#line 2637 "sql-parser.tab.c"
    break;

  case 107: /* column_list: NAME  */
#line 468 "sql-parser.y"
                  { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2643 "sql-parser.tab.c"
    break;

  case 108: /* column_list: column_list ',' NAME  */
#line 469 "sql-parser.y"
                          { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2649 "sql-parser.tab.c"
    break;

  case 109: /* select_opts: %empty  */
#line 472 "sql-parser.y"
                                      { (yyval.intval) = 0; }
#line 2655 "sql-parser.tab.c"
    break;

  case 110: /* select_opts: select_opts ALL  */
#line 474 "sql-parser.y"
   { if((yyvsp[-1].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 2661 "sql-parser.tab.c"
    break;

  case 111: /* select_opts: select_opts DISTINCT  */
#line 476 "sql-parser.y"
   { if((yyvsp[-1].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 2667 "sql-parser.tab.c"
    break;

  case 112: /* select_opts: select_opts DISTINCTROW  */
#line 478 "sql-parser.y"
   { if((yyvsp[-1].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[-1].intval) | 04; }
#line 2673 "sql-parser.tab.c"
    break;

  case 113: /* select_opts: select_opts HIGH_PRIORITY  */
#line 480 "sql-parser.y"
   { if((yyvsp[-1].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 2679 "sql-parser.tab.c"
    break;

  case 114: /* select_opts: select_opts STRAIGHT_JOIN  */
#line 482 "sql-parser.y"
   { if((yyvsp[-1].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[-1].intval) | 020; }
#line 2685 "sql-parser.tab.c"
    break;

  case 115: /* select_opts: select_opts SQL_SMALL_RESULT  */
#line 484 "sql-parser.y"
   { if((yyvsp[-1].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 040; }
#line 2691 "sql-parser.tab.c"
    break;

  case 116: /* select_opts: select_opts SQL_BIG_RESULT  */
#line 486 "sql-parser.y"
   { if((yyvsp[-1].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 0100; }
#line 2697 "sql-parser.tab.c"
    break;

  case 117: /* select_opts: select_opts SQL_CALC_FOUND_ROWS  */
#line 488 "sql-parser.y"
   { if((yyvsp[-1].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = 
   (yyvsp[-1].intval) | 0200; }
#line 2704 "sql-parser.tab.c"
    break;

  case 118: /* select_expr_list: select_expr  */
#line 492 "sql-parser.y"
                              { (yyval.intval) = 1; }
#line 2710 "sql-parser.tab.c"
    break;

  case 119: /* select_expr_list: select_expr_list ',' select_expr  */
#line 493 "sql-parser.y"
                                       {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2716 "sql-parser.tab.c"
    break;

  case 120: /* select_expr_list: '*'  */
#line 494 "sql-parser.y"
          { emit("SELECTALL"); (yyval.intval) = 1; }
#line 2722 "sql-parser.tab.c"
    break;

  case 121: /* select_expr_list: '(' select_expr_list ')'  */
#line 495 "sql-parser.y"
                               { (yyval.intval) = (yyvsp[-1].intval); }
#line 2728 "sql-parser.tab.c"
    break;

  case 123: /* opt_as_alias: AS NAME  */
#line 500 "sql-parser.y"
                      { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2734 "sql-parser.tab.c"
    break;

  case 124: /* opt_as_alias: NAME  */
#line 501 "sql-parser.y"
                      { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2740 "sql-parser.tab.c"
    break;

  case 126: /* table_references: table_reference  */
#line 505 "sql-parser.y"
                                       { (yyval.intval) = 1; }
#line 2746 "sql-parser.tab.c"
    break;

  case 127: /* table_references: table_references ',' table_reference  */
#line 506 "sql-parser.y"
                                           { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2752 "sql-parser.tab.c"
    break;

  case 130: /* table_factor: NAME opt_as_alias index_hint  */
#line 514 "sql-parser.y"
                                 { emit("TABLE %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2758 "sql-parser.tab.c"
    break;

  case 131: /* table_factor: NAME '.' NAME opt_as_alias index_hint  */
#line 515 "sql-parser.y"
                                          { emit("TABLE %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval));
                               free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); }
#line 2765 "sql-parser.tab.c"
    break;

  case 132: /* table_factor: table_subquery opt_as NAME  */
#line 517 "sql-parser.y"
                               { emit("SUBQUERYAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2771 "sql-parser.tab.c"
    break;

  case 133: /* table_factor: '(' table_references ')'  */
#line 518 "sql-parser.y"
                             { emit("TABLEREFERENCES %d", (yyvsp[-1].intval)); }
#line 2777 "sql-parser.tab.c"
    break;

  case 136: /* join_table: table_reference opt_inner_cross JOIN table_factor opt_join_condition  */
#line 527 "sql-parser.y"
                  { emit("JOIN %d", 100+(yyvsp[-3].intval)); }
#line 2783 "sql-parser.tab.c"
    break;

  case 137: /* join_table: table_reference STRAIGHT_JOIN table_factor  */
#line 529 "sql-parser.y"
                  { emit("JOIN %d", 200); }
#line 2789 "sql-parser.tab.c"
    break;

  case 138: /* join_table: table_reference STRAIGHT_JOIN table_factor ON expr  */
#line 531 "sql-parser.y"
                  { emit("JOIN %d", 200); }
#line 2795 "sql-parser.tab.c"
    break;

  case 139: /* join_table: table_reference left_or_right opt_outer JOIN table_factor join_condition  */
#line 533 "sql-parser.y"
                  { emit("JOIN %d", 300+(yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 2801 "sql-parser.tab.c"
    break;

  case 140: /* join_table: table_reference NATURAL opt_left_or_right_outer JOIN table_factor  */
#line 535 "sql-parser.y"
                  { emit("JOIN %d", 400+(yyvsp[-2].intval)); }
#line 2807 "sql-parser.tab.c"
    break;

  case 141: /* opt_inner_cross: %empty  */
#line 538 "sql-parser.y"
                           { (yyval.intval) = 0; }
#line 2813 "sql-parser.tab.c"
    break;

  case 142: /* opt_inner_cross: INNER  */
#line 539 "sql-parser.y"
           { (yyval.intval) = 1; }
#line 2819 "sql-parser.tab.c"
    break;

  case 143: /* opt_inner_cross: CROSS  */
#line 540 "sql-parser.y"
            { (yyval.intval) = 2; }
#line 2825 "sql-parser.tab.c"
    break;

  case 144: /* opt_outer: %empty  */
#line 543 "sql-parser.y"
                      { (yyval.intval) = 0; }
#line 2831 "sql-parser.tab.c"
    break;

  case 145: /* opt_outer: OUTER  */
#line 544 "sql-parser.y"
           {(yyval.intval) = 4; }
#line 2837 "sql-parser.tab.c"
    break;

  case 146: /* left_or_right: LEFT  */
#line 547 "sql-parser.y"
                    { (yyval.intval) = 1; }
#line 2843 "sql-parser.tab.c"
    break;

  case 147: /* left_or_right: RIGHT  */
#line 548 "sql-parser.y"
            { (yyval.intval) = 2; }
#line 2849 "sql-parser.tab.c"
    break;

  case 148: /* opt_left_or_right_outer: LEFT opt_outer  */
#line 551 "sql-parser.y"
                                        { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2855 "sql-parser.tab.c"
    break;

  case 149: /* opt_left_or_right_outer: RIGHT opt_outer  */
#line 552 "sql-parser.y"
                      { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 2861 "sql-parser.tab.c"
    break;

  case 150: /* opt_left_or_right_outer: %empty  */
#line 553 "sql-parser.y"
               { (yyval.intval) = 0; }
#line 2867 "sql-parser.tab.c"
    break;

  case 153: /* join_condition: ON expr  */
#line 560 "sql-parser.y"
            { emit("ONEXPR"); }
#line 2873 "sql-parser.tab.c"
    break;

  case 154: /* join_condition: USING '(' column_list ')'  */
#line 561 "sql-parser.y"
                                { emit("USING %d", (yyvsp[-1].intval)); }
#line 2879 "sql-parser.tab.c"
    break;

  case 155: /* index_hint: USE KEY opt_for_join '(' index_list ')'  */
#line 566 "sql-parser.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 10+(yyvsp[-3].intval)); }
#line 2885 "sql-parser.tab.c"
    break;

  case 156: /* index_hint: IGNORE KEY opt_for_join '(' index_list ')'  */
#line 568 "sql-parser.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 20+(yyvsp[-3].intval)); }
#line 2891 "sql-parser.tab.c"
    break;

  case 157: /* index_hint: FORCE KEY opt_for_join '(' index_list ')'  */
#line 570 "sql-parser.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 30+(yyvsp[-3].intval)); }
#line 2897 "sql-parser.tab.c"
    break;

  case 159: /* opt_for_join: FOR JOIN  */
#line 574 "sql-parser.y"
                       { (yyval.intval) = 1; }
#line 2903 "sql-parser.tab.c"
    break;

  case 160: /* opt_for_join: %empty  */
#line 575 "sql-parser.y"
               { (yyval.intval) = 0; }
#line 2909 "sql-parser.tab.c"
    break;

  case 161: /* index_list: NAME  */
#line 578 "sql-parser.y"
                  { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2915 "sql-parser.tab.c"
    break;

  case 162: /* index_list: index_list ',' NAME  */
#line 579 "sql-parser.y"
                         { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2921 "sql-parser.tab.c"
    break;

  case 163: /* table_subquery: '(' select_stmt ')'  */
#line 582 "sql-parser.y"
                                    { emit("SUBQUERY"); }
#line 2927 "sql-parser.tab.c"
    break;

  case 164: /* stmt: delete_stmt  */
#line 587 "sql-parser.y"
                  { emit("STMT"); }
#line 2933 "sql-parser.tab.c"
    break;

  case 165: /* delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit  */
#line 593 "sql-parser.y"
                  { emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2939 "sql-parser.tab.c"
    break;

  case 166: /* delete_opts: delete_opts LOW_PRIORITY  */
#line 596 "sql-parser.y"
                                      { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 2945 "sql-parser.tab.c"
    break;

  case 167: /* delete_opts: delete_opts QUICK  */
#line 597 "sql-parser.y"
                       { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 2951 "sql-parser.tab.c"
    break;

  case 168: /* delete_opts: delete_opts IGNORE  */
#line 598 "sql-parser.y"
                        { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 2957 "sql-parser.tab.c"
    break;

  case 169: /* delete_opts: %empty  */
#line 599 "sql-parser.y"
               { (yyval.intval) = 0; }
#line 2963 "sql-parser.tab.c"
    break;

  case 170: /* delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where  */
#line 606 "sql-parser.y"
            { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2969 "sql-parser.tab.c"
    break;

  case 171: /* delete_list: NAME opt_dot_star  */
#line 608 "sql-parser.y"
                               { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 2975 "sql-parser.tab.c"
    break;

  case 172: /* delete_list: delete_list ',' NAME opt_dot_star  */
#line 610 "sql-parser.y"
            { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2981 "sql-parser.tab.c"
    break;

  case 175: /* delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where  */
#line 619 "sql-parser.y"
            { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2987 "sql-parser.tab.c"
    break;

  case 176: /* stmt: insert_stmt  */
#line 624 "sql-parser.y"
                  { emit("STMT"); }
#line 2993 "sql-parser.tab.c"
    break;

  case 177: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 630 "sql-parser.y"
                     { emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 2999 "sql-parser.tab.c"
    break;

  case 179: /* opt_ondupupdate: ONDUPLICATE KEY UPDATE insert_asgn_list  */
#line 634 "sql-parser.y"
                                             { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 3005 "sql-parser.tab.c"
    break;

  case 180: /* insert_opts: %empty  */
#line 637 "sql-parser.y"
                       { (yyval.intval) = 0; }
#line 3011 "sql-parser.tab.c"
    break;

  case 181: /* insert_opts: insert_opts LOW_PRIORITY  */
#line 638 "sql-parser.y"
                              { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3017 "sql-parser.tab.c"
    break;

  case 182: /* insert_opts: insert_opts DELAYED  */
#line 639 "sql-parser.y"
                         { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 3023 "sql-parser.tab.c"
    break;

  case 183: /* insert_opts: insert_opts HIGH_PRIORITY  */
#line 640 "sql-parser.y"
                               { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 3029 "sql-parser.tab.c"
    break;

  case 184: /* insert_opts: insert_opts IGNORE  */
#line 641 "sql-parser.y"
                        { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3035 "sql-parser.tab.c"
    break;

  case 188: /* opt_col_names: '(' column_list ')'  */
#line 648 "sql-parser.y"
                         { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 3041 "sql-parser.tab.c"
    break;

  case 189: /* insert_vals_list: '(' insert_vals ')'  */
#line 651 "sql-parser.y"
                                      { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 3047 "sql-parser.tab.c"
    break;

  case 190: /* insert_vals_list: insert_vals_list ',' '(' insert_vals ')'  */
#line 652 "sql-parser.y"
                                              { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3053 "sql-parser.tab.c"
    break;

  case 191: /* insert_vals: expr  */
#line 655 "sql-parser.y"
          { (yyval.intval) = 1; }
#line 3059 "sql-parser.tab.c"
    break;

  case 192: /* insert_vals: DEFAULT  */
#line 656 "sql-parser.y"
             { emit("DEFAULT"); (yyval.intval) = 1; }
#line 3065 "sql-parser.tab.c"
    break;

  case 193: /* insert_vals: insert_vals ',' expr  */
#line 657 "sql-parser.y"
                          { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3071 "sql-parser.tab.c"
    break;

  case 194: /* insert_vals: insert_vals ',' DEFAULT  */
#line 658 "sql-parser.y"
                             { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3077 "sql-parser.tab.c"
    break;

  case 195: /* insert_stmt: INSERT insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 663 "sql-parser.y"
     { emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3083 "sql-parser.tab.c"
    break;

  case 196: /* insert_asgn_list: NAME COMPARISON expr  */
#line 668 "sql-parser.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
       emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3090 "sql-parser.tab.c"
    break;

  case 197: /* insert_asgn_list: NAME COMPARISON DEFAULT  */
#line 671 "sql-parser.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3097 "sql-parser.tab.c"
    break;

  case 198: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON expr  */
#line 674 "sql-parser.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3104 "sql-parser.tab.c"
    break;

  case 199: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON DEFAULT  */
#line 677 "sql-parser.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3111 "sql-parser.tab.c"
    break;

  case 200: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 683 "sql-parser.y"
                    { emit("INSERTSELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3117 "sql-parser.tab.c"
    break;

  case 201: /* stmt: replace_stmt  */
#line 687 "sql-parser.y"
                   { emit("STMT"); }
#line 3123 "sql-parser.tab.c"
    break;

  case 202: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 693 "sql-parser.y"
                     { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3129 "sql-parser.tab.c"
    break;

  case 203: /* replace_stmt: REPLACE insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 699 "sql-parser.y"
     { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3135 "sql-parser.tab.c"
    break;

  case 204: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 704 "sql-parser.y"
                    { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3141 "sql-parser.tab.c"
    break;

  case 205: /* stmt: update_stmt  */
#line 708 "sql-parser.y"
                  { emit("STMT"); }
#line 3147 "sql-parser.tab.c"
    break;

  case 206: /* update_stmt: UPDATE update_opts table_references SET update_asgn_list opt_where opt_orderby opt_limit  */
#line 715 "sql-parser.y"
                  { emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval)); }
#line 3153 "sql-parser.tab.c"
    break;

  case 207: /* update_opts: %empty  */
#line 718 "sql-parser.y"
                       { (yyval.intval) = 0; }
#line 3159 "sql-parser.tab.c"
    break;

  case 208: /* update_opts: insert_opts LOW_PRIORITY  */
#line 719 "sql-parser.y"
                              { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3165 "sql-parser.tab.c"
    break;

  case 209: /* update_opts: insert_opts IGNORE  */
#line 720 "sql-parser.y"
                        { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3171 "sql-parser.tab.c"
    break;

  case 210: /* update_asgn_list: NAME COMPARISON expr  */
#line 725 "sql-parser.y"
     { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3178 "sql-parser.tab.c"
    break;

  case 211: /* update_asgn_list: NAME '.' NAME COMPARISON expr  */
#line 728 "sql-parser.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-4].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3185 "sql-parser.tab.c"
    break;

  case 212: /* update_asgn_list: update_asgn_list ',' NAME COMPARISON expr  */
#line 731 "sql-parser.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3192 "sql-parser.tab.c"
    break;

  case 213: /* update_asgn_list: update_asgn_list ',' NAME '.' NAME COMPARISON expr  */
#line 734 "sql-parser.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update  assignment to %s.$s", (yyvsp[-4].strval), (yyvsp[-2].strval)); 
          YYERROR; }
         emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3200 "sql-parser.tab.c"
    break;

  case 214: /* stmt: create_database_stmt  */
#line 741 "sql-parser.y"
                           { emit("STMT"); }
#line 3206 "sql-parser.tab.c"
    break;

  case 215: /* create_database_stmt: CREATE DATABASE opt_if_not_exists NAME  */
#line 746 "sql-parser.y"
       { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3212 "sql-parser.tab.c"
    break;

  case 216: /* create_database_stmt: CREATE SCHEMA opt_if_not_exists NAME  */
#line 748 "sql-parser.y"
       { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3218 "sql-parser.tab.c"
    break;

  case 217: /* opt_if_not_exists: %empty  */
#line 751 "sql-parser.y"
                              { (yyval.intval) = 0; }
#line 3224 "sql-parser.tab.c"
    break;

  case 218: /* opt_if_not_exists: IF EXISTS  */
#line 753 "sql-parser.y"
       { if(!(yyvsp[0].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; }
                        (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 3231 "sql-parser.tab.c"
    break;

  case 219: /* stmt: create_table_stmt  */
#line 758 "sql-parser.y"
                        { emit("STMT"); }
#line 3237 "sql-parser.tab.c"
    break;

  case 220: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')'  */
#line 762 "sql-parser.y"
                           { emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3243 "sql-parser.tab.c"
    break;

  case 221: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')'  */
#line 766 "sql-parser.y"
                           { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval));
                          free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 3250 "sql-parser.tab.c"
    break;

  case 222: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' create_select_statement  */
#line 772 "sql-parser.y"
                                { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3256 "sql-parser.tab.c"
    break;

  case 223: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME create_select_statement  */
#line 776 "sql-parser.y"
                           { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 3262 "sql-parser.tab.c"
    break;

  case 224: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' create_select_statement  */
#line 781 "sql-parser.y"
                            { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval));
                              free((yyvsp[-6].strval)); free((yyvsp[-4].strval)); }
#line 3269 "sql-parser.tab.c"
    break;

  case 225: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME create_select_statement  */
#line 786 "sql-parser.y"
                           { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval));
                          free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 3276 "sql-parser.tab.c"
    break;

  case 226: /* opt_temporary: %empty  */
#line 790 "sql-parser.y"
                           { (yyval.intval) = 0; }
#line 3282 "sql-parser.tab.c"
    break;

  case 227: /* opt_temporary: TEMPORARY  */
#line 791 "sql-parser.y"
               { (yyval.intval) = 1;}
#line 3288 "sql-parser.tab.c"
    break;

  case 228: /* create_col_list: create_definition  */
#line 794 "sql-parser.y"
                                   { (yyval.intval) = 1; }
#line 3294 "sql-parser.tab.c"
    break;

  case 229: /* create_col_list: create_col_list ',' create_definition  */
#line 795 "sql-parser.y"
                                            { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3300 "sql-parser.tab.c"
    break;

  case 230: /* create_definition: PRIMARY KEY '(' column_list ')'  */
#line 798 "sql-parser.y"
                                                      { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3306 "sql-parser.tab.c"
    break;

  case 231: /* create_definition: KEY '(' column_list ')'  */
#line 799 "sql-parser.y"
                                         { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3312 "sql-parser.tab.c"
    break;

  case 232: /* create_definition: INDEX '(' column_list ')'  */
#line 800 "sql-parser.y"
                                         { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3318 "sql-parser.tab.c"
    break;

  case 233: /* create_definition: FULLTEXT INDEX '(' column_list ')'  */
#line 801 "sql-parser.y"
                                         { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3324 "sql-parser.tab.c"
    break;

  case 234: /* create_definition: FULLTEXT KEY '(' column_list ')'  */
#line 802 "sql-parser.y"
                                         { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3330 "sql-parser.tab.c"
    break;

  case 235: /* $@1: %empty  */
#line 805 "sql-parser.y"
                   { emit("STARTCOL"); }
#line 3336 "sql-parser.tab.c"
    break;

  case 236: /* create_definition: $@1 NAME data_type column_atts  */
#line 806 "sql-parser.y"
                   { emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3342 "sql-parser.tab.c"
    break;

  case 237: /* column_atts: %empty  */
#line 808 "sql-parser.y"
                       { (yyval.intval) = 0; }
#line 3348 "sql-parser.tab.c"
    break;

  case 238: /* column_atts: column_atts NOT NULLX  */
#line 809 "sql-parser.y"
                                        { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3354 "sql-parser.tab.c"
    break;

  case 240: /* column_atts: column_atts DEFAULT STRING  */
#line 812 "sql-parser.y"
        { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3360 "sql-parser.tab.c"
    break;

  case 241: /* column_atts: column_atts DEFAULT INTNUM  */
#line 814 "sql-parser.y"
        { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3366 "sql-parser.tab.c"
    break;

  case 242: /* column_atts: column_atts DEFAULT APPROXNUM  */
#line 816 "sql-parser.y"
        { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3372 "sql-parser.tab.c"
    break;

  case 243: /* column_atts: column_atts DEFAULT BOOL  */
#line 818 "sql-parser.y"
        { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3378 "sql-parser.tab.c"
    break;

  case 244: /* column_atts: column_atts AUTO_INCREMENT  */
#line 820 "sql-parser.y"
        { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3384 "sql-parser.tab.c"
    break;

  case 245: /* column_atts: column_atts UNIQUE '(' column_list ')'  */
#line 822 "sql-parser.y"
        { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3390 "sql-parser.tab.c"
    break;

  case 246: /* column_atts: column_atts UNIQUE KEY  */
#line 823 "sql-parser.y"
                             { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3396 "sql-parser.tab.c"
    break;

  case 247: /* column_atts: column_atts PRIMARY KEY  */
#line 824 "sql-parser.y"
                              { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3402 "sql-parser.tab.c"
    break;

  case 248: /* column_atts: column_atts KEY  */
#line 825 "sql-parser.y"
                      { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3408 "sql-parser.tab.c"
    break;

  case 249: /* column_atts: column_atts COMMENT STRING  */
#line 827 "sql-parser.y"
        { emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3414 "sql-parser.tab.c"
    break;

  case 250: /* opt_length: %empty  */
#line 830 "sql-parser.y"
                      { (yyval.intval) = 0; }
#line 3420 "sql-parser.tab.c"
    break;

  case 251: /* opt_length: '(' INTNUM ')'  */
#line 831 "sql-parser.y"
                    { (yyval.intval) = (yyvsp[-1].intval); }
#line 3426 "sql-parser.tab.c"
    break;

  case 252: /* opt_length: '(' INTNUM ',' INTNUM ')'  */
#line 832 "sql-parser.y"
                               { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3432 "sql-parser.tab.c"
    break;

  case 253: /* opt_binary: %empty  */
#line 835 "sql-parser.y"
                      { (yyval.intval) = 0; }
#line 3438 "sql-parser.tab.c"
    break;

  case 254: /* opt_binary: BINARY  */
#line 836 "sql-parser.y"
            { (yyval.intval) = 4000; }
#line 3444 "sql-parser.tab.c"
    break;

  case 255: /* opt_uz: %empty  */
#line 839 "sql-parser.y"
                  { (yyval.intval) = 0; }
#line 3450 "sql-parser.tab.c"
    break;

  case 256: /* opt_uz: opt_uz UNSIGNED  */
#line 840 "sql-parser.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3456 "sql-parser.tab.c"
    break;

  case 257: /* opt_uz: opt_uz ZEROFILL  */
#line 841 "sql-parser.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3462 "sql-parser.tab.c"
    break;

  case 259: /* opt_csc: opt_csc CHAR SET STRING  */
#line 845 "sql-parser.y"
                             { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3468 "sql-parser.tab.c"
    break;

  case 260: /* opt_csc: opt_csc COLLATE STRING  */
#line 846 "sql-parser.y"
                            { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3474 "sql-parser.tab.c"
    break;

  case 261: /* data_type: BIT opt_length  */
#line 850 "sql-parser.y"
                    { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3480 "sql-parser.tab.c"
    break;

  case 262: /* data_type: TINYINT opt_length opt_uz  */
#line 851 "sql-parser.y"
                               { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3486 "sql-parser.tab.c"
    break;

  case 263: /* data_type: SMALLINT opt_length opt_uz  */
#line 852 "sql-parser.y"
                                { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3492 "sql-parser.tab.c"
    break;

  case 264: /* data_type: MEDIUMINT opt_length opt_uz  */
#line 853 "sql-parser.y"
                                 { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3498 "sql-parser.tab.c"
    break;

  case 265: /* data_type: INT opt_length opt_uz  */
#line 854 "sql-parser.y"
                           { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3504 "sql-parser.tab.c"
    break;

  case 266: /* data_type: INTEGER opt_length opt_uz  */
#line 855 "sql-parser.y"
                               { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3510 "sql-parser.tab.c"
    break;

  case 267: /* data_type: BIGINT opt_length opt_uz  */
#line 856 "sql-parser.y"
                              { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3516 "sql-parser.tab.c"
    break;

  case 268: /* data_type: REAL opt_length opt_uz  */
#line 857 "sql-parser.y"
                            { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3522 "sql-parser.tab.c"
    break;

  case 269: /* data_type: DOUBLE opt_length opt_uz  */
#line 858 "sql-parser.y"
                              { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3528 "sql-parser.tab.c"
    break;

  case 270: /* data_type: FLOAT opt_length opt_uz  */
#line 859 "sql-parser.y"
                             { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3534 "sql-parser.tab.c"
    break;

  case 271: /* data_type: DECIMAL opt_length opt_uz  */
#line 860 "sql-parser.y"
                               { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3540 "sql-parser.tab.c"
    break;

  case 272: /* data_type: DATE  */
#line 861 "sql-parser.y"
          { (yyval.intval) = 100001; }
#line 3546 "sql-parser.tab.c"
    break;

  case 273: /* data_type: TIME  */
#line 862 "sql-parser.y"
          { (yyval.intval) = 100002; }
#line 3552 "sql-parser.tab.c"
    break;

  case 274: /* data_type: TIMESTAMP  */
#line 863 "sql-parser.y"
               { (yyval.intval) = 100003; }
#line 3558 "sql-parser.tab.c"
    break;

  case 275: /* data_type: DATETIME  */
#line 864 "sql-parser.y"
              { (yyval.intval) = 100004; }
#line 3564 "sql-parser.tab.c"
    break;

  case 276: /* data_type: YEAR  */
#line 865 "sql-parser.y"
          { (yyval.intval) = 100005; }
#line 3570 "sql-parser.tab.c"
    break;

  case 277: /* data_type: CHAR opt_length opt_csc  */
#line 866 "sql-parser.y"
                             { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3576 "sql-parser.tab.c"
    break;

  case 278: /* data_type: VARCHAR '(' INTNUM ')' opt_csc  */
#line 867 "sql-parser.y"
                                    { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3582 "sql-parser.tab.c"
    break;

  case 279: /* data_type: BINARY opt_length  */
#line 868 "sql-parser.y"
                       { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3588 "sql-parser.tab.c"
    break;

  case 280: /* data_type: VARBINARY '(' INTNUM ')'  */
#line 869 "sql-parser.y"
                              { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3594 "sql-parser.tab.c"
    break;

  case 281: /* data_type: TINYBLOB  */
#line 870 "sql-parser.y"
              { (yyval.intval) = 160001; }
#line 3600 "sql-parser.tab.c"
    break;

  case 282: /* data_type: BLOB  */
#line 871 "sql-parser.y"
          { (yyval.intval) = 160002; }
#line 3606 "sql-parser.tab.c"
    break;

  case 283: /* data_type: MEDIUMBLOB  */
#line 872 "sql-parser.y"
                { (yyval.intval) = 160003; }
#line 3612 "sql-parser.tab.c"
    break;

  case 284: /* data_type: LONGBLOB  */
#line 873 "sql-parser.y"
              { (yyval.intval) = 160004; }
#line 3618 "sql-parser.tab.c"
    break;

  case 285: /* data_type: TINYTEXT opt_binary opt_csc  */
#line 874 "sql-parser.y"
                                 { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3624 "sql-parser.tab.c"
    break;

  case 286: /* data_type: TEXT opt_binary opt_csc  */
#line 875 "sql-parser.y"
                             { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3630 "sql-parser.tab.c"
    break;

  case 287: /* data_type: MEDIUMTEXT opt_binary opt_csc  */
#line 876 "sql-parser.y"
                                   { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3636 "sql-parser.tab.c"
    break;

  case 288: /* data_type: LONGTEXT opt_binary opt_csc  */
#line 877 "sql-parser.y"
                                 { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3642 "sql-parser.tab.c"
    break;

  case 289: /* data_type: ENUM '(' enum_list ')' opt_csc  */
#line 878 "sql-parser.y"
                                    { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3648 "sql-parser.tab.c"
    break;

  case 290: /* data_type: SET '(' enum_list ')' opt_csc  */
#line 879 "sql-parser.y"
                                   { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3654 "sql-parser.tab.c"
    break;

  case 291: /* enum_list: STRING  */
#line 882 "sql-parser.y"
                  { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3660 "sql-parser.tab.c"
    break;

  case 292: /* enum_list: enum_list ',' STRING  */
#line 883 "sql-parser.y"
                          { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3666 "sql-parser.tab.c"
    break;

  case 293: /* create_select_statement: opt_ignore_replace opt_as select_stmt  */
#line 886 "sql-parser.y"
                                                                  { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3672 "sql-parser.tab.c"
    break;

  case 294: /* opt_ignore_replace: %empty  */
#line 888 "sql-parser.y"
                              { (yyval.intval) = 0; }
#line 3678 "sql-parser.tab.c"
    break;

  case 295: /* opt_ignore_replace: IGNORE  */
#line 889 "sql-parser.y"
            { (yyval.intval) = 1; }
#line 3684 "sql-parser.tab.c"
    break;

  case 296: /* opt_ignore_replace: REPLACE  */
#line 890 "sql-parser.y"
             { (yyval.intval) = 2; }
#line 3690 "sql-parser.tab.c"
    break;

  case 297: /* stmt: set_stmt  */
#line 895 "sql-parser.y"
               { emit("STMT"); }
#line 3696 "sql-parser.tab.c"
    break;

  case 301: /* set_expr: USERVAR COMPARISON expr  */
#line 903 "sql-parser.y"
                              { if ((yyvsp[-1].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[-2].strval)); YYERROR; }
                 emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3703 "sql-parser.tab.c"
    break;

  case 302: /* set_expr: USERVAR ASSIGN expr  */
#line 905 "sql-parser.y"
                          { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3709 "sql-parser.tab.c"
    break;


#line 3713 "sql-parser.tab.c"

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

#line 908 "sql-parser.y"

void
emit(char *s, ...)
{
  extern yylineno;

  va_list ap;
  va_start(ap, s);

  printf("rpn: ");
  vfprintf(stdout, s, ap);
  printf("\n");
}

void
yyerror(char *s, ...)
{
  extern yylineno;

  va_list ap;
  va_start(ap, s);

  fprintf(stderr, "%d: error: ", yylineno);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
}

main(int ac, char **av)
{
  extern FILE *yyin;

  if(ac > 1 && !strcmp(av[1], "-d")) {
    /*yydebug = 1;*/ ac--; av++;
  }

  if(ac > 1 && (yyin = fopen(av[1], "r")) == NULL) {
    perror(av[1]);
    exit(1);
  }

  if(!yyparse())
    printf("SQL parse worked\n");
  else
    printf("SQL parse failed\n");
} /* main */
