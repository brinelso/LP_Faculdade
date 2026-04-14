#include <stdio.h>

int main() {
    int i, n;
    printf("Digite N (maior que zero): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%d\n", i);
    return 0;
}
