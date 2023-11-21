#include <stdio.h>

struct Employee {
    char name[30];
    float salary;
    int hoursOfWork;
};

void increaseSalary(struct Employee *emp) {
    if (emp->hoursOfWork >= 12) {
        emp->salary += 150;
    } else if (emp->hoursOfWork >= 10) {
        emp->salary += 100;
    } else if (emp->hoursOfWork >= 8) {
        emp->salary += 50;
    }
}

int main() {
    struct Employee employees[10];

    // Input employee information
    printf("Enter information for 10 employees:\n");
    for (int i = 0; i < 10; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: $");
        scanf("%f", &employees[i].salary);
        printf("Hours of work per day: ");
        scanf("%d", &employees[i].hoursOfWork);
    }

    // Increase salary based on hours of work
    for (int i = 0; i < 10; i++) {
        increaseSalary(&employees[i]);
    }

    // Print employee information
    printf("\nEmployee Information after Salary Increase:\n");
    for (int i = 0; i < 10; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Final Salary: $%.2f\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}
