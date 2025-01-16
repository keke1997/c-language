#include <stdio.h>

// read decimal input until the user enter 0 or negative numbers.
int main() {

  int i;

  do {
    printf("Enter the number: ");
    scanf("%d", &i);
    printf("You entered: %d\n", i);
  } while (i > 0);

  printf("Stopped");
}