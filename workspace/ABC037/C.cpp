#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k; cin >> n >> k;
    vector<li> a(n); for (int i=0; i<n; i++) cin >> a[i];

    vector<li> cs(n+1,0); for (int i=1; i<n+1; i++) cs[i] = cs[i-1] + a[i-1];

    li sum=0;
    for (int i=0; i<(n-k+1); i++) {
        sum += cs[i+k] - cs[i];
    }

    cout << sum << "\n";

    return 0;

}