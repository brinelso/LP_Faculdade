#include <stdio.h>

/* Divisão inteira usando subtrações sucessivas.
   Retorna o quociente; trata sinal separadamente. */
int dividir(int a, int b) {
    if (b == 0) { printf("Erro: divisão por zero!\n"); return 0; }

    int negativo = (a < 0) ^ (b < 0);
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    int quociente = 0;
    while (a >= b) { a -= b; quociente++; }

    return negativo ? -quociente : quociente;
}

int main(void) {
    printf("10 /  3 = %d\n", dividir(10, 3));
    printf("-9 /  3 = %d\n", dividir(-9, 3));
    printf("20 /  4 = %d\n", dividir(20, 4));
    printf(" 7 /  2 = %d\n", dividir(7, 2));
    return 0;
}
