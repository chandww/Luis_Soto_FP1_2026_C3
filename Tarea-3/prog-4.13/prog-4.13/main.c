#include <stdio.h>
#include <stdlib.h>


/* Cuenta cuantos numeros son pares y cuantos son impares. */
void parimp(int NUM, int *P, int *I);

int main(void)
{
    int I, N, NUM;
    int PAR = 0, IMP = 0;

    printf("Ingresa el numero de datos: ");
    if (scanf("%d", &N) != 1 || N < 1) {
        printf("\nCantidad de datos invalida.\n");
        return 1;
    }

    for (I = 1; I <= N; I++) {
        printf("Ingresa el numero %d: ", I);
        if (scanf("%d", &NUM) != 1) {
            printf("\nEntrada invalida.\n");
            return 1;
        }
        parimp(NUM, &PAR, &IMP);
    }

    printf("\nNumero de pares: %d", PAR);
    printf("\nNumero de impares: %d", IMP);
    return 0;
}

void parimp(int NUM, int *P, int *I)
{
    if (NUM % 2 == 0) {
        (*P)++;
    } else {
        (*I)++;
    }
}
