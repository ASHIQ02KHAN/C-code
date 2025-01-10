#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter N :");
    scanf("%d",&n);

    for(row=1 ;row<=n ;row++) //row er ekta maan  1 er jonno
    {

        for(col=1 ; col<=row ; col++) //col er maan ( 1<=row ) bar run kore
        {
            //just random logic
            printf("%d ",row*col);
        }

        printf("\n");
    }

return 0;
}
