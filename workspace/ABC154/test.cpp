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

const int INF = numeric_limits<int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    LD n; cin >> n;
    LD sum = 0;
    for (int i=1; i<=n; i++) {
        sum += i;
    }

    LD ans = 0;
    ans = sum / n;

    cout << ans << endl;

    return 0;
}
9,7,7,6.5,8,10.5,5.5,7,9,6