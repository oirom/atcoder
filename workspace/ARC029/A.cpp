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

    int n; cin >> n;
    vector<int> t(n); REP(i,n) cin >> t[i];

    int ans = 1e9;

    REP(mask, 1<<n)
    {
        vector<int> T(2);
        REP(i,n)
        {
            T[(mask>>i)&1] += t[i];
        }

        ans = min(ans, max(T[0], T[1]));
    }

    cout << ans << endl;

    return 0;
}
