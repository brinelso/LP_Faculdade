#include <stdio.h>

unsigned long long fatorial(int n) {
    if (n < 0) return 0;
    unsigned long long f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}

int main(void) {
    for (int i = 0; i <= 12; i++)
        printf("%2d! = %llu\n", i, fatorial(i));
    return 0;
}
