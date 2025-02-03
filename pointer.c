#include <stdio.h>

int main()
{
    int a = 0;
    int b = 10;
    printf("value of a: %d\n", a);
    printf("value of b: %d\n", b);

    int *ptr_a = &a;
    int *ptr_b = &b;
    printf("memory address of a: %p\n", ptr_a);
    printf("memory address of a: %p\n", ptr_b);

    int value_a = *ptr_a;

    printf("Pointer a store: %d\n", value_a);

    return 0;
}