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

map<LL, LL> mp;

LL comb(LL a, LL b) {
    LL c = 1;
    REP(i,b) {
        c = c * a;
        a = a - 1;
    }
    REP(i,b) {
        c = c / (i + 1);
    }
    return c;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    LL n;
    cin >> n;
    VLL a(n,0);
    REP(i,n) cin >> a[i];

    sort(a.rbegin(), a.rend());

    LL ans = 0, ans1 = 0, ans2 = 0;

    mp[1] = 1;
    for (LL i=2; i<=n; i++) {
        mp[i] = mp[i-1] * i; 
    }

    for (LL j=1; j<n; j++) {
        LL tmp = comb(a[0], a[j]);
        if (ans<=tmp) ans1 = a[0], ans2 = a[j], ans = tmp;
    }

    cout << ans1 << " " << ans2 << endl;

    return 0;
}
