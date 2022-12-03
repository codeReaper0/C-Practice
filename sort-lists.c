#include <stdio.h>

void main()
{
	int x[6], n, i, j, tmp;
	printf("Enter the no. of elements \n");
	scanf("%d", &n);
	printf("Enter %d numbers \n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &x[i]);
	/* sorting begins */
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (x[i] > x[j])
			{
				tmp = x[i];
				x[i] = x[j];
				x[j] = tmp;
			}
	/* sorting ends */
	printf("sorted list: \n");
	for (i = 0; i < n; i++)
		printf("%d ", x[i]);
	printf("\n");
}