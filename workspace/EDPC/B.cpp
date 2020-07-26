#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i<n; i++)

const int INF = 1001001001;

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k; cin >> n >> k;
    vector<int> h(n); rep(i,n) cin >> h[i];

    vector<int> dp(n+k,INF);

    dp[0] = 0;
    dp[1] = abs(h[0]-h[1]);

    for(int i=0; i<n; i++) {
        for(int j=1; j<=k; j++) {

            dp[i+j] = min(dp[i+j], dp[i]+abs(h[i]-h[i+j]));

        }
    }

    cout << dp[n-1] << "\n";

    return 0;
}