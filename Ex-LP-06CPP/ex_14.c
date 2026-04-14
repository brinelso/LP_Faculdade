#include <stdio.h>

int main() {
    int carros_vendidos;
    float valor_vendas, salario_fixo, comissao_fixa, salario_final;
    printf("Carros vendidos: ");
    scanf("%d", &carros_vendidos);
    printf("Valor total das vendas: ");
    scanf("%f", &valor_vendas);
    printf("Salario fixo: ");
    scanf("%f", &salario_fixo);
    printf("Comissao por carro: ");
    scanf("%f", &comissao_fixa);
    salario_final = salario_fixo + (carros_vendidos * comissao_fixa) + (valor_vendas * 0.05f);
    printf("Salario final: %.2f\n", salario_final);
    return 0;
}
