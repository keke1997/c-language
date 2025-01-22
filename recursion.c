#include <stdio.h>

int factorial(int n)
{
    printf("Current value: %d\n", n);

    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n = 6;
    int result = factorial(n);

    printf("result is %d\n", result);

    return 0;
}