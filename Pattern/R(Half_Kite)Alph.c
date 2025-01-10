#include<stdio.h>
int main(){
    int n,row,col;
    printf("Enter N :");
    scanf("%d",&n);


    for (row=1 ;row<=n ;row++)
    {
        for(col=1 ;col<=row ;col++)
        {
            printf("%c ",col+64);// capital letter starts from 65=A
        }
        printf("\n");
    }
///////////////// 2ND part//////////


     for (row=n-1 ;row>=1 ;row--) // 1st part er last & 2nd part er 1st same na howr jonno (n-1)
    {
        for(col=1 ;col<=row ;col++)
        {
            printf("%c ",row+96);//small letter starts from 97=a,& row for same letter in each line
        }

        printf("\n");
    }

return 0;
}
