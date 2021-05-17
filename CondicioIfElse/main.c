#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretValue = 5;
    int valueToGuess;

    printf("Enter a number between 1 and 10:\n");
    scanf("%i", &valueToGuess);

    printf("The value is: %i \n", valueToGuess);

    if (secretValue == valueToGuess)
    {
         printf("You have the correct value!\n");
    }else if (valueToGuess <= 0)
        {
            printf("The value must be greater than 0!\n");
        }else if (valueToGuess >= 10)
        {
            printf("The value must be less than or equal to 10\n");
        }else
        {
            printf("You have the wrong number\n");
        }

    return 0;
}
