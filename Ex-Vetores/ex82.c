#include <stdio.h>
int main()
{
    int A[10], M[10], X;
    printf("=== Exercicio 82: Multiplicacao por X ===\n");
    for (int i = 0; i < 10; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    printf("Valor de X: ");
    scanf("%d", &X);
    printf("\nVetor M (A * %d):\n", X);
    for (int i = 0; i < 10; i++)
    {
        M[i] = A[i] * X;
        printf("M[%d] = %d\n", i, M[i]);
    }
    return 0;
}
