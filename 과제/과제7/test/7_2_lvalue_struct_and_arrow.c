typedef struct {
  int val;
  float val_f;
  char val_c;
} S;

int main() {
  // N_EXP_STRUCT
  S s1, *s2;
  s1.val = 10;
  s1.val_f = 10.1;
  s1.val_c = 'a';

  // N_EXP_ARROW
  s2->val = 10;
  s2->val_f = 10.1;
  s2->val_c = 'a';
}