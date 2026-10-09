#include <stdio.h>
#include <stdlib.h>

/* Clasifica las calificaciones en cinco rangos. */
void Rango(float VAL);

int RA1 = 0;
int RA2 = 0;
int RA3 = 0;
int RA4 = 0;
int RA5 = 0;

int main(void)
{
    float CAL;

    printf("Ingresa una calificacion (o -1 para terminar): ");
    while (scanf("%f", &CAL) == 1 && CAL != -1.0f) {
        if (CAL >= 0.0f && CAL <= 10.0f) {
            Rango(CAL);
        } else {
            printf("Calificacion invalida; usa un valor entre 0 y 10.\n");
        }
        printf("Ingresa la siguiente calificacion (o -1 para terminar): ");
    }

    printf("\n0..3.99 = %d", RA1);
    printf("\n4..5.99 = %d", RA2);
    printf("\n6..7.99 = %d", RA3);
    printf("\n8..8.99 = %d", RA4);
    printf("\n9..10 = %d", RA5);
    return 0;
}

void Rango(float VAL)
{
    if (VAL < 4.0f) {
        RA1++;
    } else if (VAL < 6.0f) {
        RA2++;
    } else if (VAL < 8.0f) {
        RA3++;
    } else if (VAL < 9.0f) {
        RA4++;
    } else {
        RA5++;
    }
}
