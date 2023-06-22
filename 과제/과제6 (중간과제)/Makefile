a.out: y.tab.c lex.yy.c print.c main.c
	cc y.tab.c lex.yy.c print.c main.c -w

y.tab.c: yacc.y
	byacc -d yacc.y

lex.yy.c: lex.l
	flex lex.l

c:
	rm lex.yy.c y.tab.c y.tab.h a.out
