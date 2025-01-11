#include<stdio.h>// without library function
int main()
{
    double a,b,x;
    printf("Enter the value of a,b : ");
    scanf("%lf%lf",&a,&b);

    x=(3.31 * a*a + 2.01 * b*b*b) / (7.16 * b*b + 2.01 * a*a*a);


    printf("\nThe Area if the circle is :%lf \n",x);

}

