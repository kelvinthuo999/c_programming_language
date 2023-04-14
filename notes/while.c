#include <stdio.h>

int main()
{
	char letter = ' ';

	printf("Enter a letter: ");
	while (letter != 'K')
	{
		scanf("%c", &letter);
		printf("%c", letter);
	}
	printf("Goodbye\n");

	return (0);
}
