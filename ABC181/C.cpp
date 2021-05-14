#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using v = vector<int>;
using vv = vector<v>;
using vvv = vector<vv>;

int main(){
    int N;
    cin >> N;
    v x(N), y(N);
    for (int i = 0; i < N; i++) cin >> x.at(i) >> y.at(i);

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                int vx1 = x.at(j) - x.at(i);
                int vy1 = y.at(j) - y.at(i);
                int vx2 = x.at(k) - x.at(i);
                int vy2 = y.at(k) - y.at(i);
                if (vx1 * vy2 == vx2 * vy1) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}