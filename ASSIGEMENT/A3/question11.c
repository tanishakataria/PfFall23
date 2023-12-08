/**
 * Programmer: tanisha
 * Desc: Finding the largest value in every n-2*n-2 contigious grid inside a n*n matrix.
 * Date: 18/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int main() 
{
	int n;
	printf("Enter A Value: ");
	scanf("%d", &n);
	int matrix[n][n];
	int maxLocal[n-2][n-2];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("Enter The Value [%d][%d]: ", i,j);
			scanf("%d", &matrix[i][j]);
		}
	}
	for (int mlRow = 0; mlRow < n-2; ++mlRow)
	{
		for (int mlColumn = 0; mlColumn < n-2; ++mlColumn)
		{
			int max = matrix[mlRow][mlColumn];
			for (int mRow = mlRow; mRow < (n-2)+mlRow; ++mRow)
			{
				for (int mColumn = mlColumn; mColumn < (n-2)+mlColumn; ++mColumn)
				{
					if (matrix[mRow][mColumn] > max)
					{
						max = matrix[mRow][mColumn];
					}
				}
			}
			maxLocal[mlRow][mlColumn] = max;
		}
	}
	for (int mlRow = 0; mlRow < n-2; ++mlRow)
	{
		for (int mlColumn = 0; mlColumn < n-2; ++mlColumn)
		{
			printf("%d ", maxLocal[mlRow][mlColumn]);
		}
		printf("\n");
	}
}

