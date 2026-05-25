#include <stdio.h>

int multiplicar(int a, int b) {
    if (a == 0 || b == 0) return 0;

    int negativo = (a < 0) ^ (b < 0);
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    if (a < b) { int t = a; a = b; b = t; }

    int resultado = 0;
    for (int i = 0; i < b; i++)
        resultado += a;

    return negativo ? -resultado : resultado;
}

int main(void) {
    printf("3  *  4 = %d\n", multiplicar(3, 4));
    printf("-5 *  6 = %d\n", multiplicar(-5, 6));
    printf("-3 * -7 = %d\n", multiplicar(-3, -7));
    printf(" 0 *  9 = %d\n", multiplicar(0, 9));
    return 0;
}
