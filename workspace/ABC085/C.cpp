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

    LL n, y; cin >> n >> y;

    for (int i=0; i<=n; i++) {
        for (int j=0; j<=n-i; j++) {
            if (i*9000+j*4000==y-n*1000) {
                if (i*10000+j*5000+(n-i-j)*1000==y) {
                    cout << i << " " << j << " " << n-i-j << endl;
                    return 0;
                }
            }
        }
    }

    cout << "-1 -1 -1" << endl;

    return 0;
}