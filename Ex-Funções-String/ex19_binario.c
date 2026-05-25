#include <stdio.h>

void para_binario(unsigned int n) {
    if (n == 0) { printf("0"); return; }
    char buf[33]; int pos = 0;
    while (n > 0) { buf[pos++] = '0' + (n & 1); n >>= 1; }
    for (int i = pos - 1; i >= 0; i--) printf("%c", buf[i]);
}

int main(void) {
    int testes[] = {0, 1, 5, 10, 255, 1024};
    for (int i = 0; i < 6; i++) {
        printf("%4d = ", testes[i]);
        para_binario(testes[i]);
        printf("\n");
    }
    return 0;
}
