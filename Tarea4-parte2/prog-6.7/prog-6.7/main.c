#include <stdio.h>
#include <stdlib.h>

/* Transpuesta.
El programa, al recibir como dato un arreglo bidimensional, calcula su transpuesta. */

const int MAX = 50;

/* Prototipos de funciones. */
void Lectura(int [][MAX], int, int);
void Transpuesta(int [][MAX], int [][MAX], int, int);
void Imprime(int [][MAX], int, int);

int main(void)
{
    int MAT[MAX][MAX], TRA[MAX][MAX];
    int F, C;

    do
    {
        printf("Ingrese el número de filas del arreglo: ");
        scanf("%d", &F);
    }
    while (F > MAX || F < 1);

    do
    {
        printf("Ingrese el número de columnas del arreglo: ");
        scanf("%d", &C);
    }
    while (C > MAX || C < 1);

    printf("\nLectura del Arreglo\n");
    Lectura(MAT, F, C);

    Transpuesta(MAT, TRA, F, C);

    printf("\nImpresión del Arreglo Transpuesto\n");
    Imprime(TRA, C, F);

    return 0;
}

void Lectura(int A[][MAX], int F, int C)
/* La función Lectura se utiliza para leer un arreglo bidimensional entero de F
filas y C columnas. */
{
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
        {
            printf("Ingrese el elemento %d %d: ", I + 1, J + 1);
            scanf("%d", &A[I][J]);
        }
}

void Transpuesta(int M1[][MAX], int M2[][MAX], int F, int C)
/* La función Transpuesta se utiliza para calcular la transpuesta de un arreglo. */
{
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
            M2[J][I] = M1[I][J];
}

void Imprime(int A[][MAX], int F, int C)
/* La función Imprime se utiliza para escribir un arreglo bidimensional de tipo
entero de F filas y C columnas. */
{
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
            printf("\nElemento %d %d: %d", I + 1, J + 1, A[I][J]);
}
