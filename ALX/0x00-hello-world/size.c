#include <stdio.h>

/**
* main - prints the size of various types on
* the computer it is compiled and run on.
*
* Return: Always 0
*/

int main(void)
{
	char a;
	int x;
	long int y;
	long long int c;
	float b;

	printf("Size of a char %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long int %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a long long int %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float %lu byte(s)\n", (unsigned long)sizeof(b));
	return (0);
}
