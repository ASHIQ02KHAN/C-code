#include <stdio.h>
int main()
{
    int year;

    printf("Enter any year: ");

    scanf("%d", &year);

    (year%4==0 && year%100!=0) ? printf("%d is leap year",year) :

    (year%400 ==0 ) ? printf("LEAP YEAR") : printf("%d is not a leap year",year);

    return 0;
}
