/*
* Programmer: TANISHA KATARIA
* Desc: MAKE A CSV FILE
* Date: 28-11-23
*
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COLUMNS 100
#define MAX_LINE_LENGTH 1000

int main() {
    FILE *file;
    char filename[100];
    char line[MAX_LINE_LENGTH];
    char *token;

    // Get the filename from the user
    printf("Enter the CSV file name: ");
    scanf("%s", filename);

    // Open the CSV file
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file %s\n", filename);
        return 1;
    }

    // Read the header to get the number of columns
    fgets(line, MAX_LINE_LENGTH, file);
    int numColumns = 0;
    token = strtok(line, ",");
    while (token != NULL && numColumns < MAX_COLUMNS) {
        numColumns++;
        token = strtok(NULL, ",");
    }

    // Rewind the file to read data
    rewind(file);

    // Read and print the header with a blank line before data
    fgets(line, MAX_LINE_LENGTH, file);
    printf("%s", line);
    printf("\n");

    // Read and print the data in tabular form
    int numRows = 0;
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        token = strtok(line, ",");
        printf("| %-15s", token);

        for (int i = 1; i < numColumns; i++) {
            token = strtok(NULL, ",");
            printf("| %-15s", token);
        }

        printf("|\n");
        numRows++;
    }

    // Print the total number of rows and columns
    printf("\nTotal number of rows: %d\n", numRows);
    printf("Total number of columns: %d\n", numColumns);

    // Close the file
    fclose(file);

    return 0;
}
