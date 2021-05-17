#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valOne, valTwo;
    printf("Enter value one:\n");
    scanf("%i", &valOne);
    printf("Enter value two:\n");
    scanf("%i", &valTwo);

    if (valOne < valTwo)
    {
        printf("The less value is: %i \n", valOne);
    }else
    {
        printf("The less value is: %i \n", valTwo);
    }

    return 0;
}
