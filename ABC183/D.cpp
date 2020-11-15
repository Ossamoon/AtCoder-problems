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
using vi = vector<ll>;
using vvi = vector<vi>;

int main(){
    int N, W;
    cin >> N >> W;
    vi S(N);
    vi T(N);
    vi P(N);
    for (int i = 0; i < N; i++) cin >> S.at(i) >> T.at(i) >> P.at(i);
    vi dx(200001, 0);
    for (int i = 0; i < N; i++) dx.at(S.at(i)) += P.at(i);
    for (int i = 0; i < N; i++) dx.at(T.at(i)) -= P.at(i);

    string ans = "Yes";
    ll need = 0;
    for (int i = 0; i < 200001; i++){
        need += dx.at(i);
        if (need > W){
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
