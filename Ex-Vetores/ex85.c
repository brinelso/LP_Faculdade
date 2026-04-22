#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    float temp[365], soma = 0, media, menor, maior;
    int dias_abaixo = 0;
    srand(time(NULL));
    printf("=== Exercicio 85: Temperaturas do Ano ===\n");
    printf("Gerando 365 temperaturas (-5 a 40 graus C)...\n\n");
    for (int i = 0; i < 365; i++)
    {
        temp[i] = (float)(rand() % 46) - 5.0f;
        soma += temp[i];
    }
    menor = maior = temp[0];
    for (int i = 1; i < 365; i++)
    {
        if (temp[i] < menor)
            menor = temp[i];
        if (temp[i] > maior)
            maior = temp[i];
    }
    media = soma / 365.0f;
    for (int i = 0; i < 365; i++)
        if (temp[i] < media)
            dias_abaixo++;
    printf("a) Menor temperatura : %.1f C\n", menor);
    printf("b) Maior temperatura : %.1f C\n", maior);
    printf("c) Media anual       : %.2f C\n", media);
    printf("d) Dias abaixo media : %d\n", dias_abaixo);
    return 0;
}
