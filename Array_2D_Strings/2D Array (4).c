#include<stdio.h>
void main()
{
    int n;
    printf("Square Matrix Size: ");
    scanf("%d",&n);
    int ar[n][n];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           scanf("%d",&ar[i][j]);
        }
    }
    printf("Major diagonal: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if(i==j){
            printf("%d ",ar[i][j]);
           }
        }
    }
    printf("\nMinor diagonal: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if(i+j==n-1){
            printf("%d ",ar[i][j]);
           }
        }
    }
}
