#include<stdio.h>
int main(){
    int n,row,col;
    printf("Enter N :");
    scanf("%d",&n);

    for (row=1 ;row<=n ;row++)
    {
        // for space
        for(col=1 ;col<=n-row ;col++)
        {
            printf(" ");
        }

        for (col=1 ;col<=row ;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    ///// 2ND part////

 // (row=n-1) 1st part er last & 2nd part er 1st line same na howr jonno.
      for (row=n-1 ;row>=1 ;row--)
    {
        // for space
        for(col=1 ;col<=n-row ;col++) //space law
        {
            printf(" ");
        }
        for (col=1 ;col<=row ;col++)
        {
            printf("%d",col);
        }

        printf("\n");
    }

return 0;
}
