#include <stdio.h>
#include <string.h>
#include <ctype.h>


int eh_palindromo(const char *s) {
    int len = strlen(s);

    char buf[1024];
    int j = 0;
    for (int i = 0; i < len; i++)
        if (isalnum((unsigned char)s[i]))
            buf[j++] = tolower((unsigned char)s[i]);
    buf[j] = '\0';

    for (int i = 0, k = j - 1; i < k; i++, k--)
        if (buf[i] != buf[k]) return 0;
    return 1;
}

int main(void) {
    const char *testes[] = {
        "OVO", "ARARA", "hello",
        "SOCORRAM-ME, SUBI NO ONIBUS EM MARROCOS",
        "A man a plan a canal Panama"
    };
    for (int i = 0; i < 5; i++)
        printf("\"%s\" → %s\n", testes[i],
               eh_palindromo(testes[i]) ? "palíndromo" : "não é palíndromo");
    return 0;
}
