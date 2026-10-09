#include <stdio.h>
#include <stdlib.h>

/* Combinacion de variables globales, locales y parametros. */

int a, b, c, d;

void funcion1(int *b, int *c);
int funcion2(int c, int *d);

int main(void)
{
    int a; /* Variable local que oculta la global a. */

    a = 1;
    b = 2;
    c = 3;
    d = 4;
    printf("\n%d %d %d %d", a, b, c, d);
    funcion1(&b, &c);
    printf("\n%d %d %d %d", a, b, c, d);
    a = funcion2(c, &d);
    printf("\n%d %d %d %d", a, b, c, d);

    return 0;
}

void funcion1(int *b, int *c)
{
    int d;
    a = 5; /* Aqui se modifica la variable global a. */
    d = 3; /* Variable local de funcion1. */
    (*b)++;
    (*c) += 2;
    printf("\n%d %d %d %d", a, *b, *c, d);
}

int funcion2(int c, int *d)
{
    int b;
    a++;
    b = 7;
    c += 3;
    (*d) += 2;
    printf("\n%d %d %d %d", a, b, c, *d);
    return c;
}

