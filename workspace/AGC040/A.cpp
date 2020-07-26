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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str; cin >> str;

    LL n = (LL)str.size();
    VLL v(n+1,0);

    for (LL i=0; i<n; i++) {
        if (str[i]=='<') {
            v[i+1] = v[i] + 1;
        }
    }

    for (LL i=n-1; i>=0; i--) {
        if (str[i]=='>') {
            v[i] = max(v[i], v[i+1] + 1);
        }
    }
    
    LL ans = 0;
    for (LL i=0; i<n+1; i++) {
        ans += v[i];
    }

    cout << ans << endl;

    return 0;
}
