#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("hello here you can see the sum of a matrix of [3] X [4] \n");

    int twodimensionalArray [3][4];
    int totalFirstRowOne;
    int totalFirstRowTwo;
    int totalFirstRowThree;

    /*first row*/
    twodimensionalArray [0][0] = 1;
    twodimensionalArray [0][1] = 1;
    twodimensionalArray [0][2] = 1;
    twodimensionalArray [0][3] = 1;

    totalFirstRowOne = twodimensionalArray [0][0] + twodimensionalArray [0][1] + twodimensionalArray [0][2] + twodimensionalArray [0][3];
    printf("Sum of the first row = %i", totalFirstRowOne);

    /*Second row*/
    twodimensionalArray [1][0] = 2;
    twodimensionalArray [1][1] = 3;
    twodimensionalArray [1][2] = 2;
    twodimensionalArray [1][3] = 3;

    totalFirstRowTwo = twodimensionalArray [1][0] + twodimensionalArray [1][1] + twodimensionalArray [1][2] + twodimensionalArray [1][3];
    printf("\nSum of the Second row = %i", totalFirstRowTwo);

    /*Third row*/
    twodimensionalArray [2][0] = 6;
    twodimensionalArray [2][1] = 7;
    twodimensionalArray [2][2] = 6;
    twodimensionalArray [2][3] = 7;

    totalFirstRowThree = twodimensionalArray [2][0] + twodimensionalArray [2][1] + twodimensionalArray [2][2] + twodimensionalArray [2][3];
    printf("\nSum of the Third row = %i", totalFirstRowThree);

    return 0;
}
