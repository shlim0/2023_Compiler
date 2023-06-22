// 부록9에서 semantic 관련 코드를 제거 함.
#include "type.h"
#include "y.tab.h"
#include <stdio.h>
#include <stdlib.h>
extern int syntax_err;
extern A_NODE *root;
void initialize();
void print_ast();
int yyparse();

void main(int argc, char *argv[]) {

  initialize();
  printf("파싱 시작\n");
  yyparse(); // from y.tab.c

  if (syntax_err) {
    printf("신택스 에러로 인한 파싱 종료");
    exit(1);
  } else {
    printf("파싱 완료. 트리가 출력됩니다\n");
    print_ast(root);
  }
}
