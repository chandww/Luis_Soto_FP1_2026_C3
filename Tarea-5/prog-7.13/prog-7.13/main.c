#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Longitud.
   El programa calcula la longitud de una cadena de caracteres de forma manual. */

int longitud(char *cad);

int main(void)
{
    int i;
    char cad[50];

    printf("\nIngrese la cadena de caracteres (maximo 50 caracteres): ");
    fflush(stdin);
    if (fgets(cad, sizeof(cad), stdin)) {
        cad[strcspn(cad, "\n")] = '\0';
    }

    i = longitud(cad);
    printf("\nLa longitud de la cadena es: %d\n", i);

    return 0;
}

int longitud(char *cad)
/* Esta función calcula la longitud de la cadena. */
{
    int cue = 0;
    while (cad[cue] != '\0')
    {
        cue++;
    }
    return cue;
}
