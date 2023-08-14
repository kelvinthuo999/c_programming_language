#include <stdio.h>

/**
 * getInt - fetch integer input from the user
 */

void getInt(char *prompt, int *value)
{
	printf("%s: ", prompt);
	scanf("%d", value);
}

/**
 * main - Calculate the product of two integers
 * Return: 0(success)
 */

int main(void)
{
	int a, b, product;

	/* fetch input */
	getInt("Enter first integer", &a);
	getInt("Enter second integer", &b);

	product = a * b;
	printf("Product of the above two integers = %d.\n", product);
	
	return (0);
}
