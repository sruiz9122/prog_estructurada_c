#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello I will print five rows whit hashtag caracter:\n");
    int limit = 5;
    int initialValue = 1;

    while (initialValue <= limit)
    {
        printf("#\n");
        initialValue++;
    }
    return 0;
}
