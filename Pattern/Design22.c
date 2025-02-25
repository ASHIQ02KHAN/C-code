#include <stdio.h>

void printHollowDiamond(int N) {
    if (N % 2 == 0) {
        printf("Please enter an odd number.\n");
        return;
    }

    int i, j, space;

    // Upper half of the diamond
    for (i = 1; i <= (N / 2) + 1; i++) {
        for (space = 1; space <= (N / 2) + 1 - i; space++)
            printf(" ");

        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (i = (N / 2); i >= 1; i--) {
        for (space = 1; space <= (N / 2) + 1 - i; space++)
            printf(" ");

        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter an odd number for the diamond size: ");
    scanf("%d", &N);

    printHollowDiamond(N);

    return 0;
}
