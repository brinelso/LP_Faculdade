#include <stdio.h>


long long inverter(long long n) {
    if (n < 0) n = -n;
    long long inv = 0;
    while (n > 0) {
        inv = inv * 10 + n % 10;
        n /= 10;
    }
    return inv;
}

int main(void) {
    printf("inverso(123456)  = %lld\n", inverter(123456));
    printf("inverso(100)     = %lld\n", inverter(100));
    printf("inverso(987)     = %lld\n", inverter(987));
    return 0;
}
