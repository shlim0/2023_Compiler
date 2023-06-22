void main() {
  int i;
  float f;
  char c;

  i = 10;
  f = 10.1;
  c = 'a'; // unary conversion으로 인해 char가 int로 변환된다.

  printf("%d %d %d\n", !i, !f, !c);
}