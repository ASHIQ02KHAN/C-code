#include<stdio.h>
int main()
{
    int  n, x, y;
    printf("Enter the number of rows to show number patterns: ");
    scanf("%d",&n);

    for (int x = n; x >= 0; x--)
    {
        for (int y = 1; y <= x; y++)
            printf("%d",y);
        printf("\n");
    }

    // 2nd part //

    for(int x = 1; x <= n; x++)
    {
        for(int y = 1; y <= x; y++)
            printf("%d",y);
        printf("\n");
    }

return 0;
}
