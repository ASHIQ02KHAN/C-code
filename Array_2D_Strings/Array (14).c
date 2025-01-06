#include <stdio.h>

int main()
{

    int size; //, max = -9999, maxIndex, min = 9999, minIndex;
    scanf("%d", &size);

    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int checkValue;
    scanf("%d", &checkValue);


    int indexArray[size], k = 0, foundFlag = 0;
    for (int i = 0; i < size; i++)
    {
        if (checkValue == array[i])
        {
            indexArray[k] = i;
            k++;
            foundFlag = 1;
        }
    }

    if (foundFlag == 1)
    {
        printf("FOUND at Index Position: ");
        for (int i = 0; i < k; i++)
        {
            printf("%d", indexArray[i]);
            if (i < k - 1)
                printf(",");
        }
    }
    else{
        printf("NOT FOUND");
    }

    return 0;
}
