#include <stdio.h>

int main() {
    float f, c;
    printf("Temperatura em Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5.0f / 9.0f;
    printf("Graus Celsius: %.2f\n", c);
    return 0;
}
