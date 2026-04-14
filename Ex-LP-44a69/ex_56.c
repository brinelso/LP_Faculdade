#include <stdio.h>

int main() {
    int i, n;
    do {
        printf("Digite um numero entre 1 e 10: ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);
    for (i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}
