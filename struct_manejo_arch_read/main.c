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
    file = fopen("persDat001.dat", "rb");

    if(file != NULL)
    {
        fread(&person, sizeof(person),1,file);

        printf("Print data \n");
        printf("Name: %s \n", person.name);
        printf("Last Name: %s \n", person.lastName);
        printf("Age: %i \n", person.age);


        fclose(file);
    }else{
        printf("File do not create successfully. please verify.");
    }


    return 0;
}
