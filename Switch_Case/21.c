#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (1) {
        case 1:
            while (num != 0) {
                remainder = num % 10;
                reversed = reversed * 10 + remainder;
                num /= 10;
            }
            printf("Reversed number: %d\n", reversed);
            break;
    }

    return 0;
}
