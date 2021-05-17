#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    printf("Enter the factorial function, n is worth: %i\n", n);
    if(n > 1){
        printf("\nThe function will call itself again \n");
        return n * factorial(n - 1);
    }else{
        printf("\nn equals 1, recursion ends");
        return 1;
    }
}

int main()
{
    printf("\nRecursion!\n");
    int result = factorial(5);
    printf("\nThe result is: %i", result);
    return 0;
}
