#include <stdio.h>

int main() {
    float salario, reajuste, novo_salario;
    printf("Salario atual: ");
    scanf("%f", &salario);
    printf("Percentual de reajuste: ");
    scanf("%f", &reajuste);
    novo_salario = salario + (salario * reajuste / 100);
    printf("Novo salario: %.2f\n", novo_salario);
    return 0;
}
