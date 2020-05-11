#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

ll reputable(ll a) {

    ll reputable_num = 1;
    
    if (a%2==0) {
        reputable_num += reputable(a/2);
    }
    else return 0;

    return reputable_num;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, tmp; cin >> n;
    vector<ll> a(n,0); for (ll i=0; i<n; i++) cin >> tmp, a[i] = reputable(tmp);

    sort(a.begin(), a.end());
    //reverse(a.begin(), a.end());

    cout << a[0] << "\n";

    return 0;
}