#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k; cin >> n >> k;
    vector<long double> r(n, 0); rep(i,n) cin >> r[i];

    sort(r.begin(), r.end());
    reverse(r.begin(), r.end());

    vector<long double> R(k, 0); rep(i,k) R[i] = r[i];
    sort(R.begin(), R.end());

    long double ans = 0;
    rep(i,k) ans = (ans + R[i])/2;


    cout << fixed << setprecision(15) << ans << endl;

    return 0;
}
