#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<li> a(n); for (int i=0; i<n; i++) cin >> a[i];

    vector<li> lm(n,0);
    vector<li> rm(n,0);

    for (int i=1; i<n; i++) lm[i] = max(lm[i-1], a[i-1]);
    for (int i=n-2; i>=0; i--) rm[i] = max(rm[i+1], a[i+1]);

    for (int i=0; i<n; i++) cout << max(rm[i],lm[i]) << "\n";

    return 0;

}