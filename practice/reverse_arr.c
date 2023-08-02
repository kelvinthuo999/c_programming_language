#include <stdio.h>

/**
 * main - print elements of an array in reverse
 * Return: 0(success)
 */

int main(void)
{
	char letter[] = {"Kelvin"};
	int i, len;

	len = sizeof(letter);
	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", letter[i]);
	}

	printf("\n");

	return (0);
}
