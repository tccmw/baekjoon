#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int original = N;
    int cycle = 0;

    do {
        int tens = N / 10;
        int units = N % 10;
        int sum = tens + units;
        N = (units * 10) + (sum % 10);
        cycle++;
    } while (N != original);

    printf("%d\n", cycle);
    return 0;
}