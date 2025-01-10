////// Alphabet  /////

 #include<stdio.h>
 int main(){
     int n,row,col;
     printf("Enter N :");
     scanf("%d",&n);

     for (row=1 ;row<=n ;row++)
     {
         for (col=1 ;col<=row ;col++)
         {
             printf("%c ",row+96); //for capital letter starts from 65=A
                                   // for small letter starts fro, 97=a
         }

         printf("\n");
     }
 return 0;
 }

