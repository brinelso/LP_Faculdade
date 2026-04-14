#include <stdio.h>

int main() {
    int i, n;
    float nota, soma = 0, media;
    printf("Quantidade de alunos: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Nota do aluno %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }
    media = soma / n;
    printf("Media da turma: %.2f\n", media);
    return 0;
}
