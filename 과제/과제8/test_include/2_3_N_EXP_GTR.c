#include <stdio.h>
int main()
{
  if (20 > 10)
    printf("GTR : INT\n");
  if (20.2 > 10)
    printf("GTR : INT FLOAT\n");
  if (20.2 > 10.1)
    printf("GTR : FLOAT\n");

  if (10 > 20)
    printf("GTR : NOT INT\n");
  if (10.1 > 20)
    printf("GTR : NOT INT FLOAT\n");
  if (10.1 > 20.2)
    printf("GTR : NOT FLOAT\n");
}