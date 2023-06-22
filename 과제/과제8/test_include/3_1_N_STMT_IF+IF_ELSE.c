#include <stdio.h>
int main()
{
  int i;
  float f;
  i = 0;
  f = 1.1;

  // N_EXP_IF
  if (i)
    printf("IF\n");

  // N_EXP_IF_ELSE
  if (i)
    printf("IF\n");
  else if (f)
    printf("ELSE_IF\n");
}