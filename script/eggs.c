#include <stdio.h>

int main()
{
	int eggs;

	printf("The number of eggs for the day: ");
	scanf("%i", &eggs);

	double dozen = (double) eggs / 12;
	
	printf("You have %f dozen eggs.\n", dozen);

	return 0;
}
