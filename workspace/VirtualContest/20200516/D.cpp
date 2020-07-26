#include <bits/stdc++.h>

using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    
    ll n, k; cin >> n >> k;
    vector<ll> v(n*k,0); 
    for (ll i=0; i<n; i++) cin >> v[i];
    for (ll i=n; i<n*k; i++) v[i] = v[i-n];
    
    vector<vector<ll>> vv(n*k, vector<ll>(n*k, 0));

    ll ans = 0;

    for (ll i=0; i<(k*n-1); i++) {
        for (ll j=i+1; j<(k*n); j++) {
            if (v[i] > v[j]) ans += 1;
        }
    }

    cout << ans << "\n";

    return 0;
}