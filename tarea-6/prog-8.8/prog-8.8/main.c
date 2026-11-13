#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Hospital.
   El programa maneja información sobre pacientes utilizando estructuras anidadas,
   permitiendo registrar y consultar datos clínicos y de ubicación. */

struct domicilio
{
    char calle[25];
    int numero;
    char colonia[20];
    char cp[5];
    char ciudad[20];
};

struct paciente
{
    char nombre[30];
    int edad;
    char sexo[15];
    char telefono[15];
    struct domicilio direc;
    char diagnostico[50];
};

void lectura(struct paciente A[], int T);

int main(void)
{
    struct paciente HOSPITAL[50];
    int n, i;

    printf("\nIngrese el numero de pacientes (maximo 50): ");
    if (scanf("%d", &n) == 1)
    {
        if (n > 50) n = 50;
        if (n < 1) n = 1;
        while (getchar() != '\n' && getchar() != EOF); // Limpiar búfer

        lectura(HOSPITAL, n);

        printf("\n\nListado de pacientes registrados:\n");
        for (i = 0; i < n; i++)
        {
            printf("\nPaciente %d:", i + 1);
            printf("\n\tNombre: %s", HOSPITAL[i].nombre);
            printf("\n\tEdad: %d", HOSPITAL[i].edad);
            printf("\n\tSexo: %s", HOSPITAL[i].sexo);
            printf("\n\tTelefono: %s", HOSPITAL[i].telefono);
            printf("\n\tDiagnostico: %s", HOSPITAL[i].diagnostico);
            printf("\n\tDireccion:");
            printf("\n\t\tCalle: %s, Numero: %d", HOSPITAL[i].direc.calle, HOSPITAL[i].direc.numero);
            printf("\n\t\tColonia: %s, C.P.: %s", HOSPITAL[i].direc.colonia, HOSPITAL[i].direc.cp);
            printf("\n\t\tCiudad: %s\n", HOSPITAL[i].direc.ciudad);
        }
    }

    return 0;
}

void lectura(struct paciente A[], int T)
/* Esta función permite leer los datos de los pacientes, incluyendo la estructura anidada de domicilio. */
{
    int i;
    for (i = 0; i < T; i++)
    {
        printf("\n--- Paciente %d ---\n", i + 1);

        printf("Nombre del paciente (maximo 30 caracteres): ");
        if (fgets(A[i].nombre, sizeof(A[i].nombre), stdin))
        {
            A[i].nombre[strcspn(A[i].nombre, "\n")] = '\0';
        }

        printf("Edad: ");
        if (scanf("%d", &A[i].edad) == 1)
        {
            while (getchar() != '\n' && getchar() != EOF);
        }

        printf("Sexo (maximo 15 caracteres): ");
        if (fgets(A[i].sexo, sizeof(A[i].sexo), stdin))
        {
            A[i].sexo[strcspn(A[i].sexo, "\n")] = '\0';
        }

        printf("Telefono (maximo 15 caracteres): ");
        if (fgets(A[i].telefono, sizeof(A[i].telefono), stdin))
        {
            A[i].telefono[strcspn(A[i].telefono, "\n")] = '\0';
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

        printf("Colonia (maximo 20 caracteres): ");
        if (fgets(A[i].direc.colonia, sizeof(A[i].direc.colonia), stdin))
        {
            A[i].direc.colonia[strcspn(A[i].direc.colonia, "\n")] = '\0';
        }

        printf("Codigo Postal (maximo 5 caracteres): ");
        if (fgets(A[i].direc.cp, sizeof(A[i].direc.cp), stdin))
        {
            A[i].direc.cp[strcspn(A[i].direc.cp, "\n")] = '\0';
        }

        printf("Ciudad (maximo 20 caracteres): ");
        if (fgets(A[i].direc.ciudad, sizeof(A[i].direc.ciudad), stdin))
        {
            A[i].direc.ciudad[strcspn(A[i].direc.ciudad, "\n")] = '\0';
        }

        printf("Diagnostico (maximo 50 caracteres): ");
        if (fgets(A[i].diagnostico, sizeof(A[i].diagnostico), stdin))
        {
            A[i].diagnostico[strcspn(A[i].diagnostico, "\n")] = '\0';
        }
    }
}
