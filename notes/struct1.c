#include <stdio.h>

int main()
{
	struct cars
	{
		char model[10];
		int engine_power;
		int year;
	}group;

	printf("Enter the car you want to hire: ");
	scanf("%s", &group.model);
	printf("Enter the desired engine horse power: ");
	scanf("%d", &group.engine_power);
	printf("Enter the year of manufacture: ");
	scanf("%d", &group.year);

	printf("Here is what you desire: \n");
	printf("The car model is %s.\n", group.model);
	printf("The engine power is %d.\n", group.engine_power);
	printf("The year of manufacture is %d.\n", group.year);

	return (0);
}
