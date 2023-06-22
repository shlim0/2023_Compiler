typedef int (*FuncType)(int);
int square(int x) { return x * x; }
int cube(int x) { return x * x * x; }

void result(FuncType func, int value) { int result = func(value); }

int main() {
  int value = 10;
  result(square, value);
  result(cube, value);
}