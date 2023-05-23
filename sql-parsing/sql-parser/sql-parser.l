%option noyywrap nodefault yylineno case-insensitive

%{
#include "sql-parser.tab.h"
#include "string.h"
#include "stdlib.h"

void yyerror(char *s, ...);
int old_state;

%}

%s COMMENT

%%

    /* numbers */
-?[0-9]+            { return INTEGER; }

-?[0-9]+"."[0-9]* |
-?"."[0-9]+         { return FLOAT; }

    /* strings */
'(\\.|''|[^'\n])*'  { return STRING; }

    /* booleans */
TRUE                { return BOOLEAN; }
FALSE               { return BOOLEAN; }

    /* operators */
[-+*/%,;]            { return yytext[0]; }

    /* comparators */
"<"  { yylval.subtok = 1; return CMP_LESS; }
">"  { yylval.subtok = 2; return CMP_GREATER; }
"="  { yylval.subtok = 4; return CMP_EQ; }
"<=" { yylval.subtok = 5; return CMP_LEQ; }
">=" { yylval.subtok = 6; return CMP_GEQ; }
"!=" { yylval.subtok = 4; return CMP_NEQ; }
"<>" { yylval.subtok = 3; return CMP_NEQ; }

    /* comments */
"--"[ \t].*      ;
"/*"             { old_state = YY_START; BEGIN COMMENT; }
<COMMENT>"*/"    { BEGIN old_state; }
<COMMENT>.|\n    ;
<COMMENT><<EOF>> { yyerror("lexer: unclosed comment"); }


    /* keywords */
SELECT { return SELECT; }

    /* everything else */
[ \t\n]          ;
.                { yyerror("lexer: mystery character: '%c'", *yytext); }
%%
