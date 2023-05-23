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

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void yyerror(char *s, ...);
void emit(char *s, ...);

#line 80 "sql-parser.tab.c"

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
#define YYLAST   1493

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  253
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  300
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  620

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
       0,   287,   287,   288,   293,   294,   295,   296,   297,   298,
     299,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   321,   322,
     323,   324,   327,   328,   329,   330,   332,   335,   338,   339,
     342,   343,   346,   347,   348,   349,   350,   354,   358,   359,
     361,   362,   363,   365,   366,   369,   370,   371,   374,   375,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   388,
     389,   390,   391,   394,   395,   398,   399,   402,   403,   406,
     407,   408,   411,   416,   419,   422,   428,   429,   431,   432,
     436,   438,   442,   443,   444,   447,   448,   451,   452,   454,
     455,   458,   458,   459,   462,   463,   466,   467,   470,   471,
     473,   475,   477,   479,   481,   483,   485,   490,   491,   492,
     495,   497,   498,   499,   502,   503,   506,   507,   511,   512,
     514,   515,   518,   519,   523,   525,   527,   529,   531,   535,
     536,   537,   540,   541,   544,   545,   548,   549,   550,   553,
     554,   557,   558,   562,   564,   566,   568,   571,   572,   575,
     576,   579,   584,   588,   593,   594,   595,   596,   600,   605,
     606,   610,   610,   613,   621,   624,   630,   631,   634,   635,
     636,   637,   638,   641,   641,   644,   645,   648,   649,   652,
     653,   654,   655,   657,   664,   667,   670,   673,   678,   684,
     687,   693,   699,   705,   708,   715,   716,   717,   721,   724,
     727,   730,   738,   742,   744,   748,   749,   755,   758,   762,
     767,   772,   776,   782,   787,   788,   791,   792,   795,   796,
     797,   798,   799,   802,   802,   805,   806,   807,   808,   810,
     812,   814,   816,   818,   820,   821,   822,   823,   827,   828,
     829,   832,   833,   836,   837,   838,   841,   842,   843,   847,
     848,   849,   850,   851,   852,   853,   854,   855,   856,   857,
     858,   859,   860,   861,   862,   863,   864,   865,   866,   867,
     868,   869,   870,   871,   872,   873,   874,   875,   876,   879,
     880,   883,   885,   886,   887,   892,   895,   897,   897,   900,
     902
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

