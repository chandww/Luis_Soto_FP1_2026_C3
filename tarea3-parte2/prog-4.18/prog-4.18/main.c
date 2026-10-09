#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Busca combinaciones con resultado menor que 5500. */
int Expresion(int T, int P, int Q);

int main(void)
{
    int EXP, T = 0, P = 0, Q = 0;

    EXP = Expresion(T, P, Q);
    while (EXP < 5500) {
        while (EXP < 5500) {
            while (EXP < 5500) {
                printf("\nT: %d, P: %d, Q: %d, Resultado: %d", T, P, Q, EXP);
                Q++;
                EXP = Expresion(T, P, Q);
            }
            P++;
            Q = 0;
            EXP = Expresion(T, P, Q);
        }
        T++;
        P = 0;
        Q = 0;
        EXP = Expresion(T, P, Q);
    }

    return 0;
}

int Expresion(int T, int P, int Q)
{
    return (int)(15 * pow(T, 4) + 12 * pow(P, 5) + 9 * pow(Q, 6));
}

