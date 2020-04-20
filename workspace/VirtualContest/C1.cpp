#include <bits/stdc++.h>

#define rep(i,n,s) for(int i=s; i<n; i++)
#define ll long long

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, m; cin >> n >> m;
    
    vector<pair<ll, ll>> pairs(n);
    
    for (ll i=0; i<n; i++) cin >> pairs[i].first >> pairs[i].second;
    
    sort(pairs.begin(), pairs.end());

    ll ans = 0;

    for (int i=0; i<n; i++) {
        if (pairs[i].second < m) {
            m = m - pairs[i].second;
            ans = ans + pairs[i].first * pairs[i].second;
        }
        else {
            ans += m * pairs[i].first;
            cout << ans << "\n";
            return 0;
        }
    }    


    return 0;
}