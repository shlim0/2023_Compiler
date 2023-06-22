void func(int parm) { ; }

int main() {
  // N_EXP_IDENT에서 ID_VAR이며 배열이 아닌 경우
  int i;
  i = 10 + 3 * 100 / 4 % 3;

  // N_EXP_IDENT에서 ID_PARM이며 배열이 아닌 경우
  func(10);
}