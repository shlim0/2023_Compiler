int *a[5];
float (*b[10])(int);

void my_func(int, ...) {
  a = b;
  a = c;
  a *a;
  a + a;
  a - a;
  a / a;

  result = result + x;
  --result++;
  ++result--;
  result = result * 10;
  result *= 10; // err
}
