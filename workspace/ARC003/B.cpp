#include <bits/stdc++.h>
#define REP(i,n) for (int i=0; i<(n); ++i)
#define REPR(i,n,m) for (int i=(n); i>=(m); --i)
using namespace std;
using LL = long long;
using LD = long double;
using PLL = pair<long long, long long>;
using PLD = pair<long double, long double>;
using VLL = vector<long long>;
using VLD = vector<long double>;
using VPLD = vector<PLD>;

const int INF = numeric_limits<int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<string> str(n);
    REP(i,n) {
        cin >> str[i];
        reverse(str[i].begin(), str[i].end());
    }

    sort(str.begin(), str.end());

    REP(i,n) {
        reverse(str[i].begin(), str[i].end());
        cout << str[i] << endl;
    }
    
    return 0;
}