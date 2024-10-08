/* Enter multiple numbers. Enter 0 to finish entering numbers. The program displays the largest number that has been entered */

#include <stdio.h>

int main()
{
  float n, i = 0;
  do
  {
    printf("Enter a number: ");
    scanf("%f", &n);
    if (n > i)
    {
      i = n;
    }
  } while (n != 0 && n > 0);

  printf("The largest number entered was %f", i);

  return 0;
}