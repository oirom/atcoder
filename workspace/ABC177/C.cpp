#include <bits/stdc++.h>
#define REP(i,n) for (int i=0; i<(n); ++i)
#define REPR(i,n,m) for (int i=(n); i>=(m); --i)
using namespace std;
using LL = long long;
using LD = long double;
using PLL = pair<long long, long long>;
using PLD = pair<long double, long double>;
using VLL = vector<long long>;
using VLD = vector<long double>;
using VPLL = vector<PLL>;
using VPLD = vector<PLD>;

int main() {
    
    long long MOD = 1000000007;
    long long n;
    cin >> n;
    vector<long long> a(n,0);
    for (int i=0; i<n; i++) cin >> a[i];

    long long sum = 0;
    for (int i=0; i<n; i++) {
        sum += a[i];
        sum %= MOD;
    }

    long long ans = 0;
    for (int i=0; i<n; i++) {
        sum -= a[i];

        if (sum<0) sum += MOD;

        ans += a[i] * sum;
        ans %= MOD;
    }

    cout << ans << endl;

    return 0;
}