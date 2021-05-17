#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("one-dimensional arrays and iterators\n");
    printf("Please enter the size of the array:\n");
    int sizeArray;
    scanf("%i", &sizeArray);
    int newArray[sizeArray];
    int value;

    printf("Enter the value for each field:\n");

    for (int i = 0; i <= sizeArray; i++)
    {
        scanf("%i", &value);
        newArray[i] = value;
    }

    for (int i = 0; i <= sizeArray; i++)
    {
        if (newArray[i] > value)
        {
         value = newArray[i];
         printf("The max value is:  %i", value);
        }
    }

    return 0;
}
