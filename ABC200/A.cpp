#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using v = vector<int>;
using vv = vector<v>;
using vvv = vector<vv>;

int main(){
    int N;
    cin >> N;
    int ans = 0;
    if(N % 100 == 0) ans = N / 100;
    else ans = N / 100 + 1;
    cout << ans << endl;
    return 0;
}