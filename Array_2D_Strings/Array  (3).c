#include<stdio.h>
int main()
{
   int i,j,n,yes;
   scanf("%d",&n);
   int a[n][n];
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
   }
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        a[i][j]==a[i][j];
    }
   }
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(a[i][j]!=a[i][j]){
           yes=1;
           break;
        }
    }
   }
   if(yes=1){
    printf("No");
   }
   else{
    printf("Yes");
   }
}
