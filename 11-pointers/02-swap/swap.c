// Swaps values

#include <stdio.h>

int x = 1;
int y = 2;

void swap(int *x, int *y);

int main()
{
  printf("x before: %d\n", x);
  printf("y before: %d\n", y);

  swap(&x, &y);

  printf("x after: %d\n", x);
  printf("y after: %d\n", y);

  return 0;
}

void swap(int *x, int *y)
{
  int temp;
  temp = *x;

  *x = *y;
  *y = temp;
}