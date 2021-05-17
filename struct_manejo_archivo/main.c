#include <stdio.h>
#include <stdlib.h>

struct personalData
{
    char name[20];
    char lastName[20];
    int age;
};

int main()
{
    printf("Data structures\n");
    struct personalData person;

    FILE *file;
    file = fopen("persDat001.dat", "w");

    if(file != NULL)
    {
        fflush(stdin);

        printf("Read data \n");
        printf("Enter name: \n");
        gets(person.name);
        printf("Enter last name: \n");
        gets(person.lastName);
        printf("Enter age: \n");
        scanf("%i", &person.age);
        printf("Print data: \n");
        printf("%s \n", person.name);
        printf("%s \n", person.lastName);
        printf("%i \n", person.age);

        fwrite(&person, sizeof(person), 1, file);

        fclose(file);
    }else{
        printf("File do not create successfully. please verify.");
    }


    return 0;
}
