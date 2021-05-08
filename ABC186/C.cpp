#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using v = vector<int>;
using vv = vector<v>;
using vvv = vector<vv>;

int main(){
    int N;
    cin >> N;
    int ans = 0;
    int temp = N;
    bool flag = false;
    for (int i = 1; i <= N; i++){
        temp = i;
        flag = false;
        for (int j = 100000; j > 0; j /= 10){
            if (temp / j == 7) {
                flag = true;
                break;
            }
            temp %= j;
        }
        if (flag) continue;
        temp = i;
        for (int j = 8 * 8 * 8 * 8 * 8; j > 0; j /= 8){
            if (temp / j == 7) {
                flag = true;
                break;
            }
            temp %= j;
        }
        if (flag) continue;
        ans++;
    }
    cout << ans << endl;
    return 0;
}