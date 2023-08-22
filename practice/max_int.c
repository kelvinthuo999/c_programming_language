#include <stdio.h>
#include <stdlib.h>
/*
 * getInt: fetch user integer input
 * @prompt: prompt to be displayed
 * @value: integer to be fetched
 */
int getInt(char *prompt, int *value)
{
	printf("%s", prompt);
	scanf("%d", value);
}

/*
 * main: fetch int input from user and determine max value
 * Return: 0(success)
 */

int main(void)
{
	int value_1, value_2, value_3, result, max;

	getInt("Enter the first integer: ", &value_1);
	getInt("Enter the second integer: ", &value_2);
	getInt("Enter the third integer: ", &value_3);

	printf("%d \t %d \t %d\n", value_1, value_2, value_3);

	result=(value_1 + value_2 + abs(value_1 - value_2))/2;
	max=(result + value_3 + abs(result-value_3))/2;
	printf("Maximum value of three integers: %d.\n", max);

	return (0);
}
