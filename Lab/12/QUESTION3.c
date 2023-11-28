
#include <stdlib.h>

// Structure to store course information
struct Course {
    char code[10];
    char name[50];
    float gpa;
    int semester;
};

// Function to input course information
void inputCourse(struct Course *course) {
    printf("Enter Course Code: ");
    scanf("%s", course->code);

    printf("Enter Course Name: ");
    scanf(" %[^\n]", course->name);

    printf("Enter GPA for the Course: ");
    scanf("%f", &course->gpa);

    printf("Enter Semester: ");
    scanf("%d", &course->semester);
}

// Function to save course data to a file
void saveToFile(struct Course *course) {
    FILE *file = fopen("transcript.txt", "a");
    if (file == NULL) {
        fprintf(stderr, "Error opening the file.\n");
        exit(1);
    }

    fprintf(file, "%s|%s|%.2f|%d\n", course->code, course->name, course->gpa, course->semester);

    fclose(file);
}

// Function to display the transcript
void viewTranscript() {
    FILE *file = fopen("transcript.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening the file.\n");
        exit(1);
    }

    printf("\nTranscript:\n");

    // Read and display each line from the file
    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
}

// Function to calculate CGPA
void calculateCGPA() {
    FILE *file = fopen("transcript.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening the file.\n");
        exit(1);
    }

    float totalGPA = 0.0;
    int totalCourses = 0;

    // Read and calculate the total GPA and number of courses
    struct Course course;
    while (fscanf(file, "%[^|]|%[^|]|%f|%d\n", course.code, course.name, &course.gpa, &course.semester) != EOF) {
        totalGPA += course.gpa;
        totalCourses++;
    }

    fclose(file);

    // Calculate and display CGPA
    if (totalCourses > 0) {
        float cgpa = totalGPA / totalCourses;
        printf("\nCGPA: %.2f\n", cgpa);
    } else {
        printf("\nNo courses available to calculate CGPA.\n");
    }
}

// Function to calculate SGPA
void calculateSGPA() {
    FILE *file = fopen("transcript.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening the file.\n");
        exit(1);
    }

    float totalGPA = 0.0;
    int totalCourses = 0;

    // Read and calculate the total GPA and number of courses
    struct Course course;
    while (fscanf(file, "%[^|]|%[^|]|%f|%d\n", course.code, course.name, &course.gpa, &course.semester) != EOF) {
        totalGPA += course.gpa;
        totalCourses++;
    }

    fclose(file);

    // Calculate and display SGPA
    if (totalCourses > 0) {
        float sgpa = totalGPA / totalCourses;
        printf("\nSGPA: %.2f\n", sgpa);
    } else {
        printf("\nNo courses available to calculate SGPA.\n");
    }
}

int main() {
    int choice;
    struct Course course;

    do {
        printf("\n1. Input Course Information\n");
        printf("2. Save Data to File\n");
        printf("3. View Transcript\n");
        printf("4. Calculate CGPA\n");
        printf("5. Calculate SGPA\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputCourse(&course);
                break;

            case 2:
                saveToFile(&course);
                break;

            case 3:
                viewTranscript();
                break;

            case 4:
                calculateCGPA();
                break;

            case 5:
                calculateSGPA();
                break;

            case 0:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}
