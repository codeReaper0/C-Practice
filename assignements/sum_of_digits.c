#include <stdio.h>

// Sum of digits in a number
int main()
{
	int n, t, remainder;
	int sum = 0;

	printf("Enter an integer: \n");
	scanf("%d", &n);

	t = n;

	for(int i = 1; i <= t; i++)
	{
		remainder = t % 10;
		sum += remainder;
		t /= 10;
	}

	printf("Sum of digits of %d = %d\n", n, sum);
	return 0;
}
