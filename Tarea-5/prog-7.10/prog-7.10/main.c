#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

/* Suma y promedio.
   El programa, al recibir como datos varias cadenas de caracteres que
   contienen reales, los suma y obtiene el promedio de los mismos. */

int main(void)
{
    char c, cad[10];
    int i = 0;
    float sum = 0.0;

    printf("\nDesea ingresar una cadena de caracteres (S/N)? ");
    c = getchar();

    // Limpiar el salto de línea pendiente en el búfer
    while (getchar() != '\n' && getchar() != EOF);

    while (c == 'S' || c == 's')
    {
        printf("\nIngrese la cadena de caracteres: ");
        if (scanf("%9s", cad) == 1)
        {
            i++;
            sum += atof(cad);
        }

        // Limpiar el búfer de entrada
        while (getchar() != '\n' && getchar() != EOF);

        printf("\nDesea ingresar otra cadena de caracteres (S/N)? ");
        c = getchar();

        // Limpiar el salto de línea pendiente
        while (getchar() != '\n' && getchar() != EOF);
    }

    printf("\nSuma: %.2f", sum);

    if (i > 0)
    {
        printf("\nPromedio: %.2f\n", sum / i);
    }
    else
    {
        printf("\nPromedio: 0.00\n");
    }

    return 0;
}
