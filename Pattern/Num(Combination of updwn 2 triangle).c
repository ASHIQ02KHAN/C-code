#include<stdio.h>
int main(){

    int row,col,n;
    printf("Enter N :");
    scanf("%d",&n);


    for (row=1 ;row<=n ;row++)
    {
        //// FOR SPACE ///

        for (col=1 ;col<=n-row ; col++)
        {
            printf(" ");
        }
        //// For star print ////

        for (col=1 ;col<=2*row -1 ;col++) //// 2* JUST TO MATCH NUMBERS WITH QUS.
        {
            printf("%c",row+64);//// AMRA EI %d ER POR EKTA SPACE DIA O KORTE PARTAM
        }

        printf("\n");

    }
    /////// 2nd part ULTA STAR /////


       for (row=n-1 ;row>=1 ;row--)
    {
        //// FOR SPACE ///
        for (col=1 ;col<=n-row ; col++)
        {
            printf(" ");
        }
        //// For star print ////

        for (col=1 ;col<=2*row -1 ;col++)
        {
            printf("%d",col);
        }

        printf("\n");

    }


return 0;
}
