#include <stdio.h>

int main()
{

    int temperature_records[] = {26, 27, 30, 24, 20};
    temperature_records[2] = 28;

    for (int i = 0; i < sizeof(temperature_records) / sizeof(int); i++)
    {
        printf("Day %d Temperature: %d\n", i + 1, temperature_records[i]);
    }

    int age = 25;
    char c = 'i';
    short s = 21;
    // \n == Line Feed
    // \r\n == Carriage return line feed
    printf("Size of age: %llu\n", sizeof(age));
    printf("Size of c: %llu\n", sizeof(c));
    printf("Size of s: %llu\n", sizeof(s));
    printf("Size of array: %llu\n", sizeof(temperature_records));

    int arr_length = sizeof(temperature_records) / sizeof(int);
    printf("the length of the array is %d\n", arr_length);

    return 0;
}