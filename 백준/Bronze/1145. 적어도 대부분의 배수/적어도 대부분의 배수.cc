#include <stdio.h>

int main() {
    int nums[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }

    int result = 1;
    while (1) {
        int count = 0;
        for (int i = 0; i < 5; i++) {
            if (result % nums[i] == 0) {
                count++;
            }
        }
        if (count >= 3) {
            break;
        }
        result++;
    }

    printf("%d\n", result);
    return 0;
}