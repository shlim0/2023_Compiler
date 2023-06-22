typedef enum { A = 10, B = 20 } E;
typedef struct {
  int val;
} S;

int main() {
  int i, *ip;
  float f, *fp;
  char c, *cp;
  E e, *ep;
  S s;

  s = (S)i;
  s = (S)ip;
  s = (S)f;
  s = (S)fp;
  s = (S)c;
  s = (S)cp;
  s = (S)e;
  s = (S)ep;
}