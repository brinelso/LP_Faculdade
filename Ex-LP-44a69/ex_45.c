#include <stdio.h>

int main() {
    float v1, v2;
    printf("Digite o primeiro valor: ");
    scanf("%f", &v1);
    printf("Digite o segundo valor (nao pode ser zero): ");
    scanf("%f", &v2);
    while (v2 == 0) {
        printf("VALOR INVALIDO! Digite o segundo valor (nao pode ser zero): ");
        scanf("%f", &v2);
    }
    printf("Resultado da divisao: %.2f\n", v1 / v2);
    return 0;
}
