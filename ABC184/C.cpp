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
using vec = vector<int>;
using vvec = vector<vec>;
using vvvec = vector<vvec>;

int main(){
    ll r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    
    if (r1 == r2 && c1 == c2){
        cout << 0 << endl;
        return 0;
    }

    if (r1 + c1 == r2 + c2 || r1 - c1 == r2 - c2 || abs(r1 - r2) + abs(c1 - c2) <= 3){
        cout << 1 << endl;
        return 0;
    }

    if ((r1 + c1) % 2 == (r2 + c2) % 2){
        cout << 2 << endl;
        return 0;
    }

    for (int dx = -3; dx <= 3; dx += 2) {
        ll c1a = c1 + dx;
        if (r1 + c1a == r2 + c2 || r1 - c1a == r2 - c2 || abs(r1 - r2) + abs(c1a - c2) <= 3){
            cout << 2 << endl;
            return 0;
        }
    }

    cout << 3 << endl;
    return 0;
}
