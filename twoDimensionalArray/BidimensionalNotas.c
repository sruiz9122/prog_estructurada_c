#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\t Two-dimensional arrangement - grade point average \n");
    printf("\n");

    int twoDimensionaArray [5][5] = {
                                    6,7,8,9,10,
                                    10,10,10,10,10,
                                    6,8,8,7,10,
                                    7,7,10,9,8,
                                    9,7,8,9,9
                                    };

    float twoDimensionaArrayb [1][1];

    float sum;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum = sum + twoDimensionaArray[i][j];
            printf("The qualification in the position [%i][%i] is: %i \n", i, j, twoDimensionaArray[i][j]);

        }

        printf("\n");

        for (int k = 0; k < 1; k++)
        {
           twoDimensionaArrayb[i][k] = sum / 5;
           printf("\t The average in the array [%i][5] is: %f \n", i, twoDimensionaArrayb[i][k]);
        }

        sum = sum * 0;
        printf("\n");

    }

    return 0;
}
