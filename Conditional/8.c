#include <stdio.h>
int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);


     if(ch >= 'a' && ch <= 'z')
    {
        printf("%c is lowercase alphabet.", ch);
    }


    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c is uppercase alphabet.", ch);
    }


    else
    {
        printf("%c is not an alphabet.", ch);
    }

    return 0;
}
