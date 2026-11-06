#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

/* Declaración de cadenas de caracteres y asignación de valores. */
int main(void)
{
    char *cad0;
    cad0 = "Argentina"; /* La declaración y la asignación son correctas. */
    puts(cad0);

    cad0 = "Brasil";
    /* Correcto. Se modifica el contenido de la posición en memoria a la que apunta la variable cad0. */
    puts(cad0);

    /* Nota: Se ajustaron las declaraciones repetidas de cad1 y las funciones no seguras
       del ejemplo original del libro para que el programa pueda compilar correctamente. */
    char cad1[20] = "";
    // gets(cad1); // Ejemplo de lectura con apuntador inicializado.

    char cad2[20] = "Mexico"; /* Correcto. */
    puts(cad2);

    return 0;
}
