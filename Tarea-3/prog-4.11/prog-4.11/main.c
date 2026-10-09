#include <stdio.h>
#include <stdlib.h>

/* Calcula el mayor divisor propio de un numero entero positivo. */
int mad(int N1);

int main(void)
{
    int NUM, RES;

    printf("\nIngresa un numero entero mayor que 1: ");
    if (scanf("%d", &NUM) != 1 || NUM < 2) {
        printf("\nEntrada invalida: ingresa un entero mayor que 1.\n");
        return 1;
    }

    RES = mad(NUM);
    printf("\nEl mayor divisor propio de %d es: %d", NUM, RES);
    return 0;
}

int mad(int N1)
{
    int I = N1 / 2;

    while (I > 1 && N1 % I != 0) {
        I--;
    }
    return I;
}
