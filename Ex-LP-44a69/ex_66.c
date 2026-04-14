#include <stdio.h>

int main() {
    int v1, v2, i, soma = 0, menor, maior;
    printf("Digite o primeiro valor: ");
    scanf("%d", &v1);
    printf("Digite o segundo valor: ");
    scanf("%d", &v2);
    if (v1 < v2) { menor = v1; maior = v2; }
    else          { menor = v2; maior = v1; }
    for (i = menor; i <= maior; i++)
        soma += i;
    printf("Soma dos inteiros entre %d e %d: %d\n", menor, maior, soma);
    return 0;
}
