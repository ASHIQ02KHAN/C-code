#include<stdio.h>
int main()
{
  int n,r,c;

  printf("Enter number of rows: ");
  scanf("%d",&n);

  // outer loop
  for(r=1; r<=n; r++)
  {
    // inner loop
    for(c=1; c<=n; c++)
    {
      if(c <= n-r) printf("%4d",1);
      else printf("%4d",r);
    } // end of inner loop

    printf("\n");
  } // end of outer loop

  return 0;
}
