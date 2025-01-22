#include <stdio.h>

int main()
{

    int empty_array[10] = {0};

    for (int i = 0; i < 10; i++)
    {
        printf("Data for element %d: %d\n", i + 1, empty_array[i]);
    }
}