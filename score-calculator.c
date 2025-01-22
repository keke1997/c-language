#include <stdio.h>

int main() {
  int person, subject;
  printf("Enter the number of people: ");

  scanf("%d", &person);

  printf("Enter the number of subjects: ");

  scanf("%d", &subject);

  double scores[person][subject];

  for (int i = 0; i < person; i++) {
    for (int j = 0; j < subject; j++) {

      printf("Enter score for person %d subject %d: ", i + 1, j + 1);
      scanf("%lf", &scores[i][j]);
    }
  }

  for (int i = 0; i < person; i++) {
    printf("For person %d:\n", i);

    for (int j = 0; j < subject; j++) {
      printf("Subject %d: %lf\n", j, scores[i][j]);
    }
  }

  return 0;
}