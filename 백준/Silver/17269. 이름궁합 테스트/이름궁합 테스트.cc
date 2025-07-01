#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 알파벳 획수를 정의합니다.
const int strokes[] = {
    3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1, 3, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1
};

vector<int> mergeNames(const string& A, const string& B) {
    vector<int> merged;

    // 번갈아가며 문자를 결합합니다.
    int i = 0, j = 0;
    while (i < A.size() || j < B.size()) {
        if (i < A.size()) merged.push_back(strokes[A[i++] - 'A']);
        if (j < B.size()) merged.push_back(strokes[B[j++] - 'A']);
    }

    return merged;
}

int calculateCompatibility(vector<int>& nums) {
    while (nums.size() > 2) {
        vector<int> next;
        for (int i = 0; i < nums.size() - 1; ++i) {
            int sum = nums[i] + nums[i + 1];
            next.push_back(sum % 10); // 10 이상일 경우 일의 자리만 남김
        }
        nums = next;
    }
    return nums[0] * 10 + nums[1]; // 두 자릿수를 결합
}

int main() {
    int N, M;
    string A, B;

    cin >> N >> M >> A >> B;

    // 이름을 결합하여 획수 배열 생성
    vector<int> strokesArray = mergeNames(A, B);

    // 궁합 계산
    int compatibility = calculateCompatibility(strokesArray);

    // 결과 출력
    cout << compatibility << "%" << endl;

    return 0;
}
