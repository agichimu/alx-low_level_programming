#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
    int days_in_feb = 28;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        days_in_feb = 29;

    if (month >= 2 && day > days_in_feb)
    {
        day--;
    }

    int day_of_year = 0;
    switch (month)
    {
    case 12:
        day_of_year += 30; 
    case 11:
        day_of_year += 31; 
    case 10:
        day_of_year += 30;
    case 9:
        day_of_year += 31; 
    case 8:
        day_of_year += 31; 
    case 7:
        day_of_year += 30; 
    case 6:
        day_of_year += 31; 
    case 5:
        day_of_year += 30; 
    case 4:
        day_of_year += 31;
    case 3:
        day_of_year += days_in_feb; 
    case 2:
        day_of_year += 31;
    }

    day_of_year += day;

    printf("Day of the year: %d\n", day_of_year);
    printf("Remaining days: %d\n", 365 + (days_in_feb == 29 ? 1 : 0) - day_of_year);
}
