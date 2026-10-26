#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

/* Matriz simétrica.
El programa, al recibir como dato un arreglo bidimensional cuadrado, determina
si el mismo es simétrico. */

const int MAX = 50;

/* Prototipos de funciones. */
void Lectura(int [][MAX], int);
int Simetrica(int [][MAX], int);

int main(void)
{
    int MAT[MAX][MAX], N;

    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &N);
    }
    while (N > MAX || N < 1);

    Lectura(MAT, N);

    if (Simetrica(MAT, N))
        printf("\nEl arreglo es simétrico.");
    else
        printf("\nEl arreglo no es simétrico.");

    return 0;
}

void Lectura(int A[][MAX], int T)
/* La función Lectura se utiliza para leer un arreglo bidimensional cuadrado de
T filas y T columnas. */
{
    int I, J;
    for (I = 0; I < T; I++)
        for (J = 0; J < T; J++)
        {
            printf("Ingrese el elemento %d %d: ", I + 1, J + 1);
            scanf("%d", &A[I][J]);
        }
}

int Simetrica(int A[][MAX], int T)
/* La función Simetrica se utiliza para determinar si el arreglo bidimensional
es simétrico. Regresa 1 si lo es o 0 en caso contrario. */
{
    int I = 0, J, F = 1;
    while ((I < T) && F)
    {
        J = 0;
        while ((J < I) && F)
        {
            if (A[I][J] == A[J][I])
                J++;
            else
                F = 0;
        }
        I++;
    }
    return F;
}
