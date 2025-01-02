#include <stdio.h>

int count_sticks(int X) {
    int count = 0;
    while (X > 0) {
        if (X & 1) count++;
        X >>= 1;
    }
    return count;
}

int main() {
    int X;
    scanf("%d", &X);
    printf("%d", count_sticks(X));
    return 0;
}