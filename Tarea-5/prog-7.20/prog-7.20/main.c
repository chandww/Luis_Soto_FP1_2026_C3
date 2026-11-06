#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Palabras.
   El programa separa las palabras que componen una cadena de caracteres. */

void fraction(char *cad);

int main(void)
{
    char cad[50];

    printf("\nIngrese la cadena de caracteres (maximo 50): ");
    fflush(stdin);
    if (fgets(cad, sizeof(cad), stdin)) {
        cad[strcspn(cad, "\n")] = '\0';
    }

    printf("\n");
    fraction(cad);

    return 0;
}

void fraction(char *cad)
/* Esta función separa las palabras de la cadena cada vez que encuentra un espacio. */
{
    int i = 0;
    while (cad[i] != '\0')
    {
        if (cad[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            putchar(cad[i]);
        }
        i++;
    }
    printf("\n");
}
