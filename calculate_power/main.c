#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculatePower(int base, int exponent)
{
    float resultPower = pow(base, exponent);
    return resultPower;
}

int main()
{
    printf("Hello welcome to the application to calculate the power!\n");
    int baseOne;
    int exponentOne;
    printf("Please enter base:\n");
    scanf("%i", &baseOne);
    printf("Please enter exponent:\n");
    scanf("%i", &exponentOne);
    float result = calculatePower(baseOne, exponentOne);
    printf("Result is: %f \n", result);

    return 0;
}
