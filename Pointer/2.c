#include<stdio.h>
int main()
{
    int num1,num2;
    int *ptr1,*ptr2;
    printf("Enter two numbers : ");
    scanf("%d",&num1);
    scanf("%d",&num2);

    ptr1=&num1; // *POINTER VARIABLE AR MODDHE NUM1,NUM2 RAKLAM
    ptr2=&num2;

    if (*ptr1>*ptr2)
    {
        printf("\n\nThe maximum number from two  number is : %d \n\n",*ptr1);
    }
    else
     printf("\n\nThe maximum number from two  number is : %d \n\n",*ptr2);

}
