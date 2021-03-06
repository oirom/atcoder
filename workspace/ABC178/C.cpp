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

const int INF = numeric_limits<int>::max();
const unsigned long long int ULLINF = numeric_limits<unsigned long long int>::max();

int main() {

    LL n;
    cin >> n;
    VLL a(n);
    for (int i=0; i<n; i++) cin >> a[i];

    LL ans = 0;
    for (int i=0; i<n-1; i++) {
        if (a[i]>a[i+1]) {
            ans += a[i]-a[i+1];
            a[i+1] = a[i];
        }
    }

    cout << ans << endl;

    return 0;
}
