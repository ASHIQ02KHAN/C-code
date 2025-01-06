#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    gets(s);
    int i;
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
    puts(s);
}
