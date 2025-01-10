#include<stdio.h>
int main(){

    int row,col,n;
    printf("Enter N :");
    scanf("%d",&n);

    for (row=1 ;row<=n ; row++)

    {
        for (col=1 ;col<=n-row ;col++)//// For space /////

        {
            printf(" ");
        }

    for (col=1 ;col<=row ;col++)//// FOR STARS ///

        {
            printf("* "); //// JUST STAR ER POR EKTA SPACE DICI
        }

        printf("\n"); //// END OS 1ST PART ////
    }

/////////// 2ND PART ULTA TRIANGLE  ///////////////

     for (row=n-1 ;row>=1 ; row--)  ///// ENDING & STARTING JATE SAME NA HOY TAI ROW-1 /////

    {
      //// For space /////

     for (col=1 ;col<=n-row ;col++)
        {
            printf(" ");
        }

        for (col=1 ;col<=row ;col++)

        {
            //// JUST STAR ER POR AKTA SPACR ///
            printf("* ");
        }

        printf("\n");
    }

return 0;

}
