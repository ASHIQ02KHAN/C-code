#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp;
    int searchID, found = 0;

    FILE *fptr = fopen("employees.dat", "rb");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter Employee ID to search: ");
    scanf("%d", &searchID);

    while (fread(&emp, sizeof(struct Employee), 1, fptr)) {
        if (emp.id == searchID) {
            printf("Employee Found: Name: %s, ID: %d, Salary: %.2f\n", emp.name, emp.id, emp.salary);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee not found!\n");
    }

    fclose(fptr);
    return 0;
}
