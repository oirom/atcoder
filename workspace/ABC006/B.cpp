#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;
    vector<ll> a(10000000, 0);
    a[1] = 0; a[2] = 0; a[3] = 1;

    for (ll i=4; i<=n; i++) {
        
        a[i] = (a[i-1] + a[i-2] + a[i-3])%10007;

    }

    cout << a[n]%10007 << endl;

    return 0;
}
