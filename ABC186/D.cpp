#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using v = vector<ll>;
using vv = vector<v>;
using vvv = vector<vv>;

int main(){
    int N;
    cin >> N;
    v A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);
    sort(A.begin(), A.end());

    ll ans = 0;
    ll temp = 0;
    for (int i = 0; i < N; i++) {
        temp += A.at(i);
    }
    for (int i = 0; i < N - 1; i++) {
        ans += (temp - (A.at(i) * (N - i)));
        temp -= A.at(i);
    }
    cout << ans << endl;
    return 0;
}