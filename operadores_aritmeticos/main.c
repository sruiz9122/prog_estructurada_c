#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radio;
    float height;
    float area;

    printf("Calculate area of the circle\n");
    printf("Please enter the area the circle: \n");
    scanf("%f",&radio);
    printf("Please enter the height the circle: \n");
    scanf("%f",&height);

    area = 2*3.1416*radio*(radio+height);

    printf("The area of circle is: %f \n", area);

    return 0;
}




