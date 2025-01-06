#include<stdio.h>
void main()
{
    int i,j,m,n;
    printf("Row Size: ");
    scanf("%d",&m);
    printf("Column Size: ");
    scanf("%d",&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int c[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
          c[i][j]=a[i][j]+b[i][j];
          printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
