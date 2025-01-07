#include<stdio.h>
void reverse(int b[100], int n);
int main()
{
	int a[100], i, n;
	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n");
	reverse(a, n);

}
void reverse(int b[100],int n)
{
	int i;
	for (i = n-1; i>=0 ; i--)
	{
		printf("%d ", b[i]);
	}
}
