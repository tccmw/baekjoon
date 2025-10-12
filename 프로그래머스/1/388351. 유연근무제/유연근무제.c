#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 분 단위로 변환
int toMinutes(int t) {
    return (t / 100) * 60 + (t % 100);
}

int solution(int schedules[], size_t schedules_len, int** timelogs, size_t timelogs_rows, size_t timelogs_cols, int startday) {
    int answer = 0;
    
    for (int i = 0; i < schedules_len; i++) {
        int ok = 1; // 해당 직원이 상품 받을 수 있는지
        int limit = toMinutes(schedules[i]) + 10; // 출근 인정 한도 (분 단위)
        
        for (int j = 0; j < 7; j++) {
            int day = (startday + j - 1) % 7 + 1; // 실제 요일 계산 (1=월, ..., 7=일)
            if (day == 6 || day == 7) continue; // 주말은 무시
            
            int attend = toMinutes(timelogs[i][j]);
            if (attend > limit) { // 늦음
                ok = 0;
                break;
            }
        }
        if (ok) answer++;
    }
    
    return answer;
}