#define YYPACT_NINF (-366)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-220)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     375,   -55,  -366,  -366,  -366,  -366,    79,     2,    95,  -198,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,    -4,    -4,
    -366,   -77,    36,   136,   136,   126,    44,  -103,  -366,   209,
       3,  -366,   -87,  -366,   -72,   213,   231,    -4,   -12,   238,
    -366,  -366,  -366,   -94,  -366,  -366,  -366,  -366,  -366,   256,
     264,   -43,  -366,  -366,  -366,  -366,   217,   550,   550,   550,
    -366,  -366,   550,   175,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,    28,    31,    40,    47,    52,    62,
    1349,   -84,  -366,   550,   550,    79,     4,     6,     8,     1,
    -115,   174,  -366,  -366,   254,  -366,  -366,  -366,  -366,   312,
     294,  -366,   -22,   -29,     3,   327,  -147,  -146,   343,   550,
     550,   618,   618,  -366,  -366,   550,   945,   -49,   164,   550,
     268,   550,   550,   337,  -366,   550,   550,   550,   102,    14,
     550,   550,    60,   550,    18,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   355,  -366,     3,   550,  1406,
    1406,  -366,   357,   -23,   113,   -30,   363,     3,  -366,  -366,
    -366,   -59,  -366,     3,   275,   249,  -366,   413,   -52,  -366,
     550,   265,     3,   -81,   -12,   453,   466,  -137,   453,  -136,
    -366,   661,  -366,   187,  1406,  1022,   -39,   550,  -366,   550,
     241,   606,   251,  -366,  -366,  -366,   258,   550,   711,   761,
     271,   840,  1426,  1445,   977,   407,  -366,    22,  -366,  1463,
    1463,   232,   550,   550,  1379,   239,   274,   284,   164,   634,
     726,   435,   733,   308,   308,   505,   505,   505,   505,  -366,
    -366,   -81,  -366,    42,   414,   417,   419,  -366,  -366,  -366,
     -18,   -48,   174,   249,   249,   421,   393,     3,  -366,   428,
    -366,  -366,  -366,   544,   121,  -366,   254,  1406,   513,   430,
     -81,  -366,  -366,   549,  -124,  -366,    43,   320,   418,  -124,
     320,   418,   550,  -366,   550,   550,  -366,  1274,  1051,  -366,
     550,  -366,  -366,  1181,   450,   450,  -366,  -366,   323,   325,
    -366,  -366,   407,  1463,  1463,   550,   164,   164,   164,   326,
     480,   -23,   490,   490,   490,   550,   587,   589,   265,  -366,
    -366,     3,   550,   -65,     3,   -83,   -51,   344,   345,   471,
      56,  -366,   595,   164,   550,   550,  -366,  -366,   423,   474,
     621,  -366,  -366,   676,   473,  -105,  -366,  -366,  -105,  -366,
    -366,  1406,  1295,  -366,   550,   809,   550,   550,   443,   447,
    -366,  -366,   448,   452,   582,   454,   456,   458,  -366,   654,
     604,  -366,   588,   461,   463,   464,  1406,   709,   -17,   430,
    -366,  1406,   550,   514,  -366,  -366,   -65,   121,  -366,   529,
     556,   466,   466,   577,   -34,   121,  1044,  -366,  1316,   590,
     788,  -366,  1406,   619,   820,  -366,  -366,  1406,    76,   593,
    -366,  -366,  -366,  1406,   550,  -366,   594,   914,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,   550,   550,   265,  -366,   841,
     841,   841,   550,   550,   843,  -366,  1406,   466,  -366,   105,
     466,   466,   134,   137,   466,  -366,  -366,   597,   597,   597,
    -366,   597,  -366,  -366,   597,   597,   598,   597,   597,   597,
    -366,   806,  -366,   597,   806,   597,   629,   597,   806,  -366,
    -366,  -366,   597,   806,   643,   644,  -366,  -366,  -366,  -366,
    -366,   550,   550,   453,   500,  -366,   523,   473,   861,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -166,
    1406,   430,  -366,   141,   143,   152,  1406,  1406,   877,   154,
     -28,   182,   192,  -366,  -366,   216,   894,  -366,  -366,  -366,
    -366,  -366,  -366,   896,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,   896,  -366,  -366,  -366,  -366,   898,   902,   188,
    1316,  1406,   657,  -366,  1406,  -366,  1406,   223,  -366,   731,
    -366,   793,  -366,   913,  -366,  -366,   550,  -366,  -366,  -366,
    -366,  -366,   233,   -66,   193,   -66,   -66,  -366,   243,   -66,
     -66,   -66,   193,   -66,   193,   -66,   245,   -66,   193,   -66,
     193,   666,   667,   769,  -366,   918,   377,  -366,  -366,   798,
    -111,  -366,  -366,  -366,   466,  -366,  -366,  1406,  -366,   927,
    -366,  -366,   758,   942,  -366,   943,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,   466,   696,   698,
     946,  -366,   193,  -366,   193,   193,   248,  -366,  -366,  -366
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   224,   167,   178,   178,   108,     0,   178,     0,     0,
      83,   162,   174,   199,   203,   212,   217,   295,   215,   215,
     225,     0,     0,   184,   184,     0,     0,   296,   297,     0,
       0,     1,     0,     2,     0,     0,     0,   215,   171,     0,
     166,   164,   165,     0,   180,   181,   182,   183,   179,     0,
       0,     4,     7,     8,    10,     9,     6,     0,     0,     0,
     119,   109,     0,     0,    80,    81,    79,   110,   111,   112,
     115,   116,   114,   113,     0,     0,     0,     0,     0,     0,
     123,    84,   117,     0,     0,     0,   182,   179,   123,     0,
       0,   124,   126,   127,   133,     3,   216,   213,   214,     0,
       0,   169,    86,     0,     0,     0,   185,   185,     0,    40,
       0,    25,    26,    17,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   120,     0,     0,   300,
     299,   298,     0,   156,     0,     0,     0,     0,   141,   140,
     144,   148,   145,     0,     0,   142,   132,     0,   292,   172,
       0,    99,     0,    86,   171,     0,     0,     0,     0,     0,
       5,    38,    41,     0,    36,     0,     0,     0,    71,     0,
       0,    38,     0,    57,    55,    56,     0,     0,     0,     0,
       0,     0,    19,    20,    18,     0,    34,     0,    32,    75,
      77,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      21,    22,    24,    11,    12,    13,    14,    15,    16,    23,
     121,    86,   118,   123,     0,     0,     0,   128,   161,   131,
       0,    86,   125,   142,   142,     0,   135,     0,   143,     0,
     130,   293,   294,     0,   233,   221,   133,    87,     0,   101,
      86,   168,   170,     0,   176,   106,     0,     0,   176,   176,
       0,   176,     0,    47,     0,     0,    69,     0,     0,    46,
       0,    50,    53,     0,     0,     0,    48,    49,     0,     0,
      35,    33,     0,    76,    78,     0,     0,     0,     0,     0,
      88,   156,   158,   158,   158,     0,     0,     0,    99,   146,
     147,     0,     0,   149,     0,   292,     0,     0,     0,     0,
       0,   226,     0,     0,     0,     0,   163,   173,     0,     0,
       0,   193,   186,     0,     0,   176,   198,   201,   176,   202,
      39,    73,     0,    72,     0,     0,     0,     0,     0,     0,
      42,    44,     0,     0,    37,     0,     0,     0,    28,     0,
      97,   129,     0,     0,     0,     0,   208,     0,     0,   101,
     138,   136,     0,     0,   134,   150,     0,   233,   223,     0,
       0,     0,     0,     0,   292,   233,     0,   291,    92,   100,
     102,   195,   194,     0,     0,   107,   190,   189,     0,     0,
     175,   200,    70,    74,     0,    51,     0,     0,    58,    59,
      43,    45,    31,    29,    30,     0,     0,    99,   157,     0,
       0,     0,     0,     0,     0,   204,   151,     0,   137,     0,
       0,     0,     0,     0,     0,   220,   227,   248,   248,   248,
     280,   248,   270,   273,   248,   248,     0,   248,   248,   248,
     282,   251,   281,   248,   251,   248,     0,   248,   251,   271,
     272,   279,   248,   251,     0,     0,   274,   235,    93,    94,
      90,     0,     0,     0,     0,   187,     0,     0,     0,    54,
      60,    61,    62,    63,    66,    67,    68,    65,    64,    95,
      98,   101,   159,     0,     0,     0,   209,   210,     0,     0,
     292,     0,     0,   230,   229,     0,     0,   253,   277,   259,
     256,   253,   253,     0,   253,   253,   253,   252,   256,   253,
     256,   253,     0,   253,   256,   253,   256,     0,     0,   234,
      92,   103,   177,   197,   196,   192,   191,     0,    52,     0,
      89,   104,   155,     0,   154,   153,     0,   152,   222,   231,
     232,   228,     0,   265,   275,   269,   267,   289,     0,   268,
     263,   264,   286,   262,   285,   266,     0,   261,   284,   260,
     283,     0,     0,     0,   242,     0,     0,   246,   237,     0,
       0,    91,   188,    96,     0,    85,   160,   211,   249,     0,
     254,   255,     0,     0,   256,     0,   256,   278,   256,   236,
     247,   238,   239,   241,   240,   245,   244,     0,   105,     0,
       0,   258,   287,   290,   288,   276,     0,   250,   257,   243
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -366,  -366,   -25,   -63,  -366,  -366,   668,   835,   944,   803,
    -106,  -366,   539,   446,  -366,  -366,  -281,  -350,  -366,  -365,
    -366,  -366,   829,   -76,   202,   821,  -148,   723,  -366,  -366,
     210,  -366,  -366,  -366,   605,   682,   229,    99,  -366,  -366,
    -366,   956,   810,  -366,   107,   117,   961,   903,   739,   534,
    -177,  -366,  -366,  -366,  -366,  -366,   180,  -366,  -366,   635,
     630,  -366,  -366,   457,  -153,   181,  -159,  -366,   492,  -305,
    -366,  -366,  -366,   931
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     8,   181,   182,   183,   197,   348,   117,     9,    10,
     171,   360,   389,   470,   540,   417,   259,   326,   585,   266,
      25,    81,    82,   146,    90,    91,    92,   167,    93,   164,
     249,   165,   245,   374,   375,   237,   363,   493,    94,    11,
      22,    43,   101,    12,   331,    23,    49,   177,   335,   398,
     264,    13,    14,    30,   241,    15,    35,    16,    21,   320,
     321,   322,   529,   507,   518,   553,   554,   467,   558,   255,
     256,    17,    27,    28
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,   269,   305,   423,    88,  -205,    88,  -207,   104,  -206,
     378,   124,   153,    18,   606,   246,   432,   433,   147,   425,
     206,    51,    52,    53,    54,    55,    56,   369,   290,   251,
     329,   207,   111,   112,   113,    57,    58,   114,   116,    38,
     175,   178,   187,    59,   188,   124,   145,     5,     5,   329,
      33,   215,   275,    83,   276,   216,   192,   196,   149,   150,
     251,    62,   499,   379,    84,   501,   502,   261,    63,   505,
     539,   243,   156,   211,   380,   212,   213,   234,   251,   435,
     145,    64,    65,    66,   251,   184,   471,    26,   372,   235,
     185,   252,   267,   270,   191,    31,   198,   199,   201,   313,
     202,   203,   204,   176,   176,   209,   210,    34,   214,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     244,    24,   252,    80,    29,   300,    19,    37,   330,    51,
      52,    53,    54,    55,    56,   308,   491,   157,    39,   607,
     252,   541,   288,    57,    58,   257,   252,   399,    40,    85,
      20,    59,    60,   170,   327,   590,     1,   301,   105,    61,
     373,    95,   277,   370,   278,   208,   376,   377,   148,    62,
      96,   157,   283,   291,   591,     2,    63,    41,    51,    52,
      53,    54,    55,    56,   189,     5,   170,   293,   294,    64,
      65,    66,    57,    58,   189,   548,   172,   253,   254,    36,
      59,   236,    42,  -171,   307,   573,   108,   109,   217,   340,
      67,    68,   170,     3,  -218,    44,    97,    99,    62,   608,
    -219,   239,   157,   105,   316,    63,   110,   100,   574,   352,
    -171,   306,   424,    69,    98,   317,   158,   100,    64,    65,
      66,   102,   616,    45,   575,   592,   318,   593,    46,   341,
     342,    89,  -205,    89,  -207,   345,  -206,   152,    47,   106,
      74,    75,    76,    77,    78,    79,   576,   107,   218,     4,
     354,    51,    52,    53,    54,    55,    56,    48,   118,     5,
     366,   119,     6,   406,   319,    57,    58,   371,    44,   159,
     120,   155,   166,    59,   332,   333,   532,   121,  -139,   388,
     390,   520,   122,   392,   160,   524,   173,   384,   385,   397,
     526,    62,   123,   577,   193,   168,    45,     7,    63,   403,
     169,    86,   407,   161,    70,    71,    72,   475,   476,    73,
     174,    64,    65,    66,   140,   141,   142,   143,   144,   578,
      51,    52,    53,    54,    55,    56,   180,   426,     5,   231,
      87,   579,   205,   162,    57,    58,   500,   385,   230,   562,
     233,   564,    59,   200,   238,   568,   240,   570,    74,    75,
      76,    77,    78,    79,   260,   336,   337,   163,   339,   478,
      62,   601,   602,   603,   604,   503,   333,    63,   504,   333,
     388,   490,   542,   543,   544,   543,   194,   496,   497,   247,
      64,    65,    66,   545,   543,   547,   333,   580,   115,   248,
      51,    52,    53,    54,    55,    56,   250,    74,    75,    76,
      77,    78,    79,   258,    57,    58,    51,    52,    53,    54,
      55,    56,    59,   549,   333,   612,     1,   614,   273,   615,
      57,    58,   400,   550,   333,   401,   530,   531,    59,   534,
      62,   536,   397,   309,   310,     2,   263,    63,   137,   138,
     139,   140,   141,   142,   143,   144,    62,   551,   333,   265,
      64,    65,    66,    63,   582,   476,    51,    52,    53,    54,
      55,    56,   292,   195,   588,   589,    64,    65,    66,   296,
      57,    58,   279,     3,   594,   595,   596,   595,    59,   619,
     333,   391,   281,    51,    52,    53,    54,    55,    56,   282,
      74,    75,    76,    77,    78,    79,    62,    57,    58,   494,
     495,   587,   286,    63,   297,    59,    51,    52,    53,    54,
      55,    56,   364,   365,   298,   144,    64,    65,    66,   302,
      57,    58,   303,    62,   304,   311,   312,   315,    59,     4,
      63,   396,   314,    51,    52,    53,    54,    55,    56,     5,
     324,   325,     6,    64,    65,    66,    62,    57,    58,   328,
     334,   347,   329,    63,   350,    59,   351,   358,   533,    74,
      75,    76,    77,    78,    79,   359,    64,    65,    66,   362,
     367,     5,   368,    62,   381,   382,   383,     7,   386,   393,
      63,   535,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,    64,    65,    66,   125,   126,   127,   128,
     129,   130,   131,   132,   394,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,    74,
      75,    76,    77,    78,    79,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,    74,    75,    76,    77,    78,
      79,   125,   126,   127,   128,   129,   130,   131,   132,   395,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   555,   556,   408,   559,   560,   561,   409,   410,
     563,   415,   565,   411,   567,   412,   569,   413,   280,   414,
     416,   419,   418,   420,   421,    74,    75,    76,    77,    78,
      79,   125,   126,   127,   128,   129,   130,   131,   132,   422,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,    74,    75,    76,    77,    78,    79,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   138,   139,   140,
     141,   142,   143,   144,   427,    74,    75,    76,    77,    78,
      79,   125,   126,   127,   128,   129,   130,   131,   132,   430,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,    74,    75,    76,    77,    78,    79,   125,   126,
     127,   128,   129,   130,   131,   132,   431,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   125,
     126,   127,   128,   129,   130,   131,   132,   434,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     474,   473,   471,   477,   492,   479,   498,   506,   513,   517,
     125,   126,   127,   128,   129,   130,   131,   132,   272,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   125,   126,   127,   128,   129,   130,   131,   132,   522,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   154,   527,   528,   508,   509,   546,   510,   552,
     557,   511,   512,   571,   514,   515,   516,   572,   404,   330,
     519,   583,   521,   272,   523,   584,   586,   597,   598,   525,
     599,   190,   600,   605,   125,   126,   127,   128,   129,   130,
     131,   132,   609,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   610,   611,   613,   333,   617,
     618,   186,    32,   349,   489,   125,   126,   127,   128,   129,
     130,   131,   132,   284,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   581,   232,   242,   323,
     268,   428,   271,   361,   262,    50,   480,   481,   482,   483,
     128,   129,   130,   131,   132,   103,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   289,   338,
     179,   537,   429,   285,   566,   436,   151,     0,     0,     0,
       0,   299,   484,   485,   486,     0,     0,     0,     0,     0,
       0,     0,   125,   126,   127,   128,   129,   130,   131,   132,
     472,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,     0,     0,     0,     0,     0,     0,     0,
     405,   125,   126,   127,   128,   129,   130,   131,   132,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,     0,     0,     0,   437,   438,   439,   440,
       0,   287,     0,     0,     0,   353,   441,     0,     0,   355,
     356,   357,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   538,     0,   442,   443,     0,     0,     0,     0,
     444,     0,     0,     0,     0,     0,   387,     0,     0,     0,
       0,   445,     0,     0,     0,     0,     0,     0,   446,     0,
       0,     0,   447,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   487,   488,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   448,   449,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   450,   451,     0,     0,     0,   452,   453,   454,
       0,   125,   126,   127,   128,   129,   130,   131,   132,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   455,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     274,   456,     0,   457,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   458,     0,   459,   460,   461,   462,   463,     0,   344,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   464,   465,     0,     0,     0,     0,
       0,     0,   466,   346,   125,   126,   127,   128,   129,   130,
     131,   132,     0,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   125,   126,   127,   128,   129,
     130,   131,   132,     0,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   125,   126,   127,   128,
     129,   130,   131,   132,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,     0,     0,     0,
       0,     0,   124,     0,     0,   468,     0,     0,     0,   125,
     126,   127,   128,   129,   130,   131,   132,   343,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,     0,     0,     0,     0,     0,     0,   145,   402,   125,
     126,   127,   128,   129,   130,   131,   132,   469,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,     0,     0,     0,     0,   295,   125,   126,   127,   128,
     129,   130,   131,   132,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   126,   127,   128,
     129,   130,   131,   132,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   127,   128,   129,
     130,   131,   132,     0,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,  -220,  -220,  -220,  -220,
     132,     0,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144
};

