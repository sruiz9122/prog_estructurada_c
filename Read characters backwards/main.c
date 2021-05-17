#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to program read characters backwards\n");
    char nameC[50];
    printf("Enter characters: \n");
    gets(nameC);
    printf("The characters backwards is: ");
    puts(nameC);
    int size = strlen(nameC);
    for (int i = size; i >=0; i--)
    {
        printf("%c", nameC[i]);
    }

    return 0;
}
