#include<stdio.h>
int main()
{
    int n,col,row;
    printf("Input N :");
    scanf("%d",&n);
    for (row=1 ;row<=n ; row++)
    {
        // Proti ta row er jonno col chole row ar soman

        for (col=1 ;col<=row; col++)
        {
            printf("%d",row);
        }
        printf("\n");
    }


return 0;
}
