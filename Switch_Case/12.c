#include <stdio.h>

int main() {
    int choice;
    printf("Menu:\n");
    printf("1. Check Odd/Even\n");
    printf("2. Find Factorial\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            if (num % 2 == 0)
                printf("%d is even.\n", num);
            else
                printf("%d is odd.\n", num);
            break;
        }
        case 2: {
            int n, factorial = 1;
            printf("Enter a number: ");
            scanf("%d", &n);
            for (int i = 1; i <= n; i++)
                factorial *= i;
            printf("Factorial of %d is %d\n", n, factorial);
            break;
        }
        case 3:
            printf("Exiting the program.\n");
            return 0;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

