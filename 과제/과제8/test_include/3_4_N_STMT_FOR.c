#include <stdio.h>
int main()
{
  int i;
  for (i = 0; i < 100; i++)
  {
    if (i % 10 == 0 && i != 0)
    {
      printf("\n");
      continue; // N_STMT_CONTINUE
    }
    if (i == 77)
    {
      printf("\n");
      break; // N_STMT_BREAK
    }
    printf("%d ", i);
  }
}