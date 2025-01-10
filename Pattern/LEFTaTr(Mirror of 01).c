#include<stdio.h>
int main (){
    int n,row,col;
    printf("Enter N :");
    scanf("%d",&n);


    for(row=1 ;row<=n ;row++)
    {
        // For printing space
        for (col=1 ;col<=n-row ;col++)//1st loop tar moddhe { 1st loop er 1st maan er } jonno 2nd loop er (shob kaj) hoyite ca,
                                    //then abr 1st loop 2nd maan er jonno abr 2nd loop e dukle...
        {
            printf(" ");           // 1<=0 false zero thake 1 choto na tai (5-5) or (3-3) er space nai
        }
        // printing number

        for (col=1 ;col<=row ;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }

return 0;
}
