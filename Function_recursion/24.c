#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void generatePermutations(char str[], int start, int end) {
    if (start == end) {
        printf("%s\n", str);
        return;
    }
    for (int i = start; i <= end; i++) {
        swap(&str[start], &str[i]);
        generatePermutations(str, start + 1, end); // Recursive call
        swap(&str[start], &str[i]); // Backtrack
    }
}

int main() {
    char str[] = "ABC";
    printf("Permutations of %s:\n", str);
    generatePermutations(str, 0, strlen(str) - 1);
    return 0;
}
