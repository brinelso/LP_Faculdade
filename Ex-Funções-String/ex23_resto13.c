#include <stdio.h>


void resto13_igual5(int x, int y) {
    int inicio = x + ((13 + 5 - x % 13) % 13);

    if (inicio % 13 != 5) inicio += 13 - ((inicio % 13 - 5 + 13) % 13);
    printf("Números entre %d e %d com n%%13==5:\n", x, y);
    
    int found = 0;
    for (int n = x; n <= y; n++)
        if (n % 13 == 5) { printf("%d ", n); found++; }
    if (!found) printf("(nenhum)");
    printf("\n");
}

int main(void) {
    resto13_igual5(1, 100);
    resto13_igual5(200, 260);
    return 0;
}
