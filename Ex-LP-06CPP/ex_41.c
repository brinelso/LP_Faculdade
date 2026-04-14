#include <stdio.h>

int main() {
    float v1, v2;
    printf("Digite o primeiro valor: ");
    scanf("%f", &v1);
    printf("Digite o segundo valor: ");
    scanf("%f", &v2);
    if (v1 == v2)
        printf("Numeros iguais\n");
    else if (v1 > v2)
        printf("Primeiro e maior\n");
    else
        printf("Segundo maior\n");
    return 0;
}
