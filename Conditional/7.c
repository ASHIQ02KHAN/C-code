#include <stdio.h>
int main()
{
     int num;

    printf("Enter any number: ");
    scanf("%d", &num);


    if(num > 0)
    {
        printf("Enter number is positive");
    }
    else if(num < 0)
    {
        printf("Enter number is nagative");
    }
    else
    {
        printf("Enter number is zero");
    }


return 0;

}
