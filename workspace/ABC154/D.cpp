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

    int n, k; cin >> n >> k;
    VLD p(n,0); REP(i,n) cin >> p[i];

    VLD E(n+10,0); REP(i,n) E[i+1] = (1+p[i])/2.0;

    VLD s(n+10,0); s[0] = 0; s[1] = E[1];

    for (int i=2;i<=n;i++) s[i] = s[i-1] + E[i];

    //for (int i=1;i<=n;i++) cout << s[i] << endl;
    // input : 4 1 6 6 6 6
    // output : 3.5, 7.0, 10.5, 14.0

    // LD ans = 0;
    VLD ans(n-k+1,0);
    for (int i=0;i<=n-k;i++) {
        // LD tmp = s[i+k] - s[i];
        // ans = max(ans, tmp);
        ans[i] = s[i+k] - s[i];
    }
    
    sort(ans.rbegin(), ans.rend());

    cout << ans[0] << endl;

    return 0;
}