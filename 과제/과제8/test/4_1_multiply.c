int muitiply(int a, int b) {
  int result;
  result = 0;
  while (a) {
    if (a % 2)
      result = result + b;
    a = a / 2;
    b = b * 2;
  }
  return result;
}

void main() {
  int res;
  res = muitiply(10, 22);
  printf("%d\n", res);
}