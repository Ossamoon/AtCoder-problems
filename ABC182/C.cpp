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
using vi = vector<int>;
using vvi = vector<vi>;

int main(){
    string S;
    cin >> S;
    int length = (int)S.size();
    vi imod3(length);
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < length; i++){
        char c = S.at(i);
        imod3.at(i) = c - '0';
        imod3.at(i) %= 3;
        if(imod3.at(i) == 1) count1++;
        if(imod3.at(i) == 2) count2++;
    }
    int summod3 = 0;
    for (int i = 0; i < length; i++){
        summod3 += imod3.at(i);
        summod3 %= 3;
    }
    int ans = 0;
    if(summod3 == 1){
        if(count1 >= 1) ans = 1;
        else if (count2 >= 2) ans = 2;
        else ans = -1;
    }
    else if(summod3 == 2){
        if(count2 >= 1) ans = 1;
        else if (count1 >= 2) ans = 2;
        else ans = -1;
    }
    if (ans == length) ans = -1;
    cout << ans << endl;
    return 0;
}
