#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Funciones de la biblioteca string.h para el manejo de cadenas de caracteres. */
int main(void)
{
    char cad0[50] = "Hola Mexico";
    char cad1[20], cad2[20], cad3[20] = ", buenos dias!!!";
    char *p_str;

    strcpy(cad1, cad0);
    /* La función strcpy permite copiar una cadena de caracteres completa. En este
       caso se copia la cadena cad0 a cad1. */
    printf("\nPrueba de la funcion strcpy. Se copia la cadena cad0 a cad1: %s\n", cad1);

    strcpy(cad1, cad3);
    printf("\nPrueba de la funcion strcpy. Se copia la cadena cad3 a cad1: %s\n", cad1);

    strcpy(cad1, "XX");
    printf("\nPrueba de la funcion strcpy. Se copia la cadena XX a cad1: %s\n", cad1);

    strncpy(cad2, cad0, 4);
    cad2[4] = '\0';
    /* La función strncpy permite copiar un número determinado de caracteres a
       otra cadena de caracteres. */
    printf("\nPrueba de la funcion strncpy. Se copian 4 caracteres de cad0 a cad2: %s\n", cad2);

    strncpy(cad2, cad3, 3);
    cad2[3] = '\0';
    printf("\nPrueba de la funcion strncpy. Se copian 3 caracteres de cad3 a cad2: %s\n", cad2);

    strcat(cad0, cad3);
    /* La función strcat permite incorporar una cadena de caracteres a otra
       dada. En este caso se agrega la cadena cad3 a cad0. */
    printf("\nPrueba de la funcion strcat. Se incorpora la cadena cad3 a cad0: %s\n", cad0);

    strcat(cad1, " YY");
    printf("\nPrueba de la funcion strcat. Se incorpora la cadena YY a cad1: %s\n", cad1);

    strcat(cad2, " ");
    strncat(cad2, cad0, 4);
    printf("\nPrueba de la funcion strncat. Se incorporan 4 caracteres de cad0 a cad2: %s\n", cad2);

    p_str = strstr(cad0, "Mexico");
    if (p_str != NULL)
    {
        /* La función strstr se utiliza para localizar una cadena de caracteres dentro
           de otra cadena. Si la encuentra, regresa un apuntador al inicio. */
        printf("\nPrueba de la funcion strstr. Se localiza la cadena Mexico dentro de cad0: %s\n", p_str);
    }

    p_str = strstr(cad0, "Guatemala");
    if (p_str == NULL)
    {
        printf("\nPrueba de la funcion strstr. No se localiza la cadena Guatemala dentro de cad0.\n");
    }

    return 0;
}
