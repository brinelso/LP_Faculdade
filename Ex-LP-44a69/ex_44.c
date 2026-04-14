#include <stdio.h>

int main() {
    float v1, v2;
    printf("Digite o primeiro valor: ");
    scanf("%f", &v1);
    do {
        printf("Digite o segundo valor (nao pode ser zero): ");
        scanf("%f", &v2);
    } while (v2 == 0);
    printf("Resultado da divisao: %.2f\n", v1 / v2);
    return 0;
}
