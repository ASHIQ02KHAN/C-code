#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter N :");
    scanf("%d",&n);

    for (row=1 ;row<=n ;row++)
    {
        //// for space ////

        for (col=1 ;col<= n-row ; col++) //// SPACE dawr logic
        {
            printf (" "); //// Agge space print
        }
        //// for star's print ///


        for (col=1 ;col<= 2*row -1 ;col++) //// then alpha
        {
            //// for small letter a=97

            printf("%c",col+64);
        }

        printf("\n");
    }

return 0;
}
