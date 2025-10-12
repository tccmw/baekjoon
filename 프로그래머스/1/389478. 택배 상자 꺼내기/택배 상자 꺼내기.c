#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int w, int num) {
    int layer = (num - 1) / w;
    int col = (num - 1) % w;

    // 홀수층(0부터 시작)일 경우 방향 반대
    if (layer % 2 == 1)
        col = w - 1 - col;

    int count = 0;
    // 위층부터 같은 col에 상자가 있는지 확인
    for (int i = layer; i * w + 1 <= n; i++) {
        int base = i * w;
        int box;
        if (i % 2 == 0)
            box = base + col + 1;
        else
            box = base + (w - col);
        if (box > n) break;
        count++;
    }
    return count;
}
