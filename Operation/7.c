#include<stdio.h>
int main()
{
    int a;
    float b;

    scanf("%d%f",&a,&b);

    a=b;
    printf("Assignment:%f assigned to an int produces %d\n",b,a);
    printf("Assignment:%d assigned to a float produces %f\n",a,b);
    printf("Typecasting:(float)%d produces %f\n",a,b);
    printf("Typecasting:(int)%.3f produces %d\n",b,a);

    return 0;
}
