#include <stdio.h>
int main()
{
    int n, product=1;

    printf("Enter any number: ");
    scanf("%d", &n);
    // Repeat the steps till n becomes 0//
    while(n != 0)
    {
        product = product * (n % 10);
        // Remove the last digit from n//
        n = n / 10;
    }
    printf("Product of digits = %ld", product);
    return 0;
}
