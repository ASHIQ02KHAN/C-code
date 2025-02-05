#include <stdio.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person p1 = {"Alice", 25};
    Person *ptr = &p1;

    printf("Name: %s, Age: %d\n", ptr->name, ptr->age);

    return 0;
}
