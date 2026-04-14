#include <stdio.h>

int main() {
    float ganho_hora, horas_mes, salario;
    printf("Quanto ganha por hora? ");
    scanf("%f", &ganho_hora);
    printf("Horas trabalhadas no mes: ");
    scanf("%f", &horas_mes);
    salario = ganho_hora * horas_mes;
    printf("Seu salario este mes e: %.2f\n", salario);
    return 0;
}
