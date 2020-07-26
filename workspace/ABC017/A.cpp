#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_prime(ll N) {
        if (N == 1) return false;
        for (ll i=2; i*i<=N; i++) {
            if (N%i==0) return false;
        }
        return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;

    if (is_prime(n)) cout << "YES";
    else cout << "NO";

    cout << "\n";    

    return 0;
}