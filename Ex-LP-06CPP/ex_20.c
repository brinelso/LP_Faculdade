#include <stdio.h>

int main() {
    float km_i, km_f, litros, valor_rec, dist, media, lucro;
    printf("KM inicial: ");    
    scanf("%f", &km_i);
    printf("KM final: ");      
    scanf("%f", &km_f);
    printf("Litros gastos: "); 
    scanf("%f", &litros);
    printf("Valor recebido: "); 
    scanf("%f", &valor_rec);
    dist  = km_f - km_i;
    media = dist / litros;
    lucro = valor_rec - (litros * 2.90f);
    printf("Media: %.2f  Lucro liquido: %.2f\n", media, lucro);
    return 0;
}
