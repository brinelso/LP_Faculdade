#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int v[20], novo[19], busca, encontrado = 0, tam = 0, posEncontrado = 0;
    int intervalo = 50;
    srand(time(NULL));
    int pool[intervalo];

    // Criando Vetor de 20 numeros unicos de 1 a 50
    for (int i = 0; i < intervalo; i++)
        pool[i] = i + 1;
    for (int i = 0; i < 20; i++)
    {
        int j = i + rand() % (intervalo - i);
        int tmp = pool[i];
        pool[i] = pool[j];
        pool[j] = tmp;
        v[i] = pool[i];
    }

    printf("=== Exercicio 88: Remover Numero ===\n");
    printf("Vetor (20 unicos de 1-%d):\n", intervalo);
    for (int i = 0; i < 20; i++)
        printf("v[%d] = %d\n", i, v[i]);
    printf("\nNumero a remover: ");
    scanf("%d", &busca);
    for (int i = 0; i < 20; i++)
    {
        if (v[i] == busca)
        {
            encontrado = 1;
            posEncontrado = i;
        }

        else
            novo[tam++] = v[i];
    }
    if (!encontrado)
        printf("%d nao encontrado.\n", busca);
    else
    {
        printf("%d removido na posicao %d do vetor original. Novo vetor:\n", busca, posEncontrado);
        for (int i = 0; i < tam; i++)
            printf("novo[%d] = %d\n", i, novo[i]);
    }
    return 0;
}
