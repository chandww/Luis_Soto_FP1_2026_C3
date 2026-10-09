#include <stdio.h>
#include <stdlib.h>

/* Ejemplo de funciones y parametros por referencia. */
int F1(int X, int *Y);

int A = 3;
int B = 7;
int C = 4;
int D = 2;

int main(void)
{
    A = F1(C, &D);
    printf("\n%d %d %d %d", A, B, C, D);
    C = 3;
    C = F1(A, &C);
    printf("\n%d %d %d %d", A, B, C, D);
    return 0;
}

int F1(int X, int *Y)
{
    int A;

    A = X * *Y;
    C++;
    B += *Y;
    printf("\n%d %d %d %d", A, B, C, D);
    /* Se omite '*Y--': decrementaba el apuntador y podia dejarlo invalido. */
    return C;
}

