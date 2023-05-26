%require "3.2"
%language "c++"

%{
//#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "utils.h"

using namespace std;

%}

%token <double> NUMBER
%%
expr: NUMBER { cout << $1 << endl;}
%%

int main(int ac, char **av) {
    yy::parser parse;
    return parse();
}
