#include <stdio.h>

int main()
{
	int n, remainder;
	int reverse = 0;

	printf("Enter an integer: \n");
	scanf("%d", &n);

	while (n != 0)
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}

	printf("\nThe reversed integer is: %d\n", reverse);
	return 0;
}
