#include <bits/stdc++.h>
#define REP(i,n) for (int i=0; i<(n); ++i)
#define REPR(i,n,m) for (int i=(n); i>=(m); --i)
using namespace std;
using LL = signed long long;
using LD = long double;
using PLL = pair<long long, long long>;
using PLD = pair<long double, long double>;
using VLL = vector<long long>;
using VLD = vector<long double>;
using VPLL = vector<PLL>;
using VPLD = vector<PLD>;

const int INF = numeric_limits<int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    LL n, d; cin >> n >> d;
    LL ans = 0;
    VPLL p(n);
    REP(i,n){
        cin >> p[i].first >> p[i].second;
        if (sqrt(pow(p[i].first,2) + pow(p[i].second, 2))<=d) ans++;
    }

    cout << ans << endl;



    return 0;
}
