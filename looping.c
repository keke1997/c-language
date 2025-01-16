#include <stdio.h>

int main() {

  int target = 105;
  int divisor = 2;

  while (target > 0) {
    int remainder = target % divisor;
    target = target / divisor;

    printf("%d", remainder);
  }
}