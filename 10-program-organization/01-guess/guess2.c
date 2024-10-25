/* Asks user to guess a hidden number */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

void initialize_number_generator();
int new_secret_number();
void read_guesses(int secret_number);

int main()
{
  char command;
  int secret_number;

  printf("Guess a number between 1 and %d.\n\n", MAX_NUMBER);

  initialize_number_generator();

  do
  {
    secret_number = new_secret_number();
    printf("A new number has been chosen.\n");
    read_guesses(secret_number);
    printf("Play again? (y/n) ");
    scanf(" %c", &command);
    printf("\n");
  } while (command == 'y' || command == 'Y');

  return 0;
}

// Initializes the random number generator using the time of day
void initialize_number_generator()
{
  srand((unsigned)time(NULL));
}

// Randomly selects a number between 1 and MAX_NUMBER and stores it in secret_number
int new_secret_number()
{
  return rand() % MAX_NUMBER + 1;
}

// Reapeatedly reads user guesses and returns the appropriate statement
void read_guesses(int secret_number)
{
  int guess, num_guesses = 0;

  for (;;)
  {
    num_guesses++;
    printf("Enter guess: ");
    scanf("%d", &guess);
    if (guess == secret_number)
    {
      printf("You won in %d guesses!\n\n", num_guesses);
      return;
    }
    else if (guess < secret_number)
    {
      printf("Too low; try again.\n");
    }
    else
    {
      printf("Too high; try again.\n");
    }
  }
}