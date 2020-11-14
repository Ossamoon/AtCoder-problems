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

using namespace std;
using ll = long long;

int main(){
    ll N, M, K;
    cin >> N >> M >> K;
    vector<ll> A(N);
    vector<ll> B(M);
    for(int i = 0; i < N; i++) cin >> A.at(i);
    for(int i = 0; i < M; i++) cin >> B.at(i);

    ll time = 0;
    for(int i = 0; i < M; i++) time += B.at(i);

    ll ans = 0;
    ll count = M;
    ll ib = M - 1;
    for(int i = -1; i < N; i++){
        bool flag = true;
        if(i >= 0){
            time += A.at(i);
            count++;
        }
        while(time > K){
            if(ib < 0){
                flag = false;
                break;
            }
            time -= B.at(ib);
            ib--;
            count--;
        }
        if(!flag) continue;
        ans = max(ans, count);
    }
    cout << ans << endl;
    return 0;
}
