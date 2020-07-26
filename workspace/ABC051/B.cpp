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

    int k, s; cin >> k >> s;

    int ans = 0;
    for (int x=0;x<=k;x++) {
        for (int y=0;y<=k;y++) {
            int z = s - x -y;
            if (0<=z&&z<=k) {
                ans++;
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}
