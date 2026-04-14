#include <stdio.h>

int main() {
    int i, negativos = 0;
    float valor;
    for (i = 1; i <= 10; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%f", &valor);
        if (valor < 0)
            negativos++;
    }
    printf("Quantidade de negativos: %d\n", negativos);
    return 0;
}
