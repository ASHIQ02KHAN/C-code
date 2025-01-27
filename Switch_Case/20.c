#include <stdio.h>

int main() {
    int amount, notes;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    switch (amount > 0) {
        case 1:
            printf("Currency Denominations:\n");
            notes = amount / 2000; amount %= 2000; printf("₹2000: %d\n", notes);
            notes = amount / 500; amount %= 500; printf("₹500: %d\n", notes);
            notes = amount / 200; amount %= 200; printf("₹200: %d\n", notes);
            notes = amount / 100; amount %= 100; printf("₹100: %d\n", notes);
            notes = amount / 50; amount %= 50; printf("₹50: %d\n", notes);
            notes = amount / 20; amount %= 20; printf("₹20: %d\n", notes);
            notes = amount / 10; amount %= 10; printf("₹10: %d\n", notes);
            notes = amount / 5; amount %= 5; printf("₹5: %d\n", notes);
            notes = amount / 2; amount %= 2; printf("₹2: %d\n", notes);
            printf("₹1: %d\n", amount);
            break;
        default:
            printf("Invalid amount.\n");
    }

    return 0;
}
