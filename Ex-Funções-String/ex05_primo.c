#include <stdio.h>


int eh_primo(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; (long long)i * i <= n; i += 2)
        if (n % i == 0) return 0;
    return 1;
}

int main(void) {
    int testes[] = {1, 2, 3, 4, 13, 17, 25, 97};
    for (int i = 0; i < 8; i++)
        printf("%3d é primo? %s\n", testes[i], eh_primo(testes[i]) ? "Sim" : "Não");
    return 0;
}
