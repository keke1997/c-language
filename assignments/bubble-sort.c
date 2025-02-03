// Given an integer array, implement a bubble sort.
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

void bubble_sort(int array[], size_t size)
{
    // Implement here
}

void test_bubble_sort();

int main()
{
    test_bubble_sort();
}

void test_bubble_sort()
{
    {
        int given[] = {3, 6, 3, 1, 2, 5};
        int desired[] = {1, 2, 3, 3, 5, 6};
        size_t size = sizeof(given) / sizeof(given[0]);
        bubble_sort(given, size);

        for (int i = 0; i < size; ++i)
        {
            if (given[i] != desired[i])
            {
                printf("Test failed.\n");
                printf("given[%d] = %d, desired[%d] = %d\n", i, given[i], i, desired[i]);
                return;
            }
        }

        printf("Test passed.\n");
    }
}