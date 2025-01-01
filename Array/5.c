#include <stdio.h>
int main()
{
    int arr[1000];
    int i, num, evennum, oddnum;
    // Reads size and elements in array
    printf("Enter size of the array: ");
    scanf("%d", &num);
    printf("Enter %d elements in array: ", num);


    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    evennum = 0; // Assuming 0 even numbers
    oddnum  = 0; // Assuming 0 odd numbers
    for(i=0; i<num; i++)
    {
/////////  If the current element of array is evennumber then increment evennumber count //////
        if(arr[i]%2 == 0)
        {
            evennum++;
        }
        else
        {
            oddnum++; // increment oddnumber count
        }
    }
    printf("Total even  numbers: %d\n", evennum);
    printf("Total odd numbers: %d\n", oddnum);

    return 0;
}
