#include<stdio.h>
int main()
{
    int ary[100],n,i;
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
}

