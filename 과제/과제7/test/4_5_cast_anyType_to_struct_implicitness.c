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

  s = i;
  s = ip;
  s = f;
  s = fp;
  s = c;
  s = cp;
  s = e;
  s = ep;
}