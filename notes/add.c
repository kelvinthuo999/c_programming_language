#include <stdio.h>

int add_int(int a, int b)
{
	int result;

	result = a + b;

	return (result);
}

int main()
{
	int num1;
	int num2;
	int sum;

	printf("Enter first number: ");
	scanf("%d", &num1);

	printf("Enter second number: ");
	scanf("%d", &num2);

	sum = add_int(num1, num2);

	printf("The sum of %d and %d is %d.\n", num1, num2, sum);

	return (0);
}
