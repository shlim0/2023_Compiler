typedef enum { A = 10, B = 20 } E;
int main() {
  int i, *ip;
  float *fp;
  char c, *cp;
  E e, *ep;

  // pointer_type <- integral_type
  ip = (int *)i;
  ip = (int *)c;
  ip = (int *)e;

  fp = (float *)i;
  fp = (float *)c;
  fp = (float *)e;

  cp = (char *)i;
  cp = (char *)c;
  cp = (char *)e;
}