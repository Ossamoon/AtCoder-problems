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
#include <iomanip> // setprecisionを使用するのに必要
#include <cmath>

using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;

int main(){
    int N, K;
    cin >> N >> K;
    vvi T(N, vi(N));
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> T.at(i).at(j);
        }
    }
    vi C(N);
    for (int i = 0; i < N; i++) C.at(i) = i;

    int ans = 0;
    sort(C.begin(), C.end());
    do {
        if (C.at(0) != 0) break;
        ll cost = 0;
        int before = -1;
        for (int now : C) {
            if (before >= 0) cost += T.at(before).at(now);
            before = now;
        }
        cost += T.at(before).at(0);
        if (cost == K) ans++;
    } while (next_permutation(C.begin(), C.end()));
    cout << ans << endl;
    return 0;
}
