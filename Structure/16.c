#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    float salary;
};

int compare(const void *a, const void *b) {
    return ((struct Employee *)b)->salary - ((struct Employee *)a)->salary;
}

int main() {
    struct Employee emp[3] = {{"Alice", 50000}, {"Bob", 75000}, {"Charlie", 60000}};

    qsort(emp, 3, sizeof(struct Employee), compare);

    printf("Sorted Employee List:\n");
    for (int i = 0; i < 3; i++)
        printf("%s - %.2f\n", emp[i].name, emp[i].salary);

    return 0;
}
