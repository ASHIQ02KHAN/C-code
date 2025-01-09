#include<stdio.h>
int main()
{
    int num1,num2,sum=0;
    int *ptr1,*ptr2;
    printf("Enter two numbers : ");
    scanf("%d",&num1);
    scanf("%d",&num2);

    ptr1=&num1;
    ptr2=&num2;

    int temp ;
    temp=ptr1;
    ptr1=ptr2;
    ptr2=temp;
    printf("\n\nThe after swap of two  number is : %d <> %d\n\n",*ptr1,*ptr2);
}
