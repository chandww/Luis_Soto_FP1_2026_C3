#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <string.h>

/* Escuela.
   El programa muestra información sobre un alumno utilizando estructuras. */

struct alumno /* Declaración de la estructura alumno */
{
    int matricula;
    char nombre[30];
    char carrera[20];
    float promedio;
    char direccion[30];
};

int main(void)
{
    /* Declaración de una variable de tipo estructura alumno y inicialización */
    struct alumno a1 = {120, "Maria Hernandez", "Contabilidad", 4.5, "San Jose 123"};

    printf("\nDatos del alumno 1:\n");
    printf("\nMatricula: %d", a1.matricula);
    printf("\nNombre: %s", a1.nombre);
    printf("\nCarrera: %s", a1.carrera);
    printf("\nPromedio: %.2f", a1.promedio);
    printf("\nDireccion: %s\n", a1.direccion);

    return 0;
}
