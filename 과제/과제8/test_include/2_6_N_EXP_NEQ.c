#include <stdio.h>
int main()
{

  if (10 != 20)
    printf("NEQ : INT\n");
  if (10.1 != 20)
    printf("NEQ : INT FLOAT\n");
  if (10.1 != 20.2)
    printf("NEQ : FLOAT\n");

  if (10 != 10)
    printf("NEQ : NOT INT\n");
  if (10.1 != 10.1)
    printf("NEQ : NOT FLOAT\n");
}