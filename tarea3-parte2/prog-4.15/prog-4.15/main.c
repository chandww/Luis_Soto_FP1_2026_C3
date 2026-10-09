#include <stdio.h>
#include <stdlib.h>

/* Calcula la productoria (factorial) de un entero entre 1 y 100.
   Se usan digitos para evitar el desbordamiento de los tipos enteros. */
#define MAX_DIGITOS 200

void Productoria(int N, int DIGITOS[], int *LONGITUD);

int main(void)
{
    int NUM;
    int DIGITOS[MAX_DIGITOS];
    int LONGITUD;
    int I;

    do {
        printf("Ingresa el numero del cual quieres calcular la productoria (1 a 100): ");
        if (scanf("%d", &NUM) != 1) {
            printf("\nEntrada invalida.\n");
            return 1;
        }
    } while (NUM < 1 || NUM > 100);

    Productoria(NUM, DIGITOS, &LONGITUD);
    printf("\nLa productoria de %d es: ", NUM);
    for (I = LONGITUD - 1; I >= 0; I--) {
        printf("%d", DIGITOS[I]);
    }
    printf("\n");
    return 0;
}

void Productoria(int N, int DIGITOS[], int *LONGITUD)
{
    int I, J, ACARREO, VALOR;

    DIGITOS[0] = 1;
    *LONGITUD = 1;

    for (I = 2; I <= N; I++) {
        ACARREO = 0;
        for (J = 0; J < *LONGITUD; J++) {
            VALOR = DIGITOS[J] * I + ACARREO;
            DIGITOS[J] = VALOR % 10;
            ACARREO = VALOR / 10;
        }
        while (ACARREO > 0) {
            DIGITOS[*LONGITUD] = ACARREO % 10;
            ACARREO /= 10;
            (*LONGITUD)++;
        }
    }
}
