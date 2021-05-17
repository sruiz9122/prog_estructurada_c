#include <stdio.h>
#include <stdlib.h>

int main()
{
    float note;
    printf("Hello, please enter your student's grade:\n");
    scanf("%f", &note);
    if (note < 60)
    {
        printf("The student failed with the following note: %f \n", note);
    }else if (note > 90)
    {
        printf("The student approved with the following note(^_^): %f \n", note);
    }else
    {
        printf("The student approved with the following note: %f \n", note);
    }

    return 0;
}
