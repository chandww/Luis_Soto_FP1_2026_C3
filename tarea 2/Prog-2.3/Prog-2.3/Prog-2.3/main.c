#include <stdio.h>
#include <stdlib.h>
/* Promedio curso.
El programa, al recibir como dato el proemdio de un alumno en un curso
Universitario, escribe aprobado si su promedio es meyor o igual a 6, o reprobado en caso contrario.
PRO: variable de tipo real */
void main(void)
{
    float PRO ;
    printf("Ingrese el promedio del alumno");
    scanf("%f", &PRO);
    if (PRO>= 6.0)
        printf("\nAprobado");
        else
        printf("\nReprobado");
}


