#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;
    vector<ll> a(n,0); for(ll i=0;i<n;i++) cin >> a[i];

    sort(a.begin(), a.end(), greater<ll>());

    

    return 0;
}