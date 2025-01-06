#include<stdio.h>
int main()
{
    int i,n;
    printf("Count UpTo: ");
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Array A:");
    for(i=0;i<n;i++){
        printf("%d",ar[i]);
    }

    printf("\n");
    printf("Array B:");
    for(i=n-1;i>=0;i--){
        printf("%d",ar[i]);
    }
}
