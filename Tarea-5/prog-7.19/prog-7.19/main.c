#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <string.h>

/* Cuenta palabras.
   El programa calcula el número de palabras que hay en una cadena de caracteres. */

int cuenta(char *cad);

int main(void)
{
    char cad[50];
    int i;

    printf("\nIngrese la cadena de caracteres (maximo 50): ");
    fflush(stdin);
    if (fgets(cad, sizeof(cad), stdin)) {
        cad[strcspn(cad, "\n")] = '\0';
    }

    i = cuenta(cad);
    printf("\nEl numero de palabras en la cadena es: %d\n", i);

    return 0;
}

int cuenta(char *cad)
/* Esta función cuenta el número de palabras separadas por espacios en la cadena. */
{
    int i = 0, c = 0;

    if (cad[0] != '\0' && cad[0] != ' ')
    {
        c = 1;
    }

    while (cad[i] != '\0')
    {
        if (cad[i] == ' ' && cad[i + 1] != ' ' && cad[i + 1] != '\0')
        {
            c++;
        }
        i++;
    }

    return c;
}
