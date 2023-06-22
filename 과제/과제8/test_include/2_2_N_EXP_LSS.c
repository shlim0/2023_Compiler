#include <stdio.h>
int main()
{

  if (10 < 20)
    printf("LSS : INT\n");
  if (10.1 < 20)
    printf("LSS : INT FLOAT\n");
  if (10.1 < 20.2)
    printf("LSS : FLOAT\n");

  if (20 < 10)
    printf("LSS : NOT INT\n");
  if (20.2 < 10)
    printf("LSS : NOT INT FLOAT\n");
  if (20.2 < 10.1)
    printf("LSS : NOT FLOAT\n");
}