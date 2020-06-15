#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll a, b, v, w, t;

    cin >> a >> v >> b >> w >> t;

    ll diff = 0;
    diff = abs(a-b);

    if (v*t >= diff + w*t) cout << "YES" << "\n";
    else cout << "NO" << "\n";

    return 0;
}