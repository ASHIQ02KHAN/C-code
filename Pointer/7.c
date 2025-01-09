#include<stdio.h>
int main()
{
    int ary[100],n,i,sum=0;
    printf("Enter the size of the array : ");
    printf("Enter the elements of the array : ");
    scanf("%d",&n);
    int *ptr;
    ptr = &ary;
    for(i=0 ; i<n ;i++)
    {
        scanf("%d",&ary[i]);
    }
    printf("\nThe elements of the array is :\n");
     for(i=0 ; i<n ;i++)
    {
        printf("%d ",*(ptr+i));
    }
      for(i=0 ; i<n ;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("\n\nThe sum of the element is :%d\n\n",sum);
}
