// Experimenting with structures

#include <stdio.h>

int main()
{
  struct
  {
    int number;
    char name[20];
    int on_hand;
  } part1, part2;

  // initializing members
  struct
  {
    char name[20];
    char sex;
    int number;
  } testEmployee1 = {"shane", 'm', 1},
    testEmployee2 = {"sarah", 'f', 2};

  printf("Employee %d's name: %s", testEmployee1.number, testEmployee1.name);

  // structure tags
  struct Employee
  {
    char name[20];
    char sex;
    int number;
  };

  struct Employee employee1, employee2;

  // using typedef to declare a struct
  typedef struct
  {
    int number;
    char name[20];
    int on_hand;
  } Part;

  Part testPart1, testPart2;

  // initializing an array of structures
  struct dialing_code
  {
    char *country;
    int code;
  };

  const struct dialing_code country_codes[] =
      {
          {"Argentina", 54},
          {"Bangladesh", 880},
          {"Brazil", 55},
          {"China", 86}};

    return 0;
}