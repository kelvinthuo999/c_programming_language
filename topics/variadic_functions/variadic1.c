#include <stdarg.h>
#include <stdio.h>

int sum(int count, ...);

int main()
{
	printf("sum is %d.\n", sum(4, 2, 3, 4, 5));
	return (0);
}

int sum(int count, ...)
{
	va_list args;

	va_start(args, count);

	int i, sum = 0;

	for (i = 0; i < count; i++)
	{
		int x = va_arg(args, int);
		sum += x;
	}
	va_end(args);

	return (sum);
}
