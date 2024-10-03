#include <stdio.h>

int main() {
  int i, j, k;

  printf("a\n");
  i = 10;
  j = 5;
  k = !i;
  printf("!i %d\n"); 
  printf("%d\n", !i < j); // 1

  printf("b\n");
  i = 2;
  j = 1;
  k = !!i;
  printf("!!i %d\n", k);
  printf("%d\n", !!i + !j);

  printf("c\n");
  i = 5;
  j = 0;
  k = -5;
  printf("%d\n", i && j || k);

  printf("d\n");
  i = 1;
  j = 2;
  k = 3;
  printf("%d\n", i < j || k);
  return 0;
}