// Experimenting with C's string library

#include <stdio.h>
#include <string.h>

#define N 10

int main()
{
  char str1[N];
  char str2[N];

  strcpy(str1, "abc");
  printf("str1: %s\n", str1);

  printf("str1 length: %d\n", strlen(str1));

  strcpy(str2, "def");
  printf("str2: %s\n", str2);

  int before_cat = strcmp(str1, str2);
  printf("Before concat strcmp(str1, str2): %d\n", before_cat); // -3 - abc comes before def

  strcat(str1, str2);
  printf("concat str1 = %s\n", str1);
  printf("str1 length after: %d\n", strlen(str1));

  int compare_code = strcmp(str1, str2);
  printf("Compare code strcmp(str1, str2): %d\n", compare_code);

  int compare_code2 = strcmp(str2, str1);
  printf("Compare code2 strcmp(str2, str1): %d\n", compare_code2);

  if (strcmp(str1, str2) < 0)
  {
    printf("str1 comes before str2");
  }
  else
  {
    printf("str1 comes after str2");
  }

  // all upper-case letters are less than lower-case letters
  //  65-90 represent upper-case
  //  97-122 represent lower-case
  //  48-57 represent digits
  //  32 represents spacing

  /*
    91 - [   (left square bracket)
    92 - \   (backslash)
    93 - ]   (right square bracket)
    94 - ^   (caret/circumflex)
    95 - _   (underscore)
    96 - `   (backtick/grave accent)
  */

  return 0;
}