#include <stdio.h>

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if ((alpha == 'e') || (alpha == 'q'))
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
