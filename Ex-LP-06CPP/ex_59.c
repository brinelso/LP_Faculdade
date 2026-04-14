#include <stdio.h>

int main() {
    float a1, a2, a3;
    printf("Angulo 1: "); 
    scanf("%f", &a1);
    printf("Angulo 2: "); 
    scanf("%f", &a2);
    printf("Angulo 3: "); 
    scanf("%f", &a3);
    if (a1 == 90 || a2 == 90 || a3 == 90)
        printf("Triangulo Retangulo\n");
    else if (a1 > 90 || a2 > 90 || a3 > 90)
        printf("Triangulo Obtusangulo\n");
    else
        printf("Triangulo Acutangulo\n");
    return 0;
}
