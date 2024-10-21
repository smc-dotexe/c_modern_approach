/* Formula for finding the length of the array */
#include <stdio.h>
#define N 13
#define SIZE (sizeof(a) / sizeof(a[N]))
int main()
{
  int a[N];

  printf("sizeof(a) = %d\n", sizeof(a));
  printf("sizeof(a[n]) = %d\n", sizeof(a[N]));

  int size = SIZE;

  printf("sizeof(a) / sizeof(a[0])\n");
  printf("size of the array is: %d", size);
  return 0;
}