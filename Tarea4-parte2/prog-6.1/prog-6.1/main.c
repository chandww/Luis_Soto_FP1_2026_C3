#include <stdio.h>
#include <stdlib.h>

/* Lectura de matrices.
El programa lee elementos para una matriz de tipo entero de dos dimensiones. */
void Lectura(int [][3], int);
void main(void)
{
    int MAT[3][3];
    Lectura(MAT, 3);
}

void Lectura(int A[][3], int F)
{
    int I, J;
    for (I=0; I<F; I++)
        for (J=0; J<3; J++)
        {
            printf("Ingrese el elemento %d %d: ", I+1, J+1);
            scanf("%d", &A[I][J]);
        }
}
