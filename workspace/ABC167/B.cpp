#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll a, b, c, k; cin >> a >> b >> c >> k;

    if (a<k) {
        if (b<(k-a)) {
            cout << a - (k - a - b) << "\n";
            return 0;
            
        }
        else{
            cout << a << "\n";
            return 0;
        }
    }

    else cout << k << "\n";

    return 0;
}