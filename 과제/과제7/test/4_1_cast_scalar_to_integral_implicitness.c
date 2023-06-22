typedef enum { A = 10, B = 20 } E;
int main() {
  int i, *ip;
  float f;
  char c;
  E e;

  // int_type <- scalar type
  i = c;
  i = e;
  i = f;
  i = ip;

  // char_type <- scalar type
  c = i;
  c = ip;
  c = f;
  c = e;

  // enum_type <- scalar type
  e = i;
  e = ip;
  e = f;
  e = c;
}