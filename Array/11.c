#include < stdio.h >
#define MAX_SIZE 1000 // Maximum size of the array
// Function declaration to print array
void printArray(int arr[], int len);
int main()
{
    int arr[MAX_SIZE];
    int even[MAX_SIZE];
    int odd[MAX_SIZE];
    int evenCount, oddCount;
    int i, size;
    // Reading size of the array
    printf("Enter size of the array: ");
    scanf("%d", & size);
    // Reading elements in array
    printf("Enter elements in the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", & arr[i]);
    }
    evenCount = 0;
    oddCount = 0;
    for (i = 0; i < size; i++)
    {
        // If arr[i] is odd
        if (arr[i] & 1)
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
        else
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
    }
    printf("\nElements of even array: ");
    printArray(even, evenCount);
    printf("\nElements of odd array: ");
    printArray(odd, oddCount);
    return 0;
}
//Logic
void printArray(int arr[], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
