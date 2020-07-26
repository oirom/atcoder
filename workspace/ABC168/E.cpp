#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef signed long long ll;
typedef pair<ll, ll> p;

long long combi(long long n, long long k) {
    if (n == k || k == 0)
        return 1;
    else {
        return combi(n - 1, k - 1) + combi(n - 1, k);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;
    vector<p> pair_v;

    for (ll i=0; i<n; i++) {
        ll a, b; cin >> a >> b;
        pair_v.push_back(p(a, b));

    }

    long long total = 0;
    for (ll i=1; i<=n; i++) total += combi(n,i);
    cout << total << "\n";

    long long counter = 0;

    for (ll i=0; i<n; i++) {
        for (ll j=i+1; j<n; j++) {
            if (pair_v[i].first * pair_v[j].first + pair_v[i].second * pair_v[j].second == 0) {
                counter += 1;
            }
            else cout << i << " " << j << endl;
        }
    }

    cout << counter << "\n";
    

    return 0;
}