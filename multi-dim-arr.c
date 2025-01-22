#include <stdio.h>

int main()
{
    int scores[3][4] = {{3, 5, 2, 4}, {2, 3, 6, 1}, {6, 3, 1, 7}};

    printf("Score of third game for first person: %d\n", scores[0][2]);
}