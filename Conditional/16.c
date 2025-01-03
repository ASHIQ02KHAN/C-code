#include <stdio.h>
int main()
{
    int anglea, angleb, anglec, sum;

    printf("Input three angles of triangle : ");
    scanf("%d %d %d", &anglea, &angleb, &anglec);

///// Calculate the sum of all angles of triangle ////
    sum = anglea + angleb + anglec;

////// Check whether sum=180 then its a valid triangle otherwise invalid triangle ////
    if(sum == 180)
    {
        printf("It is a valid triangle.\n");
    }
    else
    {
        printf("It is a invalid triangle.\n");
    }
    return 0;
}
