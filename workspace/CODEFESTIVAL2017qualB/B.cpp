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

    LL n; cin >> n;
    // cout << n << endl;
    //VLL d(1000000000, 0);
    /*REP(i,n)
    {
        LL tmp;
        cin >> tmp;
        d[tmp] += 1;
    }*/
    map<LL, LL> mp;
    REP(i,n)
    {
        LL tmp;
        cin >> tmp;
        mp[tmp] += 1;
    }

    LL m; cin >> m;
    VLL t(m);
    REP(i,m)
    {
        LL tmp;
        cin >> tmp;
        if (mp[tmp]>=1) {
            mp[tmp] -= 1;
        } else {
            cout << "NO" << endl;
            return 0;
        }
        
    }

    cout << "YES" << endl;    

    return 0;
}
