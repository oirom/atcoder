#include <bits/stdc++.h>
#define REP(i,n) for (int i=0; i<(n); ++i)
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

    LD txa, tya, txb, tyb, t, v, n;
    cin >> txa >> tya >> txb >> tyb >> t >> v >> n;
    vector<LD> x(n), y(n);
    REP(i,n) {
        cin >> x[i] >> y[i];
    }

    VLD dists(n);
    REP(i,n) {
        dists[i] = sqrt((x[i]-txa)*(x[i]-txa)+(y[i]-tya)*(y[i]-tya));
        dists[i] += sqrt((x[i]-txb)*(x[i]-txb)+(y[i]-tyb)*(y[i]-tyb));
        if (dists[i]<=t*v) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    
    return 0;
}
