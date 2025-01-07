#include<stdio.h>
int oddEven(int num)//  same name(NUM) USE KORLE SOMOSHA NAI BUT TYPE DECLARE KORTE HBE
{
    if(num%2==0)
    {
        printf("The number %d is Even\n\n\n",num);
    }
    else
        printf("The number %d is Odd\n\n\n",num);
}
int main()
{
    int num;
    printf("Input a Integer number : ");
    scanf("%d",&num);
    oddEven(num);//same name(ODDEVEN) USE KORLE SOMOSHA NAI BUT TYPE DECLARE KORTE HBE
}
