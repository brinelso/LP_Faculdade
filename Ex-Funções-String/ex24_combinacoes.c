#include <stdio.h>

unsigned long long fatorial(int n) {
    unsigned long long f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}

/* C(n,r) = n! / (r! * (n-r)!) */
unsigned long long combinacao(int n, int r) {
    if (r < 0 || r > n) return 0;
    /* Usa o menor entre r e n-r para evitar overflow desnecessário */
    if (r > n - r) r = n - r;
    unsigned long long num = 1, den = 1;
    for (int i = 0; i < r; i++) {
        num *= (n - i);
        den *= (i + 1);
    }
    return num / den;
}

int main(void) {
    printf("C(5,2)  = %llu\n", combinacao(5, 2));
    printf("C(10,3) = %llu\n", combinacao(10, 3));
    printf("C(6,6)  = %llu\n", combinacao(6, 6));
    printf("C(20,5) = %llu\n", combinacao(20, 5));
    return 0;
}
