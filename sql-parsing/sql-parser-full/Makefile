# Makefile for pmysql
CC = cc -g
LEX = flex
YACC = bison
CFLAGS = -DYYDEBUG=1

all2: flex bison final
all: sql-parser

flex: sql-parser.l
	${LEX} -o sql-parser.c $<

bison: sql-parser.y
	${YACC} -vd sql-parser.y

final:
	${CC} -o sql-parser sql-parser.tab.c sql-parser.c


sql-parser: sql-parser.tab.o sql-parser.o
	${CC} -o $@ sql-parser.tab.o sql-parser.o
	
sql-parser.tab.c sql-parser.tab.h: sql-parser.y
	${YACC} -vd sql-parser.y
	
sql-parser.c: sql-parser.l
	${LEX} -o $*.c $<
	
sql-parser.o: sql-parser.c sql-parser.tab.h

test: all
	cd test && python gen_tests.py
	cd test && py.test -v

.SUFFIXES: .pgm .l .y .c
