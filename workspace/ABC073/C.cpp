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

const int IINF = numeric_limits<int>::max();

int main() {

    LL n;
    cin >> n;
    map<string, LL> m;
    REP(i,n) {
        LL tmp;
        cin >> tmp;
        string str = to_string(tmp);
        if (m[str]==0) { m[str]=1; }
        else { m[str]+=1; }
    }

    LL ans = 0;
    for (auto i=m.begin();i!=m.end();i++) {
        // cout << i->first << " " << i->second << endl;
        if (i->second%2==1) { ans++; }
    }

    cout << ans << endl;

    return 0;
}
