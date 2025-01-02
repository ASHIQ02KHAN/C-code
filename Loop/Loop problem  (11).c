#include<stdio.h>
int main()
{
    int base, exponent, i, power;

    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    power = 1;
    //caculatinh power of given number using for loop//

    for(i=1; i<=exponent; i++)
        power = power * base;
    printf("Power : %d", power);
    return 0;
}
