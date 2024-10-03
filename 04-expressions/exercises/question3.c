/* Reverse the digits of a 2 digit number from the user input */

#include <stdio.h>

int main()
{
  int i, first_digit, second_digit, reversed_number;
  printf("Enter a two digit number: ");
  scanf("%d", &i);

  first_digit = i / 10;
  second_digit = i % 10;

  reversed_number = second_digit * 10 + first_digit;

  printf("%d\n", reversed_number);
  return 0;
}