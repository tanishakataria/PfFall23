/**
 * Programmer: tanisha
 * Desc: Symmetrical and Non Symmetrical Matrix
 * Date: 10/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>
#include <stdbool.h>

int main() {
	int rows, columns, a;
	bool flag = false;
	int matrix[50][50];
	do {
		printf("Input the number of Rows: ");
		scanf("%d", &rows);
		printf("Input the number of Columns: ");
		scanf("%d", &columns);
	}
	while(rows != columns);
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			printf("Enter a number Matrix[%d][%d]: ", i,j);
			scanf("%d", &a);
			matrix[i][j] = a;
		}
	}
	int i = 0;
	while (flag == false && i < rows) {
		int j = 0;
		while (j < columns) {
			if (matrix[i][j] != matrix[j][i]) {
				flag = true;
			}
			j++;
		}
		i++;
	}
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	if (flag == true) {
		printf("Array is Not Symmetric");
	} else {
		printf("Array is Symmetric");
	}
	return 1;
}
