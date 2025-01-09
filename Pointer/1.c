#include<stdio.h>
int main()
{
    int num1,num2,sum=0;
    int *ptr1,*ptr2;
    printf("Enter two numbers : ");
    scanf("%d",&num1);
    scanf("%d",&num2);

    ptr1=&num1; // *POINTER VARIABLE AR MODDHE NUM1,NUM2 RAKLAM
    ptr2=&num2;
    sum=*ptr1+*ptr2;// SHI GILA E SUM KORLAM

    printf("\n\nThe summation of two  number is : %d \n\n",sum);
}
