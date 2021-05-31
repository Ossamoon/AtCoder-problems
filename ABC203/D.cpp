#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using v = vector<int>;
using vv = vector<v>;
using vvv = vector<vv>;

int main(){
    int N, K;
    cin >> N >> K;
    vv park(N, v(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> park.at(i).at(j);
        }
    }
    int length = N - K + 1;
    int pick = ((K * K) / 2);
    int ans = 1000000001;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            v sample;
            for (int k = 0; k < K; k++) {
                sample.insert(sample.end(), park.at(i + k).begin()+j, park.at(i + k).begin()+j+K);
            }
            sort(sample.begin(), sample.end());
            reverse(sample.begin(), sample.end());
            // cout << sample.at(pick) << endl;
            ans = min(ans, sample.at(pick));
        }
    }
    cout << ans << endl;
    return 0;
}