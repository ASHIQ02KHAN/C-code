#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    gets(s);
    int i,count=0,num;
    for(i=0;s[i]!='\0';i++){
        if(s[i]>=0 && s[i]<=9){
            count++;
        }
    }
    printf("%d",count);
}
