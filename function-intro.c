#include <stdio.h>

// Function Declaration

// Compare two number and return the greater number.
int max(int a, int b);

void print_help_message()
{
    printf("Welcome from the program.\n");
}

int main()
{
    print_help_message();
    int first_number = 1;
    int second_number = 6;

    // first_number, second_number => arguments
    int greater_number = max(first_number, second_number);

    printf("Greater number is : %d", greater_number);

    return 0;
}
//Function Definitions
// a,b => function parameters
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }

    return b;
}
