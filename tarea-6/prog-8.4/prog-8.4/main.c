#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Alumnos.
   El programa lee los datos de un arreglo de estructuras de alumnos y
   calcula el promedio general del grupo. */

struct alumno
{
    int matricula;
    char nombre[30];
    char carrera[20];
    float promedio;
    char direccion[30];
};

void lect(struct alumno A[], int T);

int main(void)
{
    struct alumno ARRE[50];
    int T, i;
    float sum = 0.0;

    printf("\nIngrese el numero de alumnos (maximo 50): ");
    if (scanf("%d", &T) == 1)
    {
        if (T > 50) T = 50;
        if (T < 1) T = 1;
        while (getchar() != '\n' && getchar() != EOF); // Limpiar búfer

        lect(ARRE, T);

        for (i = 0; i < T; i++)
        {
            sum += ARRE[i].promedio;
        }

        sum = sum / T;
        printf("\n\nPromedio general del grupo: %.2f\n", sum);
    }

    return 0;
}

void lect(struct alumno A[], int T)
/* Esta función permite leer los datos de un arreglo de estructuras de tipo alumno. */
{
    int i;
    for (i = 0; i < T; i++)
    {
        printf("\n--- Datos del alumno %d ---\n", i + 1);

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

        printf("Carrera (maximo 20 caracteres): ");
        if (fgets(A[i].carrera, sizeof(A[i].carrera), stdin))
        {
            A[i].carrera[strcspn(A[i].carrera, "\n")] = '\0';
        }

        printf("Promedio: ");
        if (scanf("%f", &A[i].promedio) == 1)
        {
            while (getchar() != '\n' && getchar() != EOF);
        }

        printf("Direccion (maximo 30 caracteres): ");
        if (fgets(A[i].direccion, sizeof(A[i].direccion), stdin))
        {
            A[i].direccion[strcspn(A[i].direccion, "\n")] = '\0';
        }
    }
}
