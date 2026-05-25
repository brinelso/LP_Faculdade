#include <stdio.h>


void divisores(int n) {
    if (n <= 0) return;
    printf("Divisores de %d: ", n);
    int divs[1024], count = 0;
    for (int i = 1; (long long)i * i <= n; i++) {
        if (n % i == 0) {
            divs[count++] = i;
            if (i != n / i) divs[count++] = n / i;
        }
    }
    /* ordena (insertion sort, pois count é pequeno) */
    for (int i = 1; i < count; i++) {
        int key = divs[i], j = i - 1;
        while (j >= 0 && divs[j] > key) { divs[j+1] = divs[j]; j--; }
        divs[j+1] = key;
    }
    for (int i = 0; i < count; i++) printf("%d ", divs[i]);
    printf("\n");
}

int main(void) {
    divisores(1);
    divisores(12);
    divisores(36);
    divisores(97);
    return 0;
}
