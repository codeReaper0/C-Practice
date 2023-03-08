#include <stdio.h>

// Prime number checker
int main()    
{    
	int i, n, m;
	int isPrime = 0;

	printf("Enter an integer: \n");
	scanf("%d", &n);

	m = n / 2;

	for(i = 2; i <= m; i++)    
	{    
		if(n % i == 0)    
		{    
			printf("%d is not a prime number\n", n);    
			isPrime = 1;    
			break;    
		}    
	}

	if(isPrime == 0)    
		printf("%d is a prime number\n", n);     

	return 0;  
}    
