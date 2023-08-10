#include <stdio.h>

/**
 * main - compute perimeter and area of a rectangle
 * Return: 0(success)
 */

int main(void)
{
	int height = 7, width = 5;
	int perimeter, area;

	/* calculate and print the perimeter */
	perimeter = (height * 2) + (width * 2);
	printf("Perimeter of the rectangle = %d inches.\n", perimeter);

	/* calculate and print the area */
	area = height * width;
	printf("Area of the rectangle = %d square inches.\n", area);
	
	return (0);
}
