#include <stdio.h>

// Type cast or type conversion.
int main() {
  char first_number = 126;
  char second_number = 34;

  int result = first_number + second_number;

  printf("The Answer is: %d\n", result);

  int numerator = 10;
  int denominator = 3;

  double division_result = (double)numerator / denominator;

  printf("%d divide by %d is %lf.\n", numerator, denominator, division_result);
}