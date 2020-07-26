#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;
    ll c[100][100];
    
    for (ll i=1; i<=n; i++) {
        
        string s = to_string(i);

        cout << (int)s[0] - 48 << "\n";
        // cout << (int)('0') << "\n";
    }

    return 0;
}