#include <stdio.h>

long long fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    long long a = 0, b = 1;
    for (int i = 2; i <= n; i++) { long long t = a + b; a = b; b = t; }
    return b;
}

int main(void) {
    printf("Sequência de Fibonacci (primeiros 15 termos):\n");
    for (int i = 0; i < 15; i++)
        printf("F(%2d) = %lld\n", i, fibonacci(i));
    return 0;
}
