#include <stdio.h>

int main(void) {
	/* variable declaration */
	char name[50];
	char month[20];
	int date;
	int year;
	char mobile_number[50];

	/* fetch input from user */
	printf("\t\t\t Welcome to data collection\n");
	printf("Enter your full name: ");
	scanf(" %[^\n]", name);
	printf("Enter the month of birth: ");
	scanf(" %[^\n]", month);
	printf("Enter the date of birth: ");
	scanf("%d", &date);
	printf("Enter year of birth: ");
	scanf("%d", &year);
	printf("Enter your mobile number: ");
	scanf(" %[^\n]", mobile_number);

	/* print the data */
	printf("\nHello %s.", name);
	printf("\nYou were born in %s %d, %d.", month, date, year);
	printf("\nYour phone number is %s.\n", mobile_number);

	return (0);
}
