#include <stdio.h>

// 조합을 계산하는 함수 (nCm)
long long combination(int n, int m) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= m--;
        result /= i;
    }
    return result;
}

int main() {
    int t; // 테스트 케이스의 개수
    scanf("%d", &t);

    while (t--) {
        int n, m; // 서쪽과 동쪽의 사이트 개수
        scanf("%d %d", &n, &m);

        // n개의 다리를 지을 수 있는 경우의 수 계산
        printf("%lld\n", combination(n, m));
    }

    return 0;
}
