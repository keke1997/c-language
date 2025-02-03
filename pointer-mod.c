#include <stdio.h>

int main()
{
    int a = 0;
    int b = a;
    int c = a;

    b += 5;
    c += 10;

    printf("value of a, b and c: %d, %d, %d\n", a, b, c);

    // with pointer

    int *ptr_a = &a;
    int *ptr_b = ptr_a;
    int *ptr_c = ptr_a;

    *ptr_b += 5;
    *ptr_c += 10;

    printf("value of a, b, and c: %d, %d, %d\n", *ptr_a, *ptr_b, *ptr_c);

    return 0;
}