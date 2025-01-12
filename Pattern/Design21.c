#include <stdio.h>

void printFlowerPattern(int n) {
    // Top half of the petals
    for (int i = 1; i <= n; i++) {
        // Left petal spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Left petal stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Middle gap
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        // Right petal stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half of the petals
    for (int i = n - 1; i >= 1; i--) {
        // Left petal spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Left petal stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Middle gap
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        // Right petal stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows for the flower petals: ");
    scanf("%d", &n);
    printFlowerPattern(n);
    return 0;
}
