#include <stdio.h>

int main(void) {
    printf("+--------+----------+\n");
    printf("| Fahr   | Celsius  |\n");
    printf("+--------+----------+\n");
    for (int f = 50; f <= 150; f++) {
        double c = 5.0 * (f - 32) / 9.0;
        printf("| %6d | %8.2f |\n", f, c);
    }
    printf("+--------+----------+\n");
    return 0;
}
