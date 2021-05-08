#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using v = vector<int>;
using vv = vector<v>;
using vvv = vector<vv>;

int main(){
    int N, M;
    cin >> N >> M;
    if(M == 0){
        cout << 1 << endl;
        return 0;
    }
    v A(M);
    for(int i = 0; i < M; i++) cin >> A.at(i);
    sort(A.begin(), A.end());
    A.push_back(N+1);
    int before = 0;
    v whiteset;
    bool flag = false;
    for(int i = 0; i < M + 1; i++){
        int step = A.at(i) - before - 1;
        if (step > 0) {
            whiteset.push_back(A.at(i) - before - 1);
            flag = true;
        }
        before = A.at(i);
    }
    if (flag == false) {
        cout << 0 << endl;
        return 0;
    }
    sort(whiteset.begin(), whiteset.end());
    int k = whiteset.at(0);
    int ans = 0;
    for(int i = 0; i < whiteset.size(); i++){
        ans += (whiteset.at(i) + (k - 1)) / k;
    }

    cout << ans << endl;
    return 0;
}