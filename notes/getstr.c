#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];

	printf("Enter your name: ");
	fgets(str, 40, stdin);
	printf("Your name is: %s", str);

	return (0);
}
