#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Pointers\n");
    float val;
    float *apVal;
    apVal = &val;
    *apVal = 3.1416;
    printf("The value var val is: %5.4f\n", val);
    return 0;
}
