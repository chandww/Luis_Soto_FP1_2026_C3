#include <stdio.h>
#include <stdlib.h>

/* Billete de ferrocarril.
El programa calcula el costo de un billete de ferrocarril teniendo en
cuenta la distancia entre las dos ciudades y el tiempo de permanencia
del pasajero.

DIS y TIE: variables de tipo entero.
BIL: variable de tipo real. */

void main(void)
{
    float BIL;
    int TIE, DIS;

    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");
    scanf("%d %d", &DIS, &TIE);

    BIL = ((DIS * 2 > 500) && (TIE > 10)) ? (DIS * 2 * 0.19 * 0.8) : (DIS * 2 * 0.19);

    printf("\n\nCosto del billete: %.2f", BIL);
}
