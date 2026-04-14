#include <stdio.h>

int main() {
    int v1, v2, i, soma = 0;
    printf("Digite o primeiro valor: ");
    scanf("%d", &v1);
    printf("Digite o segundo valor (maior que o primeiro): ");
    scanf("%d", &v2);
    for (i = v1; i <= v2; i++)
        soma += i;
    printf("Soma dos inteiros entre %d e %d: %d\n", v1, v2, soma);
    return 0;
}
