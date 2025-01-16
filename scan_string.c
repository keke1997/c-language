#include <stdio.h>

int main() {
  char input[20];
  printf("enter: ");
  fgets(input, sizeof(input), stdin);

  printf("Name: %s", input);
}