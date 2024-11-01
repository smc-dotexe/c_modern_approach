// Experimenting with macros

#include <stdio.h>

#define GENERIC_MAX(type)         \
  type type##_max(type x, type y) \
  {                               \
    return x > y ? x : y;         \
  }

GENERIC_MAX(int);
GENERIC_MAX(double);

#define SCALE(x) (printf("%d\n", (x) * 10)); // always good practice to wrap parentheses around parameters

// commas in macros
#define ECHO(s) (gets(s), puts(s));

#define TRUE 1
#define FALSE 0

int main()
{
  int a = 5, b = 10;
  double x = 5.5, y = 10.5;

  printf("Max of %d and %d is %d\n", a, b, int_max(a, b));
  printf("Max of %.1f and %.1f is %.1f\n", x, y, double_max(x, y));

  SCALE(10);

  // predefined macros
  printf("%d\n", __LINE__); // line number
  printf("date: %s", __DATE__);

  // conditional compilation
  // good for debugging
#if TRUE
  printf("True will appeared\n");
#endif

#if FALSE
  printf("False won't appear\n");
#endif

// also good for conditionally running code depending on os
#if defined(WINDOWS)
  printf("running on windows\n");
#endif

// defining a macro if it hasn't been defined
#ifndef BUFFER_SIZE
#define BUFFERSIZE 256
#endif

// check if compiler recognizes C standard
#if __STDC__
  printf("run standard\n");
#else
  printf("run classic\n");
#endif

  return 0;
}