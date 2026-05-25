#include <stdio.h>


void para_romano(int n) {
    int valores[]    = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    const char *simbolos[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    for (int i = 0; i < 13; i++)
        while (n >= valores[i]) { printf("%s", simbolos[i]); n -= valores[i]; }
    printf("\n");
}

int main(void) {
    int testes[] = {1, 4, 9, 13, 40, 58, 99, 400, 1994, 2024};
    for (int i = 0; i < 10; i++) {
        printf("%4d = ", testes[i]);
        para_romano(testes[i]);
    }
    return 0;
}
