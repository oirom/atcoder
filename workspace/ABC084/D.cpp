#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int q,l,r; cin >> q;

    // START : 素数を用意
    bitset<1000000> is_prime(0);
    for (int i=2; i<=200002; i++) is_prime.set(i);
    for (int i=2; i<=100000; i++) {
        if (is_prime[i]) {
            for (int j=i*2; j<=200002; j+=i) {
                is_prime.reset(j);
            }
        }
    }

    /* for (li i=100000; i>=2; i--) {
        if (is_prime[i]) {
            if (is_prime[(i+1)/2]==0) {
                is_prime.reset(i);
            }
        }
    } */

    vector<int> forsum(100000, 0);
    for (int i=100000; i>=2; i--) {
        if (is_prime[i]&&is_prime[(i+1)/2]) {
            forsum[i] = 1;
        }
    }
    // END : 素数を用意
    vector<int> s(100001, 0);
    for (int i = 0; i < 100000; ++i) s[i+1] = s[i] + forsum[i];

    for (int i=1; i<=q; i++) {
        cin >> l >> r;
        cout << s[r+1] - s[l] << "\n";
    }



    return 0;
}