#include<stdio.h>
int main()
{
    int n, x, y ;
    printf("Enter the number of rows to show number pattern: ");
    scanf("%d",&n);


    for(x =1; x <= n; x++)
    {
        for(y =1; y <= n; y++)
        {
            if(y <= x)
                printf("%d",y);
            else
                printf(" ");
        }
   // 2nd part//

        for(y = n; y >= 1; y--)
        {
            if(y <= x)
                printf("%d",y);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
