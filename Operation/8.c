#include<stdio.h>
int main()
{
   int x,y;
   scanf("%d%d",&x,&y);
   (x>y)?printf("Max:%d\nMin:%d\n",x,y):printf("Max:%d\nMin:%d\n",y,x);// Ternary operator

return 0;
}

