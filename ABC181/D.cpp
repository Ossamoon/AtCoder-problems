#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using v = vector<int>;
using vv = vector<v>;
using vvv = vector<vv>;

int main(){
    string S;
    cin >> S;
    
    if (S.length() == 1) {
        if (S == "8") {
            cout << "Yes" << endl;
            return 0;
        }
        cout << "No" << endl;
        return 0;
    }

    if (S.length() == 2) {
        if  (atoi(S.c_str()) % 8 == 0) {
            cout << "Yes" << endl;
            return 0;
        }
        reverse(S.begin(), S.end());
        if  (atoi(S.c_str()) % 8 == 0) {
            cout << "Yes" << endl;
            return 0;
        }
        cout << "No" << endl;
        return 0;
    }

    v hist(10);
    for (char c : S) {
        hist[c - '0'] += 1;
    }
    for (int i = 112; i < 1000; i += 8) {
        v temp(10);
        temp = hist;
        for (char c : to_string(i)) {
            temp[c - '0'] -= 1;
        }
        bool flag = true;
        for (int i = 0; i < 10; i++){
            if (temp[i] < 0) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}