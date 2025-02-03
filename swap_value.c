#include <stdio.h>

void swap(int *a, int *b)
{
    printf("before\n");
    printf("value in a: %d, value in b: %d\n", *a, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("after\n");
    printf("value in a: %d, value in b: %d\n", *a, *b);
}

int main()
{
    int first_num = 10, second_num = 20;

    swap(&first_num, &second_num);

    printf("value of a and b : %d, %d\n", first_num, second_num);
    return 0;
}
