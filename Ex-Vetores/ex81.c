#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int Q[20], menor, pos_menor;
    srand(time(NULL));
    printf("=== Exercicio 81: Menor Elemento ===\n");
    printf("Vetor Q (rand 1-100, apenas positivos):\n");
    for (int i = 0; i < 20; i++)
    {
        Q[i] = (rand() % 100) + 1;
        printf("Q[%d] = %d\n", i, Q[i]);
    }
    menor = Q[0];
    pos_menor = 0;
    for (int i = 1; i < 20; i++)
        if (Q[i] < menor)
        {
            menor = Q[i];
            pos_menor = i;
        }
    printf("\nMenor: %d  (posicao %d)\n", menor, pos_menor);
    return 0;
}
