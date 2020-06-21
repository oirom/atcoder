#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, k; cin >> n >> k;
    vector<ll> p(n,0); for (ll i=0; i<n; i++) cin >> p[i];

    sort(p.begin(), p.end());

    ll ans = 0;
    for (ll i=0; i<k; i++) {
        ans += p[i];
    }

    cout << ans << endl;

    return 0;
}