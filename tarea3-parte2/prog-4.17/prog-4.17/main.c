#include <stdio.h>
#include <stdlib.h>

/* Calcula el promedio anual de lluvias en tres regiones. */
void Mayor(float R1, float R2, float R3);

int main(void)
{
    int I;
    float GOL, PAC, CAR;
    float AGOL = 0.0f, APAC = 0.0f, ACAR = 0.0f;

    for (I = 1; I <= 12; I++) {
        printf("\n\nIngresa las lluvias del mes %d", I);
        printf("\nRegiones Golfo, Pacifico y Caribe: ");
        if (scanf("%f %f %f", &GOL, &PAC, &CAR) != 3) {
            printf("\nEntrada invalida.\n");
            return 1;
        }
        AGOL += GOL;
        APAC += PAC;
        ACAR += CAR;
    }

    printf("\n\nPromedio de lluvias Region Golfo: %6.2f", AGOL / 12.0f);
    printf("\nPromedio de lluvias Region Pacifico: %6.2f", APAC / 12.0f);
    printf("\nPromedio de lluvias Region Caribe: %6.2f\n", ACAR / 12.0f);
    Mayor(AGOL, APAC, ACAR);
    return 0;
}

void Mayor(float R1, float R2, float R3)
{
    if (R1 >= R2 && R1 >= R3) {
        printf("\nRegion con mayor promedio: Region Golfo. Promedio: %6.2f", R1 / 12.0f);
    } else if (R2 >= R1 && R2 >= R3) {
        printf("\nRegion con mayor promedio: Region Pacifico. Promedio: %6.2f", R2 / 12.0f);
    } else {
        printf("\nRegion con mayor promedio: Region Caribe. Promedio: %6.2f", R3 / 12.0f);
    }
}
