#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;
    vector<ll> a(n,0); for(ll i=0;i<n;i++) cin >> a[i];
    ll sum = 0; sum = accumulate(a.begin(), a.end(), 0LL);
    ll q; cin >> q;
    vector<ll> b(q,0), c(q,0); for (ll i=0;i<q;i++) cin >> b[i] >> c[i];

    vector<ll> dp(1000000, 0);
    for (ll i=0;i<n;i++) {
        dp[a[i]] += 1;
    }

    ll ans = sum;
    for (ll i=0;i<q;i++) {
        ans = ans - (b[i] * dp[b[i]]) + (c[i] * dp[b[i]]);
        dp[c[i]] = dp[c[i]] + dp[b[i]];
        dp[b[i]] = 0;
        cout << ans << endl;
    }
   

    return 0;
}
