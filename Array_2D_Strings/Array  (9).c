#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Count up to: ");
    scanf("%d",&n);
    int ar[n];
    int a[n];
    int i,j;
    printf("Values of first array: ");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Values of second array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=ar[i]+a[i];
        printf(" %d",sum);
    }
    return 0;
}
