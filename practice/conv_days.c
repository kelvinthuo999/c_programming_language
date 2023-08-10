#include <stdio.h>

/**
 * main - convert specified days into years, weeks, and days.
 * Return: 0(success)
 */

int main(void)
{
	int number_of_days = 1329;
	int days, weeks, week_remainder, years, year_remainder;

	/* convert to years and print the number of years */
	years = number_of_days / 365;
	year_remainder = number_of_days % 365;
	printf("Years: %d\n", years);

	/* convert to months and print the number of weeks */
	weeks = year_remainder / 7;
	week_remainder = year_remainder % 7;
	printf("Weeks: %d\n", weeks);

	/* convert to days and print the number of days */
	days = week_remainder;
	printf("Days: %d\n", days);

	return (0);
}
