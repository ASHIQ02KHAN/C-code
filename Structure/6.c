#include <stdio.h>

// Define a structure for students
struct student {
    char name[50];
    int roll;
    char department[50];
    char majorCourse[50];
    float cgpa;
    char bloodGroup[5];
};

int main() {
    int i, n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student stud[n]; // Array of structures

    // Input information
    printf("\nEnter information of students:\n");
    for (i = 0; i < n; ++i) {
        printf("\nFor student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", stud[i].name); // Single word names

        printf("Enter roll number: ");
        scanf("%d", &stud[i].roll);

        printf("Enter department name: ");
        scanf("%s", stud[i].department); // Single word departments

        printf("Enter major course: ");
        scanf("%s", stud[i].majorCourse); // Single word courses

        printf("Enter current CGPA: ");
        scanf("%f", &stud[i].cgpa);

        printf("Enter blood group: ");
        scanf("%s", stud[i].bloodGroup); // Single word blood group

        printf("\n");
    }

    // Displaying information
    printf("\nDisplaying Student Information:\n");
    for (i = 0; i < n; ++i) {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Name: %s\n", stud[i].name);
        printf("Roll Number: %d\n", stud[i].roll);
        printf("Department: %s\n", stud[i].department);
        printf("Major Course: %s\n", stud[i].majorCourse);
        printf("Current CGPA: %.2f\n", stud[i].cgpa);
        printf("Blood Group: %s\n", stud[i].bloodGroup);
    }

    return 0;
}
