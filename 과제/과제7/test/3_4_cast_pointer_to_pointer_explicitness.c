typedef enum { A = 10, B = 20 } E;
int main() {
  int *ip;
  float *fp;
  char *cp;
  E *ep;

  // pointer_type <- pointer_type
  ip = (int *)fp;
  ip = (int *)cp;
  ip = (int *)ep;

  fp = (float *)ip;
  fp = (float *)cp;
  fp = (float *)ep;

  cp = (char *)ip;
  cp = (char *)fp;
  cp = (char *)ep;
}