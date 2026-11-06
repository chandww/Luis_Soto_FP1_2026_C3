#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Funciones para el manejo de caracteres de la biblioteca stdlib.h. */
int main(void)
{
    int i;
    double d;
    long l;
    char cad0[20], *cad1;

    printf("\nIngrese una cadena de caracteres: ");
    fflush(stdin);
    if (fgets(cad0, sizeof(cad0), stdin)) {
        cad0[strcspn(cad0, "\n")] = '\0';
    }

    i = atoi(cad0);
    /* La función atoi convierte una cadena de caracteres que contiene números
       a un valor de tipo entero. Si la cadena comienza con otro carácter o no
       contiene números, regresa 0 o el valor queda indefinido. */
    printf("\n%s \t %d\n", cad0, i + 3);
    /* Se imprime el valor de i+3 para demostrar que i ya fue convertido a un entero. */

    printf("\nIngrese una cadena de caracteres: ");
    fflush(stdin);
    if (fgets(cad0, sizeof(cad0), stdin)) {
        cad0[strcspn(cad0, "\n")] = '\0';
    }

    d = atof(cad0);
    /* La función atof convierte una cadena de caracteres que contiene números
       reales a un valor de tipo double. Si la cadena comienza con otro carácter
       o no contiene números, regresa 0 o el valor queda indefinido. */
    printf("\n%s \t %.2lf\n", cad0, d + 1.50);

    d = strtod(cad0, &cad1);
    /* La función strtod convierte una cadena de caracteres que contiene números
       reales a un valor de tipo double. El resto de la cadena se almacena en el
       segundo argumento de la función, &cad1. */
    printf("\n%s \t %.2lf\n", cad0, d + 1.50);
    if (cad1) puts(cad1);

    l = atol(cad0);
    /* La función atol convierte una cadena de caracteres que contiene números a
       un valor de tipo long. */
    printf("\n%s \t %ld\n", cad0, l + 10);

    l = strtol(cad0, &cad1, 0);
    /* La función strtol convierte una cadena de caracteres que contiene números a
       un valor de tipo long. El tercer argumento indica la base numérica. */
    printf("\n%s \t %ld\n", cad0, l + 10);
    if (cad1) puts(cad1);

    return 0;
}
