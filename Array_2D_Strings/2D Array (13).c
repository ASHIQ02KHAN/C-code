#include<stdio.h>
int main()
{
    int i,j,n,minor;
    scanf("%d",&n);
    int a[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(i+j==n-1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
