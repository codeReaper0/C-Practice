#include <math.h>
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int input);

int main()
{
	int input;

	printf("Enter number to check if Prime: ");
	scanf("%d", &input);

	for (int i = input; i > 1; i--)
	{
		bool prime = isPrime(i);
		if (prime)
		{
			printf("%d is Prime!\n", i);
		}
	}

	return 0;
}

bool isPrime(int input)
{
	for (int i = sqrt(input); i > 1; i--)
	{
		if (input % i == 0)
		{
			return false;
		}
	}
	return true;
}
