#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Count up to: ");
    scanf("%d",&n);
    float avg=0,sum=0;
    float ar[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%f",&ar[i]);
        sum=sum+ar[i];
    }
    avg=sum/n;
    printf("Average : %.2f",avg);
}
