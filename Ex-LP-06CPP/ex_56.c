#include <stdio.h>

int main() {
    int op;
    float v1, v2, res;
    printf("Valor 1: "); 
    scanf("%f", &v1);
    printf("Valor 2: "); 
    scanf("%f", &v2);
    printf("Operacao (1.Adicao, 2.Subtracao, 3.Divisao, 4.Multiplicacao): ");
    scanf("%d", &op);
    if (op == 1)
        res = v1 + v2;
    else if (op == 2)
        res = v1 - v2;
    else if (op == 3)
        res = v1 / v2;
    else
        res = v1 * v2;
    printf("Resultado: %.2f\n", res);
    return 0;
}
