#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Matrix(n x n): ");
    scanf("%d",&n);
    int a[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        if(i=0)
        {
            for(j=0; j<n; j++)
            {
                if(j<=n/2 && j==n)
                {
                    printf("%d",a[i][j]);
                }
            }
        }
    }
}
