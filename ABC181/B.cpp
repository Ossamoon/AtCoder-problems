#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using v = vector<ll>;
using vv = vector<v>;
using vvv = vector<vv>;

int main(){
    int N;
    cin >> N;
    v A(N), B(N);
    for (int i = 0; i < N; i++) cin >> A.at(i) >> B.at(i);

    ll ans = 0;
    for (int i = 0; i < N; i++) ans += (B.at(i) + A.at(i)) * (B.at(i) - A.at(i) +1) / 2;
    cout << ans << endl;
    return 0;
}