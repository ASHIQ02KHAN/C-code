#include<stdio.h>
int check_even_odd(int j);
int main()
{
	int i, r;
	scanf_s("%d", &i);
	r = check_even_odd(i);
	if (r == 0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}

}
int check_even_odd(int j)
{
	int r;
	if (j % 2 == 0)
	{
		r = 0;
	}
	else
	{
		r = 1;
	}
	return r;
	return r;
}
