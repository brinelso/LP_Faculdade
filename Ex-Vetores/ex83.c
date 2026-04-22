#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int v[20];
    srand(time(NULL));
    printf("=== Exercicio 83: Ordem Inversa ===\n");
    printf("Vetor original (rand 0-99):\n");
    for (int i = 0; i < 20; i++)
    {
        v[i] = rand() % 100;
        printf("v[%d] = %d\n", i, v[i]);
    }
    printf("\nOrdem inversa:\n");
    for (int i = 19; i >= 0; i--)
        printf("v[%d] = %d\n", i, v[i]);
    return 0;
}
