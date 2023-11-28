/*
* Programmer: TANISHA KATARIA
* Desc: MAKE 2 separate blank word files with text 
* Date: 28-11-23
*
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createWordFile(const char *filename, const char *text) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Error creating file %s\n", filename);
        exit(1);
    }

    // Write the text to the file
    fwrite(text, sizeof(char), strlen(text), file);

    // Close the file
    fclose(file);
}

int compareFiles(const char *file1, const char *file2) {
    FILE *f1 = fopen(file1, "rb");
    FILE *f2 = fopen(file2, "rb");

    if (f1 == NULL || f2 == NULL) {
        printf("Error opening files for comparison\n");
        exit(1);
    }

    int equal = 1; // Assume files are equal

    char ch1, ch2;

    // Compare file contents character by character
    while ((ch1 = fgetc(f1)) != EOF && (ch2 = fgetc(f2)) != EOF) {
        if (ch1 != ch2) {
            equal = 0; // Files are not equal
            break;
        }
    }

    // Check if one file is longer than the other
    if ((ch1 != EOF && ch2 == EOF) || (ch1 == EOF && ch2 != EOF)) {
        equal = 0; // Files are not equal
    }

    // Close the files
    fclose(f1);
    fclose(f2);

    return equal;
}

int main() {
    const char *file1 = "file1.docx";
    const char *file2 = "file2.docx";
    const char *text = "This is a test.";

    // Create two Word files with the same text
    createWordFile(file1, text);
    createWordFile(file2, text);

    // Compare the contents of the two files
    int result = compareFiles(file1, file2);

    // Display the result
    if (result) {
        printf("The contents of the two files are equal.\n");
    } else {
        printf("The contents of the two files are not equal.\n");
    }

    return 0;
}
