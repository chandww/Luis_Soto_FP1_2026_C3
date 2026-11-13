#include <stdio.h>
#include <stdlib.h>
#include <string.h> // <-- Esta línea es la que proporciona strcspn

struct alumno
{
    int matricula;
    char nombre[30];
    char carrera[20];
    float promedio;
    char direccion[30];
};

int main(void)
{
    struct alumno a1;

    printf("\nIngrese la matricula del alumno: ");
    if (scanf("%d", &a1.matricula) == 1)
    {
        while (getchar() != '\n' && getchar() != EOF);
    }

    printf("Ingrese el nombre del alumno (maximo 30 caracteres): ");
    if (fgets(a1.nombre, sizeof(a1.nombre), stdin))
    {
        a1.nombre[strcspn(a1.nombre, "\n")] = '\0';
    }

    printf("Ingrese la carrera (maximo 20 caracteres): ");
    if (fgets(a1.carrera, sizeof(a1.carrera), stdin))
    {
        a1.carrera[strcspn(a1.carrera, "\n")] = '\0';
    }

    printf("Ingrese el promedio: ");
    if (scanf("%f", &a1.promedio) == 1)
    {
        while (getchar() != '\n' && getchar() != EOF);
    }

    printf("Ingrese la direccion (maximo 30 caracteres): ");
    if (fgets(a1.direccion, sizeof(a1.direccion), stdin))
    {
        a1.direccion[strcspn(a1.direccion, "\n")] = '\0';
    }

    printf("\n\nDatos del alumno ingresados:\n");
    printf("Matricula: %d\n", a1.matricula);
    printf("Nombre: %s\n", a1.nombre);
    printf("Carrera: %s\n", a1.carrera);
    printf("Promedio: %.2f\n", a1.promedio);
    printf("Direccion: %s\n", a1.direccion);

    return 0;
}
