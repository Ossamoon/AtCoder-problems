#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using v = vector<int>;
using vv = vector<v>;
using vvv = vector<vv>;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    if (a == b) ans = c;
    else if (a == c) ans = b;
    else if (b == c) ans = a;
    cout << ans << endl;
    return 0;
}