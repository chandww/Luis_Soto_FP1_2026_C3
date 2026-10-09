#include <stdio.h>
#include <stdlib.h>

/* Prueba de parametros por referencia mediante apuntadores. */
void f1(int *R);

int main(void)
{
    int I;
    int K = 4;

    for (I = 1; I <= 3; I++) {
        printf("\n\nValor de K antes de llamar a la funcion: %d", ++K);
        f1(&K);
        printf("\nValor de K despues de llamar a la funcion: %d", K);
    }

    return 0;
}

void f1(int *R)
{
    *R += *R;
}

