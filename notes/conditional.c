#include <stdio.h>

int main()
{
	int x;

	x = sizeof(int);
	printf("an int has %d.\n", x);
	printf("%s\n", (x == 2) ? "This is a 32-bit machine" : "This is a 64-bit machine");

	return (0);
}
