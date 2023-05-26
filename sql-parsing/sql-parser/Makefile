CFLAGS = -DYYDEBUG=1

flex: sql-parser.l
	flex sql-parser.l

bison: sql-parser.y
	bison -d sql-parser.y

all: flex bison
	g++ sql-parser.tab.c lex.yy.c -o sql-parser
