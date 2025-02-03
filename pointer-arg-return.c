// You can also return multiple values by utilising pointer
// Here is an example.

#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main()
{
    int total_seconds = 14258;
    int hours, minutes, seconds;

    split_time(total_seconds, &hours, &minutes, &seconds);
    printf("%d seconds => %d hours, %d minutes, %d seconds\n", total_seconds, hours, minutes, seconds);

    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 3600;
    total_sec %= 60;
    *min = total_sec / 60;
    *sec = total_sec % 60;
}