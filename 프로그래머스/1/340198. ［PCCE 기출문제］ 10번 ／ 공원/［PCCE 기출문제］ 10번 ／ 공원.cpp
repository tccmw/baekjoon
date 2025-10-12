#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) {
    int answer = -1;
    int rows = park.size();
    int cols = park[0].size();

    // mats를 큰 순서대로 정렬
    sort(mats.rbegin(), mats.rend());

    for (int size : mats) {
        bool canPlace = false;
        // (i,j) 좌표를 top-left로 시도
        for (int i = 0; i <= rows - size; i++) {
            for (int j = 0; j <= cols - size; j++) {
                bool empty = true;
                // size x size 정사각형 영역 확인
                for (int r = i; r < i + size && empty; r++) {
                    for (int c = j; c < j + size; c++) {
                        if (park[r][c] != "-1") {
                            empty = false;
                            break;
                        }
                    }
                }
                if (empty) {
                    canPlace = true;
                    break;
                }
            }
            if (canPlace) break;
        }
        if (canPlace) {
            answer = size;
            break; // 가장 큰 돗자리 먼저 찾으면 종료
        }
    }

    return answer;
}
