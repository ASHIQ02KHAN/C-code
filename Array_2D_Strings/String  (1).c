#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);
    int i,count=1;
    for(i=0;str[i];i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
