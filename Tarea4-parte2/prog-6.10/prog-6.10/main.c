#include <stdio.h>
#include <stdlib.h>


/* Cuadrado mágico.
El programa construye un cuadrado mágico de orden impar. */

const int MAX = 50;

/* Prototipos de funciones. */
void Construye(int [][MAX], int);
void Imprime(int [][MAX], int);

int main(void)
{
    int CUA[MAX][MAX], TAM;

    do
    {
        printf("Ingrese el tamaño del cuadrado (número impar): ");
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1 || TAM % 2 == 0);

    Construye(CUA, TAM);

    printf("\nImpresión del Cuadrado Mágico\n");
    Imprime(CUA, TAM);

    return 0;
}

void Construye(int A[][MAX], int T)
/* La función Construye se utiliza para formar el cuadrado mágico. */
{
    int I = 0, J = T / 2, NUM = 1, FIL, COL;

    /* Inicializamos la matriz en 0 para poder verificar casillas vacías. */
    for (int k = 0; k < T; k++)
        for (int l = 0; l < T; l++)
            A[k][l] = 0;

    A[I][J] = NUM;

    for (NUM = 2; NUM <= T * T; NUM++)
    {
        FIL = I;
        COL = J;

        I = (I - 1 < 0) ? T - 1 : I - 1;
        J = (J + 1 == T) ? 0 : J + 1;

        if (A[I][J] != 0)
        {
            I = FIL + 1;
            J = COL;
        }

        A[I][J] = NUM;
    }
}

void Imprime(int A[][MAX], int T)
/* La función Imprime se utiliza para escribir el cuadrado mágico. */
{
    int I, J;
    for (I = 0; I < T; I++)
    {
        for (J = 0; J < T; J++)
            printf("%5d", A[I][J]);
        printf("\n");
    }
}
