#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter N :");
    scanf("%d",&n);

    for (row=n ;row>=1 ;row--)
    {
    //// FOR SPACE ////
        for (col=1 ;col<=n-row ;col++)
        {
            printf (" ");
        }


        for (col=1 ;col<=2*row -1 ; col++) //// CONDITION TA JUST PER LINE ESHONKHA MILA NOR JONNO //
        {
            printf("%d",col); //// EI JAIGA TE %d ER POR EKTA extra space DILEO SUNDOR
        }

        printf ("\n");    ///// star  mile
    }

return 0;
}
