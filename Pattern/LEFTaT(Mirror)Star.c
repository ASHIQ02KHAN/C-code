#include<stdio.h>
int main(){
    int n,row,col;
    printf("Enter N :");
    scanf("%d",&n);

    for(row=1 ;row<=n ;row++)
    {
       // For number of space

       for (col=1 ;col<=n-row ;col++) //4 ta space dia suru
       {
           printf(" ");
       }
       // for number

       for (col=1 ;col<=row ;col++)
       {
           printf("*");
       }
       printf ("\n");
    }

return 0;
}
