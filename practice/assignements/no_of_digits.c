#include <stdio.h>

int main()
{
	int n;
	int count = 0;

	printf("Enter a number: \n");
	scanf("%d", &n);

	while (n != 0)
	{
		n = n/10;
		count++;
	}

	printf("\nThe number of digits in the integer is: %d\n", count);
	return 0;
}
