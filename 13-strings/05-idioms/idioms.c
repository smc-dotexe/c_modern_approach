// Breaking down strlen and strcat
#include <stdio.h>

size_t stringLength(const char *s);
char *stringConcat(char *s1, const char *s2);

int main()
{
  char name[16] = "shane";
  char nick_name[16] = "drabs";
  size_t test = stringLength(name);

  printf("name length: %zu", test);

  stringConcat(nick_name, name);

  printf("name after concat: %s\n", nick_name);
  return 0;
}

size_t stringLength(const char *s)
{
  const char *p = s;

  while (*s)
  {
    s++;
  }

  return s - p;
}

char *stringConcat(char *s1, const char *s2)
{
  // v2
  char *p = s1;

  while (*p)
    p++;

  while (*p++ = *s2++)
    ;

  // original version
  // char *p;

  // p = s1;
  // while (*p != '\0')
  // {
  //   p++;
  // }

  // while (*s2 != '\0')
  // {
  //   *p = *s2;
  //   p++;
  //   s2++;
  // }

  // *p = '\0';

  return s1;
}