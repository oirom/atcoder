#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, m, x;
    cin >> n >> m >> x;

    vector<vector<ll>> v(n, vector<ll>(m+1,0));
    for (int i=0; i<n; i++) {
        for (int j=0; j<=m; j++) {
            cin >> v[i][j];
        }
    }

    ll ans = 12*100000+1;

    for (int bit=0; bit<(1<<n); bit++) {
        
        vector<ll> tmp(m+1, 0);
        for (int i=0; i<n; i++) {
            if (bit&(1<<i)) {
                for (int j=0; j<=m; j++) {
                    tmp[j] += v[i][j];
                }
            }
        }

        bool check = true;
        for (int j=1; j<=m; j++) if (!(tmp[j]>=x)) check = false;
        if (check) ans = min(ans, tmp[0]);

    }

    if (ans==12*100000+1) ans = -1;

    cout << ans << "\n";    

    return 0;
}