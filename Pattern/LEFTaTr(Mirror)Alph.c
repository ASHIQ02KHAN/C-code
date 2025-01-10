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
            printf(" ");
        }

        // printing number
        for (col=1 ;col<=row ;col++)
        {
            //"c " dile akta tringle shape hoy
            printf("%c",row+64);
        }
        printf("\n");
    }
return 0;

}

