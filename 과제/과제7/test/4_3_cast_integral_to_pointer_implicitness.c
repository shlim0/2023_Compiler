typedef enum { A = 10, B = 20 } E;
int main() {
  int i, *ip;
  float *fp;
  char c, *cp;
  E e, *ep;

  // pointer_type <- integral_type
  ip = i;
  ip = c;
  ip = e;

  fp = i;
  fp = c;
  fp = e;

  cp = i;
  cp = c;
  cp = e;
}