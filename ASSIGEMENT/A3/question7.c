/**
 * Programmer: tanisha
 * Desc: 2x2 Matrix Multiplication
 * Date: 15/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

void multMatrix (int row, int col);
void printMatrix (int row, int col); 
int arr1[20][20], arr2[20][20], newarray[20][20];
int main() {
	int rows = 2;
	int columns = 2;
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
		    printf("Enter Matrix 1 (%d,%d): ", i+1, j+1);
		    scanf("%d", &arr1[i][j]);
		}
	}
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
		    printf("Enter Matrix 2 (%d,%d): ", i+1, j+1);
		    scanf("%d", &arr2[i][j]);
		}
	}
	multMatrix(rows, columns);
	printMatrix(rows, columns);
	return 1;
}

void multMatrix (int row, int col){
	for(int i = 0; i < row; i++) {
	    int newcol = 0;
	    while (newcol < col) {
			int sum = 0;
			for(int j = 0; j < col; j++) {
					sum = sum + arr1[i][j] * arr2[j][newcol];
			}
			newarray[i][newcol] = sum;
			newcol++;
		}
	}
}

void printMatrix (int row, int col) {
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			printf("%d ", newarray[i][j]);
		}
		printf("\n");
	}
}
