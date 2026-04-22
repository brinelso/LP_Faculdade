#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int V1[15], V2[15], coin = 0;
    srand(time(NULL));
    printf("=== Exercicio 89: Coincidencias V1 e V2 ===\n");
    printf("%-5s %-8s %-8s\n", "Pos", "V1", "V2");
    for (int i = 0; i < 15; i++)
    {
        V1[i] = (rand() % 20) + 1;
        V2[i] = (rand() % 20) + 1;
        printf("%-5d %-8d %-8d", i, V1[i], V2[i]);
        if (V1[i] == V2[i])
        {
            printf(" <-- coincidencia!");
            coin++;
        }
        printf("\n");
    }
    printf("\nTotal de coincidencias: %d\n", coin);
    return 0;
}
