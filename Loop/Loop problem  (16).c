#include<stdio.h>
int main()
{
    int num, i, f;

    printf("Enter a number: ");
    scanf("%d",&num);
    f=0;


    for(i=2; i <= num/2; i++)
    {
        if(num%i == 0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
        printf("%d is a Prime Number", num);
    else
        printf("%d is a Not Prime Number", num);

return 0;

}
