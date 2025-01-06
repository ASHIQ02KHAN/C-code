#include<stdio.h>
void main()
{
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    int ar[m][n];
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    printf("Row-wise: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                printf("%d ",ar[i][j]);
        }
    }
    printf("\nColumn-wise: ");
    for(j=0;j<n;j++){
        for(i=0;i<m;i++){
                printf("%d ",ar[i][j]);
        }
    }
}

