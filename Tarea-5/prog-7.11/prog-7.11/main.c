#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* Verifica.
   El programa, al recibir como datos una cadena de caracteres y una posición específica en la cadena,
   determina si el caracter correspondiente es una letra minúscula. */

int main(void)
{
    char p, cad[50];
    int n;

    printf("\nIngrese la cadena de caracteres (maximo 50): ");
    fflush(stdin);
    if (fgets(cad, sizeof(cad), stdin)) {
        cad[strcspn(cad, "\n")] = '\0';
    }

    printf("\nIngrese la posicion en la cadena que desea verificar: ");
    if (scanf("%d", &n) == 1)
    {
        if ((n >= 1) && (n <= (int)strlen(cad)))
        {
            p = cad[n - 1];
            if (islower(p))
            {
                printf("\n%c es una letra minuscula\n", p);
            }
            else
            {
                printf("\n%c no es una letra minuscula\n", p);
            }
        }
        else
        {
            printf("\nEl valor ingresado de n es incorrecto\n");
        }
    }

    return 0;
}
