#include <stdio.h>

struct BankAccount {
    char name[50];
    int accountNumber;
    float balance;
};

void deposit(struct BankAccount *acc, float amount) {
    acc->balance += amount;
    printf("Amount Deposited! New Balance: %.2f\n", acc->balance);
}

void withdraw(struct BankAccount *acc, float amount) {
    if (amount > acc->balance) {
        printf("Insufficient balance!\n");
    } else {
        acc->balance -= amount;
        printf("Amount Withdrawn! New Balance: %.2f\n", acc->balance);
    }
}

int main() {
    struct BankAccount acc = {"John Doe", 12345, 5000.0};
    int choice;
    float amount;

    do {
        printf("\n1. Deposit\n2. Withdraw\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(&acc, amount);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(&acc, amount);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 3);

    return 0;
}
