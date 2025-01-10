#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Input the size (to get better looking shape input greater then 10 odd number) : ");

    scanf("%d",&n);


    for (row=1 ;row<=n ;row++)

   {
        for (col=1 ;col<=n+10 ;col++)

        {
            printf(" ");
        }

        for (col=1; col<=n ;col++)

    {
        if(row==1 || row==n || col==1 || col==n || row==col || row+col==n+1 || row==n/2+1 || col==n/2+1)

          {
                printf("*");
          }

        else

            printf(" ");

        }

        printf("\n");
  }


return 0;

}

