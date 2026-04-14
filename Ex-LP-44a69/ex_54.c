#include <stdio.h>

int main() {
    int i, n;
    do {
        printf("Digite N (deve ser maior que zero): ");
        scanf("%d", &n);
    } while (n <= 0);
    for (i = 1; i <= n; i++)
        printf("%d\n", i);
    return 0;
}
