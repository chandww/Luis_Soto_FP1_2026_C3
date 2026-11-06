#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Reemplaza.
   El programa reemplaza un caracter por otro en una cadena de caracteres. */

void reemplaza(char *cad, char car1, char car2);

int main(void)
{
    char cad[50], car1, car2;

    printf("\nIngrese la cadena de caracteres (maximo 50): ");
    fflush(stdin);
    if (fgets(cad, sizeof(cad), stdin)) {
        cad[strcspn(cad, "\n")] = '\0';
    }

    printf("\nIngrese el caracter que desea reemplazar: ");
    car1 = getchar();
    while (getchar() != '\n' && getchar() != EOF); // Limpiar buffer

    printf("Ingrese el nuevo caracter: ");
    car2 = getchar();

    reemplaza(cad, car1, car2);

    printf("\nLa cadena modificada es: %s\n", cad);

    return 0;
}

void reemplaza(char *cad, char car1, char car2)
/* Esta función reemplaza todas las ocurrencias de car1 por car2 en la cadena. */
{
    int i = 0;
    while (cad[i] != '\0')
    {
        if (cad[i] == car1)
        {
            cad[i] = car2;
        }
        i++;
    }
}
