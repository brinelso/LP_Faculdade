#include <stdio.h>

int main() {
    int mat[3][4];
    int vetor[3];
    int soma_total = 0;

  
    printf("Digite os elementos da matriz (3 x 4 ):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }


    for (int i = 0; i < 3; i++) {
        vetor[i] = 0;
        for (int j = 0; j < 4; j++) {
            vetor[i] += mat[i][j];
        }
    }

  
    printf("\nVetor de somas por linha:\n");
    for (int i = 0; i < 3; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    
    for (int i = 0; i < 3; i++) {
        soma_total += vetor[i];
    }

    printf("\nSoma total de todos os elementos: %d\n", soma_total);

    return 0;
}
