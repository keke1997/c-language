// Given an integer array, implement a bubble sort.
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

void bubble_sort(int array[], size_t size)
{
    // Implement here
    // Loop through the array multiple times
     bool swapped;
     
    for (size_t i = 0; i < size - 1; ++i)
    {
        swapped = false; // Flag to track if any swap happened in this pass
        
        // Inner loop to compare adjacent elements
        for (size_t j = 0; j < size - i - 1; ++j)
        {
            if (array[j] > array[j + 1])
            {
                // Swap elements if they are in the wrong order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }
        
        // If no elements were swapped, the array is already sorted
        if (!swapped)
        {
            break;
        }
    }

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