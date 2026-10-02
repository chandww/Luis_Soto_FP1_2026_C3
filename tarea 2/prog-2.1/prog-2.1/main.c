#include <stdio.h>
#include <stdlib.h>
/* promedio curso.
El programa, a; recibir como dato el promedio de un alumno en un curso universitario, escribe aprobado si su promedio es igual o mayor a 6.

Pro: variale de tipo real. */

void main(void)

{
    float PRO;
    printf("ingrese el promedio del alumno: ");
    scanf("%f",&PRO);
    if (PRO >=6)
        printf("\nAprobado ");

}
