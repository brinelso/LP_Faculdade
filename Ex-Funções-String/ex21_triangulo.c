#include <stdio.h>


int classificar(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) return 0;
    if (a + b <= c || a + c <= b || b + c <= a) return 0;
    if (a == b && b == c) return 1;
    if (a == b || b == c || a == c) return 2;
    return 3;
}

int main(void) {
    const char *nomes[] = {"não é triângulo","equilátero","isósceles","escaleno"};
    int casos[][3] = {{3,3,3},{5,5,3},{3,4,5},{0,1,1},{1,2,10}};
    for (int i = 0; i < 5; i++)
        printf("(%d,%d,%d) -> %s\n", casos[i][0], casos[i][1], casos[i][2],
               nomes[classificar(casos[i][0], casos[i][1], casos[i][2])]);
    return 0;
}
