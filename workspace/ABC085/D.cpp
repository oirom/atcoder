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

const int IINF = numeric_limits<int>::max();

int main() {

    LL n, h;
    cin >> n >> h;
    VLL a(n), b(n);
    REP(i,n) cin >> a[i] >> b[i];

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    LL ans = 0;
    REP(i,n) {
        if (b[i]>a[n-1]) {
            h -= b[i];
            ans++;
            if (h<=0) {
                cout << ans << endl;
                return 0;
            }
        }
    }

    ans += (h+a[n-1]-1)/a[n-1];
    cout << ans << endl;
    
    return 0;
}
