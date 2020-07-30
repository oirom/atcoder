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

    string str;
    cin >> str;

    if (str=="AKIHABARA") cout << "YES" << endl, return 0;
    if (str.size()>9) cout << "NO" << endl, return 0;

    vector<char> v(9,'Z');
    REP(i,str.size()) v[i] = str[i];



    return 0;
}
