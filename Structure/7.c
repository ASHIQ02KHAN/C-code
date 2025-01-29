#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    float marks;
};

void sortStudents(struct Student s[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i].marks < s[j].marks) { // Sort in descending order
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main() {
    struct Student s[3];

    printf("Enter details of 3 students:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    sortStudents(s, 3);

    printf("\nSorted Student List (Based on Marks):\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Marks: %.2f\n", s[i].name, s[i].marks);
    }

    return 0;
}
