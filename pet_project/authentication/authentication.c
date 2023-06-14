#include <stdio.h>
#include <ctype.h>
#include <string.h>
/* #include "main.h" */

/**
 * main - Authenticate a user.
 * Return: 0(success)
 */
int main(void)
{
	int idx;
	char answer[50];
	char *pta = answer;

	printf("\t\t\t\t\tWelcome to the Authentication Page\n");
	printf("\nLogin/Sign Up? ");
	scanf("%s", answer);

	/* convert the input to uppercase */
	for (idx = 0; idx < strlen(answer); idx++)
	{
		answer[idx] = toupper(answer[idx]);
	}
	
	/* if statement to check input */
	
	if (strcmp(answer, "LOGIN") == 0)
	{
		printf("\t\t\t\tWelcome to the Login page\n");
		printf("\nEnter username: ");
		printf("\nEnter password: ");
	}
	if (strcmp(answer, "SIGN UP") == 0)
	/*else if(strcmp(answer, "SIGN UP") == 0)*/
	{
		printf("\t\t\t\t Welcome to the sign up page\n");
		printf("\nEnter username: ");
		printf("\nEnter password: ");
	}
	return (0);
}
