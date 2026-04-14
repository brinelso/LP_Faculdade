#include <stdio.h>

int main() {
    float larg, comp, pot_lamp, area, pot_total;
    int total_lamp;
    printf("Largura: ");    
    scanf("%f", &larg);
    printf("Comprimento: "); 
    scanf("%f", &comp);
    printf("Potencia da lampada: "); 
    scanf("%f", &pot_lamp);
    area      = larg * comp;
    pot_total = area * 18;
    total_lamp = (int)(pot_total / pot_lamp);
    printf("Lampadas necessarias: %d\n", total_lamp);
    return 0;
}
