#include <stdio.h>

int power(int a, int b) {
    if (b == 0) // Base case
        return 1;
    int temp = power(a, b / 2); // Recursive call
    if (b % 2 == 0)
        return temp * temp; // If b is even
    else
        return a * temp * temp; // If b is odd
}

int main() {
    int a = 2, b = 10;
    printf("%d^%d = %d\n", a, b, power(a, b));
    return 0;
}
