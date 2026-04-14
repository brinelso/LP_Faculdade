#include <stdio.h>

int main() {
    int lados;
    float medida, resultado;
    printf("Numero de lados (3, 4 ou 5): ");
    scanf("%d", &lados);
    printf("Medida do lado (cm): ");
    scanf("%f", &medida);
    if (lados == 3) {
        resultado = medida * 3;
        printf("TRIANGULO - Perimetro: %.2f\n", resultado);
    } else if (lados == 4) {
        resultado = medida * medida;
        printf("QUADRADO - Area: %.2f\n", resultado);
    } else {
        printf("PENTAGONO\n");
    }
    return 0;
}
