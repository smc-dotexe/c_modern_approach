/* Reverse the digits of a 3 digit number from the user input */

#include <stdio.h>

int main()
{
  int i, first_digit, second_digit, third_digit, reversed_number;
  printf("Enter a three digit number: ");
  scanf("%d", &i);

  first_digit = i / 100;
  second_digit = (i / 10) % 10;
  third_digit = i % 10;

  printf("first digit %d, second digit %d, third digit %d\n", first_digit, second_digit, third_digit);

  reversed_number = (third_digit * 100) + (second_digit * 10) + first_digit;

  printf("%d\n", reversed_number);
  return 0;
}