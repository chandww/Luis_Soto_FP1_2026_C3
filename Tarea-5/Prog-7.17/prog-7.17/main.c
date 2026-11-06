#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <string.h>

/* Inverso.
   El programa invierte una cadena de caracteres. */

void inverso(char *cad);

int main(void)
{
    char cad[50];

    printf("\nIngrese la cadena de caracteres (maximo 50): ");
    fflush(stdin);
    if (fgets(cad, sizeof(cad), stdin)) {
        cad[strcspn(cad, "\n")] = '\0';
    }

    printf("\nCadena original: %s", cad);
    printf("\nCadena invertida: ");
    inverso(cad);
    printf("\n");

    return 0;
}

void inverso(char *cad)
/* Esta función invierte la cadena de caracteres utilizando un recorrido hacia atrás. */
{
    int i = 0;
    while (cad[i] != '\0')
    {
        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        putchar(cad[i]);
    }
}
