#include <stdio.h>
#include <stdlib.h>

int main()
{
    int upperLimit, bottomLimit = 0, initial;
    int iFibonacci, valueA = 0 , valueB = 1;
    printf("Please enter the until you want to see the fibonacci series:\n");
    scanf("%i", &upperLimit);

    printf("The number is: %i \n", valueA);
    printf("The number is: %i \n", valueB);
    for (initial = bottomLimit; initial <= upperLimit - 3 ; initial++ )
    {
       iFibonacci = valueA + valueB;
       printf("The number is: %i \n", iFibonacci);
        valueA = valueB;
        valueB = iFibonacci;
    }

    return 0;
}
