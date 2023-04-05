#include <stdio.h>

int main(void)
{
	int age = 26;
	int *ptr = &age;

	printf("The value in the initial variable is %d.\n", age);
	printf("The value in the pointer variable is %p.\n", ptr);
	printf("The memory address of the age variable is %p.\n", &age);
	printf("The memory address of the pointer variable is %p.\n",&ptr);
	printf("The size of the pointer is %lu.\n", sizeof(ptr));

	return (0);
}
