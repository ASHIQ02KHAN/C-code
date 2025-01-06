#include<stdio.h>
int main()
{
    int n;
    printf("Value up to: ");
    scanf("%d",&n);
    int ar[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Values of array: ");
    for(i=n-1;i>=0;i--){
        printf(" %d",ar[i]);
    }
}
