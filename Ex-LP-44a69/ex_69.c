#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n = 0;
    float valor, total = 0, media;
    char opcao;

    do {
    
        do {
            printf("Valor da mercadoria: ");
            if (scanf("%f", &valor) != 1) {
                printf("Entrada invalida! Digite um numero.\n");
                while (getchar() != '\n');
                valor = -1;
            } else if (valor <= 0) {
                printf("Valor invalido! Digite um numero maior que zero.\n");
            }
        } while (valor <= 0);

        total += valor;
        n++;

        do {
            printf("Mais mercadorias (S/N)? ");
            scanf(" %c", &opcao);
            opcao = toupper(opcao);
            if (opcao != 'S' && opcao != 'N')
                printf("Opcao invalida! Digite S ou N.\n");
        } while (opcao != 'S' && opcao != 'N');

    } while (opcao == 'S');

    media = total / n;
    printf("\nValor total em estoque: %.2f\n", total);
    printf("Media de valor das mercadorias: %.2f\n", media);
    printf("Total de mercadorias: %d\n", n);

    return 0;
}