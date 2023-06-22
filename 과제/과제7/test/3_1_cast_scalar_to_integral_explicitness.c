typedef enum { A = 10, B = 20 } E;
int main() {
  int i, *ip;
  float f;
  char c;
  E e;

  // int_type <- scalar type
  i = (int)c;
  i = (int)e;
  i = (int)f;
  i = (int)ip;

  // char_type <- scalar type
  c = (char)i;
  c = (char)ip;
  c = (char)f;
  c = (char)e;

  // enum_type <- scalar type
  e = (E)i;
  e = (E)ip;
  e = (E)f;
  e = (E)c;
}