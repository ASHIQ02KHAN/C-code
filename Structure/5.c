#include <stdio.h>
#include <string.h>

typedef struct person {
    char name[40];
    char fname[40];
    int age;
    float CGPA;
} PERSON;

// Function to print a person's details
void printStructure(PERSON P) {
    printf("\nName: %s", P.name);
    printf("\nFather's Name: %s", P.fname);
    printf("\nAge: %d", P.age);
    printf("\nCGPA: %.2f\n", P.CGPA);
}

int main() {
    int n;

    printf("Enter the number of people: ");
    scanf("%d", &n);
    getchar(); // Clear newline from the buffer

    PERSON people[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter the details of person %d:\n", i + 1);

        printf("Name: ");
        fgets(people[i].name, sizeof(people[i].name), stdin);
        people[i].name[strcspn(people[i].name, "\n")] = '\0'; // Remove newline

        printf("Father's Name: ");
        fgets(people[i].fname, sizeof(people[i].fname), stdin);
        people[i].fname[strcspn(people[i].fname, "\n")] = '\0'; // Remove newline

        printf("Age: ");
        scanf("%d", &people[i].age);

        printf("CGPA: ");
        scanf("%f", &people[i].CGPA);
        getchar(); // Clear newline from the buffer
    }

    printf("\nDisplaying Information:\n");
    for (int i = 0; i < n; i++) {
        printf("\n--- Person %d ---", i + 1);
        printStructure(people[i]);
    }

    return 0;
}
