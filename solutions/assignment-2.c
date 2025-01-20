// Write a program that prompts the user to enter a number n, then prints all
// even squares between 1 and n.
//
// Example Program
//
// Enter the number: 100
// 4
// 16
// 36
// 64
// 100
#include <stdio.h>

int main() {
  int n, i = 2;

  printf("\nEnter a number: ");
  scanf("%d", &n);

  while (i * i <= n) {
    printf("%d\n", i * i);
    i += 2;
  }

  return 0;
}