/* Enter two integers, then calculates and displays their greatest common divisor */

#include <stdio.h>

int gcd(int a, int b)
{
  while (b > 0)
  {
    int temp = b;
    printf("temp = %i\n", temp);
    b = a % b;
    printf("b = %i\n", b);
    a = temp;
    printf("a = %i\n", a);
  }

  return a;
}

int main()
{
  int num1, num2, divisor, remainder;

  printf("Enter two integers: ");
  scanf("%i, %i", &num1, &num2);

  int result = gcd(num1, num2);

  printf("GCD of %d and %d is %d\n", num1, num2, result);
  return 0;
}
