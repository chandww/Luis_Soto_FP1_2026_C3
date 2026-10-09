#include <stdio.h>
#include <stdlib.h>


/* Segmento del libro convertido en un programa completo.
   Las llamadas validas se muestran en main. */
void trueque(int *x, int *y)
{
    int tem;
    tem = *x;
    *x = *y;
    *y = tem;
}

int suma(int x)
{
    return x + x;
}

int main(void)
{
    int x = 3, y = 7, z;

    (void)suma(10); /* Llamada valida; se ignora el resultado. */
    y = suma(10);   /* Llamada valida; se asigna el resultado. */
    trueque(&x, &y); /* Llamada valida; se pasan direcciones de enteros. */
    z = suma(x);

    printf("x = %d, y = %d, z = %d\n", x, y, z);
    /* Ejemplos invalidos del enunciado: trueque(suma(&x), &x); */
    /* trueque(3, 4); y = trueque(&x, &y); */
    return 0;
}
