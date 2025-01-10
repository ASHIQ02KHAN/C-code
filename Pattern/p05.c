////// Binary2 /////

 #include<stdio.h>
 int main(){
     int n,row,col;
     printf("Enter N :");
     scanf("%d",&n);

     for (row=1 ;row<=n ;row++)
     {
         for (col=1 ;col<=row ;col++)//1st loop ar 1st maan er jonno 2nd loop duke er (shob kaj) kore abr,,
                                     //then abr 1st loop 2nd maan er jonno abr 2nd loop e duklo.
         {
             printf("%d ",row%2);
         }

         printf("\n");
     }
 return 0;
 }
