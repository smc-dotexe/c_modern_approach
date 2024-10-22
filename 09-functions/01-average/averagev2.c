/*
  Computes pairwise averages of three numbers
  - Intro to function declaration
*/

#include <stdio.h>

float average(float a, float b);

int main()
{
  float x, y, z;

  printf("Enter three numbers: ");
  scanf("%f%f%f", &x, &y, &z);

  printf("The average of %g and %g: %g\n", x, y, average(x, y));
  printf("The average of %g and %g: %g\n", y, z, average(y, z));
  printf("The average of %g and %g: %g\n", x, z, average(x, z));

  return 0;
}

float average(float a, float b)
{
  return (a + b) / 2;
}
