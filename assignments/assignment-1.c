// Write a program that finds the largest in a series of numbers entered by the
// user. The program must prompt the user to enter numbers one by one. When
// the user enters O or a negative number, the program must display the largest
// non-negative number entered.
// Notice that the numbers aren't necessarily integers.
//
// Example Program
//
// Enter a number: 60
// Enter a number: 38.3
// Enter a number: 4.89
// Enter a number: 100.62
// Enter a number: 75.2295
// Enter a number: 0
// The largest number entered was l00.62
#include<stdio.h>

int main()
{
    double number = 0, largest = 0; 
    for(;;)
    {
        printf("Enter the number:");
        scanf("%lf", &number);
       
        if(number <= 0)
           break; 
 
        if(number > largest)
           largest = number; 
    }
    printf("\nThe largest number is %g\n", largest);
   
    return 0;
}