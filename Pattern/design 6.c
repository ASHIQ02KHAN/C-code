#include<stdio.h>
int main()
{
    int n, x, y, s;
    printf("Enter the size : ");
    scanf("%d",&n);


    for(x = 1; x <= n; x++)
    {
//for loop to put space in pyramid//
        for (s = x; s < n; s++)
            printf(" ");      //for loop to print star//


        for(y = 1; y <= (2 * n - 1); y++)
        {
            if(x == n || y == 1 || y == 2 * x - 1)
                printf("*");
            else
                printf(" ");
        }
//ending line after each row//
        printf("\n");
    }
    return 0;
}
