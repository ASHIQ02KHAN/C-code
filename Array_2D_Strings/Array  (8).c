#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Count up to: ");
    scanf("%d",&n);
    int ar[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
        if(ar[i]%2==0){
            sum=sum+ar[i];
        }
    }
    printf("Sum of even number: %d",sum);
    return 0;
}
