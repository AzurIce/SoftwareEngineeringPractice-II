%option noyywrap nodefault yylineno case-insensitive c++

%{
#include "sql-parser.tab.h"
#include "string.h"
#include "stdlib.h"

extern int yylex();
void yyerror(char *s, ...);
int old_state;

%}

%s COMMENT

%%
    /* 忽略空白字符 */
[ \t\n]+
    /* numbers */
-?[0-9]+            { $$ = atoi(yytext); return NUMBER; }

-?[0-9]*"."[0-9]+     { $$ = atof(yytext); return NUMBER; }

    /* operators */
[-+*/%,;()]            { return yytext[0]; }

    /* comments */
"--"[ \t].*      ;
"/*"             { old_state = YY_START; BEGIN COMMENT; }
<COMMENT>"*/"    { BEGIN old_state; }
<COMMENT>.|\n    ;
<COMMENT><<EOF>> { yyerror("lexer: unclosed comment"); }

    /* everything else */
.                { yyerror("lexer: unknown character: '%c'", *yytext); }
%%
