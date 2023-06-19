%option noyywrap
%{
#include "calc.tab.h"
%}
%%
[0-9]+ { yylval = atoi(yytext); return NUMBER; }
[0-9]*"."[0-9]+ { yylval = atof(yytext); return NUMBER; }

[-+*/%=()] { return yytext[0]; }

sin { return SIN; }

. ;
%%
