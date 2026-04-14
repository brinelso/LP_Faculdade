#include <stdio.h>

int main() {
    int i;
    float valor, soma = 0;
    for (i = 1; i <= 10; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%f", &valor);
        if (valor < 40)
            soma += valor;
    }
    printf("Soma dos valores menores que 40: %.2f\n", soma);
    return 0;
}
