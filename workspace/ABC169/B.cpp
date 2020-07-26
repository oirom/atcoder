#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;
    vector<ll> v(n,0);

    for (ll i=0;i<n;i++) cin >> v[i];

    sort(v.begin(), v.end());

    if (v[0] == 0) {
        cout << 0 << "\n";
        return 0;
    }

    ll ans = 1;
    for (ll i=0;i<n;i++) {
        if (v[i] <= 1000000000000000000 / ans) {
            ans *= v[i];
        }
        else {
            cout << -1 << "\n";
            return 0;
        }
    }

    return 0;
}