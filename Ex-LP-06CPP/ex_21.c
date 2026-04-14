#include <stdio.h>

int main() {
    float comp_pista, voltas, reabast, consumo, dist_total, litros;
    printf("Comprimento da pista (m): "); 
    scanf("%f", &comp_pista);
    printf("Total de voltas: ");         
    scanf("%f", &voltas);
    printf("Abastecimentos: ");           
    scanf("%f", &reabast);
    printf("Consumo (Km/L): ");           
    scanf("%f", &consumo);
    dist_total = (comp_pista / 1000.0f) * voltas;
    litros = (dist_total / (reabast + 1)) / consumo;
    printf("Litros para o 1o trecho: %.2f\n", litros);
    return 0;
}
