#include <string.h>

typedef struct person
{
    char name[40];
    char fname[40];
    int age;
    float CGPA;
} PERSON;

void printStructure(PERSON P){

}

int main()
{

    int n;
    scanf("%d", &n);
    getchar();
    PERSON people[n];

    for (int i = 0; i < n; i++)
    {


        printf("Enter the value of person %d: \n", i + 1);
        printf("Name: ");
        char nameString[40], fnameString[40];

        fgets(nameString, sizeof(nameString), stdin);
        nameString[strcspn(nameString, "\n")] = '\0';
        strcpy(people[i].name, nameString);

        printf("Age: ");
        scanf("%d", &people[i].age);

        printf("CGPA: ");
        scanf("%f", &people[i].CGPA);
        getchar();

        printf("Father name: ");
        fgets(fnameString, sizeof(fnameString), stdin);
        fnameString[strcspn(fnameString, "\n")] = '\0';
        strcpy(people[i].fname, fnameString);


    }

    for (int i = 0; i < n; i++)
    {
        printf("\nPerson No. %d", i+1);
        printf("\nName: %s", people[i].name);
        printf("\nFather name: %s", people[i].fname);
        printf("\nAge: %d", people[i].age);
        printf("\nCGPA: %.3f", people[i].CGPA);
        printf("\n");
    }

    return 0;
}
