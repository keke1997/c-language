// Write the following function:
// day_of_year is an integer between 1 and 366, specifying a particular day
// within the year designated by year. month and day point to variables in which
// the function will store the equivalent month (1-12)
// and day within the month (1-31)
// Please refer to `pointer-arg-return.c` file for returning multiple values.
#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day) {
    // Implementation goes here
    // Number of days in each month (non-leap year by default)
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Check if it's a leap year
    int is_leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    if (is_leap) {
        days_in_month[1] = 29; // February has 29 days in a leap year
    }
    
    // Determine the month and day
    int current_month = 0;
    while (day_of_year > days_in_month[current_month]) {
        day_of_year -= days_in_month[current_month];
        current_month++;
    }
    
    // Store results in pointers
    *month = current_month + 1; // Convert 0-based index to 1-based month
    *day = day_of_year;
}

int main() {
    int year = 2024;
    int day_of_year = 60; // Example day of the year
    int month, day;
    
    split_date(day_of_year, year, &month, &day);
    
    printf("Day %d of year %d is: %02d/%02d\n", day_of_year, year, month, day);
    return 0;
}
