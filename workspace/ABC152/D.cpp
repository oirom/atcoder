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
        // int t = s[0] - '0';
        int t = (int)s[0];
        int b = s[s.size()-1] - '0';
        cout << i << " " << t << " " << b << "\n";
    }



    return 0;
}