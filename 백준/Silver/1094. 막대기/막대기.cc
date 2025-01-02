#include <stdio.h>

int count_sticks(int X) {
    int count = 0;
    while (X > 0) {
        if (X & 1) count++; // X의 최하위 비트가 1이면 count 증가
        X >>= 1; // X를 오른쪽으로 1비트 시프트
    }
    return count;
}

int main() {
    int X;
    scanf("%d", &X);
    printf("%d", count_sticks(X));
    return 0;
}