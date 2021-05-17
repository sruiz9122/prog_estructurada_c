#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value;
    printf("Enter value:\n");
    scanf("%i", &value);
    value %= 5;
    value ++;
    printf("The value is = %i \n", value);
    return 0;
}

