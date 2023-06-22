typedef enum { A = 10 } E1;
typedef enum { B = 20 } E2;

int main() {
  E1 e1;
  E2 e2;
  e1 = e1; // 호환적
  e1 = e2; // 호환적이지 않음
}
