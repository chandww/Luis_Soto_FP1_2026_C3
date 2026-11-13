#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Escuela.
   El programa muestra el uso de estructuras anidadas para manejar
   la dirección de un alumno dentro de su registro. */

struct domicilio
{
    char calle[25];
    int numero;
    char cp[5];
    char localidad[20];
};

struct alumno
{
    int matricula;
    char nombre[30];
    char carrera[20];
    float promedio;
    struct domicilio alu; /* Estructura anidada */
};

int main(void)
{
    struct alumno a1 = {150, "Luis Cordero", "Ingenieria", 3.8, {"San Jose", 123, "10100", "Centro"}};

    printf("\nDatos del alumno 1:\n");
    printf("\nMatricula: %d", a1.matricula);
    printf("\nNombre: %s", a1.nombre);
    printf("\nCarrera: %s", a1.carrera);
    printf("\nPromedio: %.2f", a1.promedio);
    printf("\nDireccion del alumno:");
    printf("\n\tCalle: %s", a1.alu.calle);
    printf("\n\tNumero: %d", a1.alu.numero);
    printf("\n\tCodigo Postal: %s", a1.alu.cp);
    printf("\n\tLocalidad: %s\n", a1.alu.localidad);

    return 0;
}
