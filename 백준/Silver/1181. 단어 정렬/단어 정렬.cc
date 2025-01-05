#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char w[20000][51];

int c(const void *a, const void *b) {
    int len1 = strlen((char*)a), len2 = strlen((char*)b);
    return len1 != len2 ? len1 - len2 : strcmp((char*)a, (char*)b);
}

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%s", w[i]);
    qsort(w, n, 51, c);
    for (i = 0; i < n; i++) if (!i || strcmp(w[i], w[i-1])) puts(w[i]);
}