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
	char answer[10];
	char *pta = answer;

	printf("\t\t\t\t\tWelcome to the Authentication Page\n");
	printf("\nLogin/Sign Up? \n");
	fgets(answer, sizeof(answer), stdin);

	/* convert the input to uppercase */
	for (idx = 0; idx < strlen(answer); idx++)
	{
		answer[idx] = toupper(answer[idx]);
	}

	printf("%s", answer);
	
	/* if statement to check input */
	return (0);
}
