#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using v = vector<int>;
using vv = vector<v>;
using vvv = vector<vv>;
using p = pair<int, string>;

int main(){
    int N;
    cin >> N;
    vector<p> list(N);
    for (int i = 0; i < N; i++){
        int T;
        string S;
        cin >> S >> T;
        list.at(i) = make_pair(T, S);
    }
    sort(list.begin(), list.end());
    reverse(list.begin(), list.end());
    cout << list.at(1).second << endl;
    return 0;
}