#include <stdio.h>
#include <stdlib.h>

/* Ejemplo de funciones, variables globales y parametros. */
int z, y;

int F1(float x);
void F2(float t, int *r);

int main(void)
{
    int w;
    float x;

    z = 5;
    y = 7;
    w = 2;
    x = (float)y / z;
    printf("\nPrograma Principal: %d %d %.2f %d", z, y, x, w);
    F2(x, &w);
    printf("\nPrograma Principal: %d %d %.2f %d", z, y, x, w);
    return 0;
}

int F1(float x)
{
    int k;

    if (x != 0.0f) {
        k = z - y;
        x++;
    } else {
        k = z + y;
    }
    printf("\nF1: %d %d %.2f %d", z, y, x, k);
    return k;
}

void F2(float t, int *r)
{
    int y;

    y = 5;
    z = 0;
    printf("\nF2: %d %d %.2f %d", z, y, t, *r);
    if (z == 0) {
        z = (*r) * 2;
        t = (float)z / 3.0f;
        printf("\nIngresa el valor (por ejemplo, 6): ");
        if (scanf("%d", r) != 1) {
            printf("\nEntrada invalida.\n");
            return;
        }
        printf("\nF2: %d %d %.2f %d", z, y, t, *r);
    } else {
        z = (*r) * 2;
        printf("\nF2: %d %d %.2f %d", z, y, t, *r);
    }
    *r = F1(t);
}

