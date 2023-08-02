#include <stdio.h>

/**
 * getString - fetch string input from user
 * @prompt: Message passed to the user
 * @input: pointer to the array
 * @size: size of the array
 */

void getString(char *prompt, char *input, int size)
{
	printf("%s", prompt);
	scanf(" %[^\n]", input);
}

/**
 * main - fetch and print personal data
 * Return: 0(success)
 */

int main(void) {
	/* variable declaration */
	char name[50];
	char month[20];
	int date;
	int year;
	char mobile_number[50];

	/* fetch input from user */
	printf("\t\t\t Welcome to data collection\n");
	
	getString("Enter your full name: ", name, sizeof(name));
	getString("Enter date of birth.\nMonth: ", month, sizeof(month));
	printf("Date of birth: ");
	scanf("%d", &date);
	printf("Year of birth: ");
	scanf("%d", &year);
	getString("Enter your mobile number: ", mobile_number, sizeof(mobile_number));

	/* print the data */
	printf("\nHello %s.", name);
	printf("\nYou were born in %s %d, %d.", month, date, year);
	printf("\nYour phone number is %s.\n", mobile_number);

	return (0);
}
