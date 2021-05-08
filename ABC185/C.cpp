#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using v = vector<int>;
using vv = vector<v>;
using vvv = vector<vv>;

int main(){
    int L;
    cin >> L;
    L--;
    ll ans = 1;
    for(int i = 0; i < 11; i++){
        ans *= (L - i);
        ans /= (1 + i);
    }
    cout << ans << endl;
    return 0;
}