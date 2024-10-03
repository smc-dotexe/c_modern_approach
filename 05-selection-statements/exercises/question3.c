#include <stdio.h>

int main() {
  int i, j, k;

  printf("a\n");
  i = 3;
  j = 4;
  k = 5;
  printf("%d\n", i < j || ++j < k); // 1
  printf("%d %d %d\n", i, j, k); // 3 4 5

  printf("b\n");
  i = 7;
  j = 8;
  k = 9;
  printf("%d \n", i-7 && j++ < k); // 0

  printf("c\n");
  i = 7;
  j = 8;
  k = 9;
  printf("%d \n", (i = j) || (j = k));
  printf("%d %d %d\n", i, j, k);

  printf("d\n");
  i = 1;
  j = 1;
  k = 1;
  printf("%d \n", ++i || ++j && ++k);
  printf("%d %d %d \n", i, j, k);
  return 0;
}