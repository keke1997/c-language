#include <stdio.h>

int main() {

  double array[] = {0.0, 1.6, 3.3, 2.6};

  int array_length = sizeof(array) / sizeof(array[0]);

  printf("The length of the array is: %d\n", array_length);

  return 0;
}