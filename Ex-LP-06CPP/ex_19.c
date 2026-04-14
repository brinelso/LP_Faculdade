#include <stdio.h>

int main() {
    float c, l, a, area_total, caixas;
    printf("Comprimento: "); 
    scanf("%f", &c);
    printf("Largura: ");     
    scanf("%f", &l);
    printf("Altura: ");      
    scanf("%f", &a);
    area_total = 2 * (c * a) + 2 * (l * a);
    caixas = area_total / 1.5f;
    printf("Total de caixas: %.2f\n", caixas);
    return 0;
}
