/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SQL_PARSER_TAB_H_INCLUDED
# define YY_YY_SQL_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NAME = 258,                    /* NAME  */
    STRING = 259,                  /* STRING  */
    INTNUM = 260,                  /* INTNUM  */
    BOOL = 261,                    /* BOOL  */
    APPROXNUM = 262,               /* APPROXNUM  */
    USERVAR = 263,                 /* USERVAR  */
    ASSIGN = 264,                  /* ASSIGN  */
    OR = 265,                      /* OR  */
    XOR = 266,                     /* XOR  */
    ANDOP = 267,                   /* ANDOP  */
    IN = 268,                      /* IN  */
    IS = 269,                      /* IS  */
    LIKE = 270,                    /* LIKE  */
    REGEXP = 271,                  /* REGEXP  */
    NOT = 272,                     /* NOT  */
    BETWEEN = 273,                 /* BETWEEN  */
    COMPARISON = 274,              /* COMPARISON  */
    SHIFT = 275,                   /* SHIFT  */
    MOD = 276,                     /* MOD  */
    UMINUS = 277,                  /* UMINUS  */
    ADD = 278,                     /* ADD  */
    ALL = 279,                     /* ALL  */
    ALTER = 280,                   /* ALTER  */
    ANALYZE = 281,                 /* ANALYZE  */
    AND = 282,                     /* AND  */
    ANY = 283,                     /* ANY  */
    AS = 284,                      /* AS  */
    ASC = 285,                     /* ASC  */
    AUTO_INCREMENT = 286,          /* AUTO_INCREMENT  */
    BEFORE = 287,                  /* BEFORE  */
    BIGINT = 288,                  /* BIGINT  */
    BINARY = 289,                  /* BINARY  */
    BIT = 290,                     /* BIT  */
    BLOB = 291,                    /* BLOB  */
    BOTH = 292,                    /* BOTH  */
    BY = 293,                      /* BY  */
    CALL = 294,                    /* CALL  */
    CASCADE = 295,                 /* CASCADE  */
    CASE = 296,                    /* CASE  */
    CHANGE = 297,                  /* CHANGE  */
    CHAR = 298,                    /* CHAR  */
    CHECK = 299,                   /* CHECK  */
    COLLATE = 300,                 /* COLLATE  */
    COLUMN = 301,                  /* COLUMN  */
    COMMENT = 302,                 /* COMMENT  */
    CONDITION = 303,               /* CONDITION  */
    CONSTRAINT = 304,              /* CONSTRAINT  */
    CONTINUE = 305,                /* CONTINUE  */
    CONVERT = 306,                 /* CONVERT  */
    CREATE = 307,                  /* CREATE  */
    CROSS = 308,                   /* CROSS  */
    CURRENT_DATE = 309,            /* CURRENT_DATE  */
    CURRENT_TIME = 310,            /* CURRENT_TIME  */
    CURRENT_TIMESTAMP = 311,       /* CURRENT_TIMESTAMP  */
    CURRENT_USER = 312,            /* CURRENT_USER  */
    CURSOR = 313,                  /* CURSOR  */
    DATABASE = 314,                /* DATABASE  */
    DATABASES = 315,               /* DATABASES  */
    DATE = 316,                    /* DATE  */
    DATETIME = 317,                /* DATETIME  */
    DAY_HOUR = 318,                /* DAY_HOUR  */
    DAY_MICROSECOND = 319,         /* DAY_MICROSECOND  */
    DAY_MINUTE = 320,              /* DAY_MINUTE  */
    DAY_SECOND = 321,              /* DAY_SECOND  */
    DECIMAL = 322,                 /* DECIMAL  */
    DECLARE = 323,                 /* DECLARE  */
    DEFAULT = 324,                 /* DEFAULT  */
    DELAYED = 325,                 /* DELAYED  */
    DELETE = 326,                  /* DELETE  */
    DESC = 327,                    /* DESC  */
    DESCRIBE = 328,                /* DESCRIBE  */
    DETERMINISTIC = 329,           /* DETERMINISTIC  */
    DISTINCT = 330,                /* DISTINCT  */
    DISTINCTROW = 331,             /* DISTINCTROW  */
    DIV = 332,                     /* DIV  */
    DOUBLE = 333,                  /* DOUBLE  */
    DROP = 334,                    /* DROP  */
    DUAL = 335,                    /* DUAL  */
    EACH = 336,                    /* EACH  */
    ELSE = 337,                    /* ELSE  */
    ELSEIF = 338,                  /* ELSEIF  */
    END = 339,                     /* END  */
    ENUM = 340,                    /* ENUM  */
    EXIT = 341,                    /* EXIT  */
    EXPLAIN = 342,                 /* EXPLAIN  */
    FETCH = 343,                   /* FETCH  */
    FLOAT = 344,                   /* FLOAT  */
    FOR = 345,                     /* FOR  */
    FORCE = 346,                   /* FORCE  */
    FOREIGN = 347,                 /* FOREIGN  */
    FROM = 348,                    /* FROM  */
    FULLTEXT = 349,                /* FULLTEXT  */
    GRANT = 350,                   /* GRANT  */
    GROUP = 351,                   /* GROUP  */
    HAVING = 352,                  /* HAVING  */
    HIGH_PRIORITY = 353,           /* HIGH_PRIORITY  */
    HOUR_MICROSECOND = 354,        /* HOUR_MICROSECOND  */
    HOUR_MINUTE = 355,             /* HOUR_MINUTE  */
    HOUR_SECOND = 356,             /* HOUR_SECOND  */
    IF = 357,                      /* IF  */
    IGNORE = 358,                  /* IGNORE  */
    INFILE = 359,                  /* INFILE  */
    INDEX = 360,                   /* INDEX  */
    INNER = 361,                   /* INNER  */
    INOUT = 362,                   /* INOUT  */
    INSENSITIVE = 363,             /* INSENSITIVE  */
    INSERT = 364,                  /* INSERT  */
    INT = 365,                     /* INT  */
    INTEGER = 366,                 /* INTEGER  */
    INTERVAL = 367,                /* INTERVAL  */
    INTO = 368,                    /* INTO  */
    ITERATE = 369,                 /* ITERATE  */
    JOIN = 370,                    /* JOIN  */
    KEY = 371,                     /* KEY  */
    KEYS = 372,                    /* KEYS  */
    KILL = 373,                    /* KILL  */
    LEADING = 374,                 /* LEADING  */
    LEAVE = 375,                   /* LEAVE  */
    LEFT = 376,                    /* LEFT  */
    LIMIT = 377,                   /* LIMIT  */
    LINES = 378,                   /* LINES  */
    LOAD = 379,                    /* LOAD  */
    LOCALTIME = 380,               /* LOCALTIME  */
    LOCALTIMESTAMP = 381,          /* LOCALTIMESTAMP  */
    LOCK = 382,                    /* LOCK  */
    LONG = 383,                    /* LONG  */
    LONGBLOB = 384,                /* LONGBLOB  */
    LONGTEXT = 385,                /* LONGTEXT  */
    LOOP = 386,                    /* LOOP  */
    LOW_PRIORITY = 387,            /* LOW_PRIORITY  */
    MATCH = 388,                   /* MATCH  */
    MEDIUMBLOB = 389,              /* MEDIUMBLOB  */
    MEDIUMINT = 390,               /* MEDIUMINT  */
    MEDIUMTEXT = 391,              /* MEDIUMTEXT  */
    MINUTE_MICROSECOND = 392,      /* MINUTE_MICROSECOND  */
    MINUTE_SECOND = 393,           /* MINUTE_SECOND  */
    MODIFIES = 394,                /* MODIFIES  */
    NATURAL = 395,                 /* NATURAL  */
    NO_WRITE_TO_BINLOG = 396,      /* NO_WRITE_TO_BINLOG  */
    NULLX = 397,                   /* NULLX  */
    NUMBER = 398,                  /* NUMBER  */
    ON = 399,                      /* ON  */
    ONDUPLICATE = 400,             /* ONDUPLICATE  */
    OPTIMIZE = 401,                /* OPTIMIZE  */
    OPTION = 402,                  /* OPTION  */
    OPTIONALLY = 403,              /* OPTIONALLY  */
    ORDER = 404,                   /* ORDER  */
    OUT = 405,                     /* OUT  */
    OUTER = 406,                   /* OUTER  */
    OUTFILE = 407,                 /* OUTFILE  */
    PRECISION = 408,               /* PRECISION  */
    PRIMARY = 409,                 /* PRIMARY  */
    PROCEDURE = 410,               /* PROCEDURE  */
    PURGE = 411,                   /* PURGE  */
    QUICK = 412,                   /* QUICK  */
    READ = 413,                    /* READ  */
    READS = 414,                   /* READS  */
    REAL = 415,                    /* REAL  */
    REFERENCES = 416,              /* REFERENCES  */
    RELEASE = 417,                 /* RELEASE  */
    RENAME = 418,                  /* RENAME  */
    REPEAT = 419,                  /* REPEAT  */
    REPLACE = 420,                 /* REPLACE  */
    REQUIRE = 421,                 /* REQUIRE  */
    RESTRICT = 422,                /* RESTRICT  */
    RETURN = 423,                  /* RETURN  */
    REVOKE = 424,                  /* REVOKE  */
    RIGHT = 425,                   /* RIGHT  */
    ROLLUP = 426,                  /* ROLLUP  */
    SCHEMA = 427,                  /* SCHEMA  */
    SCHEMAS = 428,                 /* SCHEMAS  */
    SECOND_MICROSECOND = 429,      /* SECOND_MICROSECOND  */
    SELECT = 430,                  /* SELECT  */
    SENSITIVE = 431,               /* SENSITIVE  */
    SEPARATOR = 432,               /* SEPARATOR  */
    SET = 433,                     /* SET  */
    SHOW = 434,                    /* SHOW  */
    SMALLINT = 435,                /* SMALLINT  */
    SOME = 436,                    /* SOME  */
    SONAME = 437,                  /* SONAME  */
    SPATIAL = 438,                 /* SPATIAL  */
    SPECIFIC = 439,                /* SPECIFIC  */
    SQL = 440,                     /* SQL  */
    SQLEXCEPTION = 441,            /* SQLEXCEPTION  */
    SQLSTATE = 442,                /* SQLSTATE  */
    SQLWARNING = 443,              /* SQLWARNING  */
    SQL_BIG_RESULT = 444,          /* SQL_BIG_RESULT  */
    SQL_CALC_FOUND_ROWS = 445,     /* SQL_CALC_FOUND_ROWS  */
    SQL_SMALL_RESULT = 446,        /* SQL_SMALL_RESULT  */
    SSL = 447,                     /* SSL  */
    STARTING = 448,                /* STARTING  */
    STRAIGHT_JOIN = 449,           /* STRAIGHT_JOIN  */
    TABLE = 450,                   /* TABLE  */
    TEMPORARY = 451,               /* TEMPORARY  */
    TERMINATED = 452,              /* TERMINATED  */
    TEXT = 453,                    /* TEXT  */
    THEN = 454,                    /* THEN  */
    TIME = 455,                    /* TIME  */
    TIMESTAMP = 456,               /* TIMESTAMP  */
    TINYBLOB = 457,                /* TINYBLOB  */
    TINYINT = 458,                 /* TINYINT  */
    TINYTEXT = 459,                /* TINYTEXT  */
    TO = 460,                      /* TO  */
    TRAILING = 461,                /* TRAILING  */
    TRIGGER = 462,                 /* TRIGGER  */
    UNDO = 463,                    /* UNDO  */
    UNION = 464,                   /* UNION  */
    UNIQUE = 465,                  /* UNIQUE  */
    UNLOCK = 466,                  /* UNLOCK  */
    UNSIGNED = 467,                /* UNSIGNED  */
    UPDATE = 468,                  /* UPDATE  */
    USAGE = 469,                   /* USAGE  */
    USE = 470,                     /* USE  */
    USING = 471,                   /* USING  */
    UTC_DATE = 472,                /* UTC_DATE  */
    UTC_TIME = 473,                /* UTC_TIME  */
    UTC_TIMESTAMP = 474,           /* UTC_TIMESTAMP  */
    VALUES = 475,                  /* VALUES  */
    VARBINARY = 476,               /* VARBINARY  */
    VARCHAR = 477,                 /* VARCHAR  */
    VARYING = 478,                 /* VARYING  */
    WHEN = 479,                    /* WHEN  */
    WHERE = 480,                   /* WHERE  */
    WHILE = 481,                   /* WHILE  */
    WITH = 482,                    /* WITH  */
    WRITE = 483,                   /* WRITE  */
    YEAR = 484,                    /* YEAR  */
    YEAR_MONTH = 485,              /* YEAR_MONTH  */
    ZEROFILL = 486,                /* ZEROFILL  */
    ESCAPED = 487,                 /* ESCAPED  */
    EXISTS = 488,                  /* EXISTS  */
    FSUBSTRING = 489,              /* FSUBSTRING  */
    FTRIM = 490,                   /* FTRIM  */
    FDATE_ADD = 491,               /* FDATE_ADD  */
    FDATE_SUB = 492,               /* FDATE_SUB  */
    FCOUNT = 493                   /* FCOUNT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "sql-parser.y"

        int intval;
        double floatval;
        char *strval;
        int subtok;

#line 309 "sql-parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SQL_PARSER_TAB_H_INCLUDED  */
