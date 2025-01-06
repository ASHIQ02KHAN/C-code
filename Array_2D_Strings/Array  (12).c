#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Count up to: ");
    scanf("%d",&n);
    char ar[n];
    int i;
    for(i=0;i<n;i++){
        scanf(" %c",&ar[i]);
    }
    for(i=0;i<n;i++){
        if(ar[i]=='A'||ar[i]=='E'||ar[i]=='I'||ar[i]=='O'||ar[i]=='U'||ar[i]=='a'||ar[i]=='e'||ar[i]=='i'||ar[i]=='o'||ar[i]=='u'){
            count++;
        }
    }
    printf("\nCount: %d",count);
    return 0;
}
