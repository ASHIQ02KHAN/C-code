#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    gets(s);
    int sort;
    for(int i=0;s[i]!=0;i++){
        if(s[i]>sort){
            sort=s[i];
        }
    }
    puts(s);
}
