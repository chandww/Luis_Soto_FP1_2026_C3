#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Cadena inversa.
   El programa invierte una cadena de caracteres y la almacena en otra cadena. */

void inverso(char *cad1, char *cad2);

int main(void)
{
    char cad[50], otra[50];

    printf("\nIngrese la cadena de caracteres (maximo 50): ");
    fflush(stdin);
    if (fgets(cad, sizeof(cad), stdin)) {
        cad[strcspn(cad, "\n")] = '\0';
    }

    inverso(cad, otra);

    printf("\nCadena original: %s", cad);
    printf("\nCadena invertida: %s\n", otra);

    return 0;
}

void inverso(char *cad1, char *cad2)
/* Esta función invierte una cadena de caracteres y la guarda en otra. */
{
    int i = 0, j, lon = 0;

    while (cad1[lon] != '\0')
    {
        lon++;
    }

    for (j = lon - 1; j >= 0; j--)
    {
        cad2[i] = cad1[j];
        i++;
    }
    cad2[i] = '\0';
}
