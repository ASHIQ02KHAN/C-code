////// Alphabet  /////

 #include<stdio.h>
 int main()
 {
     int n,row,col;
     printf("Enter N :");
     scanf("%d",&n);

     for (row=1 ;row<=n ;row++)
     {
         for (col=1 ;col<=row ;col++)//1st loop tar moddhe 1st loop er 1st maan er jonno 2nd loop er (shob kaj) hoyite ca,
                                     //then abr 1st loop 2nd maan er jonno abr 2nd loop e dukle...
         {
             printf("* ");
         }
         printf("\n");
     }
 return 0;
 }

