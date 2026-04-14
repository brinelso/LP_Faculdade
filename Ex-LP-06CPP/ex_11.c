#include <stdio.h>

int main() {
    int total, brancos, nulos, validos;
    float p_brancos, p_nulos, p_validos;
    printf("Total de eleitores: ");
    scanf("%d", &total);
    printf("Votos brancos: ");
    scanf("%d", &brancos);
    printf("Votos nulos: ");
    scanf("%d", &nulos);
    printf("Votos validos: ");
    scanf("%d", &validos);
    p_brancos = (brancos * 100.0f) / total;
    p_nulos   = (nulos   * 100.0f) / total;
    p_validos = (validos * 100.0f) / total;
    printf("Brancos: %.2f%%  Nulos: %.2f%%  Validos: %.2f%%\n",
           p_brancos, p_nulos, p_validos);
    return 0;
}
