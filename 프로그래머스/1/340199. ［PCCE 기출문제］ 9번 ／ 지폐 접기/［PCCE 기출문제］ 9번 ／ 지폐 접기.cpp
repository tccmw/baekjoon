#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;

    int w1 = min(wallet[0], wallet[1]);
    int w2 = max(wallet[0], wallet[1]);

    int b1 = min(bill[0], bill[1]);
    int b2 = max(bill[0], bill[1]);

    // 지폐가 지갑에 들어갈 때까지 반복
    while (!((b1 <= w1 && b2 <= w2) || (b1 <= w2 && b2 <= w1))) {
        if (b1 > b2) b1 /= 2;
        else b2 /= 2;
        answer++;
    }

    return answer;
}
