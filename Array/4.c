#include <stdio.h>

int main()
{
    int arr[1000];
    int i, num, sum=0;

    printf("Enter size of the array: ");
    scanf("%d", &num);
    printf("Enter %d elements in the array: ", num);

    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    //Adding all elements//
    for(i=0; i<num; i++)
    {
         // Calculating sum
        sum = sum + arr[i];
    }
    printf("Sum of all elements of array = %d", sum);

return 0;
}
