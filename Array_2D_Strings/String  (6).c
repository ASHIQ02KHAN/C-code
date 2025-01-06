#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    gets(s);
    int i,count=0,occ;
    occ=getchar();
    for(i=0;s[i]!='\0';i++){
        if(s[i]==occ)
            count++;
    }
    printf("%d",count);
}
