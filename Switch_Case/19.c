#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    switch (result == num) {
        case 1:
            printf("%d is an Armstrong number.\n", num);
            break;
        case 0:
            printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
