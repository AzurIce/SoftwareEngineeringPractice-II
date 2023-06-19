%{
#include <math.h>
#include <stdio.h>
int yylex (void);
void yyerror (char *);

%}
%define api.value.type {double}

%token NUMBER

%token SIN
%left '-' '+'
%left '*' '/' '%'
%precedence NEG   /* negation--unary minus */
%right '^'        /* exponentiation */

%%

input: %empty
     | input line
     ;

line: exp '='  { printf ("\t%lf\n", $1); }

exp:
  NUMBER
| exp '+' exp        { $$ = $1 + $3;      }
| exp '-' exp        { $$ = $1 - $3;      }
| exp '*' exp        { $$ = $1 * $3;      }
| exp '%' exp        { if ($3 == 0) yyerror("division by zero"); $$ = (int)$1 % (int)$3;      }
| exp '/' exp        { if ($3 == 0) yyerror("division by zero"); $$ = $1 / $3;      }
| '-' exp  %prec NEG { $$ = -$2;          }
| exp '^' exp        { $$ = pow($1, $3); }
| '(' exp ')'        { $$ = $2;           }
| SIN '(' exp ')'   { $$ = sin($3); }
;

%%
#include <math.h>

void yyerror(char *s) {
  fprintf(stderr, s);
  fprintf(stderr, "\n");
}

int main() {
    return yyparse();
}
