#include <stdio.h>

long long soma_ate(int x) {
    if (x <= 0) return 0;
    return (long long)x * (x + 1) / 2;
}

int main(void) {
    printf("Soma 1..10   = %lld\n", soma_ate(10));
    printf("Soma 1..100  = %lld\n", soma_ate(100));
    printf("Soma 1..1000 = %lld\n", soma_ate(1000));
    return 0;
}
