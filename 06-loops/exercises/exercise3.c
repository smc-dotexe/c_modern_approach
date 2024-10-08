/* Enter a fraction then it converts the fraction to it's lowest terms */

#include <stdio.h>

int gcd(int a, int b)
{
  while (b > 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }

  return a;
}

int main()
{
  int numerator, denominator, divisor;

  printf("Enter a fraction: ");
  scanf("%i/%i", &numerator, &denominator);

  printf("fraction %i/%i", numerator, denominator);

  divisor = gcd(numerator, denominator);

  numerator = numerator / divisor;
  denominator = denominator / divisor;

  printf("Fraction in lowest terms: %i/%i", numerator, denominator);

  return 0;
}