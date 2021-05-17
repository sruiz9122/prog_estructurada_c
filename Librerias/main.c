#include <stdio.h>
#include <stdlib.h>
#include "operatios.h"

int main()
{
    printf("Bookstores!\n");

    float firstValue = 10;
    float secondValue = 15;
    float result;
    int option;

    printf("I am Calculator: \n");
    printf("what operation do you want to perform\n");
    printf("1. Sum\n");
    printf("2. Subtraction \n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("select an option\n");

    scanf("%i", &option);

    switch(option)
    {
        case 1:
            result = addition(firstValue, secondValue);
        break;
        case 2:
            result = substraction(firstValue, secondValue);
        break;
        case 3:
            result = multiplication(firstValue, secondValue);
        break;
        case 4:
            result = division(firstValue, secondValue);
        break;
    }

    printf("Result is: %5.2f", result);

    return 0;
}
