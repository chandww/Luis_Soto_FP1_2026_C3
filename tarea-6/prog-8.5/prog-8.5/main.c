#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Empleados.
   El programa lee los datos de un arreglo de estructuras de empleados y
   modifica sus salarios bajo una condición específica. */

struct empleado
{
    int clave;
    char nombre[30];
    char departamento[20];
    float salario;
};

void lectura(struct empleado A[], int T);
void modifica(struct empleado A[], int T);

int main(void)
{
    struct empleado EMP[20];
    int n, i;

    printf("\nIngrese el numero de empleados (maximo 20): ");
    if (scanf("%d", &n) == 1)
    {
        if (n > 20) n = 20;
        if (n < 1) n = 1;
        while (getchar() != '\n' && getchar() != EOF); // Limpiar búfer

        lectura(EMP, n);
        modifica(EMP, n);

        printf("\n\nDatos de los empleados despues de la modificacion:\n");
        for (i = 0; i < n; i++)
        {
            printf("\nEmpleado %d:", i + 1);
            printf("\n\tClave: %d", EMP[i].clave);
            printf("\n\tNombre: %s", EMP[i].nombre);
            printf("\n\tDepartamento: %s", EMP[i].departamento);
            printf("\n\tSalario: %.2f\n", EMP[i].salario);
        }
    }

    return 0;
}

void lectura(struct empleado A[], int T)
/* Esta función permite leer los datos de un arreglo de estructuras de tipo empleado. */
{
    int i;
    for (i = 0; i < T; i++)
    {
        printf("\n--- Empleado %d ---\n", i + 1);

        printf("Clave: ");
        if (scanf("%d", &A[i].clave) == 1)
        {
            while (getchar() != '\n' && getchar() != EOF);
        }

        printf("Nombre (maximo 30 caracteres): ");
        if (fgets(A[i].nombre, sizeof(A[i].nombre), stdin))
        {
            A[i].nombre[strcspn(A[i].nombre, "\n")] = '\0';
        }

        printf("Departamento (maximo 20 caracteres): ");
        if (fgets(A[i].departamento, sizeof(A[i].departamento), stdin))
        {
            A[i].departamento[strcspn(A[i].departamento, "\n")] = '\0';
        }

        printf("Salario: ");
        if (scanf("%f", &A[i].salario) == 1)
        {
            while (getchar() != '\n' && getchar() != EOF);
        }
    }
}

void modifica(struct empleado A[], int T)
/* Esta función incrementa el salario en un 10% si el empleado pertenece al departamento de Ventas. */
{
    int i;
    for (i = 0; i < T; i++)
    {
        if (strcmp(A[i].departamento, "Ventas") == 0)
        {
            A[i].salario = A[i].salario * 1.10;
        }
    }
}
