#include <stdio.h>

int main() {
    int i;
    float valor, soma = 0, media;
    for (i = 1; i <= 10; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%f", &valor);
        soma += valor;
    }
    media = soma / 10.0f;
    printf("Media aritmetica: %.2f\n", media);
    return 0;
}
