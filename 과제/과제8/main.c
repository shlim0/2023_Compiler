#include "type.h"
#include "y.tab.h"
#include <stdio.h>
#include <stdlib.h>

// 터미널에서 printf()문을 색 구별하여 출력하게 끔 하기 위함
#define C_NRML "\033[0m"
#define C_BLCK "\033[30m"
#define C_RED "\033[31m"
#define C_GREN "\033[32m"
#define C_AQUA "\033[36m"

extern int syntax_err;
extern A_NODE *root;
void initialize();
void print_ast();
int yyparse();

// 부록9를 참고하여 semantic 코드 추가
extern int semantic_err;
void print_sem_ast();
void semantic_analysis();

// 부록9를 참고하여 generation 코드 추가
extern int gen_err; // gen.c
void code_generation();
FILE *fout;

void main(int argc, char *argv[]) {

  initialize();
  // printf("%s신택스 분석 시작\n", C_AQUA);

  // syntax analysis
  yyparse(); // from y.tab.c

  if (syntax_err) {
    printf("%s신택스 에러로 인해 종료%s", C_RED, C_NRML);
    exit(1);
  } else {
    // printf("%s신택스 분석 완료. 트리가 출력됩니다.\n%s", C_GREN, C_BLCK);
    // print_ast(root);
  }

  // 부록9를 참고하여 semantic 코드 추가
  // semantic analysis
  // printf("%s시맨틱 분석 시작\n", C_AQUA);
  semantic_analysis(root);
  if (semantic_err) {
    printf("%s시맨틱 에러로 인해 종료%s", C_RED, C_NRML);
    exit(1);
  } else {
    // printf("%s시맨틱 분석 완료. 트리가 출력됩니다.\n%s", C_GREN, C_BLCK);
    // print_sem_ast(root);
  }
  printf("%s", C_NRML);

  // generation 코드 추가
  if ((fout = fopen("a.asm", "w+")) == NULL) {
    printf("can not open output file: a.asm\n");
    exit(1);
  }
  // printf("%s코드 생성 시작\n", C_AQUA);
  code_generation(root);
  if (gen_err) {
    printf("%s코드 생성 에러로 인해 종료%s", C_RED, C_NRML);
    exit(1);
  } else {
    // printf("%s코드 생성 완료\n%s", C_GREN, C_BLCK);
  }
  printf("%s", C_NRML);
}
