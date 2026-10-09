#include <stdio.h>
#include <stdlib.h>

/* Determina si el segundo numero es multiplo del primero. */
int multiplo(int N1, int N2);

int main(void)
{
    int NU1, NU2, RES;

    printf("\nIngresa los dos numeros: ");
    if (scanf("%d %d", &NU1, &NU2) != 2) {
        printf("\nEntrada invalida.\n");
        return 1;
    }
    if (NU1 == 0) {
        printf("\nEl primer numero no puede ser cero.\n");
        return 1;
    }

    RES = multiplo(NU1, NU2);
    if (RES) {
        printf("\nEl segundo numero es multiplo del primero");
    } else {
        printf("\nEl segundo numero no es multiplo del primero");
    }

    return 0;
}

int multiplo(int N1, int N2)
{
    return N2 % N1 == 0;
}
