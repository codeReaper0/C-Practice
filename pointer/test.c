#include <stdio.h>

int main()
{
	int B[2][3] = {{1,2,3}, {4,5,6}};
	int* p = B;
	
	printf("%o\n", B);
	printf("%o\n", *B);
	printf("%o\n", B[0]);
	printf("%o\n", &B[0][0]);
}