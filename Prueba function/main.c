#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b)
{
    int res = a + b;
    return res;
}

int main()
{
    printf("Functions!\n");
    int aditionRes = addition(3, 4);
    printf("Result is: %i\n", aditionRes);
    return 0;
}
