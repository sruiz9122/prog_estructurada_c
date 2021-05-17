#include <stdio.h>
#include <stdlib.h>

char nameStd[50];
float noteMin = 7;
float noteStd;

void validateRating()
{
    if (noteStd >= noteMin){
        printf("\nThe Student %s passes satisfactorily with a grade of %5.2f points \n", nameStd, noteStd);
    }else{
        printf("\nThe Student %s does not pass satisfactorily with a grade of %5.2f points\n", nameStd, noteStd);
    }
}

int main()
{
    printf("\nPlease enter name of student:\n");
    scanf("\n%s", &nameStd);
    printf("\nPlease enter rating of student between 0 and 10:\n");
    scanf("%f", &noteStd);
    validateRating();

    return 0;
}
