#include <stdio.h>
#include <stdlib.h>


/* Producto de matrices.
El programa calcula el producto de dos arreglos bidimensionales. */

const int MAX = 50;

/* Prototipos de funciones. */
void Lectura(int [][MAX], int, int);
void Producto(int [][MAX], int, int, int [][MAX], int, int, int [][MAX]);
void Imprime(int [][MAX], int, int);

int main(void)
{
    int MA[MAX][MAX], MB[MAX][MAX], MC[MAX][MAX];
    /* Declaración de los tres arreglos bidimensionales. */
    int F1, C1, F2, C2;

    do
    {
        printf("Ingrese el número de filas del arreglo MA: ");
        scanf("%d", &F1);
    }
    while (F1 > MAX || F1 < 1);

    do
    {
        printf("Ingrese el número de columnas del arreglo MA: ");
        scanf("%d", &C1);
    }
    while (C1 > MAX || C1 < 1);

    do
    {
        printf("Ingrese el número de filas del arreglo MB: ");
        scanf("%d", &F2);
    }
    while (F2 > MAX || F2 < 1);

    do
    {
        printf("Ingrese el número de columnas del arreglo MB: ");
        scanf("%d", &C2);
    }
    while (C2 > MAX || C2 < 1);

    if (C1 == F2)
    {
        printf("\nLectura del Arreglo MA\n");
        Lectura(MA, F1, C1);

        printf("\nLectura del Arreglo MB\n");
        Lectura(MB, F2, C2);

        Producto(MA, F1, C1, MB, F2, C2, MC);

        printf("\nImpresión del Arreglo MC\n");
        Imprime(MC, F1, C2);
    }
    else
    {
        printf("\nError en las dimensiones de las matrices");
    }

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

void Producto(int M1[][MAX], int F1, int C1, int M2[][MAX], int F2, int C2, int M3[][MAX])
/* La función Producto se utiliza para multiplicar dos arreglos bidimensionales. */
{
    int I, J, K;
    for (I = 0; I < F1; I++)
        for (J = 0; J < C2; J++)
        {
            M3[I][J] = 0;
            for (K = 0; K < C1; K++)
                M3[I][J] += M1[I][K] * M2[K][J];
        }
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
