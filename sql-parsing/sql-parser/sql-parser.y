%{
#include <vector>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void yyerror(char *s, ...);
void emit(char *s, ...);
%}

%union {
    int intval;
    double floatval;
    char *strval;
    int subtok;
    // vector<double> values;
}

%token <strval>   STRING
%token <intval>   INTEGER
%token <floatval> FLOAT
%token <intval>   BOOLEAN

%token CMP_LESS
%token CMP_GREATER
%token CMP_EQ
%token CMP_LEQ
%token CMP_GEQ
%token CMP_NEQ

%left OR
%left AND
%left NOT
%left '+' '-'
%left '*' '/'
%precedence NEG

%token SELECT

// %type <intval> boolean_expr
// %type <floatval> arithmetic_expr
// %type <strval> string_expr
// %type <values> value_expr_list
%%

select_stmt : SELECT value_expr_list ';' { emit("select statement"); }

value_expr_list : value_expr
                | value_expr_list ',' value_expr;

value_expr : arithmetic_expr
           | string_expr
           | boolean_expr;

arithmetic_expr : INTEGER
                 | FLOAT;

arithmetic_expr : arithmetic_expr '+' arithmetic_expr
                | arithmetic_expr '-' arithmetic_expr
                | arithmetic_expr '*' arithmetic_expr
                | arithmetic_expr '/' arithmetic_expr
                | arithmetic_expr '%' arithmetic_expr
                | '-' arithmetic_expr %prec NEG
                | '(' arithmetic_expr ')'
                ;

string_expr : STRING;

boolean_expr : BOOLEAN
             | arithmetic_expr CMP_LESS arithmetic_expr   
             | arithmetic_expr CMP_GREATER arithmetic_expr
             | arithmetic_expr CMP_EQ arithmetic_expr     
             | arithmetic_expr CMP_LEQ arithmetic_expr    
             | arithmetic_expr CMP_GEQ arithmetic_expr    
             | arithmetic_expr CMP_NEQ arithmetic_expr    
             ;

boolean_expr : boolean_expr OR boolean_expr
             | boolean_expr AND boolean_expr
             | NOT boolean_expr
             | '(' boolean_expr ')'
             ;

%%
void emit(char *s, ...) {
  extern int yylineno;

  va_list ap;
  va_start(ap, s);

  printf("rpn: ");
  vfprintf(stdout, s, ap);
  printf("\n");
}

void yyerror(char *s, ...) {
  extern int yylineno;

  va_list ap;
  va_start(ap, s);

  fprintf(stderr, "%d: error: ", yylineno);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
}

int main(int ac, char **av) {
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
