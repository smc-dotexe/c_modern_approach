// simple iteration of an array using pointers

#include <stdio.h>

#define N 10

int main()
{
  int a[N] = {20, 40, 60, 25, 98, 11, 23, 12, 43, 99};
  int *p, *q;

  printf("Regular for \n");
  for (p = &a[0]; p < &a[N]; p++)
  {
    printf("%d ", *p);
  }
  printf("\n");

  printf("while loop with combining * and ++ operators\n");
  int sum = 0;
  q = &a[0];
  while (q < &a[N])
  {
    sum += *q++;
    printf("sum: %d ", sum);
    printf("q: %d\n", *q);
  }

  // modifying array using it's name as a pointer
  *a = 25;       // a[0] = 25
  *(a + 1) = 45; // a[1] = 45
  printf("a[0]: %d\n", a[0]);
  printf("a[1]: %d\n", a[1]);

  // simplifying the for loop to use the array's name as a pointer
  printf("simplifying for loop:\nfor (p = a; p < a + N; p++)\n");
  for (p = a; p < a + N; p++)
  {
    printf("%d ", *p);
  }

  return 0;
}