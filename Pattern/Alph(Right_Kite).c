#include<stdio.h>
int main(){
    int n,row,col;
    printf("Enter N :");
    scanf("%d",&n);

    for (row=1 ;row<=n ;row++)
    {
        for(col=1 ;col<=row ;col++)
        {
            // capital letter starts from 65=A

            printf("%c ",col+64);
        }
        printf("\n");
    }
//////////// 2ND part//////////

// 1st part er last & 2nd part er 1st same na howr jonno (n-1)

    for (row=n-1 ;row>=1 ;row--)
      {

        for(col=1 ;col<=row ;col++)
        {
            //small letter starts from 97=a,& row for same letter in each line
            printf("%c ",row+96);
        }

        printf("\n");
    }

return 0;

}
