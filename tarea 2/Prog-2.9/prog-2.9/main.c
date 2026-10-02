#include <stdio.h>
#include <stdlib.h>



/* Expresión.
El programa, al recibir como datos tres valores enteros, establece si los
mismos satisfacen una expresión determinada.

R, T y Q: variables de tipo entero.
RES: variable de tipo real. */

void main(void)
{
    float RES;
    int Q, T, R;

    printf("Ingrese los valores de R, T y Q: ");
    scanf("%d %d %d", &R, &T, &Q);

    RES = 4 * (Q * Q) - (T * T * T) + (R * R * R * R);

    if (RES < 820)
        printf("\nQ = %d \tT = %d \tR = %d", Q, T, R);
}
