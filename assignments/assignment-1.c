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

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// Function to ask the user a yes or no question
int yes_or_no(const char *prompt) {
    char response;
    while (1) {
        printf("%s (y/n): ", prompt);
        scanf(" %c", &response); // Space before %c to consume whitespace
        response = tolower(response); // Normalize to lowercase
        if (response == 'y') {
            return 1; // Yes
        } else if (response == 'n') {
            return 0; // No
        } else {
            printf("Invalid input. Please enter 'y' or 'n'.\n");
        }
    }
}

// Function for the number guessing game
void guess(int N) {
    int number, guess, numberofguess;

    // Seed random number generator
    srand(time(NULL));

    do {
        // Initialize variables
        number = rand() % N + 1; // Generate a number between 1 and N
        numberofguess = 5;

        printf("\nI have generated a number between 1 and %d. Can you guess it?\n", N);

        // Game loop
        do {
            printf("Guess the number (%d guesses remaining): ", numberofguess);
            scanf("%d", &guess);

            if (guess > number) {
                printf("Wrong, it is lower.\n");
            } else if (guess < number) {
                printf("Wrong, it is higher.\n");
            } else {
                printf("Correct! The magic number is %d.\n", number);
                break;
            }

            numberofguess--;

            if (numberofguess == 0) {
                printf("You are out of guesses! The correct number was %d.\n", number);
                break;
            }

        } while (numberofguess > 0);

    } while (yes_or_no("Would you like to play again"));

    printf("Have a wonderful day!\n");
}

// Driver Code
int main() {
    int N = 100;

    // Start the game
    guess(N);

    return 0;
}

