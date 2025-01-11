#include<stdio.h>
int main()
{
    int i,j;
    printf("Input(X):");
    scanf("%d",&j);
    i=j;
    printf("The value of X++=%d\n",i++);

    i=j;
    printf("The value of ++X=%d\n",++i);

    i=j;
    printf("The value of X--=%d\n",i--);

    i=j;
    printf("The value of --X=%d\n",--i);

    return 0;
}
