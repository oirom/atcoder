#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<pair<ll, ll>> prime_factorize(ll N) {
    vector<pair<ll, ll>> res;
    for (ll a=2; a*a<=N; a++) {
        if (N%a != 0) continue;
        ll ex = 0; // 指数

        while (N%a == 0) {
            ex++;
            N /= a;
        }
        
        res.push_back({a, ex});
    }

    if (N != 1) res.push_back({N, 1});
    return res;    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;

    auto pf = prime_factorize(n);
    ll res = 0;

    for (auto p : pf) {
        ll e = p.second;
        ll tmp = 0, cur = 1;
        while (e >= cur) e -= cur++, ++tmp;
        res += tmp;
    }

    cout << res << "\n";

    return 0;
}