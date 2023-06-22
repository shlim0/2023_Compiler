makefile 만들지 말고 해당 커맨드를 직접 입력하여 인터프리터를 만들 것.
(makefile시 만들어지지 않음. 또, make한 이후 아래 커맨드를 직접 터미널에 입력해도 인터프리터가 만들어지지 않음.)
(소스 코드를 다시 다운받아 해당 커맨드를 직접 입력하면 해결 되긴 함.)

flex interp.l
byacc -d interp.y
cc -o interp y.tab.c lex.yy.c interp.c lib.c -w