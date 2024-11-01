// Chapter 3 exercises

#include <stdio.h>

#define N 36

int read_line(char str[], int n);
void to_upper(char str[], int n);
char *to_upper_ptr(char *str);
char *censor(char *str);
void question7();

int main()
{
  // 2.
  char *p = "abc";
  // putchar(p); // error
  // putchar(*p); // a
  // puts(p); // abc
  // puts(*p); // error

  /////////////////////////////////////////////////
  // 3.
  // int i, j;
  // char s[20];
  // // input = 12abc34 56def78
  // scanf("%d%s%d", &i, s, &j);
  // printf("i = %d\n", i); // 12
  // printf("s = %s\n", s); // abc34
  // printf("j = %d\n", j); // 56

  /////////////////////////////////////////////////
  // 4.
  // char question4[N];
  // read_line(question4, N);

  // printf("question4: %s", question4);

  /////////////////////////////////////////////////
  // 5.
  // char test[N] = "shane";
  // to_upper(test, N);
  // printf("test = %s\n", test);

  // char test2[N] = "mcguire";
  // to_upper_ptr(test2);
  // printf("test2 = %s", test2);

  /////////////////////////////////////////////////
  // 6.
  // char food[N] = "food";
  // char fool[N] = "fool";

  // censor(food);
  // censor(fool);

  // printf("food: %s\n", food);
  // printf("fool: %s", fool);

  /////////////////////////////////////////////////
  // 7.
  question7();

  return 0;
}

int read_line(char str[], int n)
{
  char ch;
  int i = 0;

  while ((ch = getchar()) != '\n')
  {
    if (ch == 32)
    {
      break;
    }
    if (i < n)
    {
      str[i++] = ch;
    }
  }

  str[i] = '\0';
  return i;
}

void to_upper(char str[], int n)
{
  int i = 0;

  while (str[i] != '\0')
  {
    str[i] = str[i] - 32;
    i++;
  }
}

char *to_upper_ptr(char *str)
{
  char *p = str;

  while (*p)
  {
    *p = *p - 32;
    p++;
  }

  return str;
}

char *censor(char *str)
{
  char *p = str;
  while (*p)
  {
    if (*p == 'f' && *(p + 1) == 'o' && *(p + 2) == 'o')
    {
      *p = 'x';
      *(p + 1) = 'x';
      *(p + 2) = 'x';
      p += 3;
    }
    else
    {
      p++;
    }
  }

  return str;
}

void question7()
{
  char s[] = "Hsjodi", *p;

  for (p = &s[5]; p >= s; p--)
    --*p;

  puts(s);
}