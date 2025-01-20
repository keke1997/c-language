// Write a program that prompts the user to enter a number n, then prints all
// even squares between 1 and n.
//
// Example Program 
// 
// Enter the number: 100
// 4
// 16
// 36
// 64
// 100
#include <stdio.h>

int main(void)
{
    int n, i;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (i = 2; i * i <= n; i += 2) {
        printf("%d\n", i * i);
    }

    return 0;
}