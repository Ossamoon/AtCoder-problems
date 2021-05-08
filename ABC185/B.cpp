#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using v = vector<int>;
using vv = vector<v>;
using vvv = vector<vv>;

int main(){
    int N, M, T;
    cin >> N >> M >> T;
    v A(M);
    v B(M);
    for(int i = 0; i < M; i++) cin >> A.at(i) >> B.at(i);
    int battery = N;
    int time = 0;
    for(int i = 0; i < M; i++){
        battery -= (A.at(i) - time);
        if(battery <= 0){
            cout << "No" << endl;
            return 0;
        }
        battery += (B.at(i) - A.at(i));
        battery = min(N, battery);
        time = B.at(i);
    }
    if(battery > T - time){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}