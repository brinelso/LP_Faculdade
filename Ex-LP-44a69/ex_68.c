#include <stdio.h>

int main() {
    int i, n;
    float valor, total = 0, media;
    printf("Numero total de mercadorias em estoque: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Valor da mercadoria %d: ", i);
        scanf("%f", &valor);
        total += valor;
    }
    media = total / n;
    printf("Valor total em estoque: %.2f\n", total);
    printf("Media de valor das mercadorias: %.2f\n", media);
    return 0;
}
