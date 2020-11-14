// これだとタイムオーバー！！

#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <cmath>

using namespace std;
using ll = long long;

ll f(ll X){
    set<ll> divisor;
    for(ll i = 1; i * i <= X; i++){
        if (X % i == 0){
            divisor.insert(i);
            divisor.insert(X / i);
        }
    }
    return (ll)divisor.size();
}

int main(){
    ll N;
    cin >> N;
    ll ans = 0;
    for (ll i = 1; i <= N; i++){
        ans += i * f(i);
    }
    cout << ans << endl;
    return 0;
}
