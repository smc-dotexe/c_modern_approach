/*
  Chapter 8 exericse 1.
  - Checks numbers for repeated digits
  - Outputs the digits that were repeated
  - Counts the number of times they were repeated
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

int main()
{
  Bool digit_seen[10] = {FALSE};
  int digit_repeated[10] = {FALSE};
  int digit_count[10] = {0};
  int digit;
  long int n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  int repeated_count = 0;
  while (n > 0)
  {
    digit = n % 10; // get the last digit

    if (digit_seen[digit])
    {
      digit_repeated[digit] = TRUE;
      digit_count[digit]++;
    }
    else
    {
      digit_seen[digit] = TRUE;
    }

    n /= 10; // remove the last digit from the number
  }

  Bool hasRepeated = FALSE;
  printf("Repeated digits: ");

  for (int i = 0; i < 10; i++)
  {
    if (digit_repeated[i])
    {
      printf("%d ", i);
      hasRepeated = TRUE;
    }
  }

  if (!hasRepeated)
  {
    printf("None \n");
  }

  printf("Digit Count\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", i);
  }
  printf("\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", digit_count[i]);
  }

  printf("\n");

  return 0;
}