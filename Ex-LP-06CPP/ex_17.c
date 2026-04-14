#include <stdio.h>

int main() {
    float raio, area;
    float pi = 3.1415f;
    printf("Raio do circulo: ");
    scanf("%f", &raio);
    area = pi * (raio * raio);
    printf("Area: %.2f\n", area);
    return 0;
}
