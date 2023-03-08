#include <stdio.h>

// Right Angle of Stars
int main()    
{    
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;  
}    
