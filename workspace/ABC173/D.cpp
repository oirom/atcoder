#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;
    vector<ll> a(n,0); for(ll i=0;i<n;i++) { cin >> a[i]; }
    
    sort(a.rbegin(), a.rend());

    ll ans = 0;
    int t = n - 1;

    for (int i=0; i<n; i++) {
        int lim = 2;
        if (i == 0) lim = 1;
        for (int j=0; j<lim; j++) {
            if (t > 0) {
                ans += a[i];
                t--;
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}