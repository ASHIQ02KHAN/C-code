#include <stdio.h>
int main()
{
    int x,y;
    printf("Input(X): ");
    scanf("%d",&x);
    printf("Input(Y): ");
    scanf("%d",&y);


    printf("Increment Value: %d\n",x+=y);
    printf("Decrement Value: %d\n",x-=y);

    return 0;
}

