#include <stdio.h>

int length(char *s);
void print_rev(char *s);
int main(void)
{
	int len;
	char *s = "Hello";

	print_rev(s);
	len = length(s);
	printf("\n%d", len);
	printf("\n");

	return (0);
}
void print_rev(char *s)
{
	if (*s == '\0')
		return;
	else
	{
		print_rev(s + 1);
		printf("%c", *s);
	}
}
int length(char *s)
{
	if (*s == '\0')
		return (0);
	else
	{
		return (1 + length(s + 1));
	}
}
