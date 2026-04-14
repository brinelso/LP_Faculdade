#include <stdio.h>

int main() {
    int i, dentro = 0, fora = 0;
    float valor;
    for (i = 1; i <= 10; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%f", &valor);
        if (valor >= 10 && valor <= 20)
            dentro++;
        else
            fora++;
    }
    printf("No intervalo [10,20]: %d\n", dentro);
    printf("Fora do intervalo: %d\n", fora);
    return 0;
}
