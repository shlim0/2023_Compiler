# make 하면 test 폴더에 a.out 파일이 생생됨.
# 폴더 변경없이 make asm 하면 asm 폴더가 생성되고 asm 파일들이 생성됨.
# 즉, $make 후 $make asm 하면 됨.

# 기본 사용법 : make c && make && make asm && make inp && make gcc 
# 위 커맨드대로 실행이 안되면 처음부터 하나씩 입력할 것.
# 그 다음, make c && make && make asm && make inp && make gcc 하면 된다.

# make 후 make asm && make inp 또는 make gcc 해도 됨.

a.out: y.tab.c lex.yy.c print.c main.c gen.c
	cc y.tab.c lex.yy.c print.c main.c semantic.c print_sem.c gen.c -w -g
	mv a.out ./test/a.out

y.tab.c: yacc.y
	byacc -d yacc.y

lex.yy.c: lex.l
	flex lex.l

# clear
c:
	rm -r lex.yy.c y.tab.c y.tab.h test/a.out asm gcc

# 어셈블러 파일 생성
asm: ./test
	mkdir asm
	@for file in test/*.c; do \
		echo; \
		echo $$file; \
		./test/a.out < "$$file"; \
		mv a.asm "$$file".asm; \
		mv "$$file".asm asm; \
		echo; \
	done

# 인터프리터 실행
# 실행이 안되면 ./interp 폴더에 있는 readme.txt 대로 실행했는지 확인할 것
inp: ./asm ./interp
	@for file in asm/*.asm; do \
		echo; \
		echo $$file; \
		./interp/interp "$$file"; \
		echo; \
	done

# gcc 컴파일 및 저장
# include<stdio.h> 헤더를 추가해야 gcc 컴파일시 warning이 현저히 줄어들기 때문에
# test_include = test 폴더에 있는 소스코드 + #include<stdio.h> 하였음
gcc: ./test_include ./gcc
	mkdir gcc
	@for file in test_include/*.c; do \
		echo; \
		echo $$file; \
		gcc -o "$${file%.*}" $$file; \
		"./$${file%.*}"; \
		mv $${file%.*} gcc; \
		echo; \
	done