#include <stdio.h>

int main() {
    int lados;
    float medida;
    printf("Numero de lados: ");
    scanf("%d", &lados);
    if (lados < 3) {
        printf("NAO E UM POLIGONO\n");
    } else if (lados > 5) {
        printf("POLIGONO NAO IDENTIFICADO\n");
    } else {
        printf("Medida do lado (cm): ");
        scanf("%f", &medida);
        if (lados == 3)
            printf("TRIANGULO - Perimetro: %.2f\n", medida * 3);
        else if (lados == 4)
            printf("QUADRADO - Area: %.2f\n", medida * medida);
        else
            printf("PENTAGONO\n");
    }
    return 0;
}
