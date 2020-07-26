#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll h, n; cin >> h >> n;
    ll a[n], b[n]; for (ll i=0; i<n; i++) cin >> a[i] >> b[i];

    vector<ll> dp(100100, 10000001000);
    dp[0] = 0;

    for (ll i=1; i<=h; i++)
    {
        for (ll j=0; j<n; j++)
        {
            dp[i] = min(dp[i], dp[max(i-a[j], (ll)0)] + b[j]);
        }
    }

    cout << dp[h] << "\n";

    return 0;
}