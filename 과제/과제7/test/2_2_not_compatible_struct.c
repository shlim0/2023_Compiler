typedef struct {
  int val;
} S1;
typedef struct {
  int val;
} S2;

int main() {
  S1 s1;
  S2 s2;
  s1 = s1; // 호환적
  s1 = s2; // 호환적이지 않음
}
