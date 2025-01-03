#include<stdio.h>
int main()
{
    int n,m,l,min=0,max=0;

    printf("Count up to: ");
    scanf("%d",&n);
    int ar[n];
    int i;


    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    max=ar[0];
    min=ar[0];

    for(i=0; i<n; i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
            m=i;
        }


        if(ar[i]<min)
        {
            min=ar[i];
            l=i;
        }
    }
    printf("Max:%d,Index:%d\nMin:%d,Index:%d",max,m,min,l);

 return 0;

}
