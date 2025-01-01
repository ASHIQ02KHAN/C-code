#include <stdio.h>
int main()
{
    int arr[100];
    int i, num;
    printf("Enter size of the array: ");
    scanf("%d", &num);
    //Reading elements of array
    printf("Enter elements in array: ");
    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nAll negative elements in array are: ");
    for(i=0; i<num; i++)
    {
        //Printing negative elements///
        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}
