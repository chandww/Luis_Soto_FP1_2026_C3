#include <stdio.h>
#include <stdlib.h>

/* Calcula el maximo comun divisor mediante el algoritmo de Euclides. */
int mcd(int N1, int N2);

int main(void)
{
    int NU1, NU2, RES;

    printf("\nIngresa dos numeros enteros: ");
    if (scanf("%d %d", &NU1, &NU2) != 2) {
        printf("\nEntrada invalida.\n");
        return 1;
    }

    RES = mcd(NU1, NU2);
    printf("\nEl maximo comun divisor de %d y %d es: %d", NU1, NU2, RES);
    return 0;
}

int mcd(int N1, int N2)
{
    int R;

    while (N2 != 0) {
        R = N1 % N2;
        N1 = N2;
        N2 = R;
    }
    if (N1 < 0) {
        N1 = -N1;
    }
    return N1;
}
