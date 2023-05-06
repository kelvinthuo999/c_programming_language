#include <stdio.h>
/*
 * main - outputs my personal details to the standard output
 * Return: 0 on success
 */

int main()
{
	/* variable declaration and definition */
	char *name = "Kelvin";
	int id_number = 32106782;
	int date = 26;
	char *month = "July";
	int year = 1995;

	/* using printf to output the above information */

	printf("My name is %s.\nMy ID number is %d.\nI was born in %d-%s-%d.\n", name, id_number, date, month, year);

	return (0);
}
