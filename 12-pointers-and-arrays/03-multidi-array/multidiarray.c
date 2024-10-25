// Iterate through a multi-dimensional array

#include <stdio.h>

#define NUM_ROW 5
#define NUM_COL 5

int main()
{
  int a[NUM_ROW][NUM_COL] = {0};
  int *i, p = 0;

  printf("sizeof(a): %d\n", sizeof(a));
  printf("sizeof(i): %d\n", sizeof(i));
  // you can treat multi-diemensional arrays as a one-dimensional array
  for (i = &a[0][0]; i < &a[0][0] + NUM_ROW * NUM_COL; i++)
  {
    *i = p;
    p++;
  }

  for (i = &a[0][0]; i < &a[0][0] + NUM_ROW * NUM_COL; i++)
  {
    printf("%d ", *i);
  }
  return 0;
}