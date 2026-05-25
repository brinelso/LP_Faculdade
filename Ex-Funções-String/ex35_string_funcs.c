#include <stdio.h>

/* ── strlen ─────────────────────────────────── */
int meu_strlen(const char *s) {
    int n = 0;
    while (s[n]) n++;
    return n;
}

/* ── strcmp ─────────────────────────────────── */
int meu_strcmp(const char *a, const char *b) {
    while (*a && *a == *b) { a++; b++; }
    return (unsigned char)*a - (unsigned char)*b;
}

/* ── strcat ─────────────────────────────────── */
char *meu_strcat(char *dest, const char *src) {
    char *p = dest + meu_strlen(dest);
    while ((*p++ = *src++));
    return dest;
}

int main(void) {
    /* strlen */
    printf("strlen(\"hello\")   = %d\n", meu_strlen("hello"));
    printf("strlen(\"\")        = %d\n", meu_strlen(""));

    /* strcmp */
    printf("strcmp(\"abc\",\"abc\") = %d (0 esperado)\n", meu_strcmp("abc","abc"));
    printf("strcmp(\"abc\",\"abd\") = %d (<0 esperado)\n", meu_strcmp("abc","abd"));
    printf("strcmp(\"abd\",\"abc\") = %d (>0 esperado)\n", meu_strcmp("abd","abc"));

    /* strcat */
    char buf[64] = "Hello, ";
    meu_strcat(buf, "World!");
    printf("strcat: \"%s\"\n", buf);

    return 0;
}
