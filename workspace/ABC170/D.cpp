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

int main() {
  
    LL n;
    cin >> n;
    set<LL> s;
    VLL v(n,0);
    LL amax = 0;
    map<string, LL> mp;
    REP(i,n) {
        cin >> v[i];
        mp[to_string(v[i])]++;
        s.insert(v[i]);
        amax = max(amax, v[i]);
    }
    sort(v.begin(), v.end());
    vector<LL> dp(amax+1, 0);

    for (auto i : s) {
        for (LL j=2; i*j<=amax; j++) {
            dp[i*j] += 1;
        }
    }

    LL ans = 0;
    for (auto i : s) {
        //cout << i << ":";
        if (dp[i]==0&&mp[to_string(i)]==1) ans++;//cout << dp[i] << endl;
        //else cout << dp[i] << endl;
    }

    cout << ans << endl;

    return 0;
}
