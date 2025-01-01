#include <stdio.h>
int main()
{
    int first[100], second[100];
    int i, num;

    printf("Enter the size of the array : ");
    scanf("%d", &num);
    printf("Enter elements of first array : ");


    for(i=0; i<num; i++)
    {
        scanf("%d", &first[i]);
    }
///////Copy all elements from first array to second array/////////
   for(i=0; i<num; i++)
    {
        second[i] = first[i];
    }
///////Printing all elements of first array entered by user/////////
    printf("\nElements of first array are: \n");
    for(i=0; i<num; i++)
    {
        printf("%d\t", first[i]);
    }
//////Printing all elements of second array/////////
    printf("\nElements of second array are: \n ");

    for(i=0; i<num; i++)
    {
        printf("%d\t", second[i]);
    }
  return 0;
}
