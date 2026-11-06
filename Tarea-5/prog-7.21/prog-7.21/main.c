#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Ordena.
   El programa ordena alfabéticamente un arreglo bidimensional de cadenas de caracteres. */

void ordena(char cad[][30], int n);

int main(void)
{
    int i, n;
    char FRA[20][30];

    printf("\nIngrese el numero de filas del arreglo (maximo 20): ");
    if (scanf("%d", &n) == 1)
    {
        if (n > 20) n = 20;
        if (n < 1) n = 1;

        // Limpiar el búfer después de leer el entero
        while (getchar() != '\n' && getchar() != EOF);

        for (i = 0; i < n; i++)
        {
            printf("Ingrese la cadena %d (maximo 29 caracteres): ", i + 1);
            if (fgets(FRA[i], sizeof(FRA[i]), stdin))
            {
                FRA[i][strcspn(FRA[i], "\n")] = '\0';
            }
        }

        ordena(FRA, n);

        printf("\n\nArreglo ordenado alfabeticamente:\n");
        for (i = 0; i < n; i++)
        {
            printf("Cadena %d: %s\n", i + 1, FRA[i]);
        }
    }

    return 0;
}

void ordena(char cad[][30], int n)
/* Esta función utiliza el método de burbuja para ordenar alfabéticamente
   las cadenas de caracteres. */
{
    int i, j;
    char aux[30];

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(cad[i], cad[j]) > 0)
            {
                strcpy(aux, cad[i]);
                strcpy(cad[i], cad[j]);
                strcpy(cad[j], aux);
            }
        }
    }
}
