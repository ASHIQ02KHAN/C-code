#include <stdio.h>
int main()
{
    int i, num;
    long long fact=1;

    printf("Enter any number to calculate factorial: ");
    scanf("%d", &num);
    //Run loop from 1 to number entered by user
    for(i=1; i<=num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d = %lld", num, fact);
    return 0;
}
