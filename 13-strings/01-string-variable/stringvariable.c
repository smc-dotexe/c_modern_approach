// Experimenting with string variables

#include <stdio.h>

int main()
{
  // the 8th character (or last character after the actual string) is always null (\0)
  char date[8] = "June 18";

  // \0 or null will be filled if the string variable is too short for the declaration
  char date2[9] = "June 18";

  // date3 will not have a null terminator. this will lead to unexpected results/memory errors/crashes
  char date3[7] = "June 18";

  // legal to declare a string variable like this. the compiler will automatically set a null terminator at the end of the array
  char date4[] = "June 18";

  int test = getchar(); // get the character code of the input. ex: a = 97
  printf("%d\n", test);

  char str[] = "Hello world";
  printf("Value of str: %s\n", str);

  // printing first of 4 chars of a string
  printf("%.6s\n", str); // output = Hello

  puts(str); // ouput = Hello world\n

  char testscanf[5];
  scanf("%s", testscanf);
  puts(testscanf);

  char *string_literal = "I'm a string literal"; // cannot modify a string literal
  printf(string_literal);
  return 0;
}