#include <stdio.h>
#include <math.h>


int menor_quadrado_maior(double n) {
    int k = (int)sqrt(n);
    while ((long long)k * k <= n) k++;
    return k;
}

int main(void) {
    printf("n=16  -> k=%d (k²=%d)\n", 16, menor_quadrado_maior(16));
    printf("n=15  -> k=%d (k²=%d)\n", 15, menor_quadrado_maior(15));
    printf("n=0   -> k=%d (k²=%d)\n",  0, menor_quadrado_maior(0));
    printf("n=100 -> k=%d (k²=%d)\n",100, menor_quadrado_maior(100));
    return 0;
}
