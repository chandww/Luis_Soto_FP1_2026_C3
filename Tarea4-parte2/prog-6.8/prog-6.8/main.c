#include <stdio.h>
#include <stdlib.h>


/* Escalar.
El programa, al recibir como dato un arreglo bidimensional y un número real,
multiplica ambas entidades. */

const int MAX = 50;

/* Prototipos de funciones. */
void Lectura(float [][MAX], int, int);
void Escalar(float [][MAX], int, int, float);
void Imprime(float [][MAX], int, int);

int main(void)
{
    float MAT[MAX][MAX], NUM;
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

    printf("\nIngrese el número por el cual se multiplicará el arreglo: ");
    scanf("%f", &NUM);

    Escalar(MAT, F, C, NUM);

    printf("\nImpresión del Arreglo Modificado\n");
    Imprime(MAT, F, C);

    return 0;
}

void Lectura(float A[][MAX], int F, int C)
/* La función Lectura se utiliza para leer un arreglo bidimensional de tipo
real de F filas y C columnas. */
{
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
        {
            printf("Ingrese el elemento %d %d: ", I + 1, J + 1);
            scanf("%f", &A[I][J]);
        }
}

void Escalar(float A[][MAX], int F, int C, float NUM)
/* La función Escalar se utiliza para multiplicar un arreglo bidimensional por
un número real. */
{
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
            A[I][J] *= NUM;
}

void Imprime(float A[][MAX], int F, int C)
/* La función Imprime se utiliza para escribir un arreglo bidimensional de tipo
real de F filas y C columnas. */
{
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
            printf("\nElemento %d %d: %5.2f", I + 1, J + 1, A[I][J]);
}
