// notepad for learning enumerations

#include <stdio.h>

int main()
{
  enum suit
  {
    DIAMONDS,
    CLUBS,
    HEARTS,
    SPADES
  };

  typedef enum
  {
    DIAMONDS,
    CLUBS,
    HEARTS,
    SPADES
  } Suit;

  Suit s1, s2;

  typedef enum
  {
    FALSE,
    TRUE
  } Bool;

  // with using typedef, you don't need to declare it as an 'enum'
  Bool hasHappened;
  hasHappened = TRUE;

  typedef struct
  {
    enum
    {
      INT_KIND,
      FLOAT_KIND
    } kind;
    union
    {
      int i;
      float f;
    } u;
  } Number;

  Number stock_number;
  stock_number.kind = INT_KIND;
  stock_number.u.i = 10;

  return 0;
}