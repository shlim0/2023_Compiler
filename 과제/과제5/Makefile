a.out : y.tab.c lex.yy.c
	cc y.tab.c lex.yy.c

y.tab.c : yacc.y
	byacc -d yacc.y

lex.yy.c : lex.l
	flex lex.l

c:
	rm lex.yy.c y.tab.c y.tab.h a.out