#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N :");
    scanf("%d",&n);


    for(row=n ;row>=1 ;row--)
    {
       // For space
       for (col=1 ;col<=n-row ;col++)
       {
           printf(" ");
       }
       // for number
       for (col=1 ;col<=row ;col++)
       {
           printf("%d",col);
       }
       printf ("\n");
    }
return 0;

}

