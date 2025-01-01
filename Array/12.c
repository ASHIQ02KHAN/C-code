#include <stdio.h>
int main()
{
    int arr[100];
    int i, j, n, count = 0;
    // Reading size of the array
    printf("Enter size of the array : ");
    scanf("%d", &n);
    //Reading elements of array
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //Find all duplicate elements in array
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
        // If duplicate element found then increment count by 1
        if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in array = %d", count);
    return 0;
}
