#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <unordered_map> 
#include <unordered_set>
#include <bitset> 
#include <cctype>
#include <iomanip>
#include <cmath>

using namespace std;
using ll = long long;
using v = vector<int>;
using vv = vector<v>;
using vvv = vector<vv>;

int main(){
    int N, X;
    cin >> N >> X;
    int ans = X;
    for (int i = 0; i < N; i++) {
        char c;
        cin >> c;
        if (c == 'o') ans++;
        else if (ans > 0) ans--;
    }
    cout << ans << endl;
    return 0;
}
