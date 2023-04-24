#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char type1[] = {'T', 'Y', 'P', 'E', '1', '\0'};
	char type2[] = {"TYPE2"};
	char *type3 = "TYPE3";

	/* printing out the different initialized strings */
	for (i = 0; type1[i]; i++)
		printf("%c", type1[i]);
	printf("\n");
	printf("%s\n", type2);
	printf("%s\n", type3);

	return (0);
}
