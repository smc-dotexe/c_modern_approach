/* show the output produced of each of the code fragments */
#include <stdio.h>

int main()
{
  int i, j, k;

  printf("a\n");
  i = 7;
  j = 8;
  i *= j + 1;
  printf("%d %d\n", i, j);

  printf("b\n");
  i = j = k = 1;
  i += j += k;
  printf("%d %d %d\n", i, j, k);

  printf("c\n");
  i = 1; j = 2; k = 3;
  i -= j -= k;
  printf("%d %d %d\n", i, j, k);

  printf("d\n");
  i = 2; j = 1; k = 0;
  i *= j *= k;
  printf("%d %d %d", i, j, k);
  return 0;
}