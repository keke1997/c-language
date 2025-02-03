#include <stdio.h>

int count = 0;

void greet()
{
    static int times = 0;
    times++;

    printf("This function use static, run %d times.\n", times);
}

void greet_with_extern()
{
    count++;

    printf("This function use external count: %d\n", count);
}

void another_greeting()
{
    count++;

    printf("This function also use external count: %d\n", count);
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        greet();
        greet_with_extern();
        another_greeting();
    }
    return 0;
}