#include <stdio.h>

int main()
{
	int mat1[100][100], mat2[100][100], mat3[100][100], rows, columns, i, j, k;
	printf("Enter amount of rows and columns: \n");
	scanf("%d %d", &rows, &columns);

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			printf("Enter data for first matrix [%d][%d]:", i, j);
			scanf("%d", &mat1[i][j]);
		}
	}

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			printf("Enter data for second matrix [%d][%d]:", i, j);
			scanf("%d", &mat2[i][j]);
		}
	}

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			mat3[i][j] = 0;

			for (k = 0; k < columns; k++)
			{
				mat3[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}

	// displaying the matrix result
	printf("Result of multiplied matrix:\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			printf("%d\t", mat3[i][j]);
		}
		printf("\n");
	}
}