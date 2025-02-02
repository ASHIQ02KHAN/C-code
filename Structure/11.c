#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void merge(struct Student a[], int n, struct Student b[], int m, struct Student result[]) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i].roll < b[j].roll)
            result[k++] = a[i++];
        else
            result[k++] = b[j++];
    }

    while (i < n) result[k++] = a[i++];
    while (j < m) result[k++] = b[j++];
}

int main() {
    struct Student class1[2] = {{101, "Alice", 85.5}, {103, "Charlie", 78.0}};
    struct Student class2[2] = {{102, "Bob", 90.0}, {104, "David", 82.3}};
    struct Student merged[4];

    merge(class1, 2, class2, 2, merged);

    printf("\nMerged Student List:\n");
    for (int i = 0; i < 4; i++)
        printf("Roll: %d, Name: %s, Marks: %.2f\n", merged[i].roll, merged[i].name, merged[i].marks);

    return 0;
}
