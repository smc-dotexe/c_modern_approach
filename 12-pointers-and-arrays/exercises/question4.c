/* What will be the contents of the array if the following is executed? */

#include <stdio.h>

#define N 10

int main()
{
  int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *p = &a[0];
  int *q = &a[N - 1];
  int temp;

  while (p < q)
  {
    temp = *p;
    *p++ = *q;
    *q-- = temp;
  }

  // i think it would reverse the array
  for (int *i = a; i < &a[N]; i++)
  {
    printf("%d", *i);
  }
  return 0;
}

// actual output:
//