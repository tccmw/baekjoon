#include <iostream>
#include <vector>
using namespace std;

int prize2017(int rank){
    if(rank == 0)return 0;
    if (rank <= 1) return 5000000;
    if (rank <= 3) return 3000000;
    if (rank <= 6) return 2000000;
    if (rank <= 10) return 500000;
    if (rank <= 15) return 300000;
    if (rank <= 21) return 100000;
    return 0;
}

int prize2018(int rank){
    if(rank == 0)return 0;
    if (rank <= 1) return 5120000;
    if (rank <= 3) return 2560000;
    if (rank <= 7) return 1280000;
    if (rank <= 15) return 640000;
    if (rank <= 31) return 320000;
    return 0;
}

int main()
{
    int T;
    cin >> T;
    
    vector<int> results;
    
    for(int i = 0; i <T; ++i){
        int a,b;
        cin >> a >> b;
        
        int totalPrize = prize2017(a) + prize2018(b);
        results.push_back(totalPrize);
    }
    
    for(int result : results){
        cout << result << endl;
    }
    return 0;
}
