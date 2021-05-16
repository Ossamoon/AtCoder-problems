#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using v = vector<int>;
using vv = vector<v>;
using vvv = vector<vv>;

int facctorial(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

int nCm(int n, int m) {
    return facctorial(n) / (facctorial(n - m) * facctorial(m));
}

int main(){
    string S;
    cin >> S;
    int include = 0;
    int not_include = 0;
    int unknown = 0;
    for (char c : S) {
        if (c == 'o') include++;
        else if (c == 'x') not_include++;
        else unknown++;
    }

    if (include > 4) {
        cout << 0 << endl;
    }
    else if (include == 4) {
        cout << facctorial(4) << endl;
    }
    else if (include == 3) {
        int kinds4 = 0;
        if (unknown > 0) {
            kinds4 = unknown * facctorial(4);
        }
        int kinds3 = nCm(3, 1) * nCm(4, 2) * 2;
        cout << kinds4 + kinds3 << endl;
    }
    else if (include == 2) {
        int kinds4 = 0;
        if (unknown > 1) {
            kinds4 = nCm(unknown, 2) * facctorial(4);
        }
        int kinds3 = 0;
        if (unknown > 0) {
            kinds3 = unknown * nCm(3, 1) * nCm(4, 2) * 2;
        }
        int kinds2 = nCm(4, 2) + 2 * 4;
        cout << kinds4 + kinds3 + kinds2 << endl;
    }
    else if (include == 1) {
        int kinds4 = 0;
        if (unknown > 2) {
            kinds4 = nCm(unknown, 3) * facctorial(4);
        }
        int kinds3 = 0;
        if (unknown > 1) {
            kinds3 = nCm(unknown, 2) * nCm(3, 1) * nCm(4, 2) * 2;
        }
        int kinds2 = 0;
        if (unknown > 0) {
            kinds2 = unknown * (nCm(4, 2) + 2 * 4);
        }
        int kinds1 = 1;
        cout << kinds4 + kinds3 + kinds2 + kinds1 << endl;
    }
    else {
        int kinds4 = 0;
        if (unknown > 3) {
            kinds4 = nCm(unknown, 4) * facctorial(4);
        }
        int kinds3 = 0;
        if (unknown > 2) {
            kinds3 = nCm(unknown, 3) * nCm(3, 1) * nCm(4, 2) * 2;
        }
        int kinds2 = 0;
        if (unknown > 1) {
            kinds2 = nCm(unknown, 2) * (nCm(4, 2) + 2 * 4);
        }
        int kinds1 = unknown;
        cout << kinds4 + kinds3 + kinds2 + kinds1 << endl;
    }
    return 0;
}