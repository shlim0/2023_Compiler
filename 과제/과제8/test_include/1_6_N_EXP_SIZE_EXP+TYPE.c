#include <stdio.h>
int main()
{
  int i_size, f_size, c_size, s_size;

  // N_EXP_SIZE_EXP
  i_size = sizeof(10);
  f_size = sizeof(10.1);
  c_size = sizeof('a');
  s_size = sizeof("size");
  printf("%d %d %d %d\n", i_size, f_size, c_size, s_size);

  // N_EXP_SIZE_TYPE
  i_size = sizeof(int);
  f_size = sizeof(float);
  c_size = sizeof(char);
  s_size = sizeof(char *);
  printf("%d %d %d %d\n", i_size, f_size, c_size, s_size);
}