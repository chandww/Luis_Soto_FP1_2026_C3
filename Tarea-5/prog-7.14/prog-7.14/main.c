#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Sube.
   El programa convierte una cadena de caracteres de minúsculas a mayúsculas. */

void upper(char *cad);

int main(void)
{
    char cad[50];

    printf("\nIngrese la cadena de caracteres (maximo 50): ");
    fflush(stdin);
    if (fgets(cad, sizeof(cad), stdin)) {
        cad[strcspn(cad, "\n")] = '\0';
    }

    upper(cad);

    printf("\nLa cadena en mayusculas es: %s\n", cad);

    return 0;
}

void upper(char *cad)
/* Esta función convierte los caracteres de la cadena a mayúsculas. */
{
    int i = 0;
    while (cad[i] != '\0')
    {
        cad[i] = toupper(cad[i]);
        i++;
    }
}
