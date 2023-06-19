all: flex bison c

flex: calc.l
	flex calc.l

bison: calc.y
	bison -d calc.y

c: calc.tab.c lex.yy.c
	gcc -o calc calc.tab.c lex.yy.c -lm
