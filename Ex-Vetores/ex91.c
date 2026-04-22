#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int VET[50];
    int intervalo = 50;
    srand(time(NULL));
    printf("=== Exercicio 91: Numeros Repetidos ===\n");
    printf("Vetor VET (rand 1- %d):\n", intervalo);
    for (int i = 0; i < 50; i++)
    {
        VET[i] = (rand() % intervalo) + 1;
        printf("VET[%d] = %d\n", i, VET[i]);
    }
    printf("\nRepeticoes encontradas:\n");
    int achou = 0;
    for (int i = 0; i < 50; i++)
        for (int j = i + 1; j < 50; j++)
            if (VET[i] == VET[j])
            {
                printf("Valor %d nas posicoes %d e %d\n", VET[i], i, j);
                achou = 1;
                break;
            }

    if (!achou)
        printf("Nenhum numero repetido.\n");

        for (int i = 0; i < intervalo; i++)
        {   
            printf("\nv[%d] = %d: ", i, VET[i]);
        }
    return 0;
}