#include <stdio.h>
#include <stdlib.h>

/* Calcula promedio, maxima y minima de 24 temperaturas. */
void Acutem(float T);
void Maxima(float T, int H);
void Minima(float T, int H);

float ACT = 0.0f;
float MAX = 0.0f;
float MIN = 0.0f;
int HMAX = 1;
int HMIN = 1;

int main(void)
{
    float TEM;
    int I;

    for (I = 1; I <= 24; I++) {
        printf("Ingresa la temperatura de la hora %d: ", I);
        if (scanf("%f", &TEM) != 1) {
            printf("\nEntrada invalida.\n");
            return 1;
        }
        if (I == 1) {
            MAX = TEM;
            MIN = TEM;
        }
        Acutem(TEM);
        Maxima(TEM, I);
        Minima(TEM, I);
    }

    printf("\nPromedio del dia: %5.2f", ACT / 24.0f);
    printf("\nMaxima del dia: %5.2f  Hora: %d", MAX, HMAX);
    printf("\nMinima del dia: %5.2f  Hora: %d", MIN, HMIN);
    return 0;
}

void Acutem(float T)
{
    ACT += T;
}

void Maxima(float T, int H)
{
    if (MAX < T) {
        MAX = T;
        HMAX = H;
    }
}

void Minima(float T, int H)
{
    if (MIN > T) {
        MIN = T;
        HMIN = H;
    }
}

