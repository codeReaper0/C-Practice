#include <stdio.h>

// Fibonacci series
int main()    
{    
	int c, i, number;
	int a = 0;
	int b = 1;
	
	printf("Enter the number of elements: ");    
	scanf("%d",&number);    

	printf("\n%d %d",a,b);

	for (i = 2; i < number; i++)
	{
		c = a + b;
		printf(" %d", c);
		a = b;
		b = c;
	}
	printf("\n");

	return 0;  
}    
