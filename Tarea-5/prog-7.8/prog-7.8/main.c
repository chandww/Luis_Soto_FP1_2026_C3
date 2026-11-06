#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Minúsculas y mayúsculas.
   El programa, al recibir como dato un arreglo de cadenas de caracteres,
   determina el número de minúsculas y mayúsculas que hay en cada cadena. */

void minymay(char *cadena); /* Prototipo de función corregido */

int main(void)
{
    int i, n;
    char FRA[20][50];

    printf("\nIngrese el numero de filas del arreglo: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Ingrese la linea %d de texto: ", i + 1);
        fflush(stdin);
        scanf("%49s", FRA[i]); /* Se usa scanf seguro para evitar gets */
    }

    printf("\n\n");
    for (i = 0; i < n; i++)
    {
        minymay(FRA[i]);
    }

    return 0;
}

void minymay(char *cadena)
/* Esta función se utiliza para calcular el número de minúsculas
   y mayúsculas que hay en cada cadena. */
{
    int i = 0, mi = 0, ma = 0;

    while (cadena[i] != '\0')
    {
        if (islower(cadena[i]))
        {
            mi++;
        }
        else if (isupper(cadena[i]))
        {
            ma++;
        }
        i++;
    }

    printf("\nNumero de letras minusculas: %d", mi);
    printf("\nNumero de letras mayusculas: %d\n", ma);
}
