#include <stdio.h>
int main()
{
    int i, num, sum=0;

    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=1; i<=num; i+=2)
    {
        //Adding current odd number to sum variable//
        sum += i;
    }
    printf("Sum of all odd number between 1 to %d: %d", num, sum);
    return 0;
}
