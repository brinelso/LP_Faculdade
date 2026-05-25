#include <stdio.h>

int eh_primo(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; (long long)i * i <= n; i += 2)
        if (n % i == 0) return 0;
    return 1;
}

int contar_primos(int x, int y) {
    int count = 0;
    for (int n = x + 1; n < y; n++)
        if (eh_primo(n)) count++;
    return count;
}

int main(void) {
    printf("Primos entre 1 e 20: %d\n",  contar_primos(1, 20));
    printf("Primos entre 10 e 50: %d\n", contar_primos(10, 50));
    printf("Primos entre 1 e 100: %d\n", contar_primos(1, 100));
    return 0;
}
