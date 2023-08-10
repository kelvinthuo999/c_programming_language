#include <stdio.h>

/**
 * main - calculate the perimeter and area of a circle
 * Return: 0(success)
 */

int main(void)
{
	float radius = 6.0, perimeter, area;

	/* calc and print the perimeter */
	perimeter = 3.14 * (radius * 2);
	printf("Perimeter of the Circle = %.2f.\n", perimeter);

	/* calculate and print the area */
	area = 3.14 * radius * radius;
	printf("Area of the Circle = %.2f.\n", area);

	return (0);
}
