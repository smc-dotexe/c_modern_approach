#include <stdio.h>

int main()
{
  int i, j, k;
  
  printf("a\n");
  i = 1;
  printf("%d\n", i++ - 1); // 0
  printf("%d\n", i); // 2

  printf("b\n");
  i = 10;
  j = 5;
  printf("%d ", i++ - ++j);
  printf("%d %d\n", i, j);

  printf("c\n");
  i = 7; j = 8;
  printf("%d ", i++ - --j);
  printf("%d %d\n", i, j);

  printf("d\n");
  i = 3;
  j = 4;
  k = 5;

  return 0;
}