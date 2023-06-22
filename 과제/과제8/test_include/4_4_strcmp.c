#include <stdio.h>
int strcmp(char *s, char *t)
{
  for (; *s == *t; s++)
  {
    if (*s == 0)
      return 0;
    t++;
  }
  return *s - *t;
}

int main()
{
  int t, f;
  t = strcmp("hello", "hello");
  f = strcmp("hello", "hi");
  printf("%d %d\n", t, f);
}