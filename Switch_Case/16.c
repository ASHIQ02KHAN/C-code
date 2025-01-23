#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    switch (units <= 50) {
        case 1:
            bill = units * 3;
            break;
        case 0:
            bill = 50 * 3;
            switch (units <= 150) {
                case 1:
                    bill += (units - 50) * 5;
                    break;
                case 0:
                    bill += 100 * 5 + (units - 150) * 8;
            }
    }

    printf("Total electricity bill: $%.2f\n", bill);
    return 0;
}
