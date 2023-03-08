#include <stdio.h>

// Program to check whether a number is even or odd
int main()    
{    
	int n;

	printf("Enter an integer: \n");
	scanf("%d", &n);

	if (n % 2 == 0 && n != 0)
		printf("%d is an even number\n", n);

	else if (n % 2 == 1)
		printf("%d is an odd number\n", n);

	else
		printf("The number is zero or negative\n");

	return 0;  
}    
