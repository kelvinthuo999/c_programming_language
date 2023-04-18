#include <stdio.h>

int main()
{
	int i;

	printf("Even number	Odd number\n");
	for (i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
			printf("%d", i);
		else
			printf("%18d\n", i);
	}
	return (0);
}