static const yytype_int16 yycheck[] =
{
      25,   178,    20,    20,     3,     3,     3,     3,   102,     3,
     315,     3,    88,    68,   125,   163,   381,   382,   102,   369,
       6,     3,     4,     5,     6,     7,     8,   308,     6,   112,
     154,    17,    57,    58,    59,    17,    18,    62,    63,     3,
     187,   187,    91,    25,    93,     3,    38,   184,   184,   154,
     248,    33,    91,     9,    93,    37,   119,   120,    83,    84,
     112,    43,   427,   114,    20,   430,   431,   173,    50,   434,
     236,   130,   187,    13,   125,    15,    16,   100,   112,   384,
      38,    63,    64,    65,   112,   110,   252,     8,   153,   112,
     115,   174,   229,   229,   119,     0,   121,   122,   123,   247,
     125,   126,   127,   250,   250,   130,   131,   111,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     179,     4,   174,   148,     7,   231,   181,   204,   252,     3,
       4,     5,     6,     7,     8,   241,   417,   252,   102,   250,
     174,   491,   205,    17,    18,   170,   174,   252,   112,   252,
     205,    25,    26,   234,   260,   221,    61,   233,   252,    33,
     225,   248,   187,   311,   189,   151,   314,   250,   252,    43,
     242,   252,   197,   151,   240,    80,    50,   141,     3,     4,
       5,     6,     7,     8,   233,   184,   234,   212,   213,    63,
      64,    65,    17,    18,   233,   500,   225,   249,   250,    19,
      25,   224,   166,   225,   252,    17,   249,   250,   190,   272,
      84,    85,   234,   118,   248,    79,     3,    37,    43,   584,
     248,   251,   252,   252,   103,    50,     9,   249,    40,   292,
     252,   249,   249,   107,     3,   114,    62,   249,    63,    64,
      65,     3,   607,   107,    56,    52,   125,    54,   112,   274,
     275,   250,   250,   250,   250,   280,   250,   249,   122,     3,
     242,   243,   244,   245,   246,   247,    78,     3,   250,   174,
     295,     3,     4,     5,     6,     7,     8,   141,   250,   184,
     305,   250,   187,   346,   163,    17,    18,   312,    79,   115,
     250,    89,    38,    25,   251,   252,   473,   250,   124,   324,
     325,   454,   250,   328,   130,   458,   104,   251,   252,   334,
     463,    43,   250,   125,    46,     3,   107,   222,    50,   344,
      26,   112,   347,   149,   198,   199,   200,   251,   252,   203,
       3,    63,    64,    65,    26,    27,    28,    29,    30,   151,
       3,     4,     5,     6,     7,     8,     3,   372,   184,   147,
     141,   163,   250,   179,    17,    18,   251,   252,     3,   518,
       3,   520,    25,    26,   251,   524,     3,   526,   242,   243,
     244,   245,   246,   247,   172,   268,   269,   203,   271,   404,
      43,     4,     5,     6,     7,   251,   252,    50,   251,   252,
     415,   416,   251,   252,   251,   252,   128,   422,   423,   124,
      63,    64,    65,   251,   252,   251,   252,   219,   233,   160,
       3,     4,     5,     6,     7,     8,     3,   242,   243,   244,
     245,   246,   247,   158,    17,    18,     3,     4,     5,     6,
       7,     8,    25,   251,   252,   594,    61,   596,   251,   598,
      17,    18,   335,   251,   252,   338,   471,   472,    25,   474,
      43,   476,   477,   243,   244,    80,     3,    50,    23,    24,
      25,    26,    27,    28,    29,    30,    43,   251,   252,     3,
      63,    64,    65,    50,   251,   252,     3,     4,     5,     6,
       7,     8,   250,   215,   251,   252,    63,    64,    65,   250,
      17,    18,   251,   118,   251,   252,   251,   252,    25,   251,
     252,    78,   251,     3,     4,     5,     6,     7,     8,   251,
     242,   243,   244,   245,   246,   247,    43,    17,    18,   420,
     421,   546,   251,    50,   250,    25,     3,     4,     5,     6,
       7,     8,   303,   304,   250,    30,    63,    64,    65,   125,
      17,    18,   125,    43,   125,   124,   153,     3,    25,   174,
      50,    78,   124,     3,     4,     5,     6,     7,     8,   184,
      47,   131,   187,    63,    64,    65,    43,    17,    18,    20,
     250,   121,   154,    50,   251,    25,   251,   251,    78,   242,
     243,   244,   245,   246,   247,   105,    63,    64,    65,    99,
       3,   184,     3,    43,   250,   250,   125,   222,     3,   125,
      50,    78,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    63,    64,    65,    10,    11,    12,    13,
      14,    15,    16,    17,     3,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   242,
     243,   244,   245,   246,   247,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   242,   243,   244,   245,   246,
     247,    10,    11,    12,    13,    14,    15,    16,    17,     3,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   511,   512,   251,   514,   515,   516,   251,   251,
     519,    47,   521,   251,   523,   251,   525,   251,   102,   251,
     106,   250,   124,   250,   250,   242,   243,   244,   245,   246,
     247,    10,    11,    12,    13,    14,    15,    16,    17,    20,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   242,   243,   244,   245,   246,   247,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    24,    25,    26,
      27,    28,    29,    30,   250,   242,   243,   244,   245,   246,
     247,    10,    11,    12,    13,    14,    15,    16,    17,   250,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   242,   243,   244,   245,   246,   247,    10,    11,
      12,    13,    14,    15,    16,    17,   250,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    17,   250,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      20,   222,   252,   250,     3,   251,     3,   250,   250,    43,
      10,    11,    12,    13,    14,    15,    16,    17,   252,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    17,   250,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    89,   250,   250,   438,   439,    20,   441,     5,
       4,   444,   445,     5,   447,   448,   449,     5,    99,   252,
     453,   180,   455,   252,   457,   122,     3,   251,   251,   462,
     151,   118,     4,   125,    10,    11,    12,    13,    14,    15,
      16,    17,     5,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   187,     4,     4,   252,   251,
       4,   116,     8,   285,   415,    10,    11,    12,    13,    14,
      15,    16,    17,   252,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   530,   148,   157,   256,
     177,   376,   179,   301,   174,    24,    72,    73,    74,    75,
      13,    14,    15,    16,    17,    39,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   205,   270,
     107,   477,   377,   252,   522,   385,    85,    -1,    -1,    -1,
      -1,   218,   108,   109,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
     252,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     251,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      -1,   251,    -1,    -1,    -1,   292,    52,    -1,    -1,   296,
     297,   298,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   251,    -1,    70,    71,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   238,   239,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,    -1,   138,   139,    -1,    -1,    -1,   143,   144,   145,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     208,   187,    -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   207,    -1,   209,   210,   211,   212,   213,    -1,   208,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   230,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,   102,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    39,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    93,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    93,    10,
      11,    12,    13,    14,    15,    16,    17,    81,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30
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
     255,   274,   275,     9,    20,   252,   112,   141,     3,   250,
     277,   278,   279,   281,   291,   248,   242,     3,     3,   309,
     249,   295,     3,   294,   102,   252,     3,     3,   249,   250,
       9,   255,   255,   255,   255,   233,   255,   260,   250,   250,
     250,   250,   250,   250,     3,    10,    11,    12,    13,    14,
      15,    16,    17,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    38,   276,   102,   252,   255,
     255,   326,   249,   276,   262,   277,   187,   252,    62,   115,
     130,   149,   179,   203,   282,   284,    38,   280,     3,    26,
     234,   263,   225,   277,     3,   187,   250,   300,   187,   300,
       3,   255,   256,   257,   255,   255,   260,    91,    93,   233,
     262,   255,   256,    46,   128,   215,   256,   258,   255,   255,
      26,   255,   255,   255,   255,   250,     6,    17,   151,   255,
     255,    13,    15,    16,   255,    33,    37,   190,   250,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
       3,   277,   275,     3,   100,   112,   224,   288,   251,   251,
       3,   307,   278,   130,   179,   285,   279,   124,   160,   283,
       3,   112,   174,   249,   250,   322,   323,   255,   158,   269,
     277,   263,   295,     3,   303,     3,   272,   229,   262,   303,
     229,   262,   252,   251,   208,    91,    93,   255,   255,   251,
     102,   251,   251,   255,   252,   252,   251,   251,   256,   262,
       6,   151,   250,   255,   255,    36,   250,   250,   250,   262,
     263,   276,   125,   125,   125,    20,   249,   252,   263,   283,
     283,   124,   153,   279,   124,     3,   103,   114,   125,   163,
     312,   313,   314,   280,    47,   131,   270,   263,    20,   154,
     252,   297,   251,   252,   250,   301,   297,   297,   301,   297,
     256,   255,   255,    93,   208,   255,   102,   121,   259,   259,
     251,   251,   256,   262,   255,   262,   262,   262,   251,   105,
     264,   288,    99,   289,   289,   289,   255,     3,     3,   269,
     279,   255,   153,   225,   286,   287,   279,   250,   322,   114,
     125,   250,   250,   125,   251,   252,     3,   262,   255,   265,
     255,    78,   255,   125,     3,     3,    78,   255,   302,   252,
     297,   297,    93,   255,    99,   251,   256,   255,   251,   251,
     251,   251,   251,   251,   251,    47,   106,   268,   124,   250,
     250,   250,    20,    20,   249,   270,   255,   250,   287,   312,
     250,   250,   272,   272,   250,   322,   313,    42,    43,    44,
      45,    52,    70,    71,    76,    87,    94,    98,   119,   120,
     138,   139,   143,   144,   145,   169,   187,   189,   207,   209,
     210,   211,   212,   213,   230,   231,   238,   320,    39,    81,
     266,   252,   252,   222,    20,   251,   252,   250,   255,   251,
      72,    73,    74,    75,   108,   109,   110,   238,   239,   265,
     255,   269,     3,   290,   290,   290,   255,   255,     3,   272,
     251,   272,   272,   251,   251,   272,   250,   316,   316,   316,
     316,   316,   316,   250,   316,   316,   316,    43,   317,   316,
     317,   316,   250,   316,   317,   316,   317,   250,   250,   315,
     255,   255,   303,    78,   255,    78,   255,   302,   251,   236,
     267,   270,   251,   252,   251,   251,    20,   251,   322,   251,
     251,   251,     5,   318,   319,   318,   318,     4,   321,   318,
     318,   318,   319,   318,   319,   318,   321,   318,   319,   318,
     319,     5,     5,    17,    40,    56,    78,   125,   151,   163,
     219,   266,   251,   180,   122,   271,     3,   255,   251,   252,
     221,   240,    52,    54,   251,   252,   251,   251,   251,   151,
       4,     4,     5,     6,     7,   125,   125,   250,   272,     5,
     187,     4,   319,     4,   319,   319,   272,   251,     4,   251
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   253,   254,   254,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   256,   256,
     257,   257,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   258,   258,   258,   255,   255,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   255,
     255,   255,   255,   260,   260,   255,   255,   255,   255,   255,
     255,   255,   255,   261,   262,   262,   263,   263,   264,   264,
     265,   265,   266,   266,   266,   267,   267,   268,   268,   269,
     269,   270,   270,   270,   271,   271,   272,   272,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   274,   274,   274,
     275,   276,   276,   276,   277,   277,   278,   278,   279,   279,
     279,   279,   280,   280,   281,   281,   281,   281,   281,   282,
     282,   282,   283,   283,   284,   284,   285,   285,   285,   286,
     286,   287,   287,   288,   288,   288,   288,   289,   289,   290,
     290,   291,   261,   292,   293,   293,   293,   293,   292,   294,
     294,   295,   295,   292,   261,   296,   297,   297,   298,   298,
     298,   298,   298,   299,   299,   300,   300,   301,   301,   302,
     302,   302,   302,   296,   303,   303,   303,   303,   296,   261,
     304,   304,   304,   261,   305,   306,   306,   306,   307,   307,
     307,   307,   261,   308,   308,   309,   309,   261,   310,   310,
     310,   310,   310,   310,   311,   311,   312,   312,   313,   313,
     313,   313,   313,   314,   313,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   316,   316,
     316,   317,   317,   318,   318,   318,   319,   319,   319,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   321,
     321,   322,   323,   323,   323,   261,   324,   325,   325,   326,
     326
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     5,     6,
       6,     6,     3,     4,     3,     4,     3,     5,     1,     3,
       0,     1,     5,     6,     5,     6,     4,     4,     4,     4,
       4,     6,     8,     4,     7,     1,     1,     1,     6,     6,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       6,     3,     5,     4,     5,     3,     4,     3,     4,     1,
       1,     1,     2,     1,     3,    11,     0,     2,     0,     4,
       2,     4,     0,     1,     1,     0,     2,     0,     2,     0,
       3,     0,     2,     4,     0,     2,     1,     3,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     1,
       2,     2,     1,     0,     1,     3,     1,     1,     3,     5,
       3,     3,     1,     0,     5,     3,     5,     6,     5,     0,
       1,     1,     0,     1,     1,     1,     2,     2,     0,     0,
       1,     2,     4,     6,     6,     6,     0,     2,     0,     1,
       3,     3,     1,     7,     2,     2,     2,     0,     6,     2,
       4,     0,     2,     7,     1,     8,     0,     4,     0,     2,
       2,     2,     2,     1,     0,     0,     3,     3,     5,     1,
       1,     3,     3,     7,     3,     3,     5,     5,     7,     1,
       8,     7,     7,     1,     8,     0,     2,     2,     3,     5,
       5,     7,     1,     4,     4,     0,     2,     1,     8,    10,
       9,     6,    11,     8,     0,     1,     1,     3,     5,     4,
       4,     5,     5,     0,     4,     0,     3,     2,     3,     3,
       3,     3,     2,     5,     3,     3,     2,     3,     0,     3,
       5,     0,     1,     0,     2,     2,     0,     4,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     3,     5,     2,     4,     1,
       1,     1,     1,     3,     3,     3,     3,     5,     5,     1,
       3,     3,     0,     1,     1,     1,     2,     1,     3,     3,
       3
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
#line 293 "sql-parser.y"
                   { emit("NAME %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2043 "sql-parser.tab.c"
    break;

  case 5: /* expr: NAME '.' NAME  */
#line 294 "sql-parser.y"
                   { emit("FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 2049 "sql-parser.tab.c"
    break;

  case 6: /* expr: USERVAR  */
#line 295 "sql-parser.y"
                   { emit("USERVAR %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2055 "sql-parser.tab.c"
    break;

  case 7: /* expr: STRING  */
#line 296 "sql-parser.y"
                   { emit("STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2061 "sql-parser.tab.c"
    break;

  case 8: /* expr: INTNUM  */
#line 297 "sql-parser.y"
                   { emit("NUMBER %d", (yyvsp[0].intval)); }
#line 2067 "sql-parser.tab.c"
    break;

  case 9: /* expr: APPROXNUM  */
#line 298 "sql-parser.y"
                   { emit("FLOAT %g", (yyvsp[0].floatval)); }
#line 2073 "sql-parser.tab.c"
    break;

  case 10: /* expr: BOOL  */
#line 299 "sql-parser.y"
                   { emit("BOOL %d", (yyvsp[0].intval)); }
#line 2079 "sql-parser.tab.c"
    break;

  case 11: /* expr: expr '+' expr  */
#line 302 "sql-parser.y"
                    { emit("ADD"); }
#line 2085 "sql-parser.tab.c"
    break;

  case 12: /* expr: expr '-' expr  */
#line 303 "sql-parser.y"
                   { emit("SUB"); }
#line 2091 "sql-parser.tab.c"
    break;

  case 13: /* expr: expr '*' expr  */
#line 304 "sql-parser.y"
                   { emit("MUL"); }
#line 2097 "sql-parser.tab.c"
    break;

  case 14: /* expr: expr '/' expr  */
#line 305 "sql-parser.y"
                   { emit("DIV"); }
#line 2103 "sql-parser.tab.c"
    break;

  case 15: /* expr: expr '%' expr  */
#line 306 "sql-parser.y"
                   { emit("MOD"); }
#line 2109 "sql-parser.tab.c"
    break;

  case 16: /* expr: expr MOD expr  */
#line 307 "sql-parser.y"
                   { emit("MOD"); }
#line 2115 "sql-parser.tab.c"
    break;

  case 17: /* expr: '-' expr  */
#line 308 "sql-parser.y"
                           { emit("NEG"); }
#line 2121 "sql-parser.tab.c"
    break;

  case 18: /* expr: expr ANDOP expr  */
#line 309 "sql-parser.y"
                     { emit("AND"); }
#line 2127 "sql-parser.tab.c"
    break;

  case 19: /* expr: expr OR expr  */
#line 310 "sql-parser.y"
                  { emit("OR"); }
#line 2133 "sql-parser.tab.c"
    break;

  case 20: /* expr: expr XOR expr  */
#line 311 "sql-parser.y"
                   { emit("XOR"); }
#line 2139 "sql-parser.tab.c"
    break;

  case 21: /* expr: expr '|' expr  */
#line 312 "sql-parser.y"
                   { emit("BITOR"); }
#line 2145 "sql-parser.tab.c"
    break;

  case 22: /* expr: expr '&' expr  */
#line 313 "sql-parser.y"
                   { emit("BITAND"); }
#line 2151 "sql-parser.tab.c"
    break;

  case 23: /* expr: expr '^' expr  */
#line 314 "sql-parser.y"
                   { emit("BITXOR"); }
#line 2157 "sql-parser.tab.c"
    break;

  case 24: /* expr: expr SHIFT expr  */
#line 315 "sql-parser.y"
                     { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); }
#line 2163 "sql-parser.tab.c"
    break;

  case 25: /* expr: NOT expr  */
#line 316 "sql-parser.y"
              { emit("NOT"); }
#line 2169 "sql-parser.tab.c"
    break;

  case 26: /* expr: '!' expr  */
#line 317 "sql-parser.y"
              { emit("NOT"); }
#line 2175 "sql-parser.tab.c"
    break;

  case 27: /* expr: expr COMPARISON expr  */
#line 318 "sql-parser.y"
                          { emit("CMP %d", (yyvsp[-1].subtok)); }
#line 2181 "sql-parser.tab.c"
    break;

  case 28: /* expr: expr COMPARISON '(' select_stmt ')'  */
#line 321 "sql-parser.y"
                                         { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 2187 "sql-parser.tab.c"
    break;

  case 29: /* expr: expr COMPARISON ANY '(' select_stmt ')'  */
#line 322 "sql-parser.y"
                                             { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2193 "sql-parser.tab.c"
    break;

  case 30: /* expr: expr COMPARISON SOME '(' select_stmt ')'  */
#line 323 "sql-parser.y"
                                              { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2199 "sql-parser.tab.c"
    break;

  case 31: /* expr: expr COMPARISON ALL '(' select_stmt ')'  */
#line 324 "sql-parser.y"
                                             { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 2205 "sql-parser.tab.c"
    break;

  case 32: /* expr: expr IS NULLX  */
#line 327 "sql-parser.y"
                         { emit("ISNULL"); }
#line 2211 "sql-parser.tab.c"
    break;

  case 33: /* expr: expr IS NOT NULLX  */
#line 328 "sql-parser.y"
                         { emit("ISNULL"); emit("NOT"); }
#line 2217 "sql-parser.tab.c"
    break;

  case 34: /* expr: expr IS BOOL  */
#line 329 "sql-parser.y"
                         { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 2223 "sql-parser.tab.c"
    break;

  case 35: /* expr: expr IS NOT BOOL  */
#line 330 "sql-parser.y"
                         { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 2229 "sql-parser.tab.c"
    break;

  case 36: /* expr: USERVAR ASSIGN expr  */
#line 332 "sql-parser.y"
                         { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2235 "sql-parser.tab.c"
    break;

  case 37: /* expr: expr BETWEEN expr AND expr  */
#line 335 "sql-parser.y"
                                               { emit("BETWEEN"); }
#line 2241 "sql-parser.tab.c"
    break;

  case 38: /* val_list: expr  */
#line 338 "sql-parser.y"
               { (yyval.intval) = 1; }
#line 2247 "sql-parser.tab.c"
    break;

  case 39: /* val_list: expr ',' val_list  */
#line 339 "sql-parser.y"
                       { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2253 "sql-parser.tab.c"
    break;

  case 40: /* opt_val_list: %empty  */
#line 342 "sql-parser.y"
                        { (yyval.intval) = 0; }
#line 2259 "sql-parser.tab.c"
    break;

  case 42: /* expr: expr IN '(' val_list ')'  */
#line 346 "sql-parser.y"
                                     { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 2265 "sql-parser.tab.c"
    break;

  case 43: /* expr: expr NOT IN '(' val_list ')'  */
#line 347 "sql-parser.y"
                                     { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 2271 "sql-parser.tab.c"
    break;

  case 44: /* expr: expr IN '(' select_stmt ')'  */
#line 348 "sql-parser.y"
                                     { emit("CMPANYSELECT 4"); }
#line 2277 "sql-parser.tab.c"
    break;

  case 45: /* expr: expr NOT IN '(' select_stmt ')'  */
#line 349 "sql-parser.y"
                                     { emit("CMPALLSELECT 3"); }
#line 2283 "sql-parser.tab.c"
    break;

  case 46: /* expr: EXISTS '(' select_stmt ')'  */
#line 350 "sql-parser.y"
                                     { emit("EXISTSSELECT"); if((yyvsp[-3].subtok))emit("NOT"); }
#line 2289 "sql-parser.tab.c"
    break;

  case 47: /* expr: NAME '(' opt_val_list ')'  */
#line 354 "sql-parser.y"
                                {  emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2295 "sql-parser.tab.c"
    break;

  case 48: /* expr: FCOUNT '(' '*' ')'  */
#line 358 "sql-parser.y"
                         { emit("COUNTALL"); }
#line 2301 "sql-parser.tab.c"
    break;

  case 49: /* expr: FCOUNT '(' expr ')'  */
#line 359 "sql-parser.y"
                         { emit(" CALL 1 COUNT"); }
#line 2307 "sql-parser.tab.c"
    break;

  case 50: /* expr: FSUBSTRING '(' val_list ')'  */
#line 361 "sql-parser.y"
                                                {  emit("CALL %d SUBSTR", (yyvsp[-1].intval)); }
#line 2313 "sql-parser.tab.c"
    break;

  case 51: /* expr: FSUBSTRING '(' expr FROM expr ')'  */
#line 362 "sql-parser.y"
                                                {  emit("CALL 2 SUBSTR"); }
#line 2319 "sql-parser.tab.c"
    break;

  case 52: /* expr: FSUBSTRING '(' expr FROM expr FOR expr ')'  */
#line 363 "sql-parser.y"
                                                {  emit("CALL 3 SUBSTR"); }
#line 2325 "sql-parser.tab.c"
    break;

  case 53: /* expr: FTRIM '(' val_list ')'  */
#line 365 "sql-parser.y"
                                                { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 2331 "sql-parser.tab.c"
    break;

  case 54: /* expr: FTRIM '(' trim_ltb expr FROM val_list ')'  */
#line 366 "sql-parser.y"
                                                { emit("CALL 3 TRIM"); }
#line 2337 "sql-parser.tab.c"
    break;

  case 55: /* trim_ltb: LEADING  */
#line 369 "sql-parser.y"
                  { emit("NUMBER 1"); }
#line 2343 "sql-parser.tab.c"
    break;

  case 56: /* trim_ltb: TRAILING  */
#line 370 "sql-parser.y"
                  { emit("NUMBER 2"); }
#line 2349 "sql-parser.tab.c"
    break;

  case 57: /* trim_ltb: BOTH  */
#line 371 "sql-parser.y"
                  { emit("NUMBER 3"); }
#line 2355 "sql-parser.tab.c"
    break;

  case 58: /* expr: FDATE_ADD '(' expr ',' interval_exp ')'  */
#line 374 "sql-parser.y"
                                              { emit("CALL 3 DATE_ADD"); }
#line 2361 "sql-parser.tab.c"
    break;

  case 59: /* expr: FDATE_SUB '(' expr ',' interval_exp ')'  */
#line 375 "sql-parser.y"
                                              { emit("CALL 3 DATE_SUB"); }
#line 2367 "sql-parser.tab.c"
    break;

  case 60: /* interval_exp: INTERVAL expr DAY_HOUR  */
#line 378 "sql-parser.y"
                                     { emit("NUMBER 1"); }
#line 2373 "sql-parser.tab.c"
    break;

  case 61: /* interval_exp: INTERVAL expr DAY_MICROSECOND  */
#line 379 "sql-parser.y"
                                     { emit("NUMBER 2"); }
#line 2379 "sql-parser.tab.c"
    break;

  case 62: /* interval_exp: INTERVAL expr DAY_MINUTE  */
#line 380 "sql-parser.y"
                                     { emit("NUMBER 3"); }
#line 2385 "sql-parser.tab.c"
    break;

  case 63: /* interval_exp: INTERVAL expr DAY_SECOND  */
#line 381 "sql-parser.y"
                                     { emit("NUMBER 4"); }
#line 2391 "sql-parser.tab.c"
    break;

  case 64: /* interval_exp: INTERVAL expr YEAR_MONTH  */
#line 382 "sql-parser.y"
                                     { emit("NUMBER 5"); }
#line 2397 "sql-parser.tab.c"
    break;

  case 65: /* interval_exp: INTERVAL expr YEAR  */
#line 383 "sql-parser.y"
                                     { emit("NUMBER 6"); }
#line 2403 "sql-parser.tab.c"
    break;

  case 66: /* interval_exp: INTERVAL expr HOUR_MICROSECOND  */
#line 384 "sql-parser.y"
                                     { emit("NUMBER 7"); }
#line 2409 "sql-parser.tab.c"
    break;

  case 67: /* interval_exp: INTERVAL expr HOUR_MINUTE  */
#line 385 "sql-parser.y"
                                     { emit("NUMBER 8"); }
#line 2415 "sql-parser.tab.c"
    break;

  case 68: /* interval_exp: INTERVAL expr HOUR_SECOND  */
#line 386 "sql-parser.y"
                                     { emit("NUMBER 9"); }
#line 2421 "sql-parser.tab.c"
    break;

  case 69: /* expr: CASE expr case_list END  */
#line 388 "sql-parser.y"
                                        { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 2427 "sql-parser.tab.c"
    break;

  case 70: /* expr: CASE expr case_list ELSE expr END  */
#line 389 "sql-parser.y"
                                        { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 2433 "sql-parser.tab.c"
    break;

  case 71: /* expr: CASE case_list END  */
#line 390 "sql-parser.y"
                                        { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 2439 "sql-parser.tab.c"
    break;

  case 72: /* expr: CASE case_list ELSE expr END  */
#line 391 "sql-parser.y"
                                        { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 2445 "sql-parser.tab.c"
    break;

  case 73: /* case_list: WHEN expr THEN expr  */
#line 394 "sql-parser.y"
                                   { (yyval.intval) = 1; }
#line 2451 "sql-parser.tab.c"
    break;

  case 74: /* case_list: case_list WHEN expr THEN expr  */
#line 395 "sql-parser.y"
                                         { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 2457 "sql-parser.tab.c"
    break;

  case 75: /* expr: expr LIKE expr  */
#line 398 "sql-parser.y"
                     { emit("LIKE"); }
#line 2463 "sql-parser.tab.c"
    break;

  case 76: /* expr: expr NOT LIKE expr  */
#line 399 "sql-parser.y"
                        { emit("LIKE"); emit("NOT"); }
#line 2469 "sql-parser.tab.c"
    break;

  case 77: /* expr: expr REGEXP expr  */
#line 402 "sql-parser.y"
                       { emit("REGEXP"); }
#line 2475 "sql-parser.tab.c"
    break;

  case 78: /* expr: expr NOT REGEXP expr  */
#line 403 "sql-parser.y"
                          { emit("REGEXP"); emit("NOT"); }
#line 2481 "sql-parser.tab.c"
    break;

  case 79: /* expr: CURRENT_TIMESTAMP  */
#line 406 "sql-parser.y"
                        { emit("NOW"); }
#line 2487 "sql-parser.tab.c"
    break;

  case 80: /* expr: CURRENT_DATE  */
#line 407 "sql-parser.y"
                        { emit("NOW"); }
#line 2493 "sql-parser.tab.c"
    break;

  case 81: /* expr: CURRENT_TIME  */
#line 408 "sql-parser.y"
                        { emit("NOW"); }
#line 2499 "sql-parser.tab.c"
    break;

  case 82: /* expr: BINARY expr  */
#line 411 "sql-parser.y"
                               { emit("STRTOBIN"); }
#line 2505 "sql-parser.tab.c"
    break;

  case 83: /* stmt: select_stmt  */
#line 416 "sql-parser.y"
                  { emit("STMT"); }
#line 2511 "sql-parser.tab.c"
    break;

  case 84: /* select_stmt: SELECT select_opts select_expr_list  */
#line 420 "sql-parser.y"
                        { emit("SELECTNODATA %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2517 "sql-parser.tab.c"
    break;

  case 85: /* select_stmt: SELECT select_opts select_expr_list FROM table_references opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list  */
#line 425 "sql-parser.y"
                   { emit("SELECT %d %d %d", (yyvsp[-9].intval), (yyvsp[-8].intval), (yyvsp[-6].intval)); }
#line 2523 "sql-parser.tab.c"
    break;

  case 87: /* opt_where: WHERE expr  */
#line 429 "sql-parser.y"
                { emit("WHERE"); }
#line 2529 "sql-parser.tab.c"
    break;

  case 89: /* opt_groupby: GROUP BY groupby_list opt_with_rollup  */
#line 433 "sql-parser.y"
                             { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2535 "sql-parser.tab.c"
    break;

  case 90: /* groupby_list: expr opt_asc_desc  */
#line 437 "sql-parser.y"
                             { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2541 "sql-parser.tab.c"
    break;

  case 91: /* groupby_list: groupby_list ',' expr opt_asc_desc  */
#line 439 "sql-parser.y"
                             { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2547 "sql-parser.tab.c"
    break;

  case 92: /* opt_asc_desc: %empty  */
#line 442 "sql-parser.y"
                        { (yyval.intval) = 0; }
#line 2553 "sql-parser.tab.c"
    break;

  case 93: /* opt_asc_desc: ASC  */
#line 443 "sql-parser.y"
                        { (yyval.intval) = 0; }
#line 2559 "sql-parser.tab.c"
    break;

  case 94: /* opt_asc_desc: DESC  */
#line 444 "sql-parser.y"
                        { (yyval.intval) = 1; }
#line 2565 "sql-parser.tab.c"
    break;

  case 95: /* opt_with_rollup: %empty  */
#line 447 "sql-parser.y"
                            { (yyval.intval) = 0; }
#line 2571 "sql-parser.tab.c"
    break;

  case 96: /* opt_with_rollup: WITH ROLLUP  */
#line 448 "sql-parser.y"
                  { (yyval.intval) = 1; }
#line 2577 "sql-parser.tab.c"
    break;

  case 98: /* opt_having: HAVING expr  */
#line 452 "sql-parser.y"
                 { emit("HAVING"); }
#line 2583 "sql-parser.tab.c"
    break;

  case 100: /* opt_orderby: ORDER BY groupby_list  */
#line 455 "sql-parser.y"
                           { emit("ORDERBY %d", (yyvsp[0].intval)); }
#line 2589 "sql-parser.tab.c"
    break;

  case 102: /* opt_limit: LIMIT expr  */
#line 458 "sql-parser.y"
                                  { emit("LIMIT 1"); }
#line 2595 "sql-parser.tab.c"
    break;

  case 103: /* opt_limit: LIMIT expr ',' expr  */
#line 459 "sql-parser.y"
                                    { emit("LIMIT 2"); }
#line 2601 "sql-parser.tab.c"
    break;

  case 105: /* opt_into_list: INTO column_list  */
#line 463 "sql-parser.y"
                      { emit("INTO %d", (yyvsp[0].intval)); }
#line 2607 "sql-parser.tab.c"
    break;

  case 106: /* column_list: NAME  */
#line 466 "sql-parser.y"
                  { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2613 "sql-parser.tab.c"
    break;

  case 107: /* column_list: column_list ',' NAME  */
#line 467 "sql-parser.y"
                          { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2619 "sql-parser.tab.c"
    break;

  case 108: /* select_opts: %empty  */
#line 470 "sql-parser.y"
                                      { (yyval.intval) = 0; }
#line 2625 "sql-parser.tab.c"
    break;

  case 109: /* select_opts: select_opts ALL  */
#line 472 "sql-parser.y"
   { if((yyvsp[-1].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 2631 "sql-parser.tab.c"
    break;

  case 110: /* select_opts: select_opts DISTINCT  */
#line 474 "sql-parser.y"
   { if((yyvsp[-1].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 2637 "sql-parser.tab.c"
    break;

  case 111: /* select_opts: select_opts DISTINCTROW  */
#line 476 "sql-parser.y"
   { if((yyvsp[-1].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[-1].intval) | 04; }
#line 2643 "sql-parser.tab.c"
    break;

  case 112: /* select_opts: select_opts HIGH_PRIORITY  */
#line 478 "sql-parser.y"
   { if((yyvsp[-1].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 2649 "sql-parser.tab.c"
    break;

  case 113: /* select_opts: select_opts STRAIGHT_JOIN  */
#line 480 "sql-parser.y"
   { if((yyvsp[-1].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[-1].intval) | 020; }
#line 2655 "sql-parser.tab.c"
    break;

  case 114: /* select_opts: select_opts SQL_SMALL_RESULT  */
#line 482 "sql-parser.y"
   { if((yyvsp[-1].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 040; }
#line 2661 "sql-parser.tab.c"
    break;

  case 115: /* select_opts: select_opts SQL_BIG_RESULT  */
#line 484 "sql-parser.y"
   { if((yyvsp[-1].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 0100; }
#line 2667 "sql-parser.tab.c"
    break;

  case 116: /* select_opts: select_opts SQL_CALC_FOUND_ROWS  */
#line 486 "sql-parser.y"
   { if((yyvsp[-1].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = 
   (yyvsp[-1].intval) | 0200; }
#line 2674 "sql-parser.tab.c"
    break;

  case 117: /* select_expr_list: select_expr  */
#line 490 "sql-parser.y"
                              { (yyval.intval) = 1; }
#line 2680 "sql-parser.tab.c"
    break;

  case 118: /* select_expr_list: select_expr_list ',' select_expr  */
#line 491 "sql-parser.y"
                                       {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2686 "sql-parser.tab.c"
    break;

  case 119: /* select_expr_list: '*'  */
#line 492 "sql-parser.y"
          { emit("SELECTALL"); (yyval.intval) = 1; }
#line 2692 "sql-parser.tab.c"
    break;

  case 121: /* opt_as_alias: AS NAME  */
#line 497 "sql-parser.y"
                      { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2698 "sql-parser.tab.c"
    break;

  case 122: /* opt_as_alias: NAME  */
#line 498 "sql-parser.y"
                      { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2704 "sql-parser.tab.c"
    break;

  case 124: /* table_references: table_reference  */
#line 502 "sql-parser.y"
                                       { (yyval.intval) = 1; }
#line 2710 "sql-parser.tab.c"
    break;

  case 125: /* table_references: table_references ',' table_reference  */
#line 503 "sql-parser.y"
                                           { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2716 "sql-parser.tab.c"
    break;

  case 128: /* table_factor: NAME opt_as_alias index_hint  */
#line 511 "sql-parser.y"
                                 { emit("TABLE %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2722 "sql-parser.tab.c"
    break;

  case 129: /* table_factor: NAME '.' NAME opt_as_alias index_hint  */
#line 512 "sql-parser.y"
                                          { emit("TABLE %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval));
                               free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); }
#line 2729 "sql-parser.tab.c"
    break;

  case 130: /* table_factor: table_subquery opt_as NAME  */
#line 514 "sql-parser.y"
                               { emit("SUBQUERYAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2735 "sql-parser.tab.c"
    break;

  case 131: /* table_factor: '(' table_references ')'  */
#line 515 "sql-parser.y"
                             { emit("TABLEREFERENCES %d", (yyvsp[-1].intval)); }
#line 2741 "sql-parser.tab.c"
    break;

  case 134: /* join_table: table_reference opt_inner_cross JOIN table_factor opt_join_condition  */
#line 524 "sql-parser.y"
                  { emit("JOIN %d", 100+(yyvsp[-3].intval)); }
#line 2747 "sql-parser.tab.c"
    break;

  case 135: /* join_table: table_reference STRAIGHT_JOIN table_factor  */
#line 526 "sql-parser.y"
                  { emit("JOIN %d", 200); }
#line 2753 "sql-parser.tab.c"
    break;

  case 136: /* join_table: table_reference STRAIGHT_JOIN table_factor ON expr  */
#line 528 "sql-parser.y"
                  { emit("JOIN %d", 200); }
#line 2759 "sql-parser.tab.c"
    break;

  case 137: /* join_table: table_reference left_or_right opt_outer JOIN table_factor join_condition  */
#line 530 "sql-parser.y"
                  { emit("JOIN %d", 300+(yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 2765 "sql-parser.tab.c"
    break;

  case 138: /* join_table: table_reference NATURAL opt_left_or_right_outer JOIN table_factor  */
#line 532 "sql-parser.y"
                  { emit("JOIN %d", 400+(yyvsp[-2].intval)); }
#line 2771 "sql-parser.tab.c"
    break;

  case 139: /* opt_inner_cross: %empty  */
#line 535 "sql-parser.y"
                           { (yyval.intval) = 0; }
#line 2777 "sql-parser.tab.c"
    break;

  case 140: /* opt_inner_cross: INNER  */
#line 536 "sql-parser.y"
           { (yyval.intval) = 1; }
#line 2783 "sql-parser.tab.c"
    break;

  case 141: /* opt_inner_cross: CROSS  */
#line 537 "sql-parser.y"
            { (yyval.intval) = 2; }
#line 2789 "sql-parser.tab.c"
    break;

  case 142: /* opt_outer: %empty  */
#line 540 "sql-parser.y"
                      { (yyval.intval) = 0; }
#line 2795 "sql-parser.tab.c"
    break;

  case 143: /* opt_outer: OUTER  */
#line 541 "sql-parser.y"
           {(yyval.intval) = 4; }
#line 2801 "sql-parser.tab.c"
    break;

  case 144: /* left_or_right: LEFT  */
#line 544 "sql-parser.y"
                    { (yyval.intval) = 1; }
#line 2807 "sql-parser.tab.c"
    break;

  case 145: /* left_or_right: RIGHT  */
#line 545 "sql-parser.y"
            { (yyval.intval) = 2; }
#line 2813 "sql-parser.tab.c"
    break;

  case 146: /* opt_left_or_right_outer: LEFT opt_outer  */
#line 548 "sql-parser.y"
                                        { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2819 "sql-parser.tab.c"
    break;

  case 147: /* opt_left_or_right_outer: RIGHT opt_outer  */
#line 549 "sql-parser.y"
                      { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 2825 "sql-parser.tab.c"
    break;

  case 148: /* opt_left_or_right_outer: %empty  */
#line 550 "sql-parser.y"
               { (yyval.intval) = 0; }
#line 2831 "sql-parser.tab.c"
    break;

  case 151: /* join_condition: ON expr  */
#line 557 "sql-parser.y"
            { emit("ONEXPR"); }
#line 2837 "sql-parser.tab.c"
    break;

  case 152: /* join_condition: USING '(' column_list ')'  */
#line 558 "sql-parser.y"
                                { emit("USING %d", (yyvsp[-1].intval)); }
#line 2843 "sql-parser.tab.c"
    break;

  case 153: /* index_hint: USE KEY opt_for_join '(' index_list ')'  */
#line 563 "sql-parser.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 10+(yyvsp[-3].intval)); }
#line 2849 "sql-parser.tab.c"
    break;

  case 154: /* index_hint: IGNORE KEY opt_for_join '(' index_list ')'  */
#line 565 "sql-parser.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 20+(yyvsp[-3].intval)); }
#line 2855 "sql-parser.tab.c"
    break;

  case 155: /* index_hint: FORCE KEY opt_for_join '(' index_list ')'  */
#line 567 "sql-parser.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 30+(yyvsp[-3].intval)); }
#line 2861 "sql-parser.tab.c"
    break;

  case 157: /* opt_for_join: FOR JOIN  */
#line 571 "sql-parser.y"
                       { (yyval.intval) = 1; }
#line 2867 "sql-parser.tab.c"
    break;

  case 158: /* opt_for_join: %empty  */
#line 572 "sql-parser.y"
               { (yyval.intval) = 0; }
#line 2873 "sql-parser.tab.c"
    break;

  case 159: /* index_list: NAME  */
#line 575 "sql-parser.y"
                  { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2879 "sql-parser.tab.c"
    break;

  case 160: /* index_list: index_list ',' NAME  */
#line 576 "sql-parser.y"
                         { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2885 "sql-parser.tab.c"
    break;

  case 161: /* table_subquery: '(' select_stmt ')'  */
#line 579 "sql-parser.y"
                                    { emit("SUBQUERY"); }
#line 2891 "sql-parser.tab.c"
    break;

  case 162: /* stmt: delete_stmt  */
#line 584 "sql-parser.y"
                  { emit("STMT"); }
#line 2897 "sql-parser.tab.c"
    break;

  case 163: /* delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit  */
#line 590 "sql-parser.y"
                  { emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2903 "sql-parser.tab.c"
    break;

  case 164: /* delete_opts: delete_opts LOW_PRIORITY  */
#line 593 "sql-parser.y"
                                      { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 2909 "sql-parser.tab.c"
    break;

  case 165: /* delete_opts: delete_opts QUICK  */
#line 594 "sql-parser.y"
                       { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 2915 "sql-parser.tab.c"
    break;

  case 166: /* delete_opts: delete_opts IGNORE  */
#line 595 "sql-parser.y"
                        { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 2921 "sql-parser.tab.c"
    break;

  case 167: /* delete_opts: %empty  */
#line 596 "sql-parser.y"
               { (yyval.intval) = 0; }
#line 2927 "sql-parser.tab.c"
    break;

  case 168: /* delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where  */
#line 603 "sql-parser.y"
            { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2933 "sql-parser.tab.c"
    break;

  case 169: /* delete_list: NAME opt_dot_star  */
#line 605 "sql-parser.y"
                               { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 2939 "sql-parser.tab.c"
    break;

  case 170: /* delete_list: delete_list ',' NAME opt_dot_star  */
#line 607 "sql-parser.y"
            { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2945 "sql-parser.tab.c"
    break;

  case 173: /* delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where  */
#line 616 "sql-parser.y"
            { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2951 "sql-parser.tab.c"
    break;

  case 174: /* stmt: insert_stmt  */
#line 621 "sql-parser.y"
                  { emit("STMT"); }
#line 2957 "sql-parser.tab.c"
    break;

  case 175: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 627 "sql-parser.y"
                     { emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 2963 "sql-parser.tab.c"
    break;

  case 177: /* opt_ondupupdate: ONDUPLICATE KEY UPDATE insert_asgn_list  */
#line 631 "sql-parser.y"
                                             { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 2969 "sql-parser.tab.c"
    break;

  case 178: /* insert_opts: %empty  */
#line 634 "sql-parser.y"
                       { (yyval.intval) = 0; }
#line 2975 "sql-parser.tab.c"
    break;

  case 179: /* insert_opts: insert_opts LOW_PRIORITY  */
#line 635 "sql-parser.y"
                              { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2981 "sql-parser.tab.c"
    break;

  case 180: /* insert_opts: insert_opts DELAYED  */
#line 636 "sql-parser.y"
                         { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 2987 "sql-parser.tab.c"
    break;

  case 181: /* insert_opts: insert_opts HIGH_PRIORITY  */
#line 637 "sql-parser.y"
                               { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 2993 "sql-parser.tab.c"
    break;

  case 182: /* insert_opts: insert_opts IGNORE  */
#line 638 "sql-parser.y"
                        { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2999 "sql-parser.tab.c"
    break;

  case 186: /* opt_col_names: '(' column_list ')'  */
#line 645 "sql-parser.y"
                         { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 3005 "sql-parser.tab.c"
    break;

  case 187: /* insert_vals_list: '(' insert_vals ')'  */
#line 648 "sql-parser.y"
                                      { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 3011 "sql-parser.tab.c"
    break;

  case 188: /* insert_vals_list: insert_vals_list ',' '(' insert_vals ')'  */
#line 649 "sql-parser.y"
                                              { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3017 "sql-parser.tab.c"
    break;

  case 189: /* insert_vals: expr  */
#line 652 "sql-parser.y"
          { (yyval.intval) = 1; }
#line 3023 "sql-parser.tab.c"
    break;

  case 190: /* insert_vals: DEFAULT  */
#line 653 "sql-parser.y"
             { emit("DEFAULT"); (yyval.intval) = 1; }
#line 3029 "sql-parser.tab.c"
    break;

  case 191: /* insert_vals: insert_vals ',' expr  */
#line 654 "sql-parser.y"
                          { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3035 "sql-parser.tab.c"
    break;

  case 192: /* insert_vals: insert_vals ',' DEFAULT  */
#line 655 "sql-parser.y"
                             { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3041 "sql-parser.tab.c"
    break;

  case 193: /* insert_stmt: INSERT insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 660 "sql-parser.y"
     { emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3047 "sql-parser.tab.c"
    break;

  case 194: /* insert_asgn_list: NAME COMPARISON expr  */
#line 665 "sql-parser.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
       emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3054 "sql-parser.tab.c"
    break;

  case 195: /* insert_asgn_list: NAME COMPARISON DEFAULT  */
#line 668 "sql-parser.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3061 "sql-parser.tab.c"
    break;

  case 196: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON expr  */
#line 671 "sql-parser.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3068 "sql-parser.tab.c"
    break;

  case 197: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON DEFAULT  */
#line 674 "sql-parser.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3075 "sql-parser.tab.c"
    break;

  case 198: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 680 "sql-parser.y"
                    { emit("INSERTSELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3081 "sql-parser.tab.c"
    break;

  case 199: /* stmt: replace_stmt  */
#line 684 "sql-parser.y"
                   { emit("STMT"); }
#line 3087 "sql-parser.tab.c"
    break;

  case 200: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 690 "sql-parser.y"
                     { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3093 "sql-parser.tab.c"
    break;

  case 201: /* replace_stmt: REPLACE insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 696 "sql-parser.y"
     { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3099 "sql-parser.tab.c"
    break;

  case 202: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 701 "sql-parser.y"
                    { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3105 "sql-parser.tab.c"
    break;

  case 203: /* stmt: update_stmt  */
#line 705 "sql-parser.y"
                  { emit("STMT"); }
#line 3111 "sql-parser.tab.c"
    break;

  case 204: /* update_stmt: UPDATE update_opts table_references SET update_asgn_list opt_where opt_orderby opt_limit  */
#line 712 "sql-parser.y"
                  { emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval)); }
#line 3117 "sql-parser.tab.c"
    break;

  case 205: /* update_opts: %empty  */
#line 715 "sql-parser.y"
                       { (yyval.intval) = 0; }
#line 3123 "sql-parser.tab.c"
    break;

  case 206: /* update_opts: insert_opts LOW_PRIORITY  */
#line 716 "sql-parser.y"
                              { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3129 "sql-parser.tab.c"
    break;

  case 207: /* update_opts: insert_opts IGNORE  */
#line 717 "sql-parser.y"
                        { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3135 "sql-parser.tab.c"
    break;

  case 208: /* update_asgn_list: NAME COMPARISON expr  */
#line 722 "sql-parser.y"
     { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3142 "sql-parser.tab.c"
    break;

  case 209: /* update_asgn_list: NAME '.' NAME COMPARISON expr  */
#line 725 "sql-parser.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-4].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3149 "sql-parser.tab.c"
    break;

  case 210: /* update_asgn_list: update_asgn_list ',' NAME COMPARISON expr  */
#line 728 "sql-parser.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3156 "sql-parser.tab.c"
    break;

  case 211: /* update_asgn_list: update_asgn_list ',' NAME '.' NAME COMPARISON expr  */
#line 731 "sql-parser.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update  assignment to %s.$s", (yyvsp[-4].strval), (yyvsp[-2].strval)); 
          YYERROR; }
         emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3164 "sql-parser.tab.c"
    break;

  case 212: /* stmt: create_database_stmt  */
#line 738 "sql-parser.y"
                           { emit("STMT"); }
#line 3170 "sql-parser.tab.c"
    break;

  case 213: /* create_database_stmt: CREATE DATABASE opt_if_not_exists NAME  */
#line 743 "sql-parser.y"
       { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3176 "sql-parser.tab.c"
    break;

  case 214: /* create_database_stmt: CREATE SCHEMA opt_if_not_exists NAME  */
#line 745 "sql-parser.y"
       { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3182 "sql-parser.tab.c"
    break;

  case 215: /* opt_if_not_exists: %empty  */
#line 748 "sql-parser.y"
                              { (yyval.intval) = 0; }
#line 3188 "sql-parser.tab.c"
    break;

  case 216: /* opt_if_not_exists: IF EXISTS  */
#line 750 "sql-parser.y"
       { if(!(yyvsp[0].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; }
                        (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 3195 "sql-parser.tab.c"
    break;

  case 217: /* stmt: create_table_stmt  */
#line 755 "sql-parser.y"
                        { emit("STMT"); }
#line 3201 "sql-parser.tab.c"
    break;

  case 218: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')'  */
#line 759 "sql-parser.y"
                           { emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3207 "sql-parser.tab.c"
    break;

  case 219: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')'  */
#line 763 "sql-parser.y"
                           { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval));
                          free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 3214 "sql-parser.tab.c"
    break;

  case 220: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' create_select_statement  */
#line 769 "sql-parser.y"
                                { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3220 "sql-parser.tab.c"
    break;

  case 221: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME create_select_statement  */
#line 773 "sql-parser.y"
                           { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 3226 "sql-parser.tab.c"
    break;

  case 222: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' create_select_statement  */
#line 778 "sql-parser.y"
                            { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval));
                              free((yyvsp[-6].strval)); free((yyvsp[-4].strval)); }
#line 3233 "sql-parser.tab.c"
    break;

  case 223: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME create_select_statement  */
#line 783 "sql-parser.y"
                           { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval));
                          free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 3240 "sql-parser.tab.c"
    break;

  case 224: /* opt_temporary: %empty  */
#line 787 "sql-parser.y"
                           { (yyval.intval) = 0; }
#line 3246 "sql-parser.tab.c"
    break;

  case 225: /* opt_temporary: TEMPORARY  */
#line 788 "sql-parser.y"
               { (yyval.intval) = 1;}
#line 3252 "sql-parser.tab.c"
    break;

  case 226: /* create_col_list: create_definition  */
#line 791 "sql-parser.y"
                                   { (yyval.intval) = 1; }
#line 3258 "sql-parser.tab.c"
    break;

  case 227: /* create_col_list: create_col_list ',' create_definition  */
#line 792 "sql-parser.y"
                                            { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3264 "sql-parser.tab.c"
    break;

  case 228: /* create_definition: PRIMARY KEY '(' column_list ')'  */
#line 795 "sql-parser.y"
                                                      { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3270 "sql-parser.tab.c"
    break;

  case 229: /* create_definition: KEY '(' column_list ')'  */
#line 796 "sql-parser.y"
                                         { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3276 "sql-parser.tab.c"
    break;

  case 230: /* create_definition: INDEX '(' column_list ')'  */
#line 797 "sql-parser.y"
                                         { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3282 "sql-parser.tab.c"
    break;

  case 231: /* create_definition: FULLTEXT INDEX '(' column_list ')'  */
#line 798 "sql-parser.y"
                                         { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3288 "sql-parser.tab.c"
    break;

  case 232: /* create_definition: FULLTEXT KEY '(' column_list ')'  */
#line 799 "sql-parser.y"
                                         { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3294 "sql-parser.tab.c"
    break;

  case 233: /* $@1: %empty  */
#line 802 "sql-parser.y"
                   { emit("STARTCOL"); }
#line 3300 "sql-parser.tab.c"
    break;

  case 234: /* create_definition: $@1 NAME data_type column_atts  */
#line 803 "sql-parser.y"
                   { emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3306 "sql-parser.tab.c"
    break;

  case 235: /* column_atts: %empty  */
#line 805 "sql-parser.y"
                       { (yyval.intval) = 0; }
#line 3312 "sql-parser.tab.c"
    break;

  case 236: /* column_atts: column_atts NOT NULLX  */
#line 806 "sql-parser.y"
                                        { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3318 "sql-parser.tab.c"
    break;

  case 238: /* column_atts: column_atts DEFAULT STRING  */
#line 809 "sql-parser.y"
        { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3324 "sql-parser.tab.c"
    break;

  case 239: /* column_atts: column_atts DEFAULT INTNUM  */
#line 811 "sql-parser.y"
        { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3330 "sql-parser.tab.c"
    break;

  case 240: /* column_atts: column_atts DEFAULT APPROXNUM  */
#line 813 "sql-parser.y"
        { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3336 "sql-parser.tab.c"
    break;

  case 241: /* column_atts: column_atts DEFAULT BOOL  */
#line 815 "sql-parser.y"
        { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3342 "sql-parser.tab.c"
    break;

  case 242: /* column_atts: column_atts AUTO_INCREMENT  */
#line 817 "sql-parser.y"
        { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3348 "sql-parser.tab.c"
    break;

  case 243: /* column_atts: column_atts UNIQUE '(' column_list ')'  */
#line 819 "sql-parser.y"
        { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3354 "sql-parser.tab.c"
    break;

  case 244: /* column_atts: column_atts UNIQUE KEY  */
#line 820 "sql-parser.y"
                             { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3360 "sql-parser.tab.c"
    break;

  case 245: /* column_atts: column_atts PRIMARY KEY  */
#line 821 "sql-parser.y"
                              { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3366 "sql-parser.tab.c"
    break;

  case 246: /* column_atts: column_atts KEY  */
#line 822 "sql-parser.y"
                      { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3372 "sql-parser.tab.c"
    break;

  case 247: /* column_atts: column_atts COMMENT STRING  */
#line 824 "sql-parser.y"
        { emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3378 "sql-parser.tab.c"
    break;

  case 248: /* opt_length: %empty  */
#line 827 "sql-parser.y"
                      { (yyval.intval) = 0; }
#line 3384 "sql-parser.tab.c"
    break;

  case 249: /* opt_length: '(' INTNUM ')'  */
#line 828 "sql-parser.y"
                    { (yyval.intval) = (yyvsp[-1].intval); }
#line 3390 "sql-parser.tab.c"
    break;

  case 250: /* opt_length: '(' INTNUM ',' INTNUM ')'  */
#line 829 "sql-parser.y"
                               { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3396 "sql-parser.tab.c"
    break;

  case 251: /* opt_binary: %empty  */
#line 832 "sql-parser.y"
                      { (yyval.intval) = 0; }
#line 3402 "sql-parser.tab.c"
    break;

  case 252: /* opt_binary: BINARY  */
#line 833 "sql-parser.y"
            { (yyval.intval) = 4000; }
#line 3408 "sql-parser.tab.c"
    break;

  case 253: /* opt_uz: %empty  */
#line 836 "sql-parser.y"
                  { (yyval.intval) = 0; }
#line 3414 "sql-parser.tab.c"
    break;

  case 254: /* opt_uz: opt_uz UNSIGNED  */
#line 837 "sql-parser.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3420 "sql-parser.tab.c"
    break;

  case 255: /* opt_uz: opt_uz ZEROFILL  */
#line 838 "sql-parser.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3426 "sql-parser.tab.c"
    break;

  case 257: /* opt_csc: opt_csc CHAR SET STRING  */
#line 842 "sql-parser.y"
                             { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3432 "sql-parser.tab.c"
    break;

  case 258: /* opt_csc: opt_csc COLLATE STRING  */
#line 843 "sql-parser.y"
                            { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3438 "sql-parser.tab.c"
    break;

  case 259: /* data_type: BIT opt_length  */
#line 847 "sql-parser.y"
                    { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3444 "sql-parser.tab.c"
    break;

  case 260: /* data_type: TINYINT opt_length opt_uz  */
#line 848 "sql-parser.y"
                               { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3450 "sql-parser.tab.c"
    break;

  case 261: /* data_type: SMALLINT opt_length opt_uz  */
#line 849 "sql-parser.y"
                                { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3456 "sql-parser.tab.c"
    break;

  case 262: /* data_type: MEDIUMINT opt_length opt_uz  */
#line 850 "sql-parser.y"
                                 { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3462 "sql-parser.tab.c"
    break;

  case 263: /* data_type: INT opt_length opt_uz  */
#line 851 "sql-parser.y"
                           { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3468 "sql-parser.tab.c"
    break;

  case 264: /* data_type: INTEGER opt_length opt_uz  */
#line 852 "sql-parser.y"
                               { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3474 "sql-parser.tab.c"
    break;

  case 265: /* data_type: BIGINT opt_length opt_uz  */
#line 853 "sql-parser.y"
                              { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3480 "sql-parser.tab.c"
    break;

  case 266: /* data_type: REAL opt_length opt_uz  */
#line 854 "sql-parser.y"
                            { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3486 "sql-parser.tab.c"
    break;

  case 267: /* data_type: DOUBLE opt_length opt_uz  */
#line 855 "sql-parser.y"
                              { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3492 "sql-parser.tab.c"
    break;

  case 268: /* data_type: FLOAT opt_length opt_uz  */
#line 856 "sql-parser.y"
                             { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3498 "sql-parser.tab.c"
    break;

  case 269: /* data_type: DECIMAL opt_length opt_uz  */
#line 857 "sql-parser.y"
                               { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3504 "sql-parser.tab.c"
    break;

  case 270: /* data_type: DATE  */
#line 858 "sql-parser.y"
          { (yyval.intval) = 100001; }
#line 3510 "sql-parser.tab.c"
    break;

  case 271: /* data_type: TIME  */
#line 859 "sql-parser.y"
          { (yyval.intval) = 100002; }
#line 3516 "sql-parser.tab.c"
    break;

  case 272: /* data_type: TIMESTAMP  */
#line 860 "sql-parser.y"
               { (yyval.intval) = 100003; }
#line 3522 "sql-parser.tab.c"
    break;

  case 273: /* data_type: DATETIME  */
#line 861 "sql-parser.y"
              { (yyval.intval) = 100004; }
#line 3528 "sql-parser.tab.c"
    break;

  case 274: /* data_type: YEAR  */
#line 862 "sql-parser.y"
          { (yyval.intval) = 100005; }
#line 3534 "sql-parser.tab.c"
    break;

  case 275: /* data_type: CHAR opt_length opt_csc  */
#line 863 "sql-parser.y"
                             { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3540 "sql-parser.tab.c"
    break;

  case 276: /* data_type: VARCHAR '(' INTNUM ')' opt_csc  */
#line 864 "sql-parser.y"
                                    { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3546 "sql-parser.tab.c"
    break;

  case 277: /* data_type: BINARY opt_length  */
#line 865 "sql-parser.y"
                       { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3552 "sql-parser.tab.c"
    break;

  case 278: /* data_type: VARBINARY '(' INTNUM ')'  */
#line 866 "sql-parser.y"
                              { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3558 "sql-parser.tab.c"
    break;

  case 279: /* data_type: TINYBLOB  */
#line 867 "sql-parser.y"
              { (yyval.intval) = 160001; }
#line 3564 "sql-parser.tab.c"
    break;

  case 280: /* data_type: BLOB  */
#line 868 "sql-parser.y"
          { (yyval.intval) = 160002; }
#line 3570 "sql-parser.tab.c"
    break;

  case 281: /* data_type: MEDIUMBLOB  */
#line 869 "sql-parser.y"
                { (yyval.intval) = 160003; }
#line 3576 "sql-parser.tab.c"
    break;

  case 282: /* data_type: LONGBLOB  */
#line 870 "sql-parser.y"
              { (yyval.intval) = 160004; }
#line 3582 "sql-parser.tab.c"
    break;

  case 283: /* data_type: TINYTEXT opt_binary opt_csc  */
#line 871 "sql-parser.y"
                                 { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3588 "sql-parser.tab.c"
    break;

  case 284: /* data_type: TEXT opt_binary opt_csc  */
#line 872 "sql-parser.y"
                             { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3594 "sql-parser.tab.c"
    break;

  case 285: /* data_type: MEDIUMTEXT opt_binary opt_csc  */
#line 873 "sql-parser.y"
                                   { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3600 "sql-parser.tab.c"
    break;

  case 286: /* data_type: LONGTEXT opt_binary opt_csc  */
#line 874 "sql-parser.y"
                                 { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3606 "sql-parser.tab.c"
    break;

  case 287: /* data_type: ENUM '(' enum_list ')' opt_csc  */
#line 875 "sql-parser.y"
                                    { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3612 "sql-parser.tab.c"
    break;

  case 288: /* data_type: SET '(' enum_list ')' opt_csc  */
#line 876 "sql-parser.y"
                                   { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3618 "sql-parser.tab.c"
    break;

  case 289: /* enum_list: STRING  */
#line 879 "sql-parser.y"
                  { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3624 "sql-parser.tab.c"
    break;

  case 290: /* enum_list: enum_list ',' STRING  */
#line 880 "sql-parser.y"
                          { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3630 "sql-parser.tab.c"
    break;

  case 291: /* create_select_statement: opt_ignore_replace opt_as select_stmt  */
#line 883 "sql-parser.y"
                                                                  { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3636 "sql-parser.tab.c"
    break;

  case 292: /* opt_ignore_replace: %empty  */
#line 885 "sql-parser.y"
                              { (yyval.intval) = 0; }
#line 3642 "sql-parser.tab.c"
    break;

  case 293: /* opt_ignore_replace: IGNORE  */
#line 886 "sql-parser.y"
            { (yyval.intval) = 1; }
#line 3648 "sql-parser.tab.c"
    break;

  case 294: /* opt_ignore_replace: REPLACE  */
#line 887 "sql-parser.y"
             { (yyval.intval) = 2; }
#line 3654 "sql-parser.tab.c"
    break;

  case 295: /* stmt: set_stmt  */
#line 892 "sql-parser.y"
               { emit("STMT"); }
#line 3660 "sql-parser.tab.c"
    break;

  case 299: /* set_expr: USERVAR COMPARISON expr  */
#line 900 "sql-parser.y"
                              { if ((yyvsp[-1].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[-2].strval)); YYERROR; }
                 emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3667 "sql-parser.tab.c"
    break;

  case 300: /* set_expr: USERVAR ASSIGN expr  */
#line 902 "sql-parser.y"
                          { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3673 "sql-parser.tab.c"
    break;


#line 3677 "sql-parser.tab.c"

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

#line 905 "sql-parser.y"

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
    yydebug = 1; ac--; av++;
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
