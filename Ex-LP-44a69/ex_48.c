#include <stdio.h>

int main() {
    float n1, n2, media;
    do {
        printf("Nota 1 (0 a 10): ");
        scanf("%f", &n1);
    } while (n1 < 0 || n1 > 10);
    do {
        printf("Nota 2 (0 a 10): ");
        scanf("%f", &n2);
    } while (n2 < 0 || n2 > 10);
    media = (n1 + n2) / 2.0f;
    printf("Media: %.2f\n", media);
    return 0;
}
