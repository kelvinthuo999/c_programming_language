#include <stdio.h>

/**
 * getInt - get integer input from user
 */

void getInt(int *input)
{
	printf("Input the first integer: ");
	scanf("%d", input);
}

/**
 * main - calculates the sum of two integers
 * Return: 0(success)
 */

int main(void)
{
	int a, b;

	getInt(&a);
	getInt(&b);

	printf("Sum of the above two integers = %d\n", a + b);

	return (0);
}
