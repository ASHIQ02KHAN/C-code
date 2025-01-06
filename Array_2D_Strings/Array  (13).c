#include<stdio.h>
void main()
{
    int i,n,m,count=0;
    int a[100];
    scanf("%d",&n);


    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    scanf("%d", &m);
    for(i=0; i<n; i++)
    {
        if(a[i]==m)
        {
            if(count==0)
            {
                printf("FOUND at index position: %d",i);
                count++;
            }
            else
                printf(" %d", i);
        }
    }

    if(count==0)
        printf("NOT FOUND");
}
