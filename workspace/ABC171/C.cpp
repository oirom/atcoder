#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;

    vector<ll> p(15, 0);
    ll a = n;
    ll digit = to_string(a).length();

    cout << digit << "\n";

    for (ll i=0;i<digit;i++) {
        //--n;
        p[i] = n%26;
        n /= 26;
    }

    for (ll i=0; i<digit; i++) {
        cout << p[i] << endl;
    }
    
    for (ll i=0; i<digit; i++) {
        cout << (char)('a' + p[i]);
    }
    cout << "\n";

    return 0;
}
