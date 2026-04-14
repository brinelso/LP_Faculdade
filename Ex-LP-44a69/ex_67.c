#include <stdio.h>

int main() {
    int i, soma = 0, quantidade = 0;
    float media;
    for (i = 15; i <= 100; i++) {
        soma += i;
        quantidade++;
    }
    media = (float)soma / quantidade;
    printf("Media dos inteiros entre 15 e 100: %.2f\n", media);
    return 0;
}
