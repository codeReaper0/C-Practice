#include <stdio.h>
#include <math.h>
#include <bool.h>

int main()
{
	int input;
	bool isPrime = true;

	printf("Enter number to check if Prime: ");
	scanf("%d", &input);

	for (int i = input; i > 1; i--)
	{
		if (input % i == 0)
		{
			printf("%d is a Prime number\n", input);
			break;
		}
		else
		{
			printf("%d is not a Prime number\n", input);
			break;
		}
	}

	return 0;
}