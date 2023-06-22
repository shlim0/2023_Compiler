typedef enum { A = 10, B = 20 } E;
int main() {
  int *ip;
  float *fp;
  char *cp;
  E *ep;

  // pointer_type <- pointer_type
  ip = fp;
  ip = cp;
  ip = ep;

  fp = ip;
  fp = cp;
  fp = ep;

  cp = ip;
  cp = fp;
  cp = ep;
}