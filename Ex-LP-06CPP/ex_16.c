#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    printf("Nota 1: "); 
    scanf("%f", &n1);
    printf("Nota 2: "); 
    scanf("%f", &n2);
    printf("Nota 3: "); 
    scanf("%f", &n3);
    media = (n1 * 2 + n2 * 3 + n3 * 5) / 10.0f;
    printf("Media final: %.2f\n", media);
    return 0;
}
