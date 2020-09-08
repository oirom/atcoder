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
using VPLL = vector<PLL>;
using VPLD = vector<PLD>;

const int INF = numeric_limits<int>::max();
const unsigned long long int ULLINF = numeric_limits<unsigned long long int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;

    if (s == "RRR") { cout << 3 << endl; return 0;}

    else if (s.substr(0,2)=="RR" | s.substr(1,2)=="RR") {cout << 2 << endl; return 0;}

    else if ((s[0]=='R'||s[1]=='R')||s[2]=='R') {cout << 1 << endl; return 0;}

    else cout << 0 << endl;

    return 0;
}
