#include <stdio.h>

void minMax(int a[], int len, int *min, int *max);

int main(void)
{
	int a[] = {48, 49, 30, 79, 57, 4, 98, 47};
	int min, max, len;

	len = sizeof(a)/sizeof(a[0]);
	minMax(a, len, &min, &max);

	printf("The length of the array is %d.\n", len);
	printf("The min value is %d, while the max value is %d.\n.", min, max);

	return (0);
}

void minMax(int a[], int len, int *min, int *max)
{
	*min = *max = a[0];
	int i;

	for (i = 0; i < len; i++)
	{
		if (a[i] < *min)
		{
			*min = a[i];
		}
		if (a[i] > *max)
		{
			*max = a[i];
		}
	}
}
