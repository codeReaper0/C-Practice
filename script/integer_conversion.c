#include <stdio.h>

int main()
{
	int integer;
	printf("Please enter an integer between 0 - 127: ");
	scanf("%i", &integer);
	printf("%c\n", integer);
	return 0;
}
