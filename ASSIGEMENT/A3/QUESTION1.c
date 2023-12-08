/**
 * Programmer: tanisha
 * Desc: Max Subset Matrix in 2x2 or 4x4 or 8x8
 * Date: 26/11/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void student(char name[]);
void subset(int row, int col, int **arr, int **newarr);
int main(int argc, char const *argv[])
{
	// Checks if file name as been input aswell and not just the code been run.
	if (argc < 2)
		return 1;
	// open file, argv[1] contains the name of the file
	FILE *ptr = fopen(argv[1], "r");
	// if file isnt opened then end the program
	if (ptr == NULL)
	{
		printf("FILE DIDNT OPEN, PROGRAM ENDS!\n");
		return 1;
	}
	char name[8];
	printf("Enter Id: ");
	getchar();
	fgets(name, 8, stdin);
	// ask the user for rows and columns
	int row, col;
	printf("Enter Rows, Column of the Matrix: ");
	scanf("%d %d", &row, &col);
	// declaring a 2d array using malloc
	int **arr = (int **)malloc(row * sizeof(int *));
	for (int i = 0; i < row; i++)
		arr[i] = (int *)malloc(col * sizeof(int));
	// entering the values from the file into the array using fscanf as it takes integers directly
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			fscanf(ptr, "%d", &arr[i][j]);
	}
	// declaring the new array which will contain the max values
	// row/2 and col/2 as that is the new array size
	int **newarr = (int **)calloc(row/2, sizeof(int *));
	for (int i = 0; i < row/2; i++)
		newarr[i] = (int *)calloc(col/2, sizeof(int));
	// function call 
	subset(row, col, arr, newarr);
	// printing the updated contents of the array
	student(name);
	for (int i = 0; i < row/2; i++)
	{
		for (int j = 0; j < col/2; j++)
			printf("%d ", newarr[i][j]);
		printf("\n");		
	}
	// closing file
	fclose(ptr);
	// deallocating the arrays
	for (int i = 0; i < row; i++)
		free(arr[i]);
	free(arr);
	for (int i = 0; i < row; i++)
		free(newarr[i]);
	free(newarr);

}

void subset(int row, int col, int **arr, int **newarr){
	// newrow and newcol basically to remember the location of newarr
	int newrow = 0, newcol = 0;
	// loops +2 each time as 2x2 matrixes max are to be found each time
	for (int i = 0; i < row; i+= 2)
	{
		// each time we move to a new row of the arr, reset the value of newcol to zero
		newcol = 0;
		// +2 cols each time as 2x2 matrixes max are to be found each time
		for (int j = 0; j < col; j+=2)
		{
			// finding the largest
			int largest = arr[i][j];
			for (int a = i; a < i + 2; a++)
			{
				for (int b = j; b < j + 2; b++)
				{
					if (arr[a][b] > largest)
						largest = arr[a][b];
				}
			}
			// storing the largest in the newarr
			newarr[newrow][newcol] = largest;
			newcol++;
		}
		newrow++;
	}	
}

void student(char name[]){
	printf("Name: Muhammed Owais\nStudent Id: ");
	for (int i = 3; i < strlen(name); i++)
		printf("%c", name[i]);
	printf("\n");
}
