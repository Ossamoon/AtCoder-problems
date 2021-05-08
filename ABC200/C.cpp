#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using v = vector<ll>;
using vv = vector<v>;
using vvv = vector<vv>;

int main(){
    ll N;
    cin >> N;
    v A(N);
    for(ll i = 0; i < N; i++){
        cin >> A.at(i);
    }

    for(ll i = 0; i < N; i++){
        A.at(i) %= 200;
    }
    sort(A.begin(), A.end());
    ll ans = 0;
    ll count = 0;
    for(ll i = 1; i < N; i++){
        if(A.at(i) == A.at(i-1)) {
            count++;
            continue;
        } else {
            if (count == 0){
                continue;
            } else {
                ll sum = 0;
                for (ll k = 1; k <= count; k++){
                    sum += k;
                }
                ans += sum;
                count = 0;
                continue;
            }
        }
    }
    if (count > 0){
        ll sum = 0;
        for (ll k = 1; k <= count; k++){
            sum += k;
        }
        ans += sum;
        count = 0;
    }
    cout << ans << endl;
    return 0;
}