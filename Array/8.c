#include <stdio.h>
int main()
{
    int arr[100];
    int size, i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");


    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
//////Sorting an array in ascending order/////////
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
//////If there is a smaller element found on right of the array then swap it///
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //Printing the sorted array in ascending order///
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<size; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
