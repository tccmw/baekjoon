#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> pos; // 선수 이름 -> 현재 위치
    int n = players.size();
    
    for (int i = 0; i < n; i++) {
        pos[players[i]] = i;
    }
    
    for (const string &name : callings) {
        int idx = pos[name];
        if (idx == 0) continue; // 1등은 호출되지 않음
        
        // 바로 앞 선수와 swap
        swap(players[idx], players[idx - 1]);
        
        // 인덱스 갱신
        pos[players[idx]] = idx;
        pos[players[idx - 1]] = idx - 1;
    }
    
    return players;
}
