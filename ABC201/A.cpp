#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using v = vector<int>;
using vv = vector<v>;
using vvv = vector<vv>;

int main(){
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    if (
        a2 - a1 == a3 - a2 ||
        a3 - a1 == a2 - a3 ||
        a1 - a2 == a3 - a1 ||
        a2 - a3 == a1 - a2 ||
        a3 - a2 == a1 - a3 ||
        a1 - a3 == a2 - a1
    ) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}