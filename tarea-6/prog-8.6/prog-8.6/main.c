#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Empresa.
   El programa procesa información de un arreglo de estructuras de empleados
   con domicilio anidado y calcula el promedio de salarios por departamento. */

struct domicilio
{
    char calle[25];
    int numero;
    char cp[5];
    char localidad[20];
};

struct empleado
{
    int clave;
    char nombre[30];
    char departamento[20];
    float salario;
    struct domicilio direc;
};

void lectura(struct empleado A[], int T);

int main(void)
{
    struct empleado EMP[30];
    int n, i;
    float suma = 0.0, promedio;

    printf("\nIngrese el numero de empleados (maximo 30): ");
    if (scanf("%d", &n) == 1)
    {
        if (n > 30) n = 30;
        if (n < 1) n = 1;
        while (getchar() != '\n' && getchar() != EOF); // Limpiar búfer

        lectura(EMP, n);

        for (i = 0; i < n; i++)
        {
            suma += EMP[i].salario;
        }

        promedio = suma / n;

        printf("\n\nSalario promedio de los empleados: %.2f\n", promedio);

        printf("\nEmpleados con salario mayor al promedio:\n");
        for (i = 0; i < n; i++)
        {
            if (EMP[i].salario > promedio)
            {
                printf(" - %s (Departamento: %s, Salario: %.2f)\n",
                       EMP[i].nombre, EMP[i].departamento, EMP[i].salario);
            }
        }
    }

    return 0;
}

void lectura(struct empleado A[], int T)
/* Esta función permite leer los datos de un arreglo de estructuras con domicilio anidado. */
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

        printf("Calle del domicilio: ");
        if (fgets(A[i].direc.calle, sizeof(A[i].direc.calle), stdin))
        {
            A[i].direc.calle[strcspn(A[i].direc.calle, "\n")] = '\0';
        }

        printf("Numero domicilio: ");
        if (scanf("%d", &A[i].direc.numero) == 1)
        {
            while (getchar() != '\n' && getchar() != EOF);
        }

        printf("Codigo Postal (maximo 5 caracteres): ");
        if (fgets(A[i].direc.cp, sizeof(A[i].direc.cp), stdin))
        {
            A[i].direc.cp[strcspn(A[i].direc.cp, "\n")] = '\0';
        }

        printf("Localidad (maximo 20 caracteres): ");
        if (fgets(A[i].direc.localidad, sizeof(A[i].direc.localidad), stdin))
        {
            A[i].direc.localidad[strcspn(A[i].direc.localidad, "\n")] = '\0';
        }
    }
}
