#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main()
{
    int v[30], busca, cont = 0;
    bool entradaValida = 0;
    srand(time(NULL));
    printf("=== Exercicio 90: Contar Ocorrencias ===\n");
    printf("Vetor (rand 1-10, com repeticoes):\n");
    for (int i = 0; i < 30; i++)
    {
        v[i] = (rand() % 10) + 1;
        printf("v[%d] = %d\n", i, v[i]);
    }
    do
    {
        printf("\nNumero a contar: ");
        if (scanf("%d", &busca) != 1 || busca < 1 || busca > 10)
        {
            printf("Entrada invalida. Digite um numero entre 1 e 10.\n");
            entradaValida = 0;
        }
        else
            entradaValida = 1;
        while (getchar() != '\n');
    } while (!entradaValida);
    for (int i = 0; i < 30; i++)
        if (v[i] == busca)
            cont++;
    printf("%d aparece %d vez(es).\n", busca, cont);
    return 0;
}
