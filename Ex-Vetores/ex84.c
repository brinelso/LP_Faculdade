#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main()
{
    int N;
    int gerar = -1;

    do
    {
        printf("=== Exercicio 84: Soma de Vetores ===\n");
        printf("Tamanho N: ");
        if (scanf("%d", &N) != 1 || N <= 0)
        {
            printf("N deve ser um numero inteiro maior que 0. Tente novamente.\n");
            while (getchar() != '\n');   
            N = -1; 
        }
    } while (N <= 0);

    if (N >= 10)
    {
        do
        {
            printf("N >= 10: Gerar vetores automaticamente? (1 = sim, 0 = nao): ");
            scanf("%d", &gerar);
            if (gerar != 0 && gerar != 1)
                printf("Opcao invalida. Digite 1 ou 0.\n");
        } while (gerar != 0 && gerar != 1);
    }

    int A[N], B[N], Soma[N];
    srand(time(NULL));
    if (N > 10 && gerar)
    {
        printf("N > 10: A e B gerados automaticamente (rand 0-50).\n");
        for (int i = 0; i < N; i++)
        {
            A[i] = rand() % 51;
            B[i] = rand() % 51;
        }
    }
    else
    {
        printf("Vetor A:\n");
        for (int i = 0; i < N; i++)
        {
            printf("A[%d]: ", i);
            scanf("%d", &A[i]);
        }
        printf("Vetor B:\n");
        for (int i = 0; i < N; i++)
        {
            printf("B[%d]: ", i);
            scanf("%d", &B[i]);
        }
    }
    printf("\n%-6s %-8s %-8s %-8s\n", "Pos", "A", "B", "Soma");
    for (int i = 0; i < N; i++)
    {
        Soma[i] = A[i] + B[i];
        printf("%-6d %-8d %-8d %-8d\n", i, A[i], B[i], Soma[i]);
    }
    return 0;
}
