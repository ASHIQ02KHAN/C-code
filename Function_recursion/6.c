#include <stdio.h>
#include <string.h>
int checkLength(char p[100]);
int main()
{

	char s[100];
	gets(s);
	int r = checkLength(s);
	printf("%d", r);
}
int checkLength(char p[100])
{
	int a = strlen(p);
	return a;
}

