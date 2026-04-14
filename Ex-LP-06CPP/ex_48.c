#include <stdio.h>

int main() {
    float n1, n2, opt, media;
    printf("Nota 1: "); 
    scanf("%f", &n1);
    printf("Nota 2: "); 
    scanf("%f", &n2);
    printf("Nota optativa (-1 se nao fez): "); 
    scanf("%f", &opt);
    if (opt != -1) {
        if (n1 < n2)
            n1 = opt;
        else
            n2 = opt;
    }
    media = (n1 + n2) / 2.0f;
    printf("Media: %.2f", media);
    if (media >= 6.0f)
        printf(" - Aprovado\n");
    else if (media < 3.0f)
        printf(" - Reprovado\n");
    else
        printf(" - Exame\n");
    return 0;
}
