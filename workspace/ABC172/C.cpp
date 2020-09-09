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
using VPLD = vector<PLD>;

const int IINF = numeric_limits<int>::max();

int main() {

    LL n, m, k;
    cin >> n >> m >> k;
    VLL a(n+1,0), b(m+1,0);
    REP(i,n) { LL tmp; cin >> tmp; a[i+1] = a[i] + tmp; }
    REP(i,m) { LL tmp; cin >> tmp; b[i+1] = b[i] + tmp; }

    LL ans = 0;
    LL tmp_j = m;
    REP(i,n+1) {
        if (a[i]>k) break;
        LL j = tmp_j;
        while(b[j]>k-a[i]) { j--; }
        ans = max(ans, i+j);
        tmp_j = j;
    }
    
    cout << ans << endl;

    return 0;
}
