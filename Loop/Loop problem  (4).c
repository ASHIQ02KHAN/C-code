#include <stdio.h>
int main()
{
    int i, num;

    printf("Enter any number: ");
    scanf("%d", &num);
    // Running loop from the number entered by user  and Decrementing by 1//

    for(i=num; i>=1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}
