#include <stdio.h>
#include <stdlib.h>

/* Alumnos.
El programa, al recibir un arreglo bidimensional que contiene las calificaciones
de un grupo de alumnos en diferentes materias, calcula el promedio de cada alumno
y el promedio de cada materia. */

const int MAX = 50;

/* Prototipos de funciones. */
void Lectura(float [][MAX], int, int);
void FAlumnos(float [][MAX], int, int);
void FMaterias(float [][MAX], int, int);

int main(void)
{
    float ALU[MAX][MAX];
    int F, C;

    do
    {
        printf("Ingrese el número de alumnos: ");
        scanf("%d", &F);
    }
    while (F > MAX || F < 1);

    do
    {
        printf("Ingrese el número de materias: ");
        scanf("%d", &C);
    }
    while (C > MAX || C < 1);

    printf("\nLectura del Arreglo\n");
    Lectura(ALU, F, C);

    printf("\nPromedios de los alumnos\n");
    FAlumnos(ALU, F, C);

    printf("\n\nPromedios de las materias\n");
    FMaterias(ALU, F, C);

    return 0;
}

void Lectura(float A[][MAX], int F, int C)
/* La función Lectura se utiliza para leer un arreglo bidimensional de tipo
real de F filas (alumnos) y C columnas (materias). */
{
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
        {
            printf("Ingrese la calificación %d del alumno %d: ", J + 1, I + 1);
            scanf("%f", &A[I][J]);
        }
}

void FAlumnos(float A[][MAX], int F, int C)
/* La función FAlumnos se utiliza para calcular el promedio de cada alumno. */
{
    int I, J;
    float SUM, PRO;
    for (I = 0; I < F; I++)
    {
        SUM = 0;
        for (J = 0; J < C; J++)
            SUM += A[I][J];
        PRO = SUM / C;
        printf("\nEl promedio del alumno %d es: %5.2f", I + 1, PRO);
    }
}

void FMaterias(float A[][MAX], int F, int C)
/* La función FMaterias se utiliza para calcular el promedio de cada materia. */
{
    int I, J;
    float SUM, PRO;
    for (J = 0; J < C; J++)
    {
        SUM = 0;
        for (I = 0; I < F; I++)
            SUM += A[I][J];
        PRO = SUM / F;
        printf("\nEl promedio de la materia %d es: %5.2f", J + 1, PRO);
    }
}
