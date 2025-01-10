// notepad for learning about unions

#include <stdio.h>
#include <string.h>

#define TITLE_LEN 60
#define AUTHOR_LEN 60
#define DESIGN_LEN 60

#define INT_KIND 0
#define FLOAT_KIND 1

int main()
{
  // using unions to save space in structs
  struct catalog_item
  {
    int stock_number;
    float price;
    int item_type;
    union
    {
      struct
      {
        char title[TITLE_LEN + 1];
        char author[AUTHOR_LEN + 1];
        int num_pages;
      } book;
      struct
      {
        char design[DESIGN_LEN + 1];
      } mug;
      struct
      {
        char design[DESIGN_LEN + 1];
        int colors;
        int sizes;
      } shirt;
    };
  } item;

  // Initialize the struct for a book
  item.stock_number = 12345;
  item.price = 19.99;
  item.item_type = 1;
  strcpy(item.book.title, "C Programming");
  strcpy(item.book.author, "Dennis Ritchie");
  item.book.num_pages = 300;

  printf("Stock Number: %d\n", item.stock_number);
  printf("Price: $%.2f\n", item.price);
  printf("Item Type: %d\n", item.item_type);
  printf("Book Title: %s\n", item.book.title);
  printf("Author: %s\n", item.book.author);
  printf("Number of Pages: %d\n", item.book.num_pages);

  // Using unions to store mixed data types.
  // For example, a number array that can store ints and floats.

  typedef union
  {
    int i;
    float f;
  } Number;

  Number number_array[1000];

  number_array[0].i = 0;
  number_array[1].f = 12.231;

  // Use 'tag' fields to remember the last assignment that occured
  typedef struct
  {
    int kind; // tag field
    union
    {
      int i;
      float f;
    } u;
  } NumberWithHistory;

  NumberWithHistory num_history;
  num_history.kind = INT_KIND; // you have to ensure this gets changed to the kind that gets assigned, each time.
  num_history.u.i = 1;

  // This is probably where Enumerations come in

  return 0;
}