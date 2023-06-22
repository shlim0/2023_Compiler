#include <stdio.h>
int main()
{

  if (10 == 10)
    printf("EQL : INT\n");
  if (10.1 == 10.1)
    printf("EQL : FLOAT\n");

  if (20 == 10)
    printf("EQL : NOT INT\n");
  if (20.2 == 20)
    printf("EQL : NOT INT FLOAT\n");
  if (20.2 == 20.1)
    printf("EQL : NOT FLOAT\n");
}