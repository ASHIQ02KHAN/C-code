#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter N :");
    scanf("%d",&n);


    for (row=n ;row>=1 ;row--)
    {
        for (col=1 ;col<=n-row ;col++)
        {
            printf (" ");
        }
        for (col=1 ;col<=2*row -1 ; col++) //// JUST star SHONKHA MILA NOR JONNO //
        {
            printf("*"); //// EI JAIGA TE star ER POR EKTA extra space DILEO SUNDOR
        }
        printf ("\n");    ///// star  mile
    }
return 0;
}
