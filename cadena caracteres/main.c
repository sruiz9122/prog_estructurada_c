#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Cadena de caracteres\n");
    char nameC[50];
    int size;
    printf("Ingresar el nombre con gets: \n");
    gets(nameC);//Lee caracteres con espacio
    printf("El nombre es: ");
    puts(nameC);
    size = strlen(nameC);
    printf("\ El tama�o de la cadena es: %i \n", size);

    return 0;
}
