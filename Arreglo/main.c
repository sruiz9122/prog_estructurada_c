#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valOne[1];
    int result;

    printf("Enter five values\n");

    scanf("%i", &valOne[0]);
    scanf("%i", &valOne[1]);
    scanf("%i", &valOne[2]);
    scanf("%i", &valOne[3]);
    scanf("%i", &valOne[4]);

    printf("\nThe value one is: %i \n", valOne[0]);
    printf("The value two is: %i \n", valOne[1]);
    printf("The value three is: %i \n", valOne[2]);
    printf("The value four is: %i \n", valOne[3]);
    printf("The value five is: %i \n", valOne[4]);

    result = valOne[0] * valOne[1] * valOne[2] * valOne[3] * valOne[4];

    printf("\nWhen multiplying the values result is: %i \t\t", result);

    return 0;
}
