#include <stdio.h>
#include <stdlib.h>


/* Ejemplo de variables globales, locales y estaticas.
   long long evita el desbordamiento al elevar K_GLOBAL al cuadrado. */
long long f1(void);
long long f2(void);
long long f3(void);
long long f4(void);
long long K_GLOBAL = 5;

int main(void)
{
    int I;

    for (I = 1; I <= 4; I++) {
        printf("\n\nEl resultado de la funcion f1 es: %lld", f1());
        printf("\nEl resultado de la funcion f2 es: %lld", f2());
        printf("\nEl resultado de la funcion f3 es: %lld", f3());
        printf("\nEl resultado de la funcion f4 es: %lld", f4());
    }

    return 0;
}

long long f1(void)
{
    K_GLOBAL *= K_GLOBAL;
    return K_GLOBAL;
}

long long f2(void)
{
    int K = 3;
    K++;
    return K;
}

long long f3(void)
{
    static int K = 6;
    K += 3;
    return K;
}

long long f4(void)
{
    int K = 4;
    return K + K_GLOBAL;
}

