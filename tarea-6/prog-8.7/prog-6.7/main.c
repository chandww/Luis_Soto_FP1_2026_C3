#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Escuela.
   El programa lee los datos de un arreglo de estructuras de alumnos,
   calcula el promedio de cada alumno y muestra sus calificaciones. */

struct alumno
{
    int matricula;
    char nombre[30];
    float cal[5];
    float promedio;
};

void lectura(struct alumno A[], int T);
void calcula(struct alumno A[], int T);

int main(void)
{
    struct alumno ARRE[50];
    int n, i, j;

    printf("\nIngrese el numero de alumnos (maximo 50): ");
    if (scanf("%d", &n) == 1)
    {
        if (n > 50) n = 50;
        if (n < 1) n = 1;
        while (getchar() != '\n' && getchar() != EOF); // Limpiar búfer

        lectura(ARRE, n);
        calcula(ARRE, n);

        printf("\n\nResultados finales de los alumnos:\n");
        for (i = 0; i < n; i++)
        {
            printf("\nAlumno %d:", i + 1);
            printf("\n\tMatricula: %d", ARRE[i].matricula);
            printf("\n\tNombre: %s", ARRE[i].nombre);
            printf("\n\tCalificaciones: ");
            for (j = 0; j < 5; j++)
            {
                printf("%.2f ", ARRE[i].cal[j]);
            }
            printf("\n\tPromedio: %.2f\n", ARRE[i].promedio);
        }
    }

    return 0;
}

void lectura(struct alumno A[], int T)
/* Esta función permite leer los datos de un arreglo de estructuras de tipo alumno,
   incluyendo un arreglo de calificaciones. */
{
    int i, j;
    for (i = 0; i < T; i++)
    {
        printf("\n--- Alumno %d ---\n", i + 1);

        printf("Matricula: ");
        if (scanf("%d", &A[i].matricula) == 1)
        {
            while (getchar() != '\n' && getchar() != EOF);
        }

        printf("Nombre (maximo 30 caracteres): ");
        if (fgets(A[i].nombre, sizeof(A[i].nombre), stdin))
        {
            A[i].nombre[strcspn(A[i].nombre, "\n")] = '\0';
        }

        printf("Ingrese las 5 calificaciones:\n");
        for (j = 0; j < 5; j++)
        {
            printf("  Calificacion %d: ", j + 1);
            if (scanf("%f", &A[i].cal[j]) == 1)
            {
                while (getchar() != '\n' && getchar() != EOF);
            }
        }
    }
}

void calcula(struct alumno A[], int T)
/* Esta función calcula el promedio individual de cada alumno a partir de sus calificaciones. */
{
    int i, j;
    float suma;
    for (i = 0; i < T; i++)
    {
        suma = 0.0;
        for (j = 0; j < 5; j++)
        {
            suma += A[i].cal[j];
        }
        A[i].promedio = suma / 5.0;
    }
}
