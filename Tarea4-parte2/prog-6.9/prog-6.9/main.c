#include <stdio.h>
#include <stdlib.h>

/* Casa de bolsa.
El programa calcula el valor total de las acciones de diferentes empresas
en distintos días, así como el total por empresa y por día. */

const int MAX = 50;

/* Prototipos de funciones. */
void Lectura(float [][MAX], int, int);
void Funcion1(float [][MAX], int, int);
void Funcion2(float [][MAX], int, int);

int main(void)
{
    float ACC[MAX][MAX];
    int F, C;

    do
    {
        printf("Ingrese el número de empresas: ");
        scanf("%d", &F);
    }
    while (F > MAX || F < 1);

    do
    {
        printf("Ingrese el número de días: ");
        scanf("%d", &C);
    }
    while (C > MAX || C < 1);

    printf("\nLectura del Arreglo\n");
    Lectura(ACC, F, C);

    printf("\nTotales por empresa\n");
    Funcion1(ACC, F, C);

    printf("\n\nTotales por día\n");
    Funcion2(ACC, F, C);

    return 0;
}

void Lectura(float A[][MAX], int F, int C)
/* La función Lectura se utiliza para leer un arreglo bidimensional de tipo
real de F filas (empresas) y C columnas (días). */
{
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
        {
            printf("Ingrese el valor de la acción de la empresa %d en el día %d: ", I + 1, J + 1);
            scanf("%f", &A[I][J]);
        }
}

void Funcion1(float A[][MAX], int F, int C)
/* La función Funcion1 se utiliza para calcular el total de acciones por cada empresa. */
{
    int I, J;
    float SUM;
    for (I = 0; I < F; I++)
    {
        SUM = 0;
        for (J = 0; J < C; J++)
            SUM += A[I][J];
        printf("\nEmpresa %d - Total: %5.2f", I + 1, SUM);
    }
}

void Funcion2(float A[][MAX], int F, int C)
/* La función Funcion2 se utiliza para calcular el total de acciones por cada día. */
{
    int I, J;
    float SUM;
    for (J = 0; J < C; J++)
    {
        SUM = 0;
        for (I = 0; I < F; I++)
            SUM += A[I][J];
        printf("\nDía %d - Total: %5.2f", J + 1, SUM);
    }
}
