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

    LL n; cin >> n;
    VLL ans(n,0);

    for(LL i=1;i<=100;i++) {
        for(LL j=1;j<=100;j++) {
            for(LL k=1;k<=100;k++) {
                LL tmp = 0;
                tmp = i*i+j*j+k*k+i*j+j*k+k*i;
                if ((0<=tmp)&&(tmp<=n)) {
                    ans[tmp]++;
                }
            }
        }
    }

    for(int i=1;i<=n;i++) cout << ans[i] << endl;

    return 0;
}