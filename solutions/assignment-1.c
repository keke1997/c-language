// Write a number guessing game, which will generate an integer number between 1
// and 100, and let the user to guess the number within 5 turns. After each
// guess, the program will tell if the number is higher or lower. If the user is
// out of guesses, the program will show the number generated.
// After the game, the program will prompt the user to play again or not. If 'y'
// is typed, the game will restart, else the program will terminate.
//
// For example, suppose the program generate random number of 4
//
// Program Execution Example:
// Guess the number (5 guesses remaining): 10
// Wrong, it is lower.
// Guess the number (4 guesses remaining): 5
// Wrong, it is lower.
// Guess the number (3 guesses remaining): 2
// Wrong, it is higher.
// Guess the number (2 guesses remaining): 4
// Correct! The magic number is 4.
// Would you like to play again? n
// Have a wonderful day!

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX_LIMIT 100
#define MAX_TRY 5

// Function to generate random number between 1 and limit
int generate_random_number(int limit)
{
  srand(time(NULL));
  return (rand() % limit) + 1;
}

// Function to ask the user a yes or no question
bool confirm_retry()
{
  char response;
  while (true)
  {
    printf("Would you like to play again?(y/n): ");
    scanf(" %c", &response);
    response = tolower(response); // Normalize to lowercase

    switch (response)
    {
    case 'y':
      return true;
    case 'n':
      return false;
    default:
      printf("Invalid input. Please enter 'y' or 'n'.\n");
    }
  }
}

// Function for the number guessing game
void guess()
{
  int target_number, guessed_number, number_of_guess;
  do
  {
    // Initialize variables
    target_number = generate_random_number(MAX_LIMIT);
    number_of_guess = MAX_TRY;

    printf("\nI have generated a number between 1 and 100. Can you guess it?\n");

    // Game loop
    while (number_of_guess > 0)
    {
      printf("Guess the number (%d guesses remaining): ", number_of_guess);
      scanf("%d", &guessed_number);

      if (guessed_number > target_number)
      {
        printf("Wrong, it is lower.\n");
      }
      else if (guessed_number < target_number)
      {
        printf("Wrong, it is higher.\n");
      }
      else
      {
        printf("Correct! The magic number is %d.\n", target_number);
        break;
      }
      number_of_guess--;

      if (number_of_guess <= 0)
      {
        printf("You are out of guesses! The correct number was %d.\n", target_number);
      }
    }
  } while (confirm_retry());

  printf("Have a wonderful day!\n");
}

// Driver Code
int main()
{

  // Start the game
  guess();

  return 0;
}
