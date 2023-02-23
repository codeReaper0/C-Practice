#include <stdio.h>

int main()
{
	int A[] = {2, 4, 5, 8, 1};
	int i;

	for (int i = 0; i < 5; i++)
	{
		printf("Address = %o\n", &A[i]);
		printf("Address = %o\n", A + i);
		printf("value = %d\n", A[i]);
		printf("value = %d\n", *(A + i));

	}
	
}