#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    int i, length;
    int count = 0;

    printf("Enter a string:");
    gets(string);

    length = strlen(string);
    for(i=0; i < length ; i++)
    {
        if(string[i] != string[length-i-1])
        {
            count = 1;
            break;
        }
    }
    if (count)
    {
        printf("No");
    }
    else
    {
        printf("yes");
    }
    return 0;
}
