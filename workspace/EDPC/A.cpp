#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i<n; i++)

const int INF = 1001001001;

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<int> h(n); rep(i,n) cin >> h[i];

    vector<int> dp(n+2,INF);

    dp[0] = 0;
    dp[1] = abs(h[0]-h[1]);

    for(int i=0; i<n; i++) {

        dp[i+2] = min(dp[i]+abs(h[i]-h[i+2]), dp[i+1]+abs(h[i+1]-h[i+2]));

    }

    cout << dp[n-1] << "\n";

    return 0;
}