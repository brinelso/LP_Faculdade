#include <stdio.h>
int main()
{
    float notas[20];
    float soma = 0, media;
    int acima = 0;
    printf("=== Exercicio 79: Notas da Turma ===\n");
    for (int i = 0; i < 20; i++)
    {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    media = soma / 20.0f;
    printf("\nMedia da turma: %.2f\n", media);
    for (int i = 0; i < 20; i++)
        if (notas[i] > media)
            acima++;
    printf("Alunos acima da media: %d\n", acima);
    return 0;
}
