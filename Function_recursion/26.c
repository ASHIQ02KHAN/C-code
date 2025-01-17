#include <stdio.h>

int isPrime(int n, int i) {
    if (n <= 2) // Base case
        return (n == 2) ? 1 : 0;
    if (n % i == 0) // Divisible by current i
        return 0;
    if (i * i > n) // No divisor found
        return 1;
    return isPrime(n, i + 1); // Recursive call
}

int main() {
    int num = 29;
    if (isPrime(num, 2))
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);
    return 0;
}
