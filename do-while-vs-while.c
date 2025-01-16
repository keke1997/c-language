#include <stdio.h>

int main() {
  int i = 5, j = 5;

  printf("Do While Loop:\n");
  do {
    printf("%d\n", i);
    i++;
  } while (i < 5);

  printf("While Loop:\n");
  while (j < 5) {
    printf("%d\n", j);
    j++;
  }
}