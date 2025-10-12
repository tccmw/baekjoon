#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// "mm:ss" → 초 단위
int toSeconds(const char* t) {
    int m = (t[0]-'0')*10 + (t[1]-'0');
    int s = (t[3]-'0')*10 + (t[4]-'0');
    return m*60 + s;
}

// 초 단위 → "mm:ss"
void toStr(int t, char* buf) {
    int m = t / 60;
    int s = t % 60;
    sprintf(buf, "%02d:%02d", m, s);
}

char* solution(const char* video_len, const char* pos, const char* op_start, const char* op_end, const char* commands[], size_t commands_len) {
    int videoSec = toSeconds(video_len);
    int cur = toSeconds(pos);
    int opStart = toSeconds(op_start);
    int opEnd = toSeconds(op_end);

    // 시작 위치가 오프닝 구간이면 이동
    if (cur >= opStart && cur <= opEnd) cur = opEnd;

    for (size_t i = 0; i < commands_len; i++) {
        if (strcmp(commands[i], "prev") == 0) {
            cur -= 10;
            if (cur < 0) cur = 0;
        } else if (strcmp(commands[i], "next") == 0) {
            cur += 10;
            if (cur > videoSec) cur = videoSec;
        }

        // 오프닝 구간 체크
        if (cur >= opStart && cur <= opEnd) cur = opEnd;
    }

    char* answer = (char*)malloc(6); // "mm:ss" + '\0'
    toStr(cur, answer);
    return answer;
}
