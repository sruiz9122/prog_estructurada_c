#include <stdio.h>
#include <stdlib.h>

int main()
{

    float fahrenheit;
    float celcius;

    printf("Convert fahrenheit to celsius \n");
    printf("Please enter the grades fahrenheit: \n");
    scanf("%f", &fahrenheit);

    celcius = (fahrenheit - 32) * 5/9;

    printf("The grades celcius is: %f \n", celcius);

    return 0;
}

