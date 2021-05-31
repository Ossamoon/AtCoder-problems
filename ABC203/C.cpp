#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using p = pair<ll, ll>;
using v = vector<p>;
using vv = vector<v>;
using vvv = vector<vv>;

int main(){
    ll N, K;
    cin >> N >> K;
    v AB(N);
    for (ll i = 0; i < N; i++){
        ll a, b;
        cin >> a >> b;
        AB.at(i) = make_pair(a, b);
    }

    sort(AB.begin(), AB.end());

    ll remainder = K;
    ll position = 0;
    for (p P: AB) {
        ll A = P.first;
        ll B = P.second;
        if (remainder >= A - position) {
            remainder -= A - position;
            position = A;
            remainder += B;
        } else {
            position += remainder;
            remainder = 0;
            break;
        }
    }
    position += remainder;
    cout << position << endl;
    return 0;
}