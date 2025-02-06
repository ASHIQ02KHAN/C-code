#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    int pages;
};

int areEqual(struct Book b1, struct Book b2) {
    return (strcmp(b1.title, b2.title) == 0) && (b1.pages == b2.pages);
}

int main() {
    struct Book b1 = {"C Programming", 300};
    struct Book b2 = {"C Programming", 300};

    if (areEqual(b1, b2))
        printf("Books are the same.\n");
    else
        printf("Books are different.\n");

    return 0;
}
