#include <stdio.h>

int main() {
  int upper_limit = 10;
  int break_point = 4;
  printf("\n================\n");
  printf("Break Example");
  printf("\n================\n");
  for (int number = 0; number < upper_limit; number++) {
    if (number == break_point) {
      break;
    }

    printf("Current Number: %d\n", number);
  }
  printf("\n================\n");
  printf("Continue Example");
  printf("\n================\n");
  for (int number = 0; number < upper_limit; number++) {
    if (number == break_point) {
      continue;
    }

    printf("Current Number: %d\n", number);
  }
  return 0;
}