#include <stdio.h>
enum e {
  // N_EXP_IDENT - ID_ENUM_LITERAL
  A = 10,
  B = 20
};

// N_EXP_IDENT - ID_PARM
void func(int i, float f, char c, char *s, int *p, int arr[]) {
  printf("%d %f %c %s %d %d %d %d\n", i, f, c, s, *p, arr[0], arr[1], arr[2]);
}

int main() {
  // compound_statment : {declaration_list statement_list} 이므로
  // 미리 선언하고 시작한다.
  // N_EXP_IDENT - ID_VAR
  int i;
  float f;
  char c;
  char *s;
  int *p;
  int arr[3];

  i = 10 + A;   // N_EXP_INT_CONST
  f = 3.14;     // N_EXP_FLOAT_CONST
  c = 'a';      // N_EXP_CHAR_CONST
  s = "string"; // N_EXP_STRING_LITERAL

  *p = i + B;

  // N_EXP_ARRAY
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;

  // N_EXP_FUNCTION_CALL
  printf("%d %f %c %s %d %d %d %d\n", i, f, c, s, *p, arr[0], arr[1], arr[2]);
  func(i, f, c, s, p, arr);
}