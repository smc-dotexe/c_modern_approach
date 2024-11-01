// Writing our own string functions

#include <stdio.h>

#define MAX_LENGTH 12

int read_line(char str[], int n);

int main()
{
  char new_string[MAX_LENGTH];
  int test = read_line(new_string, MAX_LENGTH);

  printf(new_string);
  return 0;
}

int read_line(char str[], int n)
{
  char ch;
  int i = 0;

  while ((ch = getchar()) != '\n')
  {
    if (i < n)
    {
      str[i++] = ch;
    }
  }

  str[i] = '\0';
  return i;
}