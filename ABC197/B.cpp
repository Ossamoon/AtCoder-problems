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
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vc = vector<char>;
using vvc = vector<vc>;
using vvvc = vector<vvc>;

int main(){
    int h, w, X, Y;
    cin >> h >> w >> X >> Y;
    vvc map(h, vc(w));
    X--;
    Y--;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> map.at(i).at(j);
        }
    }

    int ans = 1;
    for(int x = X - 1; x >= 0; x--){
        if(map.at(x).at(Y) == '.') ans++;
        else break;
    }
    for(int x = X + 1; x < h; x++){
        if(map.at(x).at(Y) == '.') ans++;
        else break;
    }
    for(int y = Y - 1; y >= 0; y--){
        if(map.at(X).at(y) == '.') ans++;
        else break;
    }
    for(int y = Y + 1; y < w; y++){
        if(map.at(X).at(y) == '.') ans++;
        else break;
    }

    cout << ans << endl;
    return 0;
}