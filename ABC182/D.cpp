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
    int N;
    cin >> N;
    vi A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);
    ll ans = 0;
    ll dx = 0;
    ll sum = 0;
    ll dmax = 0;
    for (int i = 0; i < N; i++){
        dx += A.at(i);
        dmax = max(dmax, dx);
        sum += dx;
        ans = max(ans, sum + dmax - dx);
    }
    cout << ans << endl;
    return 0;
}
