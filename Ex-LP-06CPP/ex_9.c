#include <stdio.h>

int main() {
    float lado, area, dobro;
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    dobro = area * 2;
    printf("A area e: %.2f e o dobro e: %.2f\n", area, dobro);
    return 0;
}
