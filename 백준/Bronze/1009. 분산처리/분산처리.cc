#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int a, b;
        scanf("%d %d", &a, &b);

        int last_digit = a % 10;
        if (last_digit == 0) {
            printf("10\n");
            continue;
        }

        int exponent = b % 4;
        if (exponent == 0) exponent = 4;

        int result = 1;
        for (int i = 0; i < exponent; i++) {
            result = (result * last_digit) % 10;
        }

        printf("%d\n", result);
    }

    return 0;
}