#include <stdio.h>

int main()
{
	short int x;
	long int y;
	printf("Size of short int is %ld.\n", sizeof(x));
	printf("Size of long int is %ld.\n", sizeof(y));
	printf("Size of long double is %ld.\n", sizeof(long double));

	return (0);
}
