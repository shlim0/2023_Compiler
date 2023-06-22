typedef int (*FuncType)(int);
int func_int(int i) { ; }
void func_pointer(int *i) { ; }
void func_function_pointer(FuncType func) { ; }

int main() {
  int arr[10];

  func_int(10.1);                      // int로 형변환된다.
  func_pointer(arr);                   // 배열 포인터로 형변환된다.
  func_function_pointer(func_int(10)); // 함수 포인터로 형변환된다.
}
