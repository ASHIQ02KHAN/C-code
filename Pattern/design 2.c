//user choice shaped RACTANGLE  //

#include <stdio.h>
int main()
{
    int i, j,rows,columns;

    //Input number of rows and columns from user //
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    for(i=1; i<=rows; i++)
    {
    // to print space to get pattern in mid position //
        for (j=1 ;j<=rows+5 ;j++)
        {
            printf(" ");
        }
    // main work //
        for(j=1; j<=columns; j++)
        {
            if(i==1 || i==rows || j==1 || j==columns )
            {
                printf("*");// Print star //
            }
            else
            {
                printf(" ");
            }
        }

    // for next line //
        printf("\n");
    }
    return 0;
}
