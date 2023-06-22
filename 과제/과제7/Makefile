# vscode 터미널에서 make 하는 경우 파일이 많으면 출력 결과가 짤릴 수 있다.
# 기본 터미널에서 진행하거나
# 또는, 파일수를 조금 줄여서 하거나
# 또는, vscode 설정에서 scrollback을 큰 수로 늘려서 하면 된다.
a.out: y.tab.c lex.yy.c print.c main.c
	cc y.tab.c lex.yy.c print.c main.c semantic.c print_sem.c -w -g
	mv a.out ./test/a.out
	@for file in test/*.c; do \
		echo; \
		echo $$file; \
		./test/a.out < "$$file"; \
		echo; \
	done

y.tab.c: yacc.y
	byacc -d yacc.y

lex.yy.c: lex.l
	flex lex.l

c:
	rm lex.yy.c y.tab.c y.tab.h a.out

# # 만약, gcc 컴파일 하여 본인이 만든 컴파일러와 비교하고 싶다면 기존 makefile 코드를 주석처리 하고 아래 코드를 주석 해제할 것.
# # 이후 다시 make 할 경우, warning 메시지가 출력되지 않으니 주의할 것.
# OUTPUT_DIR = ./test
# OUTPUT_FILE = $(OUTPUT_DIR)/a.out
# C_FILES = $(wildcard $(OUTPUT_DIR)/*.c)
# EXEC_FILES = $(patsubst $(OUTPUT_DIR)/%.c, $(OUTPUT_DIR)/%, $(C_FILES))

# all: compile

# compile: $(EXEC_FILES)

# $(EXEC_FILES): $(OUTPUT_DIR)/%: $(OUTPUT_DIR)/%.c
# 	- gcc $< -o $@ || true

# clean:
# 	rm -rf $(EXEC_FILES) $(OUTPUT_FILE)

# .PHONY: all compile clean
