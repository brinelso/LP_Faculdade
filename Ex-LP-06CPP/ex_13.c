#include <stdio.h>

int main() {
    float custo_fabrica, custo_final;
    printf("Custo de fabrica: ");
    scanf("%f", &custo_fabrica);
    custo_final = custo_fabrica + (custo_fabrica * 0.28f) + (custo_fabrica * 0.45f);
    printf("Custo final ao consumidor: %.2f\n", custo_final);
    return 0;
}
