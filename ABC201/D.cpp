#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using v = vector<int>;
using vv = vector<v>;
using vvv = vector<vv>;

int main(){
    int H, W;
    cin >> H >> W;
    vv A(H, v(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            char c;
            cin >> c;
            A.at(i).at(j) = (c == '+') ? 1 : -1;
        }
    }
    vv minimap(H, v(W));
    for (int h = H - 1; h >= 0; h--) {
        for (int w = W - 1; w >= 0; w--) {
            int turn = ((h + w) % 2 == 0) ? 1 : -1;
            if (h == H - 1 && w == W - 1) {
                minimap.at(h).at(w) = 0;
            } else if (h == H - 1) {
                minimap.at(h).at(w) = minimap.at(h).at(w + 1) + turn * A.at(h).at(w + 1);
            } else if (w == W - 1) {
                minimap.at(h).at(w) = minimap.at(h + 1).at(w) + turn * A.at(h + 1).at(w);
            } else {
                if (turn == 1) {
                    minimap.at(h).at(w) = 
                    max(minimap.at(h).at(w + 1) + turn * A.at(h).at(w + 1), minimap.at(h + 1).at(w) + turn * A.at(h + 1).at(w));
                } else {
                    minimap.at(h).at(w) = 
                    min(minimap.at(h).at(w + 1) + turn * A.at(h).at(w + 1), minimap.at(h + 1).at(w) + turn * A.at(h + 1).at(w));
                }
            }
        }
    }
    int ans = minimap.at(0).at(0);
    if (ans > 0) cout << "Takahashi" << endl;
    else if (ans < 0) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
    return 0;
}