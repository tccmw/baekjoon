#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char files[50][51], pattern[51];

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", files[i]);
    }

    int len = strlen(files[0]);
    for (int i = 0; i < len; i++) {
        char ch = files[0][i];
        for (int j = 1; j < N; j++) {
            if (files[j][i] != ch) {
                ch = '?';
                break;
            }
        }
        pattern[i] = ch;
    }

    pattern[len] = '\0';
    printf("%s\n", pattern);

    return 0;
}
