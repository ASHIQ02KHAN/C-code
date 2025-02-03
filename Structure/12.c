#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
};

void swap(struct Employee *a, struct Employee *b) {
    struct Employee temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    struct Employee e1 = {"Alice", 101};
    struct Employee e2 = {"Bob", 102};

    printf("Before Swap: \nE1: %s, %d\nE2: %s, %d\n", e1.name, e1.id, e2.name, e2.id);

    swap(&e1, &e2);

    printf("After Swap: \nE1: %s, %d\nE2: %s, %d\n", e1.name, e1.id, e2.name, e2.id);

    return 0;
}
